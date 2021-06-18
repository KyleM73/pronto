#ifndef A1_TRANSFORMS_H_
#define A1_TRANSFORMS_H_

#include <iit/rbd/TransformsBase.h>
#include "declarations.h"
#include "model_constants.h"
#include "kinematics_parameters.h"

namespace pronto {
namespace a1 {

struct Parameters
{
    struct AngleFuncValues {
        AngleFuncValues() {
            update();
        }

        void update()
        {
        }
    };

    Params_lengths lengths;
    Params_angles angles;
    AngleFuncValues trig = AngleFuncValues();
};

// The type of the "vector" with the status of the variables
typedef JointState state_t;

template<class M>
using TransformMotion = iit::rbd::SpatialTransformBase<state_t, M>;

template<class M>
using TransformForce = iit::rbd::SpatialTransformBase<state_t, M>;

template<class M>
using TransformHomogeneous = iit::rbd::HomogeneousTransformBase<state_t, M>;

/**
 * The class for the 6-by-6 coordinates transformation matrices for
 * spatial motion vectors.
 */
class MotionTransforms
{
public:
    class Dummy {};
    typedef TransformMotion<Dummy>::MatrixType MatrixType;

    struct Type_fr_base_X_FL_foot : public TransformMotion<Type_fr_base_X_FL_foot>
    {
        Type_fr_base_X_FL_foot();
        const Type_fr_base_X_FL_foot& update(const state_t&);
    };
    
    struct Type_fr_base_X_FR_foot : public TransformMotion<Type_fr_base_X_FR_foot>
    {
        Type_fr_base_X_FR_foot();
        const Type_fr_base_X_FR_foot& update(const state_t&);
    };
    
    struct Type_fr_base_X_RL_foot : public TransformMotion<Type_fr_base_X_RL_foot>
    {
        Type_fr_base_X_RL_foot();
        const Type_fr_base_X_RL_foot& update(const state_t&);
    };
    
    struct Type_fr_base_X_RR_foot : public TransformMotion<Type_fr_base_X_RR_foot>
    {
        Type_fr_base_X_RR_foot();
        const Type_fr_base_X_RR_foot& update(const state_t&);
    };
    
    struct Type_imu_link_X_FL_foot : public TransformMotion<Type_imu_link_X_FL_foot>
    {
        Type_imu_link_X_FL_foot();
        const Type_imu_link_X_FL_foot& update(const state_t&);
    };
    
    struct Type_imu_link_X_FR_foot : public TransformMotion<Type_imu_link_X_FR_foot>
    {
        Type_imu_link_X_FR_foot();
        const Type_imu_link_X_FR_foot& update(const state_t&);
    };
    
    struct Type_imu_link_X_RL_foot : public TransformMotion<Type_imu_link_X_RL_foot>
    {
        Type_imu_link_X_RL_foot();
        const Type_imu_link_X_RL_foot& update(const state_t&);
    };
    
