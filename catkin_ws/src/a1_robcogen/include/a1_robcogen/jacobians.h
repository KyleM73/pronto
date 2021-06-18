#ifndef A1_JACOBIANS_H_
#define A1_JACOBIANS_H_

#include <iit/rbd/TransformsBase.h>
#include "declarations.h"
#include "kinematics_parameters.h"
#include "transforms.h" // to use the same 'Parameters' struct defined there
#include "model_constants.h"

namespace pronto {
namespace a1 {

template<int COLS, class M>
class JacobianT : public iit::rbd::JacobianBase<JointState, COLS, M>
{};

/**
 *
 */
class Jacobians
{
    public:
        
        struct Type_fr_base_J_FL_foot : public JacobianT<3, Type_fr_base_J_FL_foot>
        {
            Type_fr_base_J_FL_foot();
            const Type_fr_base_J_FL_foot& update(const JointState&);
        };
        
        
        struct Type_fr_base_J_FR_foot : public JacobianT<3, Type_fr_base_J_FR_foot>
        {
            Type_fr_base_J_FR_foot();
            const Type_fr_base_J_FR_foot& update(const JointState&);
        };
        
        
        struct Type_fr_base_J_RL_foot : public JacobianT<3, Type_fr_base_J_RL_foot>
        {
            Type_fr_base_J_RL_foot();
            const Type_fr_base_J_RL_foot& update(const JointState&);
        };
        
        
        struct Type_fr_base_J_RR_foot : public JacobianT<3, Type_fr_base_J_RR_foot>
        {
            Type_fr_base_J_RR_foot();
            const Type_fr_base_J_RR_foot& update(const JointState&);
        };
        
        
        struct Type_imu_link_J_FL_foot : public JacobianT<3, Type_imu_link_J_FL_foot>
        {
            Type_imu_link_J_FL_foot();
            const Type_imu_link_J_FL_foot& update(const JointState&);
        };
        
        
        struct Type_imu_link_J_FR_foot : public JacobianT<3, Type_imu_link_J_FR_foot>
        {
            Type_imu_link_J_FR_foot();
            const Type_imu_link_J_FR_foot& update(const JointState&);
        };
        
        
        struct Type_imu_link_J_RL_foot : public JacobianT<3, Type_imu_link_J_RL_foot>
        {
            Type_imu_link_J_RL_foot();
            const Type_imu_link_J_RL_foot& update(const JointState&);
        };
        
        
        struct Type_imu_link_J_RR_foot : public JacobianT<3, Type_imu_link_J_RR_foot>
        {
            Type_imu_link_J_RR_foot();
            const Type_imu_link_J_RR_foot& update(const JointState&);
        };
        
    public:
        Jacobians();
        void updateParameters(const Params_lengths& _lengths, const Params_angles& _angles);
    public:
        Type_fr_base_J_FL_foot fr_base_J_FL_foot;
        Type_fr_base_J_FR_foot fr_base_J_FR_foot;
        Type_fr_base_J_RL_foot fr_base_J_RL_foot;
        Type_fr_base_J_RR_foot fr_base_J_RR_foot;
        Type_imu_link_J_FL_foot imu_link_J_FL_foot;
        Type_imu_link_J_FR_foot imu_link_J_FR_foot;
        Type_imu_link_J_RL_foot imu_link_J_RL_foot;
        Type_imu_link_J_RR_foot imu_link_J_RR_foot;

    protected:
        Parameters params;

};


}
}

#endif
