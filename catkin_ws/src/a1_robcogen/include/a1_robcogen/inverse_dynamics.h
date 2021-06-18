#ifndef RCG_A1_INVERSE_DYNAMICS_H_
#define RCG_A1_INVERSE_DYNAMICS_H_

#include <iit/rbd/rbd.h>
#include <iit/rbd/InertiaMatrix.h>
#include <iit/rbd/utils.h>

#include "declarations.h"
#include "inertia_properties.h"
#include "transforms.h"
#include "link_data_map.h"

namespace pronto {
namespace a1 {
namespace dyn {

/**
 * The Inverse Dynamics routine for the robot a1.
 *
 * In addition to the full Newton-Euler algorithm, specialized versions to compute
 * only certain terms are provided.
 * The parameters common to most of the methods are the joint status vector \c q, the
 * joint velocity vector \c qd and the acceleration vector \c qdd.
 *
 * Additional overloaded methods are provided without the \c q parameter. These
 * methods use the current configuration of the robot; they are provided for the
 * sake of efficiency, in case the motion transforms of the robot have already
 * been updated elsewhere with the most recent configuration (eg by a call to
 * setJointStatus()), so that it is useless to compute them again.
 *
 * Whenever present, the external forces parameter is a set of external
 * wrenches acting on the robot links. Each wrench must be expressed in
 * the reference frame of the link it is excerted on.
 */
class InverseDynamics {
public:
    typedef LinkDataMap<Force> ExtForces;

    /**
     * Default constructor
     * \param in the inertia properties of the links
     * \param tr the container of all the spatial motion transforms of
     *     the robot a1, which will be used by this instance
     *     to compute inverse-dynamics.
     */
    InverseDynamics(InertiaProperties& in, MotionTransforms& tr);

