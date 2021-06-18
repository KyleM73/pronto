#ifndef RCG_A1_FORWARD_DYNAMICS_H_
#define RCG_A1_FORWARD_DYNAMICS_H_

#include <iit/rbd/rbd.h>
#include <iit/rbd/InertiaMatrix.h>
#include <iit/rbd/utils.h>

#include "declarations.h"
#include "transforms.h"
#include "inertia_properties.h"
#include "link_data_map.h"

namespace pronto {
namespace a1 {
namespace dyn {

/**
 * The Forward Dynamics routine for the robot a1.
 *
 * The parameters common to most of the methods are the joint status \c q, the
 * joint velocities \c qd and the joint forces \c tau. The accelerations \c qdd
 * will be filled with the computed values. Overloaded methods without the \c q
 * parameter use the current configuration of the robot; they are provided for
 * the sake of efficiency, in case the kinematics transforms of the robot have
 * already been updated elsewhere with the most recent configuration (eg by a
 * call to setJointStatus()), so that it would be useless to compute them again.
 */
class ForwardDynamics {
public:
    typedef LinkDataMap<Force> ExtForces;

    /**
     * Default constructor
     * \param in the inertia properties of the links
     * \param tr the container of all the spatial motion transforms of
     *     the robot a1, which will be used by this instance
     *     to compute the dynamics.
     */
    ForwardDynamics(InertiaProperties& in, MotionTransforms& tr);
    /** \name Forward dynamics
     * The Articulated-Body-Algorithm to compute the joint accelerations
     */ ///@{
    /**
     * \param qdd the joint accelerations vector (output parameter).
     * \param base_a
     * \param base_v
     * \param g the gravity acceleration vector, expressed in the
     *          base coordinates
     * \param q the joint status vector
     * \param qd the joint velocities vector
     * \param tau the joint forces (torque or force)
     * \param fext the external forces, optional. Each force must be
     *              expressed in the reference frame of the link it is
     *              exerted on.
     */
    void fd(
       JointState& qdd, Acceleration& base_a, // output parameters,
       const Velocity& base_v, const Acceleration& g,
       const JointState& q, const JointState& qd, const JointState& tau, const ExtForces& fext = zeroExtForces);
    void fd(
        JointState& qdd, Acceleration& base_a, // output parameters,
        const Velocity& base_v, const Acceleration& g,
        const JointState& qd, const JointState& tau, const ExtForces& fext = zeroExtForces);
    ///@}

    /** Updates all the kinematics transforms used by this instance. */
    void setJointStatus(const JointState& q) const;

private:
    InertiaProperties* inertiaProps;
    MotionTransforms* motionTransforms;

    Matrix66 vcross; // support variable
    Matrix66 Ia_r;   // support variable, articulated inertia in the case of a revolute joint
    // Link 'base'
    Matrix66 base_AI;
    Force base_p;

    // Link 'FR_hip' :
    Matrix66 FR_hip_AI;
    Velocity FR_hip_a;
    Velocity FR_hip_v;
    Velocity FR_hip_c;
    Force    FR_hip_p;

    Column6 FR_hip_U;
    Scalar FR_hip_D;
    Scalar FR_hip_u;
    // Link 'FR_thigh' :
    Matrix66 FR_thigh_AI;
    Velocity FR_thigh_a;
    Velocity FR_thigh_v;
    Velocity FR_thigh_c;
    Force    FR_thigh_p;

    Column6 FR_thigh_U;
    Scalar FR_thigh_D;
    Scalar FR_thigh_u;
    // Link 'FR_calf' :
    Matrix66 FR_calf_AI;
    Velocity FR_calf_a;
    Velocity FR_calf_v;
    Velocity FR_calf_c;
    Force    FR_calf_p;

    Column6 FR_calf_U;
    Scalar FR_calf_D;
    Scalar FR_calf_u;
    // Link 'FL_hip' :
    Matrix66 FL_hip_AI;
    Velocity FL_hip_a;
    Velocity FL_hip_v;
    Velocity FL_hip_c;
    Force    FL_hip_p;

