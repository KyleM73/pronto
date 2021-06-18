#include "jacobians.h"

pronto::a1::Jacobians::Jacobians()
:    fr_base_J_FL_foot(), 
    fr_base_J_FR_foot(), 
    fr_base_J_RL_foot(), 
    fr_base_J_RR_foot(), 
    imu_link_J_FL_foot(), 
    imu_link_J_FR_foot(), 
    imu_link_J_RL_foot(), 
    imu_link_J_RR_foot()
{}

void pronto::a1::Jacobians::updateParameters(const Params_lengths& _lengths, const Params_angles& _angles)
{
    params.lengths = _lengths;
    params.angles = _angles;
    params.trig.update();
}

pronto::a1::Jacobians::Type_fr_base_J_FL_foot::Type_fr_base_J_FL_foot()
{
    (*this)(0,0) = 1.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(3,0) = 0.0;
}

const pronto::a1::Jacobians::Type_fr_base_J_FL_foot& pronto::a1::Jacobians::Type_fr_base_J_FL_foot::update(const JointState& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    Scalar sin_q_FL_thigh_joint  = ScalarTraits::sin( q(FL_THIGH_JOINT) );
    Scalar cos_q_FL_thigh_joint  = ScalarTraits::cos( q(FL_THIGH_JOINT) );
    Scalar sin_q_FL_calf_joint  = ScalarTraits::sin( q(FL_CALF_JOINT) );
    Scalar cos_q_FL_calf_joint  = ScalarTraits::cos( q(FL_CALF_JOINT) );
    (*this)(1,1) = cos_q_FL_hip_joint;
    (*this)(1,2) = cos_q_FL_hip_joint;
    (*this)(2,1) = sin_q_FL_hip_joint;
    (*this)(2,2) = sin_q_FL_hip_joint;
    (*this)(3,1) = ( tx_FL_foot * sin_q_FL_calf_joint * sin_q_FL_thigh_joint)+(((- tx_FL_foot * cos_q_FL_calf_joint)- tx_FL_calf_joint) * cos_q_FL_thigh_joint);
    (*this)(3,2) = ( tx_FL_foot * sin_q_FL_calf_joint * sin_q_FL_thigh_joint)-( tx_FL_foot * cos_q_FL_calf_joint * cos_q_FL_thigh_joint);
    (*this)(4,0) = (- tx_FL_foot * sin_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)+((( tx_FL_foot * cos_q_FL_calf_joint)+ tx_FL_calf_joint) * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)-( ty_FL_thigh_joint * sin_q_FL_hip_joint);
    (*this)(4,1) = (((- tx_FL_foot * cos_q_FL_calf_joint)- tx_FL_calf_joint) * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)-( tx_FL_foot * sin_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(4,2) = (- tx_FL_foot * cos_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)-( tx_FL_foot * sin_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(5,0) = (- tx_FL_foot * sin_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+((( tx_FL_foot * cos_q_FL_calf_joint)+ tx_FL_calf_joint) * sin_q_FL_hip_joint * cos_q_FL_thigh_joint)+( ty_FL_thigh_joint * cos_q_FL_hip_joint);
    (*this)(5,1) = ((( tx_FL_foot * cos_q_FL_calf_joint)+ tx_FL_calf_joint) * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)+( tx_FL_foot * sin_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(5,2) = ( tx_FL_foot * cos_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)+( tx_FL_foot * sin_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint);
    return *this;
}

pronto::a1::Jacobians::Type_fr_base_J_FR_foot::Type_fr_base_J_FR_foot()
{
    (*this)(0,0) = 1.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(3,0) = 0.0;
}

const pronto::a1::Jacobians::Type_fr_base_J_FR_foot& pronto::a1::Jacobians::Type_fr_base_J_FR_foot::update(const JointState& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    Scalar sin_q_FR_thigh_joint  = ScalarTraits::sin( q(FR_THIGH_JOINT) );
    Scalar cos_q_FR_thigh_joint  = ScalarTraits::cos( q(FR_THIGH_JOINT) );
    Scalar sin_q_FR_calf_joint  = ScalarTraits::sin( q(FR_CALF_JOINT) );
    Scalar cos_q_FR_calf_joint  = ScalarTraits::cos( q(FR_CALF_JOINT) );
    (*this)(1,1) = cos_q_FR_hip_joint;
    (*this)(1,2) = cos_q_FR_hip_joint;
    (*this)(2,1) = sin_q_FR_hip_joint;
    (*this)(2,2) = sin_q_FR_hip_joint;
    (*this)(3,1) = ( tx_FR_foot * sin_q_FR_calf_joint * sin_q_FR_thigh_joint)+(((- tx_FR_foot * cos_q_FR_calf_joint)- tx_FR_calf_joint) * cos_q_FR_thigh_joint);
    (*this)(3,2) = ( tx_FR_foot * sin_q_FR_calf_joint * sin_q_FR_thigh_joint)-( tx_FR_foot * cos_q_FR_calf_joint * cos_q_FR_thigh_joint);
    (*this)(4,0) = (- tx_FR_foot * sin_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)+((( tx_FR_foot * cos_q_FR_calf_joint)+ tx_FR_calf_joint) * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)-( ty_FR_thigh_joint * sin_q_FR_hip_joint);
    (*this)(4,1) = (((- tx_FR_foot * cos_q_FR_calf_joint)- tx_FR_calf_joint) * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)-( tx_FR_foot * sin_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(4,2) = (- tx_FR_foot * cos_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)-( tx_FR_foot * sin_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(5,0) = (- tx_FR_foot * sin_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+((( tx_FR_foot * cos_q_FR_calf_joint)+ tx_FR_calf_joint) * sin_q_FR_hip_joint * cos_q_FR_thigh_joint)+( ty_FR_thigh_joint * cos_q_FR_hip_joint);
    (*this)(5,1) = ((( tx_FR_foot * cos_q_FR_calf_joint)+ tx_FR_calf_joint) * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)+( tx_FR_foot * sin_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(5,2) = ( tx_FR_foot * cos_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)+( tx_FR_foot * sin_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint);
    return *this;
}

pronto::a1::Jacobians::Type_fr_base_J_RL_foot::Type_fr_base_J_RL_foot()
{
    (*this)(0,0) = 1.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(3,0) = 0.0;
}

const pronto::a1::Jacobians::Type_fr_base_J_RL_foot& pronto::a1::Jacobians::Type_fr_base_J_RL_foot::update(const JointState& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    Scalar sin_q_RL_thigh_joint  = ScalarTraits::sin( q(RL_THIGH_JOINT) );
    Scalar cos_q_RL_thigh_joint  = ScalarTraits::cos( q(RL_THIGH_JOINT) );
    Scalar sin_q_RL_calf_joint  = ScalarTraits::sin( q(RL_CALF_JOINT) );
    Scalar cos_q_RL_calf_joint  = ScalarTraits::cos( q(RL_CALF_JOINT) );
    (*this)(1,1) = cos_q_RL_hip_joint;
    (*this)(1,2) = cos_q_RL_hip_joint;
    (*this)(2,1) = sin_q_RL_hip_joint;
    (*this)(2,2) = sin_q_RL_hip_joint;
    (*this)(3,1) = ( tx_RL_foot * sin_q_RL_calf_joint * sin_q_RL_thigh_joint)+(((- tx_RL_foot * cos_q_RL_calf_joint)- tx_RL_calf_joint) * cos_q_RL_thigh_joint);
    (*this)(3,2) = ( tx_RL_foot * sin_q_RL_calf_joint * sin_q_RL_thigh_joint)-( tx_RL_foot * cos_q_RL_calf_joint * cos_q_RL_thigh_joint);
    (*this)(4,0) = (- tx_RL_foot * sin_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)+((( tx_RL_foot * cos_q_RL_calf_joint)+ tx_RL_calf_joint) * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)-( ty_RL_thigh_joint * sin_q_RL_hip_joint);
    (*this)(4,1) = (((- tx_RL_foot * cos_q_RL_calf_joint)- tx_RL_calf_joint) * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)-( tx_RL_foot * sin_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(4,2) = (- tx_RL_foot * cos_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)-( tx_RL_foot * sin_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(5,0) = (- tx_RL_foot * sin_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+((( tx_RL_foot * cos_q_RL_calf_joint)+ tx_RL_calf_joint) * sin_q_RL_hip_joint * cos_q_RL_thigh_joint)+( ty_RL_thigh_joint * cos_q_RL_hip_joint);
    (*this)(5,1) = ((( tx_RL_foot * cos_q_RL_calf_joint)+ tx_RL_calf_joint) * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)+( tx_RL_foot * sin_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(5,2) = ( tx_RL_foot * cos_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)+( tx_RL_foot * sin_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint);
    return *this;
}

pronto::a1::Jacobians::Type_fr_base_J_RR_foot::Type_fr_base_J_RR_foot()
{
    (*this)(0,0) = 1.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(3,0) = 0.0;
}

const pronto::a1::Jacobians::Type_fr_base_J_RR_foot& pronto::a1::Jacobians::Type_fr_base_J_RR_foot::update(const JointState& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    Scalar sin_q_RR_thigh_joint  = ScalarTraits::sin( q(RR_THIGH_JOINT) );
    Scalar cos_q_RR_thigh_joint  = ScalarTraits::cos( q(RR_THIGH_JOINT) );
    Scalar sin_q_RR_calf_joint  = ScalarTraits::sin( q(RR_CALF_JOINT) );
    Scalar cos_q_RR_calf_joint  = ScalarTraits::cos( q(RR_CALF_JOINT) );
    (*this)(1,1) = cos_q_RR_hip_joint;
    (*this)(1,2) = cos_q_RR_hip_joint;
    (*this)(2,1) = sin_q_RR_hip_joint;
    (*this)(2,2) = sin_q_RR_hip_joint;
    (*this)(3,1) = ( tx_RR_foot * sin_q_RR_calf_joint * sin_q_RR_thigh_joint)+(((- tx_RR_foot * cos_q_RR_calf_joint)- tx_RR_calf_joint) * cos_q_RR_thigh_joint);
    (*this)(3,2) = ( tx_RR_foot * sin_q_RR_calf_joint * sin_q_RR_thigh_joint)-( tx_RR_foot * cos_q_RR_calf_joint * cos_q_RR_thigh_joint);
    (*this)(4,0) = (- tx_RR_foot * sin_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)+((( tx_RR_foot * cos_q_RR_calf_joint)+ tx_RR_calf_joint) * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)-( ty_RR_thigh_joint * sin_q_RR_hip_joint);
    (*this)(4,1) = (((- tx_RR_foot * cos_q_RR_calf_joint)- tx_RR_calf_joint) * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)-( tx_RR_foot * sin_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(4,2) = (- tx_RR_foot * cos_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)-( tx_RR_foot * sin_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(5,0) = (- tx_RR_foot * sin_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+((( tx_RR_foot * cos_q_RR_calf_joint)+ tx_RR_calf_joint) * sin_q_RR_hip_joint * cos_q_RR_thigh_joint)+( ty_RR_thigh_joint * cos_q_RR_hip_joint);
    (*this)(5,1) = ((( tx_RR_foot * cos_q_RR_calf_joint)+ tx_RR_calf_joint) * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)+( tx_RR_foot * sin_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(5,2) = ( tx_RR_foot * cos_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)+( tx_RR_foot * sin_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint);
    return *this;
}

pronto::a1::Jacobians::Type_imu_link_J_FL_foot::Type_imu_link_J_FL_foot()
{
    (*this)(0,0) = 1.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(3,0) = 0.0;
}

const pronto::a1::Jacobians::Type_imu_link_J_FL_foot& pronto::a1::Jacobians::Type_imu_link_J_FL_foot::update(const JointState& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    Scalar sin_q_FL_thigh_joint  = ScalarTraits::sin( q(FL_THIGH_JOINT) );
    Scalar cos_q_FL_thigh_joint  = ScalarTraits::cos( q(FL_THIGH_JOINT) );
    Scalar sin_q_FL_calf_joint  = ScalarTraits::sin( q(FL_CALF_JOINT) );
    Scalar cos_q_FL_calf_joint  = ScalarTraits::cos( q(FL_CALF_JOINT) );
    (*this)(1,1) = cos_q_FL_hip_joint;
    (*this)(1,2) = cos_q_FL_hip_joint;
    (*this)(2,1) = sin_q_FL_hip_joint;
    (*this)(2,2) = sin_q_FL_hip_joint;
    (*this)(3,1) = ( tx_FL_foot * sin_q_FL_calf_joint * sin_q_FL_thigh_joint)+(((- tx_FL_foot * cos_q_FL_calf_joint)- tx_FL_calf_joint) * cos_q_FL_thigh_joint);
    (*this)(3,2) = ( tx_FL_foot * sin_q_FL_calf_joint * sin_q_FL_thigh_joint)-( tx_FL_foot * cos_q_FL_calf_joint * cos_q_FL_thigh_joint);
    (*this)(4,0) = (- tx_FL_foot * sin_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)+((( tx_FL_foot * cos_q_FL_calf_joint)+ tx_FL_calf_joint) * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)-( ty_FL_thigh_joint * sin_q_FL_hip_joint);
    (*this)(4,1) = (((- tx_FL_foot * cos_q_FL_calf_joint)- tx_FL_calf_joint) * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)-( tx_FL_foot * sin_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(4,2) = (- tx_FL_foot * cos_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)-( tx_FL_foot * sin_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(5,0) = (- tx_FL_foot * sin_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+((( tx_FL_foot * cos_q_FL_calf_joint)+ tx_FL_calf_joint) * sin_q_FL_hip_joint * cos_q_FL_thigh_joint)+( ty_FL_thigh_joint * cos_q_FL_hip_joint);
    (*this)(5,1) = ((( tx_FL_foot * cos_q_FL_calf_joint)+ tx_FL_calf_joint) * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)+( tx_FL_foot * sin_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(5,2) = ( tx_FL_foot * cos_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)+( tx_FL_foot * sin_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint);
    return *this;
}

pronto::a1::Jacobians::Type_imu_link_J_FR_foot::Type_imu_link_J_FR_foot()
{
    (*this)(0,0) = 1.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(3,0) = 0.0;
}

const pronto::a1::Jacobians::Type_imu_link_J_FR_foot& pronto::a1::Jacobians::Type_imu_link_J_FR_foot::update(const JointState& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    Scalar sin_q_FR_thigh_joint  = ScalarTraits::sin( q(FR_THIGH_JOINT) );
    Scalar cos_q_FR_thigh_joint  = ScalarTraits::cos( q(FR_THIGH_JOINT) );
    Scalar sin_q_FR_calf_joint  = ScalarTraits::sin( q(FR_CALF_JOINT) );
    Scalar cos_q_FR_calf_joint  = ScalarTraits::cos( q(FR_CALF_JOINT) );
    (*this)(1,1) = cos_q_FR_hip_joint;
    (*this)(1,2) = cos_q_FR_hip_joint;
    (*this)(2,1) = sin_q_FR_hip_joint;
    (*this)(2,2) = sin_q_FR_hip_joint;
    (*this)(3,1) = ( tx_FR_foot * sin_q_FR_calf_joint * sin_q_FR_thigh_joint)+(((- tx_FR_foot * cos_q_FR_calf_joint)- tx_FR_calf_joint) * cos_q_FR_thigh_joint);
    (*this)(3,2) = ( tx_FR_foot * sin_q_FR_calf_joint * sin_q_FR_thigh_joint)-( tx_FR_foot * cos_q_FR_calf_joint * cos_q_FR_thigh_joint);
    (*this)(4,0) = (- tx_FR_foot * sin_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)+((( tx_FR_foot * cos_q_FR_calf_joint)+ tx_FR_calf_joint) * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)-( ty_FR_thigh_joint * sin_q_FR_hip_joint);
    (*this)(4,1) = (((- tx_FR_foot * cos_q_FR_calf_joint)- tx_FR_calf_joint) * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)-( tx_FR_foot * sin_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(4,2) = (- tx_FR_foot * cos_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)-( tx_FR_foot * sin_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(5,0) = (- tx_FR_foot * sin_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+((( tx_FR_foot * cos_q_FR_calf_joint)+ tx_FR_calf_joint) * sin_q_FR_hip_joint * cos_q_FR_thigh_joint)+( ty_FR_thigh_joint * cos_q_FR_hip_joint);
    (*this)(5,1) = ((( tx_FR_foot * cos_q_FR_calf_joint)+ tx_FR_calf_joint) * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)+( tx_FR_foot * sin_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(5,2) = ( tx_FR_foot * cos_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)+( tx_FR_foot * sin_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint);
    return *this;
}

pronto::a1::Jacobians::Type_imu_link_J_RL_foot::Type_imu_link_J_RL_foot()
{
    (*this)(0,0) = 1.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(3,0) = 0.0;
}

const pronto::a1::Jacobians::Type_imu_link_J_RL_foot& pronto::a1::Jacobians::Type_imu_link_J_RL_foot::update(const JointState& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    Scalar sin_q_RL_thigh_joint  = ScalarTraits::sin( q(RL_THIGH_JOINT) );
    Scalar cos_q_RL_thigh_joint  = ScalarTraits::cos( q(RL_THIGH_JOINT) );
    Scalar sin_q_RL_calf_joint  = ScalarTraits::sin( q(RL_CALF_JOINT) );
    Scalar cos_q_RL_calf_joint  = ScalarTraits::cos( q(RL_CALF_JOINT) );
    (*this)(1,1) = cos_q_RL_hip_joint;
    (*this)(1,2) = cos_q_RL_hip_joint;
    (*this)(2,1) = sin_q_RL_hip_joint;
    (*this)(2,2) = sin_q_RL_hip_joint;
    (*this)(3,1) = ( tx_RL_foot * sin_q_RL_calf_joint * sin_q_RL_thigh_joint)+(((- tx_RL_foot * cos_q_RL_calf_joint)- tx_RL_calf_joint) * cos_q_RL_thigh_joint);
    (*this)(3,2) = ( tx_RL_foot * sin_q_RL_calf_joint * sin_q_RL_thigh_joint)-( tx_RL_foot * cos_q_RL_calf_joint * cos_q_RL_thigh_joint);
    (*this)(4,0) = (- tx_RL_foot * sin_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)+((( tx_RL_foot * cos_q_RL_calf_joint)+ tx_RL_calf_joint) * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)-( ty_RL_thigh_joint * sin_q_RL_hip_joint);
    (*this)(4,1) = (((- tx_RL_foot * cos_q_RL_calf_joint)- tx_RL_calf_joint) * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)-( tx_RL_foot * sin_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(4,2) = (- tx_RL_foot * cos_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)-( tx_RL_foot * sin_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(5,0) = (- tx_RL_foot * sin_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+((( tx_RL_foot * cos_q_RL_calf_joint)+ tx_RL_calf_joint) * sin_q_RL_hip_joint * cos_q_RL_thigh_joint)+( ty_RL_thigh_joint * cos_q_RL_hip_joint);
    (*this)(5,1) = ((( tx_RL_foot * cos_q_RL_calf_joint)+ tx_RL_calf_joint) * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)+( tx_RL_foot * sin_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(5,2) = ( tx_RL_foot * cos_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)+( tx_RL_foot * sin_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint);
    return *this;
}

pronto::a1::Jacobians::Type_imu_link_J_RR_foot::Type_imu_link_J_RR_foot()
{
    (*this)(0,0) = 1.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(3,0) = 0.0;
}

const pronto::a1::Jacobians::Type_imu_link_J_RR_foot& pronto::a1::Jacobians::Type_imu_link_J_RR_foot::update(const JointState& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    Scalar sin_q_RR_thigh_joint  = ScalarTraits::sin( q(RR_THIGH_JOINT) );
    Scalar cos_q_RR_thigh_joint  = ScalarTraits::cos( q(RR_THIGH_JOINT) );
    Scalar sin_q_RR_calf_joint  = ScalarTraits::sin( q(RR_CALF_JOINT) );
    Scalar cos_q_RR_calf_joint  = ScalarTraits::cos( q(RR_CALF_JOINT) );
    (*this)(1,1) = cos_q_RR_hip_joint;
    (*this)(1,2) = cos_q_RR_hip_joint;
    (*this)(2,1) = sin_q_RR_hip_joint;
    (*this)(2,2) = sin_q_RR_hip_joint;
    (*this)(3,1) = ( tx_RR_foot * sin_q_RR_calf_joint * sin_q_RR_thigh_joint)+(((- tx_RR_foot * cos_q_RR_calf_joint)- tx_RR_calf_joint) * cos_q_RR_thigh_joint);
    (*this)(3,2) = ( tx_RR_foot * sin_q_RR_calf_joint * sin_q_RR_thigh_joint)-( tx_RR_foot * cos_q_RR_calf_joint * cos_q_RR_thigh_joint);
    (*this)(4,0) = (- tx_RR_foot * sin_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)+((( tx_RR_foot * cos_q_RR_calf_joint)+ tx_RR_calf_joint) * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)-( ty_RR_thigh_joint * sin_q_RR_hip_joint);
    (*this)(4,1) = (((- tx_RR_foot * cos_q_RR_calf_joint)- tx_RR_calf_joint) * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)-( tx_RR_foot * sin_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(4,2) = (- tx_RR_foot * cos_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)-( tx_RR_foot * sin_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(5,0) = (- tx_RR_foot * sin_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+((( tx_RR_foot * cos_q_RR_calf_joint)+ tx_RR_calf_joint) * sin_q_RR_hip_joint * cos_q_RR_thigh_joint)+( ty_RR_thigh_joint * cos_q_RR_hip_joint);
    (*this)(5,1) = ((( tx_RR_foot * cos_q_RR_calf_joint)+ tx_RR_calf_joint) * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)+( tx_RR_foot * sin_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(5,2) = ( tx_RR_foot * cos_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)+( tx_RR_foot * sin_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint);
    return *this;
}