    /** \name Inverse dynamics
     * The full algorithm for the inverse dynamics of this robot.
     *
     * All the spatial vectors in the parameters are expressed in base coordinates,
     * besides the external forces: each force must be expressed in the reference
     * frame of the link it is acting on.
     * \param[out] jForces the joint force vector required to achieve the desired accelerations
     * \param[out] baseAccel the spatial acceleration of the robot base
     * \param[in] g the gravity acceleration, as a spatial vector;
     *              gravity implicitly specifies the orientation of the base in space
     * \param[in] base_v the spatial velocity of the base
     * \param[in] q the joint position vector
     * \param[in] qd the joint velocity vector
     * \param[in] qdd the desired joint acceleration vector
     * \param[in] fext the external forces acting on the links; this parameters
     *            defaults to zero
     */ ///@{
    void id(
        JointState& jForces, Acceleration& base_a,
        const Acceleration& g, const Velocity& base_v,
        const JointState& q, const JointState& qd, const JointState& qdd,
        const ExtForces& fext = zeroExtForces);
    void id(
        JointState& jForces, Acceleration& base_a,
        const Acceleration& g, const Velocity& base_v,
        const JointState& qd, const JointState& qdd,
        const ExtForces& fext = zeroExtForces);
    ///@}
    /** \name Inverse dynamics, fully actuated base
     * The inverse dynamics algorithm for the floating base robot,
     * in the assumption of a fully actuated base.
     *
     * All the spatial vectors in the parameters are expressed in base coordinates,
     * besides the external forces: each force must be expressed in the reference
     * frame of the link it is acting on.
     * \param[out] baseWrench the spatial force to be applied to the robot base to achieve
     *             the desired accelerations
     * \param[out] jForces the joint force vector required to achieve the desired accelerations
     * \param[in] g the gravity acceleration, as a spatial vector;
     *              gravity implicitly specifies the orientation of the base in space
     * \param[in] base_v the spatial velocity of the base
     * \param[in] baseAccel the desired spatial acceleration of the robot base
     * \param[in] q the joint position vector
     * \param[in] qd the joint velocity vector
     * \param[in] qdd the desired joint acceleration vector
     * \param[in] fext the external forces acting on the links; this parameters
     *            defaults to zero
     */ ///@{
    void id_fully_actuated(
        Force& baseWrench, JointState& jForces,
        const Acceleration& g, const Velocity& base_v, const Acceleration& baseAccel,
        const JointState& q, const JointState& qd, const JointState& qdd, const ExtForces& fext = zeroExtForces);
    void id_fully_actuated(
        Force& baseWrench, JointState& jForces,
        const Acceleration& g, const Velocity& base_v, const Acceleration& baseAccel,
        const JointState& qd, const JointState& qdd, const ExtForces& fext = zeroExtForces);
    ///@}
    /** \name Gravity terms, fully actuated base
     */
    ///@{
    void G_terms_fully_actuated(
        Force& baseWrench, JointState& jForces,
        const Acceleration& g, const JointState& q);
    void G_terms_fully_actuated(
        Force& baseWrench, JointState& jForces,
        const Acceleration& g);
    ///@}
    /** \name Centrifugal and Coriolis terms, fully actuated base
     *
     * These functions take only velocity inputs, that is, they assume
     * a zero spatial acceleration of the base (in addition to zero acceleration
     * at the actuated joints).
     * Note that this is NOT the same as imposing zero acceleration
     * at the virtual 6-dof-floting-base joint, which would result, in general,
     * in a non-zero spatial acceleration of the base, due to velocity
     * product terms.
     */
    ///@{
    void C_terms_fully_actuated(
        Force& baseWrench, JointState& jForces,
        const Velocity& base_v, const JointState& q, const JointState& qd);
    void C_terms_fully_actuated(
        Force& baseWrench, JointState& jForces,
        const Velocity& base_v, const JointState& qd);
    ///@}
    /** Updates all the kinematics transforms used by the inverse dynamics routine. */
    void setJointStatus(const JointState& q) const;

public:
    /** \name Getters
     * These functions return various spatial quantities used internally
     * by the inverse dynamics routines, like the spatial acceleration
     * of the links.
     *
     * The getters can be useful to retrieve the additional data that is not
     * returned explicitly by the inverse dynamics routines even though it
     * is computed. For example, after a call to the inverse dynamics,
     * the spatial velocity of all the links has been determined and
     * can be accessed.
     *
     * However, beware that certain routines might not use some of the
     * spatial quantities, which therefore would retain their last value
     * without being updated nor reset (for example, the spatial velocity
     * of the links is unaffected by the computation of the gravity terms).
     */
    ///@{
    const Force& getForce_base() const { return base_f; }
    const Velocity& getVelocity_FR_hip() const { return FR_hip_v; }
    const Acceleration& getAcceleration_FR_hip() const { return FR_hip_a; }
    const Force& getForce_FR_hip() const { return FR_hip_f; }
    const Velocity& getVelocity_FR_thigh() const { return FR_thigh_v; }
    const Acceleration& getAcceleration_FR_thigh() const { return FR_thigh_a; }
    const Force& getForce_FR_thigh() const { return FR_thigh_f; }
    const Velocity& getVelocity_FR_calf() const { return FR_calf_v; }
    const Acceleration& getAcceleration_FR_calf() const { return FR_calf_a; }
    const Force& getForce_FR_calf() const { return FR_calf_f; }
    const Velocity& getVelocity_FL_hip() const { return FL_hip_v; }
    const Acceleration& getAcceleration_FL_hip() const { return FL_hip_a; }
    const Force& getForce_FL_hip() const { return FL_hip_f; }
    const Velocity& getVelocity_FL_thigh() const { return FL_thigh_v; }
    const Acceleration& getAcceleration_FL_thigh() const { return FL_thigh_a; }
    const Force& getForce_FL_thigh() const { return FL_thigh_f; }
    const Velocity& getVelocity_FL_calf() const { return FL_calf_v; }
    const Acceleration& getAcceleration_FL_calf() const { return FL_calf_a; }
    const Force& getForce_FL_calf() const { return FL_calf_f; }
    const Velocity& getVelocity_RR_hip() const { return RR_hip_v; }
    const Acceleration& getAcceleration_RR_hip() const { return RR_hip_a; }
    const Force& getForce_RR_hip() const { return RR_hip_f; }
    const Velocity& getVelocity_RR_thigh() const { return RR_thigh_v; }
    const Acceleration& getAcceleration_RR_thigh() const { return RR_thigh_a; }
    const Force& getForce_RR_thigh() const { return RR_thigh_f; }
    const Velocity& getVelocity_RR_calf() const { return RR_calf_v; }
    const Acceleration& getAcceleration_RR_calf() const { return RR_calf_a; }
    const Force& getForce_RR_calf() const { return RR_calf_f; }
    const Velocity& getVelocity_RL_hip() const { return RL_hip_v; }
    const Acceleration& getAcceleration_RL_hip() const { return RL_hip_a; }
    const Force& getForce_RL_hip() const { return RL_hip_f; }
    const Velocity& getVelocity_RL_thigh() const { return RL_thigh_v; }
    const Acceleration& getAcceleration_RL_thigh() const { return RL_thigh_a; }
    const Force& getForce_RL_thigh() const { return RL_thigh_f; }
    const Velocity& getVelocity_RL_calf() const { return RL_calf_v; }
    const Acceleration& getAcceleration_RL_calf() const { return RL_calf_a; }
    const Force& getForce_RL_calf() const { return RL_calf_f; }
    ///@}
protected:
    void secondPass_fullyActuated(JointState& jForces);

private:
    InertiaProperties* inertiaProps;
    MotionTransforms* xm;
private:
    Matrix66 vcross; // support variable
    // Link 'FR_hip' :
    const InertiaMatrix& FR_hip_I;
    Velocity      FR_hip_v;
    Acceleration  FR_hip_a;
    Force         FR_hip_f;
    // Link 'FR_thigh' :
    const InertiaMatrix& FR_thigh_I;
    Velocity      FR_thigh_v;
    Acceleration  FR_thigh_a;
    Force         FR_thigh_f;
    // Link 'FR_calf' :
    const InertiaMatrix& FR_calf_I;
    Velocity      FR_calf_v;
    Acceleration  FR_calf_a;
    Force         FR_calf_f;
    // Link 'FL_hip' :
    const InertiaMatrix& FL_hip_I;
    Velocity      FL_hip_v;
    Acceleration  FL_hip_a;
    Force         FL_hip_f;
    // Link 'FL_thigh' :
    const InertiaMatrix& FL_thigh_I;
    Velocity      FL_thigh_v;
    Acceleration  FL_thigh_a;
    Force         FL_thigh_f;
    // Link 'FL_calf' :
    const InertiaMatrix& FL_calf_I;
    Velocity      FL_calf_v;
    Acceleration  FL_calf_a;
    Force         FL_calf_f;
    // Link 'RR_hip' :
    const InertiaMatrix& RR_hip_I;
    Velocity      RR_hip_v;
    Acceleration  RR_hip_a;
    Force         RR_hip_f;
    // Link 'RR_thigh' :
    const InertiaMatrix& RR_thigh_I;
    Velocity      RR_thigh_v;
    Acceleration  RR_thigh_a;
    Force         RR_thigh_f;
    // Link 'RR_calf' :
    const InertiaMatrix& RR_calf_I;
    Velocity      RR_calf_v;
    Acceleration  RR_calf_a;
    Force         RR_calf_f;
    // Link 'RL_hip' :
    const InertiaMatrix& RL_hip_I;
    Velocity      RL_hip_v;
    Acceleration  RL_hip_a;
    Force         RL_hip_f;
    // Link 'RL_thigh' :
    const InertiaMatrix& RL_thigh_I;
    Velocity      RL_thigh_v;
    Acceleration  RL_thigh_a;
    Force         RL_thigh_f;
    // Link 'RL_calf' :
    const InertiaMatrix& RL_calf_I;
    Velocity      RL_calf_v;
    Acceleration  RL_calf_a;
    Force         RL_calf_f;