    Column6 FL_hip_U;
    Scalar FL_hip_D;
    Scalar FL_hip_u;
    // Link 'FL_thigh' :
    Matrix66 FL_thigh_AI;
    Velocity FL_thigh_a;
    Velocity FL_thigh_v;
    Velocity FL_thigh_c;
    Force    FL_thigh_p;

    Column6 FL_thigh_U;
    Scalar FL_thigh_D;
    Scalar FL_thigh_u;
    // Link 'FL_calf' :
    Matrix66 FL_calf_AI;
    Velocity FL_calf_a;
    Velocity FL_calf_v;
    Velocity FL_calf_c;
    Force    FL_calf_p;

    Column6 FL_calf_U;
    Scalar FL_calf_D;
    Scalar FL_calf_u;
    // Link 'RR_hip' :
    Matrix66 RR_hip_AI;
    Velocity RR_hip_a;
    Velocity RR_hip_v;
    Velocity RR_hip_c;
    Force    RR_hip_p;

    Column6 RR_hip_U;
    Scalar RR_hip_D;
    Scalar RR_hip_u;
    // Link 'RR_thigh' :
    Matrix66 RR_thigh_AI;
    Velocity RR_thigh_a;
    Velocity RR_thigh_v;
    Velocity RR_thigh_c;
    Force    RR_thigh_p;

    Column6 RR_thigh_U;
    Scalar RR_thigh_D;
    Scalar RR_thigh_u;
    // Link 'RR_calf' :
    Matrix66 RR_calf_AI;
    Velocity RR_calf_a;
    Velocity RR_calf_v;
    Velocity RR_calf_c;
    Force    RR_calf_p;

    Column6 RR_calf_U;
    Scalar RR_calf_D;
    Scalar RR_calf_u;
    // Link 'RL_hip' :
    Matrix66 RL_hip_AI;
    Velocity RL_hip_a;
    Velocity RL_hip_v;
    Velocity RL_hip_c;
    Force    RL_hip_p;

    Column6 RL_hip_U;
    Scalar RL_hip_D;
    Scalar RL_hip_u;
    // Link 'RL_thigh' :
    Matrix66 RL_thigh_AI;
    Velocity RL_thigh_a;
    Velocity RL_thigh_v;
    Velocity RL_thigh_c;
    Force    RL_thigh_p;

    Column6 RL_thigh_U;
    Scalar RL_thigh_D;
    Scalar RL_thigh_u;
    // Link 'RL_calf' :
    Matrix66 RL_calf_AI;
    Velocity RL_calf_a;
    Velocity RL_calf_v;
    Velocity RL_calf_c;
    Force    RL_calf_p;

    Column6 RL_calf_U;
    Scalar RL_calf_D;
    Scalar RL_calf_u;
private:
    static const ExtForces zeroExtForces;
};

inline void ForwardDynamics::setJointStatus(const JointState& q) const {
    (motionTransforms-> fr_FR_hip_X_fr_base)(q);
    (motionTransforms-> fr_FR_thigh_X_fr_FR_hip)(q);
    (motionTransforms-> fr_FR_calf_X_fr_FR_thigh)(q);
    (motionTransforms-> fr_FL_hip_X_fr_base)(q);
    (motionTransforms-> fr_FL_thigh_X_fr_FL_hip)(q);
    (motionTransforms-> fr_FL_calf_X_fr_FL_thigh)(q);
    (motionTransforms-> fr_RR_hip_X_fr_base)(q);
    (motionTransforms-> fr_RR_thigh_X_fr_RR_hip)(q);
    (motionTransforms-> fr_RR_calf_X_fr_RR_thigh)(q);
    (motionTransforms-> fr_RL_hip_X_fr_base)(q);
    (motionTransforms-> fr_RL_thigh_X_fr_RL_hip)(q);
    (motionTransforms-> fr_RL_calf_X_fr_RL_thigh)(q);
}

inline void ForwardDynamics::fd(
    JointState& qdd, Acceleration& base_a, // output parameters,
    const Velocity& base_v, const Acceleration& g,
    const JointState& q,
    const JointState& qd,
    const JointState& tau,
    const ExtForces& fext/* = zeroExtForces */)
{
    setJointStatus(q);
    fd(qdd, base_a, base_v, g, qd, tau, fext);
}

}
}
}

#endif