    struct Type_imu_link_X_RR_foot : public TransformMotion<Type_imu_link_X_RR_foot>
    {
        Type_imu_link_X_RR_foot();
        const Type_imu_link_X_RR_foot& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FL_hip_joint : public TransformMotion<Type_fr_base_X_fr_FL_hip_joint>
    {
        Type_fr_base_X_fr_FL_hip_joint();
        const Type_fr_base_X_fr_FL_hip_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FL_thigh_joint : public TransformMotion<Type_fr_base_X_fr_FL_thigh_joint>
    {
        Type_fr_base_X_fr_FL_thigh_joint();
        const Type_fr_base_X_fr_FL_thigh_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FL_calf_joint : public TransformMotion<Type_fr_base_X_fr_FL_calf_joint>
    {
        Type_fr_base_X_fr_FL_calf_joint();
        const Type_fr_base_X_fr_FL_calf_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FR_hip_joint : public TransformMotion<Type_fr_base_X_fr_FR_hip_joint>
    {
        Type_fr_base_X_fr_FR_hip_joint();
        const Type_fr_base_X_fr_FR_hip_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FR_thigh_joint : public TransformMotion<Type_fr_base_X_fr_FR_thigh_joint>
    {
        Type_fr_base_X_fr_FR_thigh_joint();
        const Type_fr_base_X_fr_FR_thigh_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FR_calf_joint : public TransformMotion<Type_fr_base_X_fr_FR_calf_joint>
    {
        Type_fr_base_X_fr_FR_calf_joint();
        const Type_fr_base_X_fr_FR_calf_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RL_hip_joint : public TransformMotion<Type_fr_base_X_fr_RL_hip_joint>
    {
        Type_fr_base_X_fr_RL_hip_joint();
        const Type_fr_base_X_fr_RL_hip_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RL_thigh_joint : public TransformMotion<Type_fr_base_X_fr_RL_thigh_joint>
    {
        Type_fr_base_X_fr_RL_thigh_joint();
        const Type_fr_base_X_fr_RL_thigh_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RL_calf_joint : public TransformMotion<Type_fr_base_X_fr_RL_calf_joint>
    {
        Type_fr_base_X_fr_RL_calf_joint();
        const Type_fr_base_X_fr_RL_calf_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RR_hip_joint : public TransformMotion<Type_fr_base_X_fr_RR_hip_joint>
    {
        Type_fr_base_X_fr_RR_hip_joint();
        const Type_fr_base_X_fr_RR_hip_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RR_thigh_joint : public TransformMotion<Type_fr_base_X_fr_RR_thigh_joint>
    {
        Type_fr_base_X_fr_RR_thigh_joint();
        const Type_fr_base_X_fr_RR_thigh_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RR_calf_joint : public TransformMotion<Type_fr_base_X_fr_RR_calf_joint>
    {
        Type_fr_base_X_fr_RR_calf_joint();
        const Type_fr_base_X_fr_RR_calf_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_FL_hip_joint : public TransformMotion<Type_imu_link_X_fr_FL_hip_joint>
    {
        Type_imu_link_X_fr_FL_hip_joint();
        const Type_imu_link_X_fr_FL_hip_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_FL_thigh_joint : public TransformMotion<Type_imu_link_X_fr_FL_thigh_joint>
    {
        Type_imu_link_X_fr_FL_thigh_joint();
        const Type_imu_link_X_fr_FL_thigh_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_FL_calf_joint : public TransformMotion<Type_imu_link_X_fr_FL_calf_joint>
    {
        Type_imu_link_X_fr_FL_calf_joint();
        const Type_imu_link_X_fr_FL_calf_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_FR_hip_joint : public TransformMotion<Type_imu_link_X_fr_FR_hip_joint>
    {
        Type_imu_link_X_fr_FR_hip_joint();
        const Type_imu_link_X_fr_FR_hip_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_FR_thigh_joint : public TransformMotion<Type_imu_link_X_fr_FR_thigh_joint>
    {
        Type_imu_link_X_fr_FR_thigh_joint();
        const Type_imu_link_X_fr_FR_thigh_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_FR_calf_joint : public TransformMotion<Type_imu_link_X_fr_FR_calf_joint>
    {
        Type_imu_link_X_fr_FR_calf_joint();
        const Type_imu_link_X_fr_FR_calf_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_RL_hip_joint : public TransformMotion<Type_imu_link_X_fr_RL_hip_joint>
    {
        Type_imu_link_X_fr_RL_hip_joint();
        const Type_imu_link_X_fr_RL_hip_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_RL_thigh_joint : public TransformMotion<Type_imu_link_X_fr_RL_thigh_joint>
    {
        Type_imu_link_X_fr_RL_thigh_joint();
        const Type_imu_link_X_fr_RL_thigh_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_RL_calf_joint : public TransformMotion<Type_imu_link_X_fr_RL_calf_joint>
    {
        Type_imu_link_X_fr_RL_calf_joint();
        const Type_imu_link_X_fr_RL_calf_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_RR_hip_joint : public TransformMotion<Type_imu_link_X_fr_RR_hip_joint>
    {
        Type_imu_link_X_fr_RR_hip_joint();
        const Type_imu_link_X_fr_RR_hip_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_RR_thigh_joint : public TransformMotion<Type_imu_link_X_fr_RR_thigh_joint>
    {
        Type_imu_link_X_fr_RR_thigh_joint();
        const Type_imu_link_X_fr_RR_thigh_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_RR_calf_joint : public TransformMotion<Type_imu_link_X_fr_RR_calf_joint>
    {
        Type_imu_link_X_fr_RR_calf_joint();
        const Type_imu_link_X_fr_RR_calf_joint& update(const state_t&);
    };
    
    struct Type_fr_FR_hip_X_fr_base : public TransformMotion<Type_fr_FR_hip_X_fr_base>
    {
        Type_fr_FR_hip_X_fr_base();
        const Type_fr_FR_hip_X_fr_base& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FR_hip : public TransformMotion<Type_fr_base_X_fr_FR_hip>
    {
        Type_fr_base_X_fr_FR_hip();
        const Type_fr_base_X_fr_FR_hip& update(const state_t&);
    };
    
    struct Type_fr_FR_thigh_X_fr_FR_hip : public TransformMotion<Type_fr_FR_thigh_X_fr_FR_hip>
    {
        Type_fr_FR_thigh_X_fr_FR_hip();
        const Type_fr_FR_thigh_X_fr_FR_hip& update(const state_t&);
    };
    
    struct Type_fr_FR_hip_X_fr_FR_thigh : public TransformMotion<Type_fr_FR_hip_X_fr_FR_thigh>
    {
        Type_fr_FR_hip_X_fr_FR_thigh();
        const Type_fr_FR_hip_X_fr_FR_thigh& update(const state_t&);
    };
    
    struct Type_fr_FR_calf_X_fr_FR_thigh : public TransformMotion<Type_fr_FR_calf_X_fr_FR_thigh>
    {
        Type_fr_FR_calf_X_fr_FR_thigh();
        const Type_fr_FR_calf_X_fr_FR_thigh& update(const state_t&);
    };
    
    struct Type_fr_FR_thigh_X_fr_FR_calf : public TransformMotion<Type_fr_FR_thigh_X_fr_FR_calf>
    {
        Type_fr_FR_thigh_X_fr_FR_calf();
        const Type_fr_FR_thigh_X_fr_FR_calf& update(const state_t&);
    };
    
    struct Type_fr_FL_hip_X_fr_base : public TransformMotion<Type_fr_FL_hip_X_fr_base>
    {
        Type_fr_FL_hip_X_fr_base();
        const Type_fr_FL_hip_X_fr_base& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FL_hip : public TransformMotion<Type_fr_base_X_fr_FL_hip>
    {
        Type_fr_base_X_fr_FL_hip();
        const Type_fr_base_X_fr_FL_hip& update(const state_t&);
    };
    
    struct Type_fr_FL_thigh_X_fr_FL_hip : public TransformMotion<Type_fr_FL_thigh_X_fr_FL_hip>
    {
        Type_fr_FL_thigh_X_fr_FL_hip();
        const Type_fr_FL_thigh_X_fr_FL_hip& update(const state_t&);
    };
    
    struct Type_fr_FL_hip_X_fr_FL_thigh : public TransformMotion<Type_fr_FL_hip_X_fr_FL_thigh>
    {
        Type_fr_FL_hip_X_fr_FL_thigh();
        const Type_fr_FL_hip_X_fr_FL_thigh& update(const state_t&);
    };
    
    struct Type_fr_FL_calf_X_fr_FL_thigh : public TransformMotion<Type_fr_FL_calf_X_fr_FL_thigh>
    {
        Type_fr_FL_calf_X_fr_FL_thigh();
        const Type_fr_FL_calf_X_fr_FL_thigh& update(const state_t&);
    };
    
    struct Type_fr_FL_thigh_X_fr_FL_calf : public TransformMotion<Type_fr_FL_thigh_X_fr_FL_calf>
    {
        Type_fr_FL_thigh_X_fr_FL_calf();
        const Type_fr_FL_thigh_X_fr_FL_calf& update(const state_t&);
    };
    
    struct Type_fr_RR_hip_X_fr_base : public TransformMotion<Type_fr_RR_hip_X_fr_base>
    {
        Type_fr_RR_hip_X_fr_base();
        const Type_fr_RR_hip_X_fr_base& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RR_hip : public TransformMotion<Type_fr_base_X_fr_RR_hip>
    {
        Type_fr_base_X_fr_RR_hip();
        const Type_fr_base_X_fr_RR_hip& update(const state_t&);
    };
    
    struct Type_fr_RR_thigh_X_fr_RR_hip : public TransformMotion<Type_fr_RR_thigh_X_fr_RR_hip>
    {
        Type_fr_RR_thigh_X_fr_RR_hip();
        const Type_fr_RR_thigh_X_fr_RR_hip& update(const state_t&);
    };
    
    struct Type_fr_RR_hip_X_fr_RR_thigh : public TransformMotion<Type_fr_RR_hip_X_fr_RR_thigh>
    {
        Type_fr_RR_hip_X_fr_RR_thigh();
        const Type_fr_RR_hip_X_fr_RR_thigh& update(const state_t&);
    };
    
    struct Type_fr_RR_calf_X_fr_RR_thigh : public TransformMotion<Type_fr_RR_calf_X_fr_RR_thigh>
    {
        Type_fr_RR_calf_X_fr_RR_thigh();
        const Type_fr_RR_calf_X_fr_RR_thigh& update(const state_t&);
    };
    
    struct Type_fr_RR_thigh_X_fr_RR_calf : public TransformMotion<Type_fr_RR_thigh_X_fr_RR_calf>
    {
        Type_fr_RR_thigh_X_fr_RR_calf();
        const Type_fr_RR_thigh_X_fr_RR_calf& update(const state_t&);
    };
    
    struct Type_fr_RL_hip_X_fr_base : public TransformMotion<Type_fr_RL_hip_X_fr_base>
    {
        Type_fr_RL_hip_X_fr_base();
        const Type_fr_RL_hip_X_fr_base& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RL_hip : public TransformMotion<Type_fr_base_X_fr_RL_hip>
    {
        Type_fr_base_X_fr_RL_hip();
        const Type_fr_base_X_fr_RL_hip& update(const state_t&);
    };
    
    struct Type_fr_RL_thigh_X_fr_RL_hip : public TransformMotion<Type_fr_RL_thigh_X_fr_RL_hip>
    {
        Type_fr_RL_thigh_X_fr_RL_hip();
        const Type_fr_RL_thigh_X_fr_RL_hip& update(const state_t&);
    };
    
    struct Type_fr_RL_hip_X_fr_RL_thigh : public TransformMotion<Type_fr_RL_hip_X_fr_RL_thigh>
    {
        Type_fr_RL_hip_X_fr_RL_thigh();
        const Type_fr_RL_hip_X_fr_RL_thigh& update(const state_t&);
    };
    
    struct Type_fr_RL_calf_X_fr_RL_thigh : public TransformMotion<Type_fr_RL_calf_X_fr_RL_thigh>
    {
        Type_fr_RL_calf_X_fr_RL_thigh();
        const Type_fr_RL_calf_X_fr_RL_thigh& update(const state_t&);
    };
    
    struct Type_fr_RL_thigh_X_fr_RL_calf : public TransformMotion<Type_fr_RL_thigh_X_fr_RL_calf>
    {
        Type_fr_RL_thigh_X_fr_RL_calf();
        const Type_fr_RL_thigh_X_fr_RL_calf& update(const state_t&);
    };
    
public:
    MotionTransforms();
    void updateParams(const Params_lengths&, const Params_angles&);

    Type_fr_base_X_FL_foot fr_base_X_FL_foot;
    Type_fr_base_X_FR_foot fr_base_X_FR_foot;
    Type_fr_base_X_RL_foot fr_base_X_RL_foot;
    Type_fr_base_X_RR_foot fr_base_X_RR_foot;
    Type_imu_link_X_FL_foot imu_link_X_FL_foot;
    Type_imu_link_X_FR_foot imu_link_X_FR_foot;
    Type_imu_link_X_RL_foot imu_link_X_RL_foot;
    Type_imu_link_X_RR_foot imu_link_X_RR_foot;
    Type_fr_base_X_fr_FL_hip_joint fr_base_X_fr_FL_hip_joint;
    Type_fr_base_X_fr_FL_thigh_joint fr_base_X_fr_FL_thigh_joint;
    Type_fr_base_X_fr_FL_calf_joint fr_base_X_fr_FL_calf_joint;
    Type_fr_base_X_fr_FR_hip_joint fr_base_X_fr_FR_hip_joint;
    Type_fr_base_X_fr_FR_thigh_joint fr_base_X_fr_FR_thigh_joint;
    Type_fr_base_X_fr_FR_calf_joint fr_base_X_fr_FR_calf_joint;
    Type_fr_base_X_fr_RL_hip_joint fr_base_X_fr_RL_hip_joint;
    Type_fr_base_X_fr_RL_thigh_joint fr_base_X_fr_RL_thigh_joint;
    Type_fr_base_X_fr_RL_calf_joint fr_base_X_fr_RL_calf_joint;
    Type_fr_base_X_fr_RR_hip_joint fr_base_X_fr_RR_hip_joint;
    Type_fr_base_X_fr_RR_thigh_joint fr_base_X_fr_RR_thigh_joint;
    Type_fr_base_X_fr_RR_calf_joint fr_base_X_fr_RR_calf_joint;
    Type_imu_link_X_fr_FL_hip_joint imu_link_X_fr_FL_hip_joint;
    Type_imu_link_X_fr_FL_thigh_joint imu_link_X_fr_FL_thigh_joint;
    Type_imu_link_X_fr_FL_calf_joint imu_link_X_fr_FL_calf_joint;
    Type_imu_link_X_fr_FR_hip_joint imu_link_X_fr_FR_hip_joint;
    Type_imu_link_X_fr_FR_thigh_joint imu_link_X_fr_FR_thigh_joint;
    Type_imu_link_X_fr_FR_calf_joint imu_link_X_fr_FR_calf_joint;
    Type_imu_link_X_fr_RL_hip_joint imu_link_X_fr_RL_hip_joint;
    Type_imu_link_X_fr_RL_thigh_joint imu_link_X_fr_RL_thigh_joint;
    Type_imu_link_X_fr_RL_calf_joint imu_link_X_fr_RL_calf_joint;
    Type_imu_link_X_fr_RR_hip_joint imu_link_X_fr_RR_hip_joint;
    Type_imu_link_X_fr_RR_thigh_joint imu_link_X_fr_RR_thigh_joint;
    Type_imu_link_X_fr_RR_calf_joint imu_link_X_fr_RR_calf_joint;
    Type_fr_FR_hip_X_fr_base fr_FR_hip_X_fr_base;
    Type_fr_base_X_fr_FR_hip fr_base_X_fr_FR_hip;
    Type_fr_FR_thigh_X_fr_FR_hip fr_FR_thigh_X_fr_FR_hip;
    Type_fr_FR_hip_X_fr_FR_thigh fr_FR_hip_X_fr_FR_thigh;
    Type_fr_FR_calf_X_fr_FR_thigh fr_FR_calf_X_fr_FR_thigh;
    Type_fr_FR_thigh_X_fr_FR_calf fr_FR_thigh_X_fr_FR_calf;
    Type_fr_FL_hip_X_fr_base fr_FL_hip_X_fr_base;
    Type_fr_base_X_fr_FL_hip fr_base_X_fr_FL_hip;
    Type_fr_FL_thigh_X_fr_FL_hip fr_FL_thigh_X_fr_FL_hip;
    Type_fr_FL_hip_X_fr_FL_thigh fr_FL_hip_X_fr_FL_thigh;
    Type_fr_FL_calf_X_fr_FL_thigh fr_FL_calf_X_fr_FL_thigh;
    Type_fr_FL_thigh_X_fr_FL_calf fr_FL_thigh_X_fr_FL_calf;
    Type_fr_RR_hip_X_fr_base fr_RR_hip_X_fr_base;
    Type_fr_base_X_fr_RR_hip fr_base_X_fr_RR_hip;
    Type_fr_RR_thigh_X_fr_RR_hip fr_RR_thigh_X_fr_RR_hip;
    Type_fr_RR_hip_X_fr_RR_thigh fr_RR_hip_X_fr_RR_thigh;
    Type_fr_RR_calf_X_fr_RR_thigh fr_RR_calf_X_fr_RR_thigh;
    Type_fr_RR_thigh_X_fr_RR_calf fr_RR_thigh_X_fr_RR_calf;
    Type_fr_RL_hip_X_fr_base fr_RL_hip_X_fr_base;
    Type_fr_base_X_fr_RL_hip fr_base_X_fr_RL_hip;
    Type_fr_RL_thigh_X_fr_RL_hip fr_RL_thigh_X_fr_RL_hip;
    Type_fr_RL_hip_X_fr_RL_thigh fr_RL_hip_X_fr_RL_thigh;
    Type_fr_RL_calf_X_fr_RL_thigh fr_RL_calf_X_fr_RL_thigh;
    Type_fr_RL_thigh_X_fr_RL_calf fr_RL_thigh_X_fr_RL_calf;

protected:
    Parameters params;

}; //class 'MotionTransforms'

/**
 * The class for the 6-by-6 coordinates transformation matrices for
 * spatial force vectors.
 */
class ForceTransforms
{
public:
    class Dummy {};
    typedef TransformForce<Dummy>::MatrixType MatrixType;

    struct Type_fr_base_X_FL_foot : public TransformForce<Type_fr_base_X_FL_foot>
    {
        Type_fr_base_X_FL_foot();
        const Type_fr_base_X_FL_foot& update(const state_t&);
    };
    
    struct Type_fr_base_X_FR_foot : public TransformForce<Type_fr_base_X_FR_foot>
    {
        Type_fr_base_X_FR_foot();
        const Type_fr_base_X_FR_foot& update(const state_t&);
    };
    
    struct Type_fr_base_X_RL_foot : public TransformForce<Type_fr_base_X_RL_foot>
    {
        Type_fr_base_X_RL_foot();
        const Type_fr_base_X_RL_foot& update(const state_t&);
    };
    
    struct Type_fr_base_X_RR_foot : public TransformForce<Type_fr_base_X_RR_foot>
    {
        Type_fr_base_X_RR_foot();
        const Type_fr_base_X_RR_foot& update(const state_t&);
    };
    
    struct Type_imu_link_X_FL_foot : public TransformForce<Type_imu_link_X_FL_foot>
    {
        Type_imu_link_X_FL_foot();
        const Type_imu_link_X_FL_foot& update(const state_t&);
    };
    
    struct Type_imu_link_X_FR_foot : public TransformForce<Type_imu_link_X_FR_foot>
    {
        Type_imu_link_X_FR_foot();
        const Type_imu_link_X_FR_foot& update(const state_t&);
    };
    
    struct Type_imu_link_X_RL_foot : public TransformForce<Type_imu_link_X_RL_foot>
    {
        Type_imu_link_X_RL_foot();
        const Type_imu_link_X_RL_foot& update(const state_t&);
    };
    
    struct Type_imu_link_X_RR_foot : public TransformForce<Type_imu_link_X_RR_foot>
    {
        Type_imu_link_X_RR_foot();
        const Type_imu_link_X_RR_foot& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FL_hip_joint : public TransformForce<Type_fr_base_X_fr_FL_hip_joint>
    {
        Type_fr_base_X_fr_FL_hip_joint();
        const Type_fr_base_X_fr_FL_hip_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FL_thigh_joint : public TransformForce<Type_fr_base_X_fr_FL_thigh_joint>
    {
        Type_fr_base_X_fr_FL_thigh_joint();
        const Type_fr_base_X_fr_FL_thigh_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FL_calf_joint : public TransformForce<Type_fr_base_X_fr_FL_calf_joint>
    {
        Type_fr_base_X_fr_FL_calf_joint();
        const Type_fr_base_X_fr_FL_calf_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FR_hip_joint : public TransformForce<Type_fr_base_X_fr_FR_hip_joint>
    {
        Type_fr_base_X_fr_FR_hip_joint();
        const Type_fr_base_X_fr_FR_hip_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FR_thigh_joint : public TransformForce<Type_fr_base_X_fr_FR_thigh_joint>
    {
        Type_fr_base_X_fr_FR_thigh_joint();
        const Type_fr_base_X_fr_FR_thigh_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FR_calf_joint : public TransformForce<Type_fr_base_X_fr_FR_calf_joint>
    {
        Type_fr_base_X_fr_FR_calf_joint();
        const Type_fr_base_X_fr_FR_calf_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RL_hip_joint : public TransformForce<Type_fr_base_X_fr_RL_hip_joint>
    {
        Type_fr_base_X_fr_RL_hip_joint();
        const Type_fr_base_X_fr_RL_hip_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RL_thigh_joint : public TransformForce<Type_fr_base_X_fr_RL_thigh_joint>
    {
        Type_fr_base_X_fr_RL_thigh_joint();
        const Type_fr_base_X_fr_RL_thigh_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RL_calf_joint : public TransformForce<Type_fr_base_X_fr_RL_calf_joint>
    {
        Type_fr_base_X_fr_RL_calf_joint();
        const Type_fr_base_X_fr_RL_calf_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RR_hip_joint : public TransformForce<Type_fr_base_X_fr_RR_hip_joint>
    {
        Type_fr_base_X_fr_RR_hip_joint();
        const Type_fr_base_X_fr_RR_hip_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RR_thigh_joint : public TransformForce<Type_fr_base_X_fr_RR_thigh_joint>
    {
        Type_fr_base_X_fr_RR_thigh_joint();
        const Type_fr_base_X_fr_RR_thigh_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RR_calf_joint : public TransformForce<Type_fr_base_X_fr_RR_calf_joint>
    {
        Type_fr_base_X_fr_RR_calf_joint();
        const Type_fr_base_X_fr_RR_calf_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_FL_hip_joint : public TransformForce<Type_imu_link_X_fr_FL_hip_joint>
    {
        Type_imu_link_X_fr_FL_hip_joint();
        const Type_imu_link_X_fr_FL_hip_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_FL_thigh_joint : public TransformForce<Type_imu_link_X_fr_FL_thigh_joint>
    {
        Type_imu_link_X_fr_FL_thigh_joint();
        const Type_imu_link_X_fr_FL_thigh_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_FL_calf_joint : public TransformForce<Type_imu_link_X_fr_FL_calf_joint>
    {
        Type_imu_link_X_fr_FL_calf_joint();
        const Type_imu_link_X_fr_FL_calf_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_FR_hip_joint : public TransformForce<Type_imu_link_X_fr_FR_hip_joint>
    {
        Type_imu_link_X_fr_FR_hip_joint();
        const Type_imu_link_X_fr_FR_hip_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_FR_thigh_joint : public TransformForce<Type_imu_link_X_fr_FR_thigh_joint>
    {
        Type_imu_link_X_fr_FR_thigh_joint();
        const Type_imu_link_X_fr_FR_thigh_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_FR_calf_joint : public TransformForce<Type_imu_link_X_fr_FR_calf_joint>
    {
        Type_imu_link_X_fr_FR_calf_joint();
        const Type_imu_link_X_fr_FR_calf_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_RL_hip_joint : public TransformForce<Type_imu_link_X_fr_RL_hip_joint>
    {
        Type_imu_link_X_fr_RL_hip_joint();
        const Type_imu_link_X_fr_RL_hip_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_RL_thigh_joint : public TransformForce<Type_imu_link_X_fr_RL_thigh_joint>
    {
        Type_imu_link_X_fr_RL_thigh_joint();
        const Type_imu_link_X_fr_RL_thigh_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_RL_calf_joint : public TransformForce<Type_imu_link_X_fr_RL_calf_joint>
    {
        Type_imu_link_X_fr_RL_calf_joint();
        const Type_imu_link_X_fr_RL_calf_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_RR_hip_joint : public TransformForce<Type_imu_link_X_fr_RR_hip_joint>
    {
        Type_imu_link_X_fr_RR_hip_joint();
        const Type_imu_link_X_fr_RR_hip_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_RR_thigh_joint : public TransformForce<Type_imu_link_X_fr_RR_thigh_joint>
    {
        Type_imu_link_X_fr_RR_thigh_joint();
        const Type_imu_link_X_fr_RR_thigh_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_RR_calf_joint : public TransformForce<Type_imu_link_X_fr_RR_calf_joint>
    {
        Type_imu_link_X_fr_RR_calf_joint();
        const Type_imu_link_X_fr_RR_calf_joint& update(const state_t&);
    };
    
    struct Type_fr_FR_hip_X_fr_base : public TransformForce<Type_fr_FR_hip_X_fr_base>
    {
        Type_fr_FR_hip_X_fr_base();
        const Type_fr_FR_hip_X_fr_base& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FR_hip : public TransformForce<Type_fr_base_X_fr_FR_hip>
    {
        Type_fr_base_X_fr_FR_hip();
        const Type_fr_base_X_fr_FR_hip& update(const state_t&);
    };
    
    struct Type_fr_FR_thigh_X_fr_FR_hip : public TransformForce<Type_fr_FR_thigh_X_fr_FR_hip>
    {
        Type_fr_FR_thigh_X_fr_FR_hip();
        const Type_fr_FR_thigh_X_fr_FR_hip& update(const state_t&);
    };
    
    struct Type_fr_FR_hip_X_fr_FR_thigh : public TransformForce<Type_fr_FR_hip_X_fr_FR_thigh>
    {
        Type_fr_FR_hip_X_fr_FR_thigh();
        const Type_fr_FR_hip_X_fr_FR_thigh& update(const state_t&);
    };
    
    struct Type_fr_FR_calf_X_fr_FR_thigh : public TransformForce<Type_fr_FR_calf_X_fr_FR_thigh>
    {
        Type_fr_FR_calf_X_fr_FR_thigh();
        const Type_fr_FR_calf_X_fr_FR_thigh& update(const state_t&);
    };
    
    struct Type_fr_FR_thigh_X_fr_FR_calf : public TransformForce<Type_fr_FR_thigh_X_fr_FR_calf>
    {
        Type_fr_FR_thigh_X_fr_FR_calf();
        const Type_fr_FR_thigh_X_fr_FR_calf& update(const state_t&);
    };
    
    struct Type_fr_FL_hip_X_fr_base : public TransformForce<Type_fr_FL_hip_X_fr_base>
    {
        Type_fr_FL_hip_X_fr_base();
        const Type_fr_FL_hip_X_fr_base& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FL_hip : public TransformForce<Type_fr_base_X_fr_FL_hip>
    {
        Type_fr_base_X_fr_FL_hip();
        const Type_fr_base_X_fr_FL_hip& update(const state_t&);
    };
    
    struct Type_fr_FL_thigh_X_fr_FL_hip : public TransformForce<Type_fr_FL_thigh_X_fr_FL_hip>
    {
        Type_fr_FL_thigh_X_fr_FL_hip();
        const Type_fr_FL_thigh_X_fr_FL_hip& update(const state_t&);
    };
    
    struct Type_fr_FL_hip_X_fr_FL_thigh : public TransformForce<Type_fr_FL_hip_X_fr_FL_thigh>
    {
        Type_fr_FL_hip_X_fr_FL_thigh();
        const Type_fr_FL_hip_X_fr_FL_thigh& update(const state_t&);
    };
    
    struct Type_fr_FL_calf_X_fr_FL_thigh : public TransformForce<Type_fr_FL_calf_X_fr_FL_thigh>
    {
        Type_fr_FL_calf_X_fr_FL_thigh();
        const Type_fr_FL_calf_X_fr_FL_thigh& update(const state_t&);
    };
    
    struct Type_fr_FL_thigh_X_fr_FL_calf : public TransformForce<Type_fr_FL_thigh_X_fr_FL_calf>
    {
        Type_fr_FL_thigh_X_fr_FL_calf();
        const Type_fr_FL_thigh_X_fr_FL_calf& update(const state_t&);
    };
    
    struct Type_fr_RR_hip_X_fr_base : public TransformForce<Type_fr_RR_hip_X_fr_base>
    {
        Type_fr_RR_hip_X_fr_base();
        const Type_fr_RR_hip_X_fr_base& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RR_hip : public TransformForce<Type_fr_base_X_fr_RR_hip>
    {
        Type_fr_base_X_fr_RR_hip();
        const Type_fr_base_X_fr_RR_hip& update(const state_t&);
    };
    
    struct Type_fr_RR_thigh_X_fr_RR_hip : public TransformForce<Type_fr_RR_thigh_X_fr_RR_hip>
    {
        Type_fr_RR_thigh_X_fr_RR_hip();
        const Type_fr_RR_thigh_X_fr_RR_hip& update(const state_t&);
    };
    
    struct Type_fr_RR_hip_X_fr_RR_thigh : public TransformForce<Type_fr_RR_hip_X_fr_RR_thigh>
    {
        Type_fr_RR_hip_X_fr_RR_thigh();
        const Type_fr_RR_hip_X_fr_RR_thigh& update(const state_t&);
    };
    
    struct Type_fr_RR_calf_X_fr_RR_thigh : public TransformForce<Type_fr_RR_calf_X_fr_RR_thigh>
    {
        Type_fr_RR_calf_X_fr_RR_thigh();
        const Type_fr_RR_calf_X_fr_RR_thigh& update(const state_t&);
    };
    
    struct Type_fr_RR_thigh_X_fr_RR_calf : public TransformForce<Type_fr_RR_thigh_X_fr_RR_calf>
    {
        Type_fr_RR_thigh_X_fr_RR_calf();
        const Type_fr_RR_thigh_X_fr_RR_calf& update(const state_t&);
    };
    
    struct Type_fr_RL_hip_X_fr_base : public TransformForce<Type_fr_RL_hip_X_fr_base>
    {
        Type_fr_RL_hip_X_fr_base();
        const Type_fr_RL_hip_X_fr_base& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RL_hip : public TransformForce<Type_fr_base_X_fr_RL_hip>
    {
        Type_fr_base_X_fr_RL_hip();
        const Type_fr_base_X_fr_RL_hip& update(const state_t&);
    };
    
    struct Type_fr_RL_thigh_X_fr_RL_hip : public TransformForce<Type_fr_RL_thigh_X_fr_RL_hip>
    {
        Type_fr_RL_thigh_X_fr_RL_hip();
        const Type_fr_RL_thigh_X_fr_RL_hip& update(const state_t&);
    };
    
    struct Type_fr_RL_hip_X_fr_RL_thigh : public TransformForce<Type_fr_RL_hip_X_fr_RL_thigh>
    {
        Type_fr_RL_hip_X_fr_RL_thigh();
        const Type_fr_RL_hip_X_fr_RL_thigh& update(const state_t&);
    };
    
    struct Type_fr_RL_calf_X_fr_RL_thigh : public TransformForce<Type_fr_RL_calf_X_fr_RL_thigh>
    {
        Type_fr_RL_calf_X_fr_RL_thigh();
        const Type_fr_RL_calf_X_fr_RL_thigh& update(const state_t&);
    };
    
    struct Type_fr_RL_thigh_X_fr_RL_calf : public TransformForce<Type_fr_RL_thigh_X_fr_RL_calf>
    {
        Type_fr_RL_thigh_X_fr_RL_calf();
        const Type_fr_RL_thigh_X_fr_RL_calf& update(const state_t&);
    };
    
public:
    ForceTransforms();
    void updateParams(const Params_lengths&, const Params_angles&);

    Type_fr_base_X_FL_foot fr_base_X_FL_foot;
    Type_fr_base_X_FR_foot fr_base_X_FR_foot;
    Type_fr_base_X_RL_foot fr_base_X_RL_foot;
    Type_fr_base_X_RR_foot fr_base_X_RR_foot;
    Type_imu_link_X_FL_foot imu_link_X_FL_foot;
    Type_imu_link_X_FR_foot imu_link_X_FR_foot;
    Type_imu_link_X_RL_foot imu_link_X_RL_foot;
    Type_imu_link_X_RR_foot imu_link_X_RR_foot;
    Type_fr_base_X_fr_FL_hip_joint fr_base_X_fr_FL_hip_joint;
    Type_fr_base_X_fr_FL_thigh_joint fr_base_X_fr_FL_thigh_joint;
    Type_fr_base_X_fr_FL_calf_joint fr_base_X_fr_FL_calf_joint;
    Type_fr_base_X_fr_FR_hip_joint fr_base_X_fr_FR_hip_joint;
    Type_fr_base_X_fr_FR_thigh_joint fr_base_X_fr_FR_thigh_joint;
    Type_fr_base_X_fr_FR_calf_joint fr_base_X_fr_FR_calf_joint;
    Type_fr_base_X_fr_RL_hip_joint fr_base_X_fr_RL_hip_joint;
    Type_fr_base_X_fr_RL_thigh_joint fr_base_X_fr_RL_thigh_joint;
    Type_fr_base_X_fr_RL_calf_joint fr_base_X_fr_RL_calf_joint;
    Type_fr_base_X_fr_RR_hip_joint fr_base_X_fr_RR_hip_joint;
    Type_fr_base_X_fr_RR_thigh_joint fr_base_X_fr_RR_thigh_joint;
    Type_fr_base_X_fr_RR_calf_joint fr_base_X_fr_RR_calf_joint;
    Type_imu_link_X_fr_FL_hip_joint imu_link_X_fr_FL_hip_joint;
    Type_imu_link_X_fr_FL_thigh_joint imu_link_X_fr_FL_thigh_joint;
    Type_imu_link_X_fr_FL_calf_joint imu_link_X_fr_FL_calf_joint;
    Type_imu_link_X_fr_FR_hip_joint imu_link_X_fr_FR_hip_joint;
    Type_imu_link_X_fr_FR_thigh_joint imu_link_X_fr_FR_thigh_joint;
    Type_imu_link_X_fr_FR_calf_joint imu_link_X_fr_FR_calf_joint;
    Type_imu_link_X_fr_RL_hip_joint imu_link_X_fr_RL_hip_joint;
    Type_imu_link_X_fr_RL_thigh_joint imu_link_X_fr_RL_thigh_joint;
    Type_imu_link_X_fr_RL_calf_joint imu_link_X_fr_RL_calf_joint;
    Type_imu_link_X_fr_RR_hip_joint imu_link_X_fr_RR_hip_joint;
    Type_imu_link_X_fr_RR_thigh_joint imu_link_X_fr_RR_thigh_joint;
    Type_imu_link_X_fr_RR_calf_joint imu_link_X_fr_RR_calf_joint;
    Type_fr_FR_hip_X_fr_base fr_FR_hip_X_fr_base;
    Type_fr_base_X_fr_FR_hip fr_base_X_fr_FR_hip;
    Type_fr_FR_thigh_X_fr_FR_hip fr_FR_thigh_X_fr_FR_hip;
    Type_fr_FR_hip_X_fr_FR_thigh fr_FR_hip_X_fr_FR_thigh;
    Type_fr_FR_calf_X_fr_FR_thigh fr_FR_calf_X_fr_FR_thigh;
    Type_fr_FR_thigh_X_fr_FR_calf fr_FR_thigh_X_fr_FR_calf;
    Type_fr_FL_hip_X_fr_base fr_FL_hip_X_fr_base;
    Type_fr_base_X_fr_FL_hip fr_base_X_fr_FL_hip;
    Type_fr_FL_thigh_X_fr_FL_hip fr_FL_thigh_X_fr_FL_hip;
    Type_fr_FL_hip_X_fr_FL_thigh fr_FL_hip_X_fr_FL_thigh;
    Type_fr_FL_calf_X_fr_FL_thigh fr_FL_calf_X_fr_FL_thigh;
    Type_fr_FL_thigh_X_fr_FL_calf fr_FL_thigh_X_fr_FL_calf;
    Type_fr_RR_hip_X_fr_base fr_RR_hip_X_fr_base;
    Type_fr_base_X_fr_RR_hip fr_base_X_fr_RR_hip;
    Type_fr_RR_thigh_X_fr_RR_hip fr_RR_thigh_X_fr_RR_hip;
    Type_fr_RR_hip_X_fr_RR_thigh fr_RR_hip_X_fr_RR_thigh;
    Type_fr_RR_calf_X_fr_RR_thigh fr_RR_calf_X_fr_RR_thigh;
    Type_fr_RR_thigh_X_fr_RR_calf fr_RR_thigh_X_fr_RR_calf;
    Type_fr_RL_hip_X_fr_base fr_RL_hip_X_fr_base;
    Type_fr_base_X_fr_RL_hip fr_base_X_fr_RL_hip;
    Type_fr_RL_thigh_X_fr_RL_hip fr_RL_thigh_X_fr_RL_hip;
    Type_fr_RL_hip_X_fr_RL_thigh fr_RL_hip_X_fr_RL_thigh;
    Type_fr_RL_calf_X_fr_RL_thigh fr_RL_calf_X_fr_RL_thigh;
    Type_fr_RL_thigh_X_fr_RL_calf fr_RL_thigh_X_fr_RL_calf;

protected:
    Parameters params;

}; //class 'ForceTransforms'

/**
 * The class with the homogeneous (4x4) coordinates transformation
 * matrices.
 */
class HomogeneousTransforms
{
public:
    class Dummy {};
    typedef TransformHomogeneous<Dummy>::MatrixType MatrixType;

    struct Type_fr_base_X_FL_foot : public TransformHomogeneous<Type_fr_base_X_FL_foot>
    {
        Type_fr_base_X_FL_foot();
        const Type_fr_base_X_FL_foot& update(const state_t&);
    };
    
    struct Type_fr_base_X_FR_foot : public TransformHomogeneous<Type_fr_base_X_FR_foot>
    {
        Type_fr_base_X_FR_foot();
        const Type_fr_base_X_FR_foot& update(const state_t&);
    };
    
    struct Type_fr_base_X_RL_foot : public TransformHomogeneous<Type_fr_base_X_RL_foot>
    {
        Type_fr_base_X_RL_foot();
        const Type_fr_base_X_RL_foot& update(const state_t&);
    };
    
    struct Type_fr_base_X_RR_foot : public TransformHomogeneous<Type_fr_base_X_RR_foot>
    {
        Type_fr_base_X_RR_foot();
        const Type_fr_base_X_RR_foot& update(const state_t&);
    };
    
    struct Type_imu_link_X_FL_foot : public TransformHomogeneous<Type_imu_link_X_FL_foot>
    {
        Type_imu_link_X_FL_foot();
        const Type_imu_link_X_FL_foot& update(const state_t&);
    };
    
    struct Type_imu_link_X_FR_foot : public TransformHomogeneous<Type_imu_link_X_FR_foot>
    {
        Type_imu_link_X_FR_foot();
        const Type_imu_link_X_FR_foot& update(const state_t&);
    };
    
    struct Type_imu_link_X_RL_foot : public TransformHomogeneous<Type_imu_link_X_RL_foot>
    {
        Type_imu_link_X_RL_foot();
        const Type_imu_link_X_RL_foot& update(const state_t&);
    };
    
    struct Type_imu_link_X_RR_foot : public TransformHomogeneous<Type_imu_link_X_RR_foot>
    {
        Type_imu_link_X_RR_foot();
        const Type_imu_link_X_RR_foot& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FL_hip_joint : public TransformHomogeneous<Type_fr_base_X_fr_FL_hip_joint>
    {
        Type_fr_base_X_fr_FL_hip_joint();
        const Type_fr_base_X_fr_FL_hip_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FL_thigh_joint : public TransformHomogeneous<Type_fr_base_X_fr_FL_thigh_joint>
    {
        Type_fr_base_X_fr_FL_thigh_joint();
        const Type_fr_base_X_fr_FL_thigh_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FL_calf_joint : public TransformHomogeneous<Type_fr_base_X_fr_FL_calf_joint>
    {
        Type_fr_base_X_fr_FL_calf_joint();
        const Type_fr_base_X_fr_FL_calf_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FR_hip_joint : public TransformHomogeneous<Type_fr_base_X_fr_FR_hip_joint>
    {
        Type_fr_base_X_fr_FR_hip_joint();
        const Type_fr_base_X_fr_FR_hip_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FR_thigh_joint : public TransformHomogeneous<Type_fr_base_X_fr_FR_thigh_joint>
    {
        Type_fr_base_X_fr_FR_thigh_joint();
        const Type_fr_base_X_fr_FR_thigh_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FR_calf_joint : public TransformHomogeneous<Type_fr_base_X_fr_FR_calf_joint>
    {
        Type_fr_base_X_fr_FR_calf_joint();
        const Type_fr_base_X_fr_FR_calf_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RL_hip_joint : public TransformHomogeneous<Type_fr_base_X_fr_RL_hip_joint>
    {
        Type_fr_base_X_fr_RL_hip_joint();
        const Type_fr_base_X_fr_RL_hip_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RL_thigh_joint : public TransformHomogeneous<Type_fr_base_X_fr_RL_thigh_joint>
    {
        Type_fr_base_X_fr_RL_thigh_joint();
        const Type_fr_base_X_fr_RL_thigh_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RL_calf_joint : public TransformHomogeneous<Type_fr_base_X_fr_RL_calf_joint>
    {
        Type_fr_base_X_fr_RL_calf_joint();
        const Type_fr_base_X_fr_RL_calf_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RR_hip_joint : public TransformHomogeneous<Type_fr_base_X_fr_RR_hip_joint>
    {
        Type_fr_base_X_fr_RR_hip_joint();
        const Type_fr_base_X_fr_RR_hip_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RR_thigh_joint : public TransformHomogeneous<Type_fr_base_X_fr_RR_thigh_joint>
    {
        Type_fr_base_X_fr_RR_thigh_joint();
        const Type_fr_base_X_fr_RR_thigh_joint& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RR_calf_joint : public TransformHomogeneous<Type_fr_base_X_fr_RR_calf_joint>
    {
        Type_fr_base_X_fr_RR_calf_joint();
        const Type_fr_base_X_fr_RR_calf_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_FL_hip_joint : public TransformHomogeneous<Type_imu_link_X_fr_FL_hip_joint>
    {
        Type_imu_link_X_fr_FL_hip_joint();
        const Type_imu_link_X_fr_FL_hip_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_FL_thigh_joint : public TransformHomogeneous<Type_imu_link_X_fr_FL_thigh_joint>
    {
        Type_imu_link_X_fr_FL_thigh_joint();
        const Type_imu_link_X_fr_FL_thigh_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_FL_calf_joint : public TransformHomogeneous<Type_imu_link_X_fr_FL_calf_joint>
    {
        Type_imu_link_X_fr_FL_calf_joint();
        const Type_imu_link_X_fr_FL_calf_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_FR_hip_joint : public TransformHomogeneous<Type_imu_link_X_fr_FR_hip_joint>
    {
        Type_imu_link_X_fr_FR_hip_joint();
        const Type_imu_link_X_fr_FR_hip_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_FR_thigh_joint : public TransformHomogeneous<Type_imu_link_X_fr_FR_thigh_joint>
    {
        Type_imu_link_X_fr_FR_thigh_joint();
        const Type_imu_link_X_fr_FR_thigh_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_FR_calf_joint : public TransformHomogeneous<Type_imu_link_X_fr_FR_calf_joint>
    {
        Type_imu_link_X_fr_FR_calf_joint();
        const Type_imu_link_X_fr_FR_calf_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_RL_hip_joint : public TransformHomogeneous<Type_imu_link_X_fr_RL_hip_joint>
    {
        Type_imu_link_X_fr_RL_hip_joint();
        const Type_imu_link_X_fr_RL_hip_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_RL_thigh_joint : public TransformHomogeneous<Type_imu_link_X_fr_RL_thigh_joint>
    {
        Type_imu_link_X_fr_RL_thigh_joint();
        const Type_imu_link_X_fr_RL_thigh_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_RL_calf_joint : public TransformHomogeneous<Type_imu_link_X_fr_RL_calf_joint>
    {
        Type_imu_link_X_fr_RL_calf_joint();
        const Type_imu_link_X_fr_RL_calf_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_RR_hip_joint : public TransformHomogeneous<Type_imu_link_X_fr_RR_hip_joint>
    {
        Type_imu_link_X_fr_RR_hip_joint();
        const Type_imu_link_X_fr_RR_hip_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_RR_thigh_joint : public TransformHomogeneous<Type_imu_link_X_fr_RR_thigh_joint>
    {
        Type_imu_link_X_fr_RR_thigh_joint();
        const Type_imu_link_X_fr_RR_thigh_joint& update(const state_t&);
    };
    
    struct Type_imu_link_X_fr_RR_calf_joint : public TransformHomogeneous<Type_imu_link_X_fr_RR_calf_joint>
    {
        Type_imu_link_X_fr_RR_calf_joint();
        const Type_imu_link_X_fr_RR_calf_joint& update(const state_t&);
    };
    
    struct Type_fr_FR_hip_X_fr_base : public TransformHomogeneous<Type_fr_FR_hip_X_fr_base>
    {
        Type_fr_FR_hip_X_fr_base();
        const Type_fr_FR_hip_X_fr_base& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FR_hip : public TransformHomogeneous<Type_fr_base_X_fr_FR_hip>
    {
        Type_fr_base_X_fr_FR_hip();
        const Type_fr_base_X_fr_FR_hip& update(const state_t&);
    };
    
    struct Type_fr_FR_thigh_X_fr_FR_hip : public TransformHomogeneous<Type_fr_FR_thigh_X_fr_FR_hip>
    {
        Type_fr_FR_thigh_X_fr_FR_hip();
        const Type_fr_FR_thigh_X_fr_FR_hip& update(const state_t&);
    };
    
    struct Type_fr_FR_hip_X_fr_FR_thigh : public TransformHomogeneous<Type_fr_FR_hip_X_fr_FR_thigh>
    {
        Type_fr_FR_hip_X_fr_FR_thigh();
        const Type_fr_FR_hip_X_fr_FR_thigh& update(const state_t&);
    };
    
    struct Type_fr_FR_calf_X_fr_FR_thigh : public TransformHomogeneous<Type_fr_FR_calf_X_fr_FR_thigh>
    {
        Type_fr_FR_calf_X_fr_FR_thigh();
        const Type_fr_FR_calf_X_fr_FR_thigh& update(const state_t&);
    };
    
    struct Type_fr_FR_thigh_X_fr_FR_calf : public TransformHomogeneous<Type_fr_FR_thigh_X_fr_FR_calf>
    {
        Type_fr_FR_thigh_X_fr_FR_calf();
        const Type_fr_FR_thigh_X_fr_FR_calf& update(const state_t&);
    };
    
    struct Type_fr_FL_hip_X_fr_base : public TransformHomogeneous<Type_fr_FL_hip_X_fr_base>
    {
        Type_fr_FL_hip_X_fr_base();
        const Type_fr_FL_hip_X_fr_base& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_FL_hip : public TransformHomogeneous<Type_fr_base_X_fr_FL_hip>
    {
        Type_fr_base_X_fr_FL_hip();
        const Type_fr_base_X_fr_FL_hip& update(const state_t&);
    };
    
    struct Type_fr_FL_thigh_X_fr_FL_hip : public TransformHomogeneous<Type_fr_FL_thigh_X_fr_FL_hip>
    {
        Type_fr_FL_thigh_X_fr_FL_hip();
        const Type_fr_FL_thigh_X_fr_FL_hip& update(const state_t&);
    };
    
    struct Type_fr_FL_hip_X_fr_FL_thigh : public TransformHomogeneous<Type_fr_FL_hip_X_fr_FL_thigh>
    {
        Type_fr_FL_hip_X_fr_FL_thigh();
        const Type_fr_FL_hip_X_fr_FL_thigh& update(const state_t&);
    };
    
    struct Type_fr_FL_calf_X_fr_FL_thigh : public TransformHomogeneous<Type_fr_FL_calf_X_fr_FL_thigh>
    {
        Type_fr_FL_calf_X_fr_FL_thigh();
        const Type_fr_FL_calf_X_fr_FL_thigh& update(const state_t&);
    };
    
    struct Type_fr_FL_thigh_X_fr_FL_calf : public TransformHomogeneous<Type_fr_FL_thigh_X_fr_FL_calf>
    {
        Type_fr_FL_thigh_X_fr_FL_calf();
        const Type_fr_FL_thigh_X_fr_FL_calf& update(const state_t&);
    };
    
    struct Type_fr_RR_hip_X_fr_base : public TransformHomogeneous<Type_fr_RR_hip_X_fr_base>
    {
        Type_fr_RR_hip_X_fr_base();
        const Type_fr_RR_hip_X_fr_base& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RR_hip : public TransformHomogeneous<Type_fr_base_X_fr_RR_hip>
    {
        Type_fr_base_X_fr_RR_hip();
        const Type_fr_base_X_fr_RR_hip& update(const state_t&);
    };
    
    struct Type_fr_RR_thigh_X_fr_RR_hip : public TransformHomogeneous<Type_fr_RR_thigh_X_fr_RR_hip>
    {
        Type_fr_RR_thigh_X_fr_RR_hip();
        const Type_fr_RR_thigh_X_fr_RR_hip& update(const state_t&);
    };
    
    struct Type_fr_RR_hip_X_fr_RR_thigh : public TransformHomogeneous<Type_fr_RR_hip_X_fr_RR_thigh>
    {
        Type_fr_RR_hip_X_fr_RR_thigh();
        const Type_fr_RR_hip_X_fr_RR_thigh& update(const state_t&);
    };
    
    struct Type_fr_RR_calf_X_fr_RR_thigh : public TransformHomogeneous<Type_fr_RR_calf_X_fr_RR_thigh>
    {
        Type_fr_RR_calf_X_fr_RR_thigh();
        const Type_fr_RR_calf_X_fr_RR_thigh& update(const state_t&);
    };
    
    struct Type_fr_RR_thigh_X_fr_RR_calf : public TransformHomogeneous<Type_fr_RR_thigh_X_fr_RR_calf>
    {
        Type_fr_RR_thigh_X_fr_RR_calf();
        const Type_fr_RR_thigh_X_fr_RR_calf& update(const state_t&);
    };
    
    struct Type_fr_RL_hip_X_fr_base : public TransformHomogeneous<Type_fr_RL_hip_X_fr_base>
    {
        Type_fr_RL_hip_X_fr_base();
        const Type_fr_RL_hip_X_fr_base& update(const state_t&);
    };
    
    struct Type_fr_base_X_fr_RL_hip : public TransformHomogeneous<Type_fr_base_X_fr_RL_hip>
    {
        Type_fr_base_X_fr_RL_hip();
        const Type_fr_base_X_fr_RL_hip& update(const state_t&);
    };
    
    struct Type_fr_RL_thigh_X_fr_RL_hip : public TransformHomogeneous<Type_fr_RL_thigh_X_fr_RL_hip>
    {
        Type_fr_RL_thigh_X_fr_RL_hip();
        const Type_fr_RL_thigh_X_fr_RL_hip& update(const state_t&);
    };
    
    struct Type_fr_RL_hip_X_fr_RL_thigh : public TransformHomogeneous<Type_fr_RL_hip_X_fr_RL_thigh>
    {
        Type_fr_RL_hip_X_fr_RL_thigh();
        const Type_fr_RL_hip_X_fr_RL_thigh& update(const state_t&);
    };
    
    struct Type_fr_RL_calf_X_fr_RL_thigh : public TransformHomogeneous<Type_fr_RL_calf_X_fr_RL_thigh>
    {
        Type_fr_RL_calf_X_fr_RL_thigh();
        const Type_fr_RL_calf_X_fr_RL_thigh& update(const state_t&);
    };
    
    struct Type_fr_RL_thigh_X_fr_RL_calf : public TransformHomogeneous<Type_fr_RL_thigh_X_fr_RL_calf>
    {
        Type_fr_RL_thigh_X_fr_RL_calf();
        const Type_fr_RL_thigh_X_fr_RL_calf& update(const state_t&);
    };
    
public:
    HomogeneousTransforms();
    void updateParams(const Params_lengths&, const Params_angles&);

    Type_fr_base_X_FL_foot fr_base_X_FL_foot;
    Type_fr_base_X_FR_foot fr_base_X_FR_foot;
    Type_fr_base_X_RL_foot fr_base_X_RL_foot;
    Type_fr_base_X_RR_foot fr_base_X_RR_foot;
    Type_imu_link_X_FL_foot imu_link_X_FL_foot;
    Type_imu_link_X_FR_foot imu_link_X_FR_foot;
    Type_imu_link_X_RL_foot imu_link_X_RL_foot;
    Type_imu_link_X_RR_foot imu_link_X_RR_foot;
    Type_fr_base_X_fr_FL_hip_joint fr_base_X_fr_FL_hip_joint;
    Type_fr_base_X_fr_FL_thigh_joint fr_base_X_fr_FL_thigh_joint;
    Type_fr_base_X_fr_FL_calf_joint fr_base_X_fr_FL_calf_joint;
    Type_fr_base_X_fr_FR_hip_joint fr_base_X_fr_FR_hip_joint;
    Type_fr_base_X_fr_FR_thigh_joint fr_base_X_fr_FR_thigh_joint;
    Type_fr_base_X_fr_FR_calf_joint fr_base_X_fr_FR_calf_joint;
    Type_fr_base_X_fr_RL_hip_joint fr_base_X_fr_RL_hip_joint;
    Type_fr_base_X_fr_RL_thigh_joint fr_base_X_fr_RL_thigh_joint;
    Type_fr_base_X_fr_RL_calf_joint fr_base_X_fr_RL_calf_joint;
    Type_fr_base_X_fr_RR_hip_joint fr_base_X_fr_RR_hip_joint;
    Type_fr_base_X_fr_RR_thigh_joint fr_base_X_fr_RR_thigh_joint;
    Type_fr_base_X_fr_RR_calf_joint fr_base_X_fr_RR_calf_joint;
    Type_imu_link_X_fr_FL_hip_joint imu_link_X_fr_FL_hip_joint;
    Type_imu_link_X_fr_FL_thigh_joint imu_link_X_fr_FL_thigh_joint;
    Type_imu_link_X_fr_FL_calf_joint imu_link_X_fr_FL_calf_joint;
    Type_imu_link_X_fr_FR_hip_joint imu_link_X_fr_FR_hip_joint;
    Type_imu_link_X_fr_FR_thigh_joint imu_link_X_fr_FR_thigh_joint;
    Type_imu_link_X_fr_FR_calf_joint imu_link_X_fr_FR_calf_joint;
    Type_imu_link_X_fr_RL_hip_joint imu_link_X_fr_RL_hip_joint;
    Type_imu_link_X_fr_RL_thigh_joint imu_link_X_fr_RL_thigh_joint;
    Type_imu_link_X_fr_RL_calf_joint imu_link_X_fr_RL_calf_joint;
    Type_imu_link_X_fr_RR_hip_joint imu_link_X_fr_RR_hip_joint;
    Type_imu_link_X_fr_RR_thigh_joint imu_link_X_fr_RR_thigh_joint;
    Type_imu_link_X_fr_RR_calf_joint imu_link_X_fr_RR_calf_joint;
    Type_fr_FR_hip_X_fr_base fr_FR_hip_X_fr_base;
    Type_fr_base_X_fr_FR_hip fr_base_X_fr_FR_hip;
    Type_fr_FR_thigh_X_fr_FR_hip fr_FR_thigh_X_fr_FR_hip;
    Type_fr_FR_hip_X_fr_FR_thigh fr_FR_hip_X_fr_FR_thigh;
    Type_fr_FR_calf_X_fr_FR_thigh fr_FR_calf_X_fr_FR_thigh;
    Type_fr_FR_thigh_X_fr_FR_calf fr_FR_thigh_X_fr_FR_calf;
    Type_fr_FL_hip_X_fr_base fr_FL_hip_X_fr_base;
    Type_fr_base_X_fr_FL_hip fr_base_X_fr_FL_hip;
    Type_fr_FL_thigh_X_fr_FL_hip fr_FL_thigh_X_fr_FL_hip;
    Type_fr_FL_hip_X_fr_FL_thigh fr_FL_hip_X_fr_FL_thigh;
    Type_fr_FL_calf_X_fr_FL_thigh fr_FL_calf_X_fr_FL_thigh;
    Type_fr_FL_thigh_X_fr_FL_calf fr_FL_thigh_X_fr_FL_calf;
    Type_fr_RR_hip_X_fr_base fr_RR_hip_X_fr_base;
    Type_fr_base_X_fr_RR_hip fr_base_X_fr_RR_hip;
    Type_fr_RR_thigh_X_fr_RR_hip fr_RR_thigh_X_fr_RR_hip;
    Type_fr_RR_hip_X_fr_RR_thigh fr_RR_hip_X_fr_RR_thigh;
    Type_fr_RR_calf_X_fr_RR_thigh fr_RR_calf_X_fr_RR_thigh;
    Type_fr_RR_thigh_X_fr_RR_calf fr_RR_thigh_X_fr_RR_calf;
    Type_fr_RL_hip_X_fr_base fr_RL_hip_X_fr_base;
    Type_fr_base_X_fr_RL_hip fr_base_X_fr_RL_hip;
    Type_fr_RL_thigh_X_fr_RL_hip fr_RL_thigh_X_fr_RL_hip;
    Type_fr_RL_hip_X_fr_RL_thigh fr_RL_hip_X_fr_RL_thigh;
    Type_fr_RL_calf_X_fr_RL_thigh fr_RL_calf_X_fr_RL_thigh;
    Type_fr_RL_thigh_X_fr_RL_calf fr_RL_thigh_X_fr_RL_calf;

protected:
    Parameters params;

}; //class 'HomogeneousTransforms'

}
}

#endif