    // The robot base
    const InertiaMatrix& base_I;
    InertiaMatrix base_Ic;
    Force         base_f;
    // The composite inertia tensors
    InertiaMatrix FR_hip_Ic;
    InertiaMatrix FR_thigh_Ic;
    const InertiaMatrix& FR_calf_Ic;
    InertiaMatrix FL_hip_Ic;
    InertiaMatrix FL_thigh_Ic;
    const InertiaMatrix& FL_calf_Ic;
    InertiaMatrix RR_hip_Ic;
    InertiaMatrix RR_thigh_Ic;
    const InertiaMatrix& RR_calf_Ic;
    InertiaMatrix RL_hip_Ic;
    InertiaMatrix RL_thigh_Ic;
    const InertiaMatrix& RL_calf_Ic;

private:
    static const ExtForces zeroExtForces;
};

inline void InverseDynamics::setJointStatus(const JointState& q) const
{
    (xm->fr_FR_hip_X_fr_base)(q);
    (xm->fr_FR_thigh_X_fr_FR_hip)(q);
    (xm->fr_FR_calf_X_fr_FR_thigh)(q);
    (xm->fr_FL_hip_X_fr_base)(q);
    (xm->fr_FL_thigh_X_fr_FL_hip)(q);
    (xm->fr_FL_calf_X_fr_FL_thigh)(q);
    (xm->fr_RR_hip_X_fr_base)(q);
    (xm->fr_RR_thigh_X_fr_RR_hip)(q);
    (xm->fr_RR_calf_X_fr_RR_thigh)(q);
    (xm->fr_RL_hip_X_fr_base)(q);
    (xm->fr_RL_thigh_X_fr_RL_hip)(q);
    (xm->fr_RL_calf_X_fr_RL_thigh)(q);
}

inline void InverseDynamics::id(
    JointState& jForces, Acceleration& base_a,
    const Acceleration& g, const Velocity& base_v,
    const JointState& q, const JointState& qd, const JointState& qdd,
    const ExtForces& fext)
{
    setJointStatus(q);
    id(jForces, base_a, g, base_v,
       qd, qdd, fext);
}

inline void InverseDynamics::G_terms_fully_actuated(
    Force& baseWrench, JointState& jForces,
    const Acceleration& g, const JointState& q)
{
    setJointStatus(q);
    G_terms_fully_actuated(baseWrench, jForces, g);
}

inline void InverseDynamics::C_terms_fully_actuated(
    Force& baseWrench, JointState& jForces,
    const Velocity& base_v, const JointState& q, const JointState& qd)
{
    setJointStatus(q);
    C_terms_fully_actuated(baseWrench, jForces, base_v, qd);
}

inline void InverseDynamics::id_fully_actuated(
        Force& baseWrench, JointState& jForces,
        const Acceleration& g, const Velocity& base_v, const Acceleration& baseAccel,
        const JointState& q, const JointState& qd, const JointState& qdd, const ExtForces& fext)
{
    setJointStatus(q);
    id_fully_actuated(baseWrench, jForces, g, base_v,
        baseAccel, qd, qdd, fext);
}

}
}
}

#endif
