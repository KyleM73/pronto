#include "transforms.h"

using namespace pronto::a1;

// Constructors

MotionTransforms::MotionTransforms()
 :     fr_base_X_FL_foot(),
    fr_base_X_FR_foot(),
    fr_base_X_RL_foot(),
    fr_base_X_RR_foot(),
    imu_link_X_FL_foot(),
    imu_link_X_FR_foot(),
    imu_link_X_RL_foot(),
    imu_link_X_RR_foot(),
    fr_base_X_fr_FL_hip_joint(),
    fr_base_X_fr_FL_thigh_joint(),
    fr_base_X_fr_FL_calf_joint(),
    fr_base_X_fr_FR_hip_joint(),
    fr_base_X_fr_FR_thigh_joint(),
    fr_base_X_fr_FR_calf_joint(),
    fr_base_X_fr_RL_hip_joint(),
    fr_base_X_fr_RL_thigh_joint(),
    fr_base_X_fr_RL_calf_joint(),
    fr_base_X_fr_RR_hip_joint(),
    fr_base_X_fr_RR_thigh_joint(),
    fr_base_X_fr_RR_calf_joint(),
    imu_link_X_fr_FL_hip_joint(),
    imu_link_X_fr_FL_thigh_joint(),
    imu_link_X_fr_FL_calf_joint(),
    imu_link_X_fr_FR_hip_joint(),
    imu_link_X_fr_FR_thigh_joint(),
    imu_link_X_fr_FR_calf_joint(),
    imu_link_X_fr_RL_hip_joint(),
    imu_link_X_fr_RL_thigh_joint(),
    imu_link_X_fr_RL_calf_joint(),
    imu_link_X_fr_RR_hip_joint(),
    imu_link_X_fr_RR_thigh_joint(),
    imu_link_X_fr_RR_calf_joint(),
    fr_FR_hip_X_fr_base(),
    fr_base_X_fr_FR_hip(),
    fr_FR_thigh_X_fr_FR_hip(),
    fr_FR_hip_X_fr_FR_thigh(),
    fr_FR_calf_X_fr_FR_thigh(),
    fr_FR_thigh_X_fr_FR_calf(),
    fr_FL_hip_X_fr_base(),
    fr_base_X_fr_FL_hip(),
    fr_FL_thigh_X_fr_FL_hip(),
    fr_FL_hip_X_fr_FL_thigh(),
    fr_FL_calf_X_fr_FL_thigh(),
    fr_FL_thigh_X_fr_FL_calf(),
    fr_RR_hip_X_fr_base(),
    fr_base_X_fr_RR_hip(),
    fr_RR_thigh_X_fr_RR_hip(),
    fr_RR_hip_X_fr_RR_thigh(),
    fr_RR_calf_X_fr_RR_thigh(),
    fr_RR_thigh_X_fr_RR_calf(),
    fr_RL_hip_X_fr_base(),
    fr_base_X_fr_RL_hip(),
    fr_RL_thigh_X_fr_RL_hip(),
    fr_RL_hip_X_fr_RL_thigh(),
    fr_RL_calf_X_fr_RL_thigh(),
    fr_RL_thigh_X_fr_RL_calf()
{}
void MotionTransforms::updateParams(const Params_lengths& v_lengths, const Params_angles& v_angles)
{
    params.lengths = v_lengths;
    params.angles = v_angles;
    params.trig.update();
}

ForceTransforms::ForceTransforms()
 :     fr_base_X_FL_foot(),
    fr_base_X_FR_foot(),
    fr_base_X_RL_foot(),
    fr_base_X_RR_foot(),
    imu_link_X_FL_foot(),
    imu_link_X_FR_foot(),
    imu_link_X_RL_foot(),
    imu_link_X_RR_foot(),
    fr_base_X_fr_FL_hip_joint(),
    fr_base_X_fr_FL_thigh_joint(),
    fr_base_X_fr_FL_calf_joint(),
    fr_base_X_fr_FR_hip_joint(),
    fr_base_X_fr_FR_thigh_joint(),
    fr_base_X_fr_FR_calf_joint(),
    fr_base_X_fr_RL_hip_joint(),
    fr_base_X_fr_RL_thigh_joint(),
    fr_base_X_fr_RL_calf_joint(),
    fr_base_X_fr_RR_hip_joint(),
    fr_base_X_fr_RR_thigh_joint(),
    fr_base_X_fr_RR_calf_joint(),
    imu_link_X_fr_FL_hip_joint(),
    imu_link_X_fr_FL_thigh_joint(),
    imu_link_X_fr_FL_calf_joint(),
    imu_link_X_fr_FR_hip_joint(),
    imu_link_X_fr_FR_thigh_joint(),
    imu_link_X_fr_FR_calf_joint(),
    imu_link_X_fr_RL_hip_joint(),
    imu_link_X_fr_RL_thigh_joint(),
    imu_link_X_fr_RL_calf_joint(),
    imu_link_X_fr_RR_hip_joint(),
    imu_link_X_fr_RR_thigh_joint(),
    imu_link_X_fr_RR_calf_joint(),
    fr_FR_hip_X_fr_base(),
    fr_base_X_fr_FR_hip(),
    fr_FR_thigh_X_fr_FR_hip(),
    fr_FR_hip_X_fr_FR_thigh(),
    fr_FR_calf_X_fr_FR_thigh(),
    fr_FR_thigh_X_fr_FR_calf(),
    fr_FL_hip_X_fr_base(),
    fr_base_X_fr_FL_hip(),
    fr_FL_thigh_X_fr_FL_hip(),
    fr_FL_hip_X_fr_FL_thigh(),
    fr_FL_calf_X_fr_FL_thigh(),
    fr_FL_thigh_X_fr_FL_calf(),
    fr_RR_hip_X_fr_base(),
    fr_base_X_fr_RR_hip(),
    fr_RR_thigh_X_fr_RR_hip(),
    fr_RR_hip_X_fr_RR_thigh(),
    fr_RR_calf_X_fr_RR_thigh(),
    fr_RR_thigh_X_fr_RR_calf(),
    fr_RL_hip_X_fr_base(),
    fr_base_X_fr_RL_hip(),
    fr_RL_thigh_X_fr_RL_hip(),
    fr_RL_hip_X_fr_RL_thigh(),
    fr_RL_calf_X_fr_RL_thigh(),
    fr_RL_thigh_X_fr_RL_calf()
{}
void ForceTransforms::updateParams(const Params_lengths& v_lengths, const Params_angles& v_angles)
{
    params.lengths = v_lengths;
    params.angles = v_angles;
    params.trig.update();
}

HomogeneousTransforms::HomogeneousTransforms()
 :     fr_base_X_FL_foot(),
    fr_base_X_FR_foot(),
    fr_base_X_RL_foot(),
    fr_base_X_RR_foot(),
    imu_link_X_FL_foot(),
    imu_link_X_FR_foot(),
    imu_link_X_RL_foot(),
    imu_link_X_RR_foot(),
    fr_base_X_fr_FL_hip_joint(),
    fr_base_X_fr_FL_thigh_joint(),
    fr_base_X_fr_FL_calf_joint(),
    fr_base_X_fr_FR_hip_joint(),
    fr_base_X_fr_FR_thigh_joint(),
    fr_base_X_fr_FR_calf_joint(),
    fr_base_X_fr_RL_hip_joint(),
    fr_base_X_fr_RL_thigh_joint(),
    fr_base_X_fr_RL_calf_joint(),
    fr_base_X_fr_RR_hip_joint(),
    fr_base_X_fr_RR_thigh_joint(),
    fr_base_X_fr_RR_calf_joint(),
    imu_link_X_fr_FL_hip_joint(),
    imu_link_X_fr_FL_thigh_joint(),
    imu_link_X_fr_FL_calf_joint(),
    imu_link_X_fr_FR_hip_joint(),
    imu_link_X_fr_FR_thigh_joint(),
    imu_link_X_fr_FR_calf_joint(),
    imu_link_X_fr_RL_hip_joint(),
    imu_link_X_fr_RL_thigh_joint(),
    imu_link_X_fr_RL_calf_joint(),
    imu_link_X_fr_RR_hip_joint(),
    imu_link_X_fr_RR_thigh_joint(),
    imu_link_X_fr_RR_calf_joint(),
    fr_FR_hip_X_fr_base(),
    fr_base_X_fr_FR_hip(),
    fr_FR_thigh_X_fr_FR_hip(),
    fr_FR_hip_X_fr_FR_thigh(),
    fr_FR_calf_X_fr_FR_thigh(),
    fr_FR_thigh_X_fr_FR_calf(),
    fr_FL_hip_X_fr_base(),
    fr_base_X_fr_FL_hip(),
    fr_FL_thigh_X_fr_FL_hip(),
    fr_FL_hip_X_fr_FL_thigh(),
    fr_FL_calf_X_fr_FL_thigh(),
    fr_FL_thigh_X_fr_FL_calf(),
    fr_RR_hip_X_fr_base(),
    fr_base_X_fr_RR_hip(),
    fr_RR_thigh_X_fr_RR_hip(),
    fr_RR_hip_X_fr_RR_thigh(),
    fr_RR_calf_X_fr_RR_thigh(),
    fr_RR_thigh_X_fr_RR_calf(),
    fr_RL_hip_X_fr_base(),
    fr_base_X_fr_RL_hip(),
    fr_RL_thigh_X_fr_RL_hip(),
    fr_RL_hip_X_fr_RL_thigh(),
    fr_RL_calf_X_fr_RL_thigh(),
    fr_RL_thigh_X_fr_RL_calf()
{}
void HomogeneousTransforms::updateParams(const Params_lengths& v_lengths, const Params_angles& v_angles)
{
    params.lengths = v_lengths;
    params.angles = v_angles;
    params.trig.update();
}

MotionTransforms::Type_fr_base_X_FL_foot::Type_fr_base_X_FL_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,4) = 0.0;
}

const MotionTransforms::Type_fr_base_X_FL_foot& MotionTransforms::Type_fr_base_X_FL_foot::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    Scalar sin_q_FL_thigh_joint  = ScalarTraits::sin( q(FL_THIGH_JOINT) );
    Scalar cos_q_FL_thigh_joint  = ScalarTraits::cos( q(FL_THIGH_JOINT) );
    Scalar sin_q_FL_calf_joint  = ScalarTraits::sin( q(FL_CALF_JOINT) );
    Scalar cos_q_FL_calf_joint  = ScalarTraits::cos( q(FL_CALF_JOINT) );
    (*this)(0,0) = (cos_q_FL_calf_joint * cos_q_FL_thigh_joint)-(sin_q_FL_calf_joint * sin_q_FL_thigh_joint);
    (*this)(0,2) = (cos_q_FL_calf_joint * sin_q_FL_thigh_joint)+(sin_q_FL_calf_joint * cos_q_FL_thigh_joint);
    (*this)(1,0) = (cos_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+(sin_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(1,1) = cos_q_FL_hip_joint;
    (*this)(1,2) = (sin_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)-(cos_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(2,0) = (-cos_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)-(sin_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(2,1) = sin_q_FL_hip_joint;
    (*this)(2,2) = (cos_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)-(sin_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint);
    (*this)(3,0) = (((- ty_FL_hip_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_thigh_joint * cos_q_FL_calf_joint)) * sin_q_FL_thigh_joint)+(((- ty_FL_hip_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_thigh_joint * sin_q_FL_calf_joint)) * cos_q_FL_thigh_joint);
    (*this)(3,1) = (- tx_FL_foot * sin_q_FL_calf_joint * sin_q_FL_thigh_joint)+((( tx_FL_foot * cos_q_FL_calf_joint)+ tx_FL_calf_joint) * cos_q_FL_thigh_joint)+( ty_FL_hip_joint * sin_q_FL_hip_joint);
    (*this)(3,2) = (((- ty_FL_hip_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_thigh_joint * sin_q_FL_calf_joint)) * sin_q_FL_thigh_joint)+((( ty_FL_hip_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)+( ty_FL_thigh_joint * cos_q_FL_calf_joint)) * cos_q_FL_thigh_joint);
    (*this)(3,3) = (cos_q_FL_calf_joint * cos_q_FL_thigh_joint)-(sin_q_FL_calf_joint * sin_q_FL_thigh_joint);
    (*this)(3,5) = (cos_q_FL_calf_joint * sin_q_FL_thigh_joint)+(sin_q_FL_calf_joint * cos_q_FL_thigh_joint);
    (*this)(4,0) = ((( tx_FL_hip_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_thigh_joint * sin_q_FL_calf_joint * sin_q_FL_hip_joint)) * sin_q_FL_thigh_joint)+((( ty_FL_thigh_joint * cos_q_FL_calf_joint * sin_q_FL_hip_joint)+( tx_FL_hip_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)) * cos_q_FL_thigh_joint)+(((- tx_FL_calf_joint * cos_q_FL_calf_joint)- tx_FL_foot) * cos_q_FL_hip_joint);
    (*this)(4,1) = ((( tx_FL_foot * cos_q_FL_calf_joint)+ tx_FL_calf_joint) * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+( tx_FL_foot * sin_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint)-( tx_FL_hip_joint * sin_q_FL_hip_joint);
    (*this)(4,2) = ((( ty_FL_thigh_joint * cos_q_FL_calf_joint * sin_q_FL_hip_joint)+( tx_FL_hip_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)) * sin_q_FL_thigh_joint)+((( ty_FL_thigh_joint * sin_q_FL_calf_joint * sin_q_FL_hip_joint)-( tx_FL_hip_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)) * cos_q_FL_thigh_joint)-( tx_FL_calf_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint);
    (*this)(4,3) = (cos_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+(sin_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(4,4) = cos_q_FL_hip_joint;
    (*this)(4,5) = (sin_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)-(cos_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(5,0) = ((( tx_FL_hip_joint * cos_q_FL_calf_joint * sin_q_FL_hip_joint)+( ty_FL_thigh_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)+( ty_FL_hip_joint * sin_q_FL_calf_joint)) * sin_q_FL_thigh_joint)+((( tx_FL_hip_joint * sin_q_FL_calf_joint * sin_q_FL_hip_joint)-( ty_FL_thigh_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_hip_joint * cos_q_FL_calf_joint)) * cos_q_FL_thigh_joint)+(((- tx_FL_calf_joint * cos_q_FL_calf_joint)- tx_FL_foot) * sin_q_FL_hip_joint);
    (*this)(5,1) = (((- tx_FL_foot * cos_q_FL_calf_joint)- tx_FL_calf_joint) * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)-( tx_FL_foot * sin_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)+( tx_FL_hip_joint * cos_q_FL_hip_joint);
    (*this)(5,2) = ((( tx_FL_hip_joint * sin_q_FL_calf_joint * sin_q_FL_hip_joint)-( ty_FL_thigh_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_hip_joint * cos_q_FL_calf_joint)) * sin_q_FL_thigh_joint)+(((- tx_FL_hip_joint * cos_q_FL_calf_joint * sin_q_FL_hip_joint)-( ty_FL_thigh_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_hip_joint * sin_q_FL_calf_joint)) * cos_q_FL_thigh_joint)-( tx_FL_calf_joint * sin_q_FL_calf_joint * sin_q_FL_hip_joint);
    (*this)(5,3) = (-cos_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)-(sin_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(5,4) = sin_q_FL_hip_joint;
    (*this)(5,5) = (cos_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)-(sin_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint);
    return *this;
}
MotionTransforms::Type_fr_base_X_FR_foot::Type_fr_base_X_FR_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,4) = 0.0;
}

const MotionTransforms::Type_fr_base_X_FR_foot& MotionTransforms::Type_fr_base_X_FR_foot::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    Scalar sin_q_FR_thigh_joint  = ScalarTraits::sin( q(FR_THIGH_JOINT) );
    Scalar cos_q_FR_thigh_joint  = ScalarTraits::cos( q(FR_THIGH_JOINT) );
    Scalar sin_q_FR_calf_joint  = ScalarTraits::sin( q(FR_CALF_JOINT) );
    Scalar cos_q_FR_calf_joint  = ScalarTraits::cos( q(FR_CALF_JOINT) );
    (*this)(0,0) = (cos_q_FR_calf_joint * cos_q_FR_thigh_joint)-(sin_q_FR_calf_joint * sin_q_FR_thigh_joint);
    (*this)(0,2) = (cos_q_FR_calf_joint * sin_q_FR_thigh_joint)+(sin_q_FR_calf_joint * cos_q_FR_thigh_joint);
    (*this)(1,0) = (cos_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+(sin_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(1,1) = cos_q_FR_hip_joint;
    (*this)(1,2) = (sin_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)-(cos_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(2,0) = (-cos_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)-(sin_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(2,1) = sin_q_FR_hip_joint;
    (*this)(2,2) = (cos_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)-(sin_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint);
    (*this)(3,0) = (((- ty_FR_hip_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_thigh_joint * cos_q_FR_calf_joint)) * sin_q_FR_thigh_joint)+(((- ty_FR_hip_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_thigh_joint * sin_q_FR_calf_joint)) * cos_q_FR_thigh_joint);
    (*this)(3,1) = (- tx_FR_foot * sin_q_FR_calf_joint * sin_q_FR_thigh_joint)+((( tx_FR_foot * cos_q_FR_calf_joint)+ tx_FR_calf_joint) * cos_q_FR_thigh_joint)+( ty_FR_hip_joint * sin_q_FR_hip_joint);
    (*this)(3,2) = (((- ty_FR_hip_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_thigh_joint * sin_q_FR_calf_joint)) * sin_q_FR_thigh_joint)+((( ty_FR_hip_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)+( ty_FR_thigh_joint * cos_q_FR_calf_joint)) * cos_q_FR_thigh_joint);
    (*this)(3,3) = (cos_q_FR_calf_joint * cos_q_FR_thigh_joint)-(sin_q_FR_calf_joint * sin_q_FR_thigh_joint);
    (*this)(3,5) = (cos_q_FR_calf_joint * sin_q_FR_thigh_joint)+(sin_q_FR_calf_joint * cos_q_FR_thigh_joint);
    (*this)(4,0) = ((( tx_FR_hip_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_thigh_joint * sin_q_FR_calf_joint * sin_q_FR_hip_joint)) * sin_q_FR_thigh_joint)+((( ty_FR_thigh_joint * cos_q_FR_calf_joint * sin_q_FR_hip_joint)+( tx_FR_hip_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)) * cos_q_FR_thigh_joint)+(((- tx_FR_calf_joint * cos_q_FR_calf_joint)- tx_FR_foot) * cos_q_FR_hip_joint);
    (*this)(4,1) = ((( tx_FR_foot * cos_q_FR_calf_joint)+ tx_FR_calf_joint) * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+( tx_FR_foot * sin_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint)-( tx_FR_hip_joint * sin_q_FR_hip_joint);
    (*this)(4,2) = ((( ty_FR_thigh_joint * cos_q_FR_calf_joint * sin_q_FR_hip_joint)+( tx_FR_hip_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)) * sin_q_FR_thigh_joint)+((( ty_FR_thigh_joint * sin_q_FR_calf_joint * sin_q_FR_hip_joint)-( tx_FR_hip_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)) * cos_q_FR_thigh_joint)-( tx_FR_calf_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint);
    (*this)(4,3) = (cos_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+(sin_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(4,4) = cos_q_FR_hip_joint;
    (*this)(4,5) = (sin_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)-(cos_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(5,0) = ((( tx_FR_hip_joint * cos_q_FR_calf_joint * sin_q_FR_hip_joint)+( ty_FR_thigh_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)+( ty_FR_hip_joint * sin_q_FR_calf_joint)) * sin_q_FR_thigh_joint)+((( tx_FR_hip_joint * sin_q_FR_calf_joint * sin_q_FR_hip_joint)-( ty_FR_thigh_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_hip_joint * cos_q_FR_calf_joint)) * cos_q_FR_thigh_joint)+(((- tx_FR_calf_joint * cos_q_FR_calf_joint)- tx_FR_foot) * sin_q_FR_hip_joint);
    (*this)(5,1) = (((- tx_FR_foot * cos_q_FR_calf_joint)- tx_FR_calf_joint) * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)-( tx_FR_foot * sin_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)+( tx_FR_hip_joint * cos_q_FR_hip_joint);
    (*this)(5,2) = ((( tx_FR_hip_joint * sin_q_FR_calf_joint * sin_q_FR_hip_joint)-( ty_FR_thigh_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_hip_joint * cos_q_FR_calf_joint)) * sin_q_FR_thigh_joint)+(((- tx_FR_hip_joint * cos_q_FR_calf_joint * sin_q_FR_hip_joint)-( ty_FR_thigh_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_hip_joint * sin_q_FR_calf_joint)) * cos_q_FR_thigh_joint)-( tx_FR_calf_joint * sin_q_FR_calf_joint * sin_q_FR_hip_joint);
    (*this)(5,3) = (-cos_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)-(sin_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(5,4) = sin_q_FR_hip_joint;
    (*this)(5,5) = (cos_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)-(sin_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint);
    return *this;
}
MotionTransforms::Type_fr_base_X_RL_foot::Type_fr_base_X_RL_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,4) = 0.0;
}

const MotionTransforms::Type_fr_base_X_RL_foot& MotionTransforms::Type_fr_base_X_RL_foot::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    Scalar sin_q_RL_thigh_joint  = ScalarTraits::sin( q(RL_THIGH_JOINT) );
    Scalar cos_q_RL_thigh_joint  = ScalarTraits::cos( q(RL_THIGH_JOINT) );
    Scalar sin_q_RL_calf_joint  = ScalarTraits::sin( q(RL_CALF_JOINT) );
    Scalar cos_q_RL_calf_joint  = ScalarTraits::cos( q(RL_CALF_JOINT) );
    (*this)(0,0) = (cos_q_RL_calf_joint * cos_q_RL_thigh_joint)-(sin_q_RL_calf_joint * sin_q_RL_thigh_joint);
    (*this)(0,2) = (cos_q_RL_calf_joint * sin_q_RL_thigh_joint)+(sin_q_RL_calf_joint * cos_q_RL_thigh_joint);
    (*this)(1,0) = (cos_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+(sin_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(1,1) = cos_q_RL_hip_joint;
    (*this)(1,2) = (sin_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)-(cos_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(2,0) = (-cos_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)-(sin_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(2,1) = sin_q_RL_hip_joint;
    (*this)(2,2) = (cos_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)-(sin_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint);
    (*this)(3,0) = (((- ty_RL_hip_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_thigh_joint * cos_q_RL_calf_joint)) * sin_q_RL_thigh_joint)+(((- ty_RL_hip_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_thigh_joint * sin_q_RL_calf_joint)) * cos_q_RL_thigh_joint);
    (*this)(3,1) = (- tx_RL_foot * sin_q_RL_calf_joint * sin_q_RL_thigh_joint)+((( tx_RL_foot * cos_q_RL_calf_joint)+ tx_RL_calf_joint) * cos_q_RL_thigh_joint)+( ty_RL_hip_joint * sin_q_RL_hip_joint);
    (*this)(3,2) = (((- ty_RL_hip_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_thigh_joint * sin_q_RL_calf_joint)) * sin_q_RL_thigh_joint)+((( ty_RL_hip_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)+( ty_RL_thigh_joint * cos_q_RL_calf_joint)) * cos_q_RL_thigh_joint);
    (*this)(3,3) = (cos_q_RL_calf_joint * cos_q_RL_thigh_joint)-(sin_q_RL_calf_joint * sin_q_RL_thigh_joint);
    (*this)(3,5) = (cos_q_RL_calf_joint * sin_q_RL_thigh_joint)+(sin_q_RL_calf_joint * cos_q_RL_thigh_joint);
    (*this)(4,0) = ((( tx_RL_hip_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_thigh_joint * sin_q_RL_calf_joint * sin_q_RL_hip_joint)) * sin_q_RL_thigh_joint)+((( ty_RL_thigh_joint * cos_q_RL_calf_joint * sin_q_RL_hip_joint)+( tx_RL_hip_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)) * cos_q_RL_thigh_joint)+(((- tx_RL_calf_joint * cos_q_RL_calf_joint)- tx_RL_foot) * cos_q_RL_hip_joint);
    (*this)(4,1) = ((( tx_RL_foot * cos_q_RL_calf_joint)+ tx_RL_calf_joint) * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+( tx_RL_foot * sin_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint)-( tx_RL_hip_joint * sin_q_RL_hip_joint);
    (*this)(4,2) = ((( ty_RL_thigh_joint * cos_q_RL_calf_joint * sin_q_RL_hip_joint)+( tx_RL_hip_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)) * sin_q_RL_thigh_joint)+((( ty_RL_thigh_joint * sin_q_RL_calf_joint * sin_q_RL_hip_joint)-( tx_RL_hip_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)) * cos_q_RL_thigh_joint)-( tx_RL_calf_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint);
    (*this)(4,3) = (cos_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+(sin_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(4,4) = cos_q_RL_hip_joint;
    (*this)(4,5) = (sin_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)-(cos_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(5,0) = ((( tx_RL_hip_joint * cos_q_RL_calf_joint * sin_q_RL_hip_joint)+( ty_RL_thigh_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)+( ty_RL_hip_joint * sin_q_RL_calf_joint)) * sin_q_RL_thigh_joint)+((( tx_RL_hip_joint * sin_q_RL_calf_joint * sin_q_RL_hip_joint)-( ty_RL_thigh_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_hip_joint * cos_q_RL_calf_joint)) * cos_q_RL_thigh_joint)+(((- tx_RL_calf_joint * cos_q_RL_calf_joint)- tx_RL_foot) * sin_q_RL_hip_joint);
    (*this)(5,1) = (((- tx_RL_foot * cos_q_RL_calf_joint)- tx_RL_calf_joint) * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)-( tx_RL_foot * sin_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)+( tx_RL_hip_joint * cos_q_RL_hip_joint);
    (*this)(5,2) = ((( tx_RL_hip_joint * sin_q_RL_calf_joint * sin_q_RL_hip_joint)-( ty_RL_thigh_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_hip_joint * cos_q_RL_calf_joint)) * sin_q_RL_thigh_joint)+(((- tx_RL_hip_joint * cos_q_RL_calf_joint * sin_q_RL_hip_joint)-( ty_RL_thigh_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_hip_joint * sin_q_RL_calf_joint)) * cos_q_RL_thigh_joint)-( tx_RL_calf_joint * sin_q_RL_calf_joint * sin_q_RL_hip_joint);
    (*this)(5,3) = (-cos_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)-(sin_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(5,4) = sin_q_RL_hip_joint;
    (*this)(5,5) = (cos_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)-(sin_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint);
    return *this;
}
MotionTransforms::Type_fr_base_X_RR_foot::Type_fr_base_X_RR_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,4) = 0.0;
}

const MotionTransforms::Type_fr_base_X_RR_foot& MotionTransforms::Type_fr_base_X_RR_foot::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    Scalar sin_q_RR_thigh_joint  = ScalarTraits::sin( q(RR_THIGH_JOINT) );
    Scalar cos_q_RR_thigh_joint  = ScalarTraits::cos( q(RR_THIGH_JOINT) );
    Scalar sin_q_RR_calf_joint  = ScalarTraits::sin( q(RR_CALF_JOINT) );
    Scalar cos_q_RR_calf_joint  = ScalarTraits::cos( q(RR_CALF_JOINT) );
    (*this)(0,0) = (cos_q_RR_calf_joint * cos_q_RR_thigh_joint)-(sin_q_RR_calf_joint * sin_q_RR_thigh_joint);
    (*this)(0,2) = (cos_q_RR_calf_joint * sin_q_RR_thigh_joint)+(sin_q_RR_calf_joint * cos_q_RR_thigh_joint);
    (*this)(1,0) = (cos_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+(sin_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(1,1) = cos_q_RR_hip_joint;
    (*this)(1,2) = (sin_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)-(cos_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(2,0) = (-cos_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)-(sin_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(2,1) = sin_q_RR_hip_joint;
    (*this)(2,2) = (cos_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)-(sin_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint);
    (*this)(3,0) = (((- ty_RR_hip_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_thigh_joint * cos_q_RR_calf_joint)) * sin_q_RR_thigh_joint)+(((- ty_RR_hip_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_thigh_joint * sin_q_RR_calf_joint)) * cos_q_RR_thigh_joint);
    (*this)(3,1) = (- tx_RR_foot * sin_q_RR_calf_joint * sin_q_RR_thigh_joint)+((( tx_RR_foot * cos_q_RR_calf_joint)+ tx_RR_calf_joint) * cos_q_RR_thigh_joint)+( ty_RR_hip_joint * sin_q_RR_hip_joint);
    (*this)(3,2) = (((- ty_RR_hip_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_thigh_joint * sin_q_RR_calf_joint)) * sin_q_RR_thigh_joint)+((( ty_RR_hip_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)+( ty_RR_thigh_joint * cos_q_RR_calf_joint)) * cos_q_RR_thigh_joint);
    (*this)(3,3) = (cos_q_RR_calf_joint * cos_q_RR_thigh_joint)-(sin_q_RR_calf_joint * sin_q_RR_thigh_joint);
    (*this)(3,5) = (cos_q_RR_calf_joint * sin_q_RR_thigh_joint)+(sin_q_RR_calf_joint * cos_q_RR_thigh_joint);
    (*this)(4,0) = ((( tx_RR_hip_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_thigh_joint * sin_q_RR_calf_joint * sin_q_RR_hip_joint)) * sin_q_RR_thigh_joint)+((( ty_RR_thigh_joint * cos_q_RR_calf_joint * sin_q_RR_hip_joint)+( tx_RR_hip_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)) * cos_q_RR_thigh_joint)+(((- tx_RR_calf_joint * cos_q_RR_calf_joint)- tx_RR_foot) * cos_q_RR_hip_joint);
    (*this)(4,1) = ((( tx_RR_foot * cos_q_RR_calf_joint)+ tx_RR_calf_joint) * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+( tx_RR_foot * sin_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint)-( tx_RR_hip_joint * sin_q_RR_hip_joint);
    (*this)(4,2) = ((( ty_RR_thigh_joint * cos_q_RR_calf_joint * sin_q_RR_hip_joint)+( tx_RR_hip_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)) * sin_q_RR_thigh_joint)+((( ty_RR_thigh_joint * sin_q_RR_calf_joint * sin_q_RR_hip_joint)-( tx_RR_hip_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)) * cos_q_RR_thigh_joint)-( tx_RR_calf_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint);
    (*this)(4,3) = (cos_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+(sin_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(4,4) = cos_q_RR_hip_joint;
    (*this)(4,5) = (sin_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)-(cos_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(5,0) = ((( tx_RR_hip_joint * cos_q_RR_calf_joint * sin_q_RR_hip_joint)+( ty_RR_thigh_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)+( ty_RR_hip_joint * sin_q_RR_calf_joint)) * sin_q_RR_thigh_joint)+((( tx_RR_hip_joint * sin_q_RR_calf_joint * sin_q_RR_hip_joint)-( ty_RR_thigh_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_hip_joint * cos_q_RR_calf_joint)) * cos_q_RR_thigh_joint)+(((- tx_RR_calf_joint * cos_q_RR_calf_joint)- tx_RR_foot) * sin_q_RR_hip_joint);
    (*this)(5,1) = (((- tx_RR_foot * cos_q_RR_calf_joint)- tx_RR_calf_joint) * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)-( tx_RR_foot * sin_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)+( tx_RR_hip_joint * cos_q_RR_hip_joint);
    (*this)(5,2) = ((( tx_RR_hip_joint * sin_q_RR_calf_joint * sin_q_RR_hip_joint)-( ty_RR_thigh_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_hip_joint * cos_q_RR_calf_joint)) * sin_q_RR_thigh_joint)+(((- tx_RR_hip_joint * cos_q_RR_calf_joint * sin_q_RR_hip_joint)-( ty_RR_thigh_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_hip_joint * sin_q_RR_calf_joint)) * cos_q_RR_thigh_joint)-( tx_RR_calf_joint * sin_q_RR_calf_joint * sin_q_RR_hip_joint);
    (*this)(5,3) = (-cos_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)-(sin_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(5,4) = sin_q_RR_hip_joint;
    (*this)(5,5) = (cos_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)-(sin_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint);
    return *this;
}
MotionTransforms::Type_imu_link_X_FL_foot::Type_imu_link_X_FL_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,4) = 0.0;
}

const MotionTransforms::Type_imu_link_X_FL_foot& MotionTransforms::Type_imu_link_X_FL_foot::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    Scalar sin_q_FL_thigh_joint  = ScalarTraits::sin( q(FL_THIGH_JOINT) );
    Scalar cos_q_FL_thigh_joint  = ScalarTraits::cos( q(FL_THIGH_JOINT) );
    Scalar sin_q_FL_calf_joint  = ScalarTraits::sin( q(FL_CALF_JOINT) );
    Scalar cos_q_FL_calf_joint  = ScalarTraits::cos( q(FL_CALF_JOINT) );
    (*this)(0,0) = (cos_q_FL_calf_joint * cos_q_FL_thigh_joint)-(sin_q_FL_calf_joint * sin_q_FL_thigh_joint);
    (*this)(0,2) = (cos_q_FL_calf_joint * sin_q_FL_thigh_joint)+(sin_q_FL_calf_joint * cos_q_FL_thigh_joint);
    (*this)(1,0) = (cos_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+(sin_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(1,1) = cos_q_FL_hip_joint;
    (*this)(1,2) = (sin_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)-(cos_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(2,0) = (-cos_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)-(sin_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(2,1) = sin_q_FL_hip_joint;
    (*this)(2,2) = (cos_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)-(sin_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint);
    (*this)(3,0) = (((- ty_FL_hip_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_thigh_joint * cos_q_FL_calf_joint)) * sin_q_FL_thigh_joint)+(((- ty_FL_hip_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_thigh_joint * sin_q_FL_calf_joint)) * cos_q_FL_thigh_joint);
    (*this)(3,1) = (- tx_FL_foot * sin_q_FL_calf_joint * sin_q_FL_thigh_joint)+((( tx_FL_foot * cos_q_FL_calf_joint)+ tx_FL_calf_joint) * cos_q_FL_thigh_joint)+( ty_FL_hip_joint * sin_q_FL_hip_joint);
    (*this)(3,2) = (((- ty_FL_hip_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_thigh_joint * sin_q_FL_calf_joint)) * sin_q_FL_thigh_joint)+((( ty_FL_hip_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)+( ty_FL_thigh_joint * cos_q_FL_calf_joint)) * cos_q_FL_thigh_joint);
    (*this)(3,3) = (cos_q_FL_calf_joint * cos_q_FL_thigh_joint)-(sin_q_FL_calf_joint * sin_q_FL_thigh_joint);
    (*this)(3,5) = (cos_q_FL_calf_joint * sin_q_FL_thigh_joint)+(sin_q_FL_calf_joint * cos_q_FL_thigh_joint);
    (*this)(4,0) = ((( tx_FL_hip_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_thigh_joint * sin_q_FL_calf_joint * sin_q_FL_hip_joint)) * sin_q_FL_thigh_joint)+((( ty_FL_thigh_joint * cos_q_FL_calf_joint * sin_q_FL_hip_joint)+( tx_FL_hip_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)) * cos_q_FL_thigh_joint)+(((- tx_FL_calf_joint * cos_q_FL_calf_joint)- tx_FL_foot) * cos_q_FL_hip_joint);
    (*this)(4,1) = ((( tx_FL_foot * cos_q_FL_calf_joint)+ tx_FL_calf_joint) * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+( tx_FL_foot * sin_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint)-( tx_FL_hip_joint * sin_q_FL_hip_joint);
    (*this)(4,2) = ((( ty_FL_thigh_joint * cos_q_FL_calf_joint * sin_q_FL_hip_joint)+( tx_FL_hip_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)) * sin_q_FL_thigh_joint)+((( ty_FL_thigh_joint * sin_q_FL_calf_joint * sin_q_FL_hip_joint)-( tx_FL_hip_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)) * cos_q_FL_thigh_joint)-( tx_FL_calf_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint);
    (*this)(4,3) = (cos_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+(sin_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(4,4) = cos_q_FL_hip_joint;
    (*this)(4,5) = (sin_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)-(cos_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(5,0) = ((( tx_FL_hip_joint * cos_q_FL_calf_joint * sin_q_FL_hip_joint)+( ty_FL_thigh_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)+( ty_FL_hip_joint * sin_q_FL_calf_joint)) * sin_q_FL_thigh_joint)+((( tx_FL_hip_joint * sin_q_FL_calf_joint * sin_q_FL_hip_joint)-( ty_FL_thigh_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_hip_joint * cos_q_FL_calf_joint)) * cos_q_FL_thigh_joint)+(((- tx_FL_calf_joint * cos_q_FL_calf_joint)- tx_FL_foot) * sin_q_FL_hip_joint);
    (*this)(5,1) = (((- tx_FL_foot * cos_q_FL_calf_joint)- tx_FL_calf_joint) * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)-( tx_FL_foot * sin_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)+( tx_FL_hip_joint * cos_q_FL_hip_joint);
    (*this)(5,2) = ((( tx_FL_hip_joint * sin_q_FL_calf_joint * sin_q_FL_hip_joint)-( ty_FL_thigh_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_hip_joint * cos_q_FL_calf_joint)) * sin_q_FL_thigh_joint)+(((- tx_FL_hip_joint * cos_q_FL_calf_joint * sin_q_FL_hip_joint)-( ty_FL_thigh_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_hip_joint * sin_q_FL_calf_joint)) * cos_q_FL_thigh_joint)-( tx_FL_calf_joint * sin_q_FL_calf_joint * sin_q_FL_hip_joint);
    (*this)(5,3) = (-cos_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)-(sin_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(5,4) = sin_q_FL_hip_joint;
    (*this)(5,5) = (cos_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)-(sin_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint);
    return *this;
}
MotionTransforms::Type_imu_link_X_FR_foot::Type_imu_link_X_FR_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,4) = 0.0;
}

const MotionTransforms::Type_imu_link_X_FR_foot& MotionTransforms::Type_imu_link_X_FR_foot::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    Scalar sin_q_FR_thigh_joint  = ScalarTraits::sin( q(FR_THIGH_JOINT) );
    Scalar cos_q_FR_thigh_joint  = ScalarTraits::cos( q(FR_THIGH_JOINT) );
    Scalar sin_q_FR_calf_joint  = ScalarTraits::sin( q(FR_CALF_JOINT) );
    Scalar cos_q_FR_calf_joint  = ScalarTraits::cos( q(FR_CALF_JOINT) );
    (*this)(0,0) = (cos_q_FR_calf_joint * cos_q_FR_thigh_joint)-(sin_q_FR_calf_joint * sin_q_FR_thigh_joint);
    (*this)(0,2) = (cos_q_FR_calf_joint * sin_q_FR_thigh_joint)+(sin_q_FR_calf_joint * cos_q_FR_thigh_joint);
    (*this)(1,0) = (cos_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+(sin_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(1,1) = cos_q_FR_hip_joint;
    (*this)(1,2) = (sin_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)-(cos_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(2,0) = (-cos_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)-(sin_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(2,1) = sin_q_FR_hip_joint;
    (*this)(2,2) = (cos_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)-(sin_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint);
    (*this)(3,0) = (((- ty_FR_hip_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_thigh_joint * cos_q_FR_calf_joint)) * sin_q_FR_thigh_joint)+(((- ty_FR_hip_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_thigh_joint * sin_q_FR_calf_joint)) * cos_q_FR_thigh_joint);
    (*this)(3,1) = (- tx_FR_foot * sin_q_FR_calf_joint * sin_q_FR_thigh_joint)+((( tx_FR_foot * cos_q_FR_calf_joint)+ tx_FR_calf_joint) * cos_q_FR_thigh_joint)+( ty_FR_hip_joint * sin_q_FR_hip_joint);
    (*this)(3,2) = (((- ty_FR_hip_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_thigh_joint * sin_q_FR_calf_joint)) * sin_q_FR_thigh_joint)+((( ty_FR_hip_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)+( ty_FR_thigh_joint * cos_q_FR_calf_joint)) * cos_q_FR_thigh_joint);
    (*this)(3,3) = (cos_q_FR_calf_joint * cos_q_FR_thigh_joint)-(sin_q_FR_calf_joint * sin_q_FR_thigh_joint);
    (*this)(3,5) = (cos_q_FR_calf_joint * sin_q_FR_thigh_joint)+(sin_q_FR_calf_joint * cos_q_FR_thigh_joint);
    (*this)(4,0) = ((( tx_FR_hip_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_thigh_joint * sin_q_FR_calf_joint * sin_q_FR_hip_joint)) * sin_q_FR_thigh_joint)+((( ty_FR_thigh_joint * cos_q_FR_calf_joint * sin_q_FR_hip_joint)+( tx_FR_hip_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)) * cos_q_FR_thigh_joint)+(((- tx_FR_calf_joint * cos_q_FR_calf_joint)- tx_FR_foot) * cos_q_FR_hip_joint);
    (*this)(4,1) = ((( tx_FR_foot * cos_q_FR_calf_joint)+ tx_FR_calf_joint) * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+( tx_FR_foot * sin_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint)-( tx_FR_hip_joint * sin_q_FR_hip_joint);
    (*this)(4,2) = ((( ty_FR_thigh_joint * cos_q_FR_calf_joint * sin_q_FR_hip_joint)+( tx_FR_hip_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)) * sin_q_FR_thigh_joint)+((( ty_FR_thigh_joint * sin_q_FR_calf_joint * sin_q_FR_hip_joint)-( tx_FR_hip_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)) * cos_q_FR_thigh_joint)-( tx_FR_calf_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint);
    (*this)(4,3) = (cos_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+(sin_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(4,4) = cos_q_FR_hip_joint;
    (*this)(4,5) = (sin_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)-(cos_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(5,0) = ((( tx_FR_hip_joint * cos_q_FR_calf_joint * sin_q_FR_hip_joint)+( ty_FR_thigh_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)+( ty_FR_hip_joint * sin_q_FR_calf_joint)) * sin_q_FR_thigh_joint)+((( tx_FR_hip_joint * sin_q_FR_calf_joint * sin_q_FR_hip_joint)-( ty_FR_thigh_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_hip_joint * cos_q_FR_calf_joint)) * cos_q_FR_thigh_joint)+(((- tx_FR_calf_joint * cos_q_FR_calf_joint)- tx_FR_foot) * sin_q_FR_hip_joint);
    (*this)(5,1) = (((- tx_FR_foot * cos_q_FR_calf_joint)- tx_FR_calf_joint) * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)-( tx_FR_foot * sin_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)+( tx_FR_hip_joint * cos_q_FR_hip_joint);
    (*this)(5,2) = ((( tx_FR_hip_joint * sin_q_FR_calf_joint * sin_q_FR_hip_joint)-( ty_FR_thigh_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_hip_joint * cos_q_FR_calf_joint)) * sin_q_FR_thigh_joint)+(((- tx_FR_hip_joint * cos_q_FR_calf_joint * sin_q_FR_hip_joint)-( ty_FR_thigh_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_hip_joint * sin_q_FR_calf_joint)) * cos_q_FR_thigh_joint)-( tx_FR_calf_joint * sin_q_FR_calf_joint * sin_q_FR_hip_joint);
    (*this)(5,3) = (-cos_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)-(sin_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(5,4) = sin_q_FR_hip_joint;
    (*this)(5,5) = (cos_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)-(sin_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint);
    return *this;
}
MotionTransforms::Type_imu_link_X_RL_foot::Type_imu_link_X_RL_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,4) = 0.0;
}

const MotionTransforms::Type_imu_link_X_RL_foot& MotionTransforms::Type_imu_link_X_RL_foot::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    Scalar sin_q_RL_thigh_joint  = ScalarTraits::sin( q(RL_THIGH_JOINT) );
    Scalar cos_q_RL_thigh_joint  = ScalarTraits::cos( q(RL_THIGH_JOINT) );
    Scalar sin_q_RL_calf_joint  = ScalarTraits::sin( q(RL_CALF_JOINT) );
    Scalar cos_q_RL_calf_joint  = ScalarTraits::cos( q(RL_CALF_JOINT) );
    (*this)(0,0) = (cos_q_RL_calf_joint * cos_q_RL_thigh_joint)-(sin_q_RL_calf_joint * sin_q_RL_thigh_joint);
    (*this)(0,2) = (cos_q_RL_calf_joint * sin_q_RL_thigh_joint)+(sin_q_RL_calf_joint * cos_q_RL_thigh_joint);
    (*this)(1,0) = (cos_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+(sin_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(1,1) = cos_q_RL_hip_joint;
    (*this)(1,2) = (sin_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)-(cos_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(2,0) = (-cos_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)-(sin_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(2,1) = sin_q_RL_hip_joint;
    (*this)(2,2) = (cos_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)-(sin_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint);
    (*this)(3,0) = (((- ty_RL_hip_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_thigh_joint * cos_q_RL_calf_joint)) * sin_q_RL_thigh_joint)+(((- ty_RL_hip_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_thigh_joint * sin_q_RL_calf_joint)) * cos_q_RL_thigh_joint);
    (*this)(3,1) = (- tx_RL_foot * sin_q_RL_calf_joint * sin_q_RL_thigh_joint)+((( tx_RL_foot * cos_q_RL_calf_joint)+ tx_RL_calf_joint) * cos_q_RL_thigh_joint)+( ty_RL_hip_joint * sin_q_RL_hip_joint);
    (*this)(3,2) = (((- ty_RL_hip_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_thigh_joint * sin_q_RL_calf_joint)) * sin_q_RL_thigh_joint)+((( ty_RL_hip_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)+( ty_RL_thigh_joint * cos_q_RL_calf_joint)) * cos_q_RL_thigh_joint);
    (*this)(3,3) = (cos_q_RL_calf_joint * cos_q_RL_thigh_joint)-(sin_q_RL_calf_joint * sin_q_RL_thigh_joint);
    (*this)(3,5) = (cos_q_RL_calf_joint * sin_q_RL_thigh_joint)+(sin_q_RL_calf_joint * cos_q_RL_thigh_joint);
    (*this)(4,0) = ((( tx_RL_hip_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_thigh_joint * sin_q_RL_calf_joint * sin_q_RL_hip_joint)) * sin_q_RL_thigh_joint)+((( ty_RL_thigh_joint * cos_q_RL_calf_joint * sin_q_RL_hip_joint)+( tx_RL_hip_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)) * cos_q_RL_thigh_joint)+(((- tx_RL_calf_joint * cos_q_RL_calf_joint)- tx_RL_foot) * cos_q_RL_hip_joint);
    (*this)(4,1) = ((( tx_RL_foot * cos_q_RL_calf_joint)+ tx_RL_calf_joint) * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+( tx_RL_foot * sin_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint)-( tx_RL_hip_joint * sin_q_RL_hip_joint);
    (*this)(4,2) = ((( ty_RL_thigh_joint * cos_q_RL_calf_joint * sin_q_RL_hip_joint)+( tx_RL_hip_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)) * sin_q_RL_thigh_joint)+((( ty_RL_thigh_joint * sin_q_RL_calf_joint * sin_q_RL_hip_joint)-( tx_RL_hip_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)) * cos_q_RL_thigh_joint)-( tx_RL_calf_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint);
    (*this)(4,3) = (cos_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+(sin_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(4,4) = cos_q_RL_hip_joint;
    (*this)(4,5) = (sin_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)-(cos_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(5,0) = ((( tx_RL_hip_joint * cos_q_RL_calf_joint * sin_q_RL_hip_joint)+( ty_RL_thigh_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)+( ty_RL_hip_joint * sin_q_RL_calf_joint)) * sin_q_RL_thigh_joint)+((( tx_RL_hip_joint * sin_q_RL_calf_joint * sin_q_RL_hip_joint)-( ty_RL_thigh_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_hip_joint * cos_q_RL_calf_joint)) * cos_q_RL_thigh_joint)+(((- tx_RL_calf_joint * cos_q_RL_calf_joint)- tx_RL_foot) * sin_q_RL_hip_joint);
    (*this)(5,1) = (((- tx_RL_foot * cos_q_RL_calf_joint)- tx_RL_calf_joint) * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)-( tx_RL_foot * sin_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)+( tx_RL_hip_joint * cos_q_RL_hip_joint);
    (*this)(5,2) = ((( tx_RL_hip_joint * sin_q_RL_calf_joint * sin_q_RL_hip_joint)-( ty_RL_thigh_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_hip_joint * cos_q_RL_calf_joint)) * sin_q_RL_thigh_joint)+(((- tx_RL_hip_joint * cos_q_RL_calf_joint * sin_q_RL_hip_joint)-( ty_RL_thigh_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_hip_joint * sin_q_RL_calf_joint)) * cos_q_RL_thigh_joint)-( tx_RL_calf_joint * sin_q_RL_calf_joint * sin_q_RL_hip_joint);
    (*this)(5,3) = (-cos_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)-(sin_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(5,4) = sin_q_RL_hip_joint;
    (*this)(5,5) = (cos_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)-(sin_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint);
    return *this;
}
MotionTransforms::Type_imu_link_X_RR_foot::Type_imu_link_X_RR_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,4) = 0.0;
}

const MotionTransforms::Type_imu_link_X_RR_foot& MotionTransforms::Type_imu_link_X_RR_foot::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    Scalar sin_q_RR_thigh_joint  = ScalarTraits::sin( q(RR_THIGH_JOINT) );
    Scalar cos_q_RR_thigh_joint  = ScalarTraits::cos( q(RR_THIGH_JOINT) );
    Scalar sin_q_RR_calf_joint  = ScalarTraits::sin( q(RR_CALF_JOINT) );
    Scalar cos_q_RR_calf_joint  = ScalarTraits::cos( q(RR_CALF_JOINT) );
    (*this)(0,0) = (cos_q_RR_calf_joint * cos_q_RR_thigh_joint)-(sin_q_RR_calf_joint * sin_q_RR_thigh_joint);
    (*this)(0,2) = (cos_q_RR_calf_joint * sin_q_RR_thigh_joint)+(sin_q_RR_calf_joint * cos_q_RR_thigh_joint);
    (*this)(1,0) = (cos_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+(sin_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(1,1) = cos_q_RR_hip_joint;
    (*this)(1,2) = (sin_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)-(cos_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(2,0) = (-cos_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)-(sin_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(2,1) = sin_q_RR_hip_joint;
    (*this)(2,2) = (cos_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)-(sin_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint);
    (*this)(3,0) = (((- ty_RR_hip_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_thigh_joint * cos_q_RR_calf_joint)) * sin_q_RR_thigh_joint)+(((- ty_RR_hip_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_thigh_joint * sin_q_RR_calf_joint)) * cos_q_RR_thigh_joint);
    (*this)(3,1) = (- tx_RR_foot * sin_q_RR_calf_joint * sin_q_RR_thigh_joint)+((( tx_RR_foot * cos_q_RR_calf_joint)+ tx_RR_calf_joint) * cos_q_RR_thigh_joint)+( ty_RR_hip_joint * sin_q_RR_hip_joint);
    (*this)(3,2) = (((- ty_RR_hip_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_thigh_joint * sin_q_RR_calf_joint)) * sin_q_RR_thigh_joint)+((( ty_RR_hip_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)+( ty_RR_thigh_joint * cos_q_RR_calf_joint)) * cos_q_RR_thigh_joint);
    (*this)(3,3) = (cos_q_RR_calf_joint * cos_q_RR_thigh_joint)-(sin_q_RR_calf_joint * sin_q_RR_thigh_joint);
    (*this)(3,5) = (cos_q_RR_calf_joint * sin_q_RR_thigh_joint)+(sin_q_RR_calf_joint * cos_q_RR_thigh_joint);
    (*this)(4,0) = ((( tx_RR_hip_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_thigh_joint * sin_q_RR_calf_joint * sin_q_RR_hip_joint)) * sin_q_RR_thigh_joint)+((( ty_RR_thigh_joint * cos_q_RR_calf_joint * sin_q_RR_hip_joint)+( tx_RR_hip_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)) * cos_q_RR_thigh_joint)+(((- tx_RR_calf_joint * cos_q_RR_calf_joint)- tx_RR_foot) * cos_q_RR_hip_joint);
    (*this)(4,1) = ((( tx_RR_foot * cos_q_RR_calf_joint)+ tx_RR_calf_joint) * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+( tx_RR_foot * sin_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint)-( tx_RR_hip_joint * sin_q_RR_hip_joint);
    (*this)(4,2) = ((( ty_RR_thigh_joint * cos_q_RR_calf_joint * sin_q_RR_hip_joint)+( tx_RR_hip_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)) * sin_q_RR_thigh_joint)+((( ty_RR_thigh_joint * sin_q_RR_calf_joint * sin_q_RR_hip_joint)-( tx_RR_hip_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)) * cos_q_RR_thigh_joint)-( tx_RR_calf_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint);
    (*this)(4,3) = (cos_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+(sin_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(4,4) = cos_q_RR_hip_joint;
    (*this)(4,5) = (sin_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)-(cos_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(5,0) = ((( tx_RR_hip_joint * cos_q_RR_calf_joint * sin_q_RR_hip_joint)+( ty_RR_thigh_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)+( ty_RR_hip_joint * sin_q_RR_calf_joint)) * sin_q_RR_thigh_joint)+((( tx_RR_hip_joint * sin_q_RR_calf_joint * sin_q_RR_hip_joint)-( ty_RR_thigh_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_hip_joint * cos_q_RR_calf_joint)) * cos_q_RR_thigh_joint)+(((- tx_RR_calf_joint * cos_q_RR_calf_joint)- tx_RR_foot) * sin_q_RR_hip_joint);
    (*this)(5,1) = (((- tx_RR_foot * cos_q_RR_calf_joint)- tx_RR_calf_joint) * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)-( tx_RR_foot * sin_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)+( tx_RR_hip_joint * cos_q_RR_hip_joint);
    (*this)(5,2) = ((( tx_RR_hip_joint * sin_q_RR_calf_joint * sin_q_RR_hip_joint)-( ty_RR_thigh_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_hip_joint * cos_q_RR_calf_joint)) * sin_q_RR_thigh_joint)+(((- tx_RR_hip_joint * cos_q_RR_calf_joint * sin_q_RR_hip_joint)-( ty_RR_thigh_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_hip_joint * sin_q_RR_calf_joint)) * cos_q_RR_thigh_joint)-( tx_RR_calf_joint * sin_q_RR_calf_joint * sin_q_RR_hip_joint);
    (*this)(5,3) = (-cos_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)-(sin_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(5,4) = sin_q_RR_hip_joint;
    (*this)(5,5) = (cos_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)-(sin_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint);
    return *this;
}
MotionTransforms::Type_fr_base_X_fr_FL_hip_joint::Type_fr_base_X_fr_FL_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = - ty_FL_hip_joint;    // Maxima DSL: -_k__ty_FL_hip_joint
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,0) =  tx_FL_hip_joint;    // Maxima DSL: _k__tx_FL_hip_joint
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 1.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) =  tx_FL_hip_joint;    // Maxima DSL: _k__tx_FL_hip_joint
    (*this)(5,2) = - ty_FL_hip_joint;    // Maxima DSL: -_k__ty_FL_hip_joint
    (*this)(5,3) = -1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_fr_base_X_fr_FL_hip_joint& MotionTransforms::Type_fr_base_X_fr_FL_hip_joint::update(const state_t& q)
{
    return *this;
}
MotionTransforms::Type_fr_base_X_fr_FL_thigh_joint::Type_fr_base_X_fr_FL_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = -1.0;
    (*this)(3,5) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,4) = 0.0;
}

const MotionTransforms::Type_fr_base_X_fr_FL_thigh_joint& MotionTransforms::Type_fr_base_X_fr_FL_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    (*this)(1,0) = sin_q_FL_hip_joint;
    (*this)(1,2) = cos_q_FL_hip_joint;
    (*this)(2,0) = -cos_q_FL_hip_joint;
    (*this)(2,2) = sin_q_FL_hip_joint;
    (*this)(3,0) = (- ty_FL_hip_joint * cos_q_FL_hip_joint)- ty_FL_thigh_joint;
    (*this)(3,2) =  ty_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(4,0) =  tx_FL_hip_joint * cos_q_FL_hip_joint;
    (*this)(4,1) = - ty_FL_thigh_joint * sin_q_FL_hip_joint;
    (*this)(4,2) = - tx_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(4,3) = sin_q_FL_hip_joint;
    (*this)(4,5) = cos_q_FL_hip_joint;
    (*this)(5,0) =  tx_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(5,1) = ( ty_FL_thigh_joint * cos_q_FL_hip_joint)+ ty_FL_hip_joint;
    (*this)(5,2) =  tx_FL_hip_joint * cos_q_FL_hip_joint;
    (*this)(5,3) = -cos_q_FL_hip_joint;
    (*this)(5,5) = sin_q_FL_hip_joint;
    return *this;
}
MotionTransforms::Type_fr_base_X_fr_FL_calf_joint::Type_fr_base_X_fr_FL_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,5) = 0.0;
}

const MotionTransforms::Type_fr_base_X_fr_FL_calf_joint& MotionTransforms::Type_fr_base_X_fr_FL_calf_joint::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    Scalar sin_q_FL_thigh_joint  = ScalarTraits::sin( q(FL_THIGH_JOINT) );
    Scalar cos_q_FL_thigh_joint  = ScalarTraits::cos( q(FL_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_FL_thigh_joint;
    (*this)(0,1) = -cos_q_FL_thigh_joint;
    (*this)(1,0) = sin_q_FL_hip_joint * cos_q_FL_thigh_joint;
    (*this)(1,1) = -sin_q_FL_hip_joint * sin_q_FL_thigh_joint;
    (*this)(1,2) = cos_q_FL_hip_joint;
    (*this)(2,0) = -cos_q_FL_hip_joint * cos_q_FL_thigh_joint;
    (*this)(2,1) = cos_q_FL_hip_joint * sin_q_FL_thigh_joint;
    (*this)(2,2) = sin_q_FL_hip_joint;
    (*this)(3,0) = ((- ty_FL_hip_joint * cos_q_FL_hip_joint)- ty_FL_thigh_joint) * cos_q_FL_thigh_joint;
    (*this)(3,1) = (( ty_FL_hip_joint * cos_q_FL_hip_joint)+ ty_FL_thigh_joint) * sin_q_FL_thigh_joint;
    (*this)(3,2) = ( tx_FL_calf_joint * cos_q_FL_thigh_joint)+( ty_FL_hip_joint * sin_q_FL_hip_joint);
    (*this)(3,3) = -sin_q_FL_thigh_joint;
    (*this)(3,4) = -cos_q_FL_thigh_joint;
    (*this)(4,0) = ( tx_FL_hip_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)-( ty_FL_thigh_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint);
    (*this)(4,1) = (- tx_FL_hip_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)-( ty_FL_thigh_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint)+( tx_FL_calf_joint * cos_q_FL_hip_joint);
    (*this)(4,2) = ( tx_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)-( tx_FL_hip_joint * sin_q_FL_hip_joint);
    (*this)(4,3) = sin_q_FL_hip_joint * cos_q_FL_thigh_joint;
    (*this)(4,4) = -sin_q_FL_hip_joint * sin_q_FL_thigh_joint;
    (*this)(4,5) = cos_q_FL_hip_joint;
    (*this)(5,0) = ((( ty_FL_thigh_joint * cos_q_FL_hip_joint)+ ty_FL_hip_joint) * sin_q_FL_thigh_joint)+( tx_FL_hip_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(5,1) = (- tx_FL_hip_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+((( ty_FL_thigh_joint * cos_q_FL_hip_joint)+ ty_FL_hip_joint) * cos_q_FL_thigh_joint)+( tx_FL_calf_joint * sin_q_FL_hip_joint);
    (*this)(5,2) = ( tx_FL_hip_joint * cos_q_FL_hip_joint)-( tx_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint);
    (*this)(5,3) = -cos_q_FL_hip_joint * cos_q_FL_thigh_joint;
    (*this)(5,4) = cos_q_FL_hip_joint * sin_q_FL_thigh_joint;
    (*this)(5,5) = sin_q_FL_hip_joint;
    return *this;
}
MotionTransforms::Type_fr_base_X_fr_FR_hip_joint::Type_fr_base_X_fr_FR_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = - ty_FR_hip_joint;    // Maxima DSL: -_k__ty_FR_hip_joint
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,0) =  tx_FR_hip_joint;    // Maxima DSL: _k__tx_FR_hip_joint
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 1.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) =  tx_FR_hip_joint;    // Maxima DSL: _k__tx_FR_hip_joint
    (*this)(5,2) = - ty_FR_hip_joint;    // Maxima DSL: -_k__ty_FR_hip_joint
    (*this)(5,3) = -1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_fr_base_X_fr_FR_hip_joint& MotionTransforms::Type_fr_base_X_fr_FR_hip_joint::update(const state_t& q)
{
    return *this;
}
MotionTransforms::Type_fr_base_X_fr_FR_thigh_joint::Type_fr_base_X_fr_FR_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = -1.0;
    (*this)(3,5) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,4) = 0.0;
}

const MotionTransforms::Type_fr_base_X_fr_FR_thigh_joint& MotionTransforms::Type_fr_base_X_fr_FR_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    (*this)(1,0) = sin_q_FR_hip_joint;
    (*this)(1,2) = cos_q_FR_hip_joint;
    (*this)(2,0) = -cos_q_FR_hip_joint;
    (*this)(2,2) = sin_q_FR_hip_joint;
    (*this)(3,0) = (- ty_FR_hip_joint * cos_q_FR_hip_joint)- ty_FR_thigh_joint;
    (*this)(3,2) =  ty_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(4,0) =  tx_FR_hip_joint * cos_q_FR_hip_joint;
    (*this)(4,1) = - ty_FR_thigh_joint * sin_q_FR_hip_joint;
    (*this)(4,2) = - tx_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(4,3) = sin_q_FR_hip_joint;
    (*this)(4,5) = cos_q_FR_hip_joint;
    (*this)(5,0) =  tx_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(5,1) = ( ty_FR_thigh_joint * cos_q_FR_hip_joint)+ ty_FR_hip_joint;
    (*this)(5,2) =  tx_FR_hip_joint * cos_q_FR_hip_joint;
    (*this)(5,3) = -cos_q_FR_hip_joint;
    (*this)(5,5) = sin_q_FR_hip_joint;
    return *this;
}
MotionTransforms::Type_fr_base_X_fr_FR_calf_joint::Type_fr_base_X_fr_FR_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,5) = 0.0;
}

const MotionTransforms::Type_fr_base_X_fr_FR_calf_joint& MotionTransforms::Type_fr_base_X_fr_FR_calf_joint::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    Scalar sin_q_FR_thigh_joint  = ScalarTraits::sin( q(FR_THIGH_JOINT) );
    Scalar cos_q_FR_thigh_joint  = ScalarTraits::cos( q(FR_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_FR_thigh_joint;
    (*this)(0,1) = -cos_q_FR_thigh_joint;
    (*this)(1,0) = sin_q_FR_hip_joint * cos_q_FR_thigh_joint;
    (*this)(1,1) = -sin_q_FR_hip_joint * sin_q_FR_thigh_joint;
    (*this)(1,2) = cos_q_FR_hip_joint;
    (*this)(2,0) = -cos_q_FR_hip_joint * cos_q_FR_thigh_joint;
    (*this)(2,1) = cos_q_FR_hip_joint * sin_q_FR_thigh_joint;
    (*this)(2,2) = sin_q_FR_hip_joint;
    (*this)(3,0) = ((- ty_FR_hip_joint * cos_q_FR_hip_joint)- ty_FR_thigh_joint) * cos_q_FR_thigh_joint;
    (*this)(3,1) = (( ty_FR_hip_joint * cos_q_FR_hip_joint)+ ty_FR_thigh_joint) * sin_q_FR_thigh_joint;
    (*this)(3,2) = ( tx_FR_calf_joint * cos_q_FR_thigh_joint)+( ty_FR_hip_joint * sin_q_FR_hip_joint);
    (*this)(3,3) = -sin_q_FR_thigh_joint;
    (*this)(3,4) = -cos_q_FR_thigh_joint;
    (*this)(4,0) = ( tx_FR_hip_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)-( ty_FR_thigh_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint);
    (*this)(4,1) = (- tx_FR_hip_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)-( ty_FR_thigh_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint)+( tx_FR_calf_joint * cos_q_FR_hip_joint);
    (*this)(4,2) = ( tx_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)-( tx_FR_hip_joint * sin_q_FR_hip_joint);
    (*this)(4,3) = sin_q_FR_hip_joint * cos_q_FR_thigh_joint;
    (*this)(4,4) = -sin_q_FR_hip_joint * sin_q_FR_thigh_joint;
    (*this)(4,5) = cos_q_FR_hip_joint;
    (*this)(5,0) = ((( ty_FR_thigh_joint * cos_q_FR_hip_joint)+ ty_FR_hip_joint) * sin_q_FR_thigh_joint)+( tx_FR_hip_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(5,1) = (- tx_FR_hip_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+((( ty_FR_thigh_joint * cos_q_FR_hip_joint)+ ty_FR_hip_joint) * cos_q_FR_thigh_joint)+( tx_FR_calf_joint * sin_q_FR_hip_joint);
    (*this)(5,2) = ( tx_FR_hip_joint * cos_q_FR_hip_joint)-( tx_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint);
    (*this)(5,3) = -cos_q_FR_hip_joint * cos_q_FR_thigh_joint;
    (*this)(5,4) = cos_q_FR_hip_joint * sin_q_FR_thigh_joint;
    (*this)(5,5) = sin_q_FR_hip_joint;
    return *this;
}
MotionTransforms::Type_fr_base_X_fr_RL_hip_joint::Type_fr_base_X_fr_RL_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = - ty_RL_hip_joint;    // Maxima DSL: -_k__ty_RL_hip_joint
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,0) =  tx_RL_hip_joint;    // Maxima DSL: _k__tx_RL_hip_joint
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 1.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) =  tx_RL_hip_joint;    // Maxima DSL: _k__tx_RL_hip_joint
    (*this)(5,2) = - ty_RL_hip_joint;    // Maxima DSL: -_k__ty_RL_hip_joint
    (*this)(5,3) = -1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_fr_base_X_fr_RL_hip_joint& MotionTransforms::Type_fr_base_X_fr_RL_hip_joint::update(const state_t& q)
{
    return *this;
}
MotionTransforms::Type_fr_base_X_fr_RL_thigh_joint::Type_fr_base_X_fr_RL_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = -1.0;
    (*this)(3,5) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,4) = 0.0;
}

const MotionTransforms::Type_fr_base_X_fr_RL_thigh_joint& MotionTransforms::Type_fr_base_X_fr_RL_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    (*this)(1,0) = sin_q_RL_hip_joint;
    (*this)(1,2) = cos_q_RL_hip_joint;
    (*this)(2,0) = -cos_q_RL_hip_joint;
    (*this)(2,2) = sin_q_RL_hip_joint;
    (*this)(3,0) = (- ty_RL_hip_joint * cos_q_RL_hip_joint)- ty_RL_thigh_joint;
    (*this)(3,2) =  ty_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(4,0) =  tx_RL_hip_joint * cos_q_RL_hip_joint;
    (*this)(4,1) = - ty_RL_thigh_joint * sin_q_RL_hip_joint;
    (*this)(4,2) = - tx_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(4,3) = sin_q_RL_hip_joint;
    (*this)(4,5) = cos_q_RL_hip_joint;
    (*this)(5,0) =  tx_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(5,1) = ( ty_RL_thigh_joint * cos_q_RL_hip_joint)+ ty_RL_hip_joint;
    (*this)(5,2) =  tx_RL_hip_joint * cos_q_RL_hip_joint;
    (*this)(5,3) = -cos_q_RL_hip_joint;
    (*this)(5,5) = sin_q_RL_hip_joint;
    return *this;
}
MotionTransforms::Type_fr_base_X_fr_RL_calf_joint::Type_fr_base_X_fr_RL_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,5) = 0.0;
}

const MotionTransforms::Type_fr_base_X_fr_RL_calf_joint& MotionTransforms::Type_fr_base_X_fr_RL_calf_joint::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    Scalar sin_q_RL_thigh_joint  = ScalarTraits::sin( q(RL_THIGH_JOINT) );
    Scalar cos_q_RL_thigh_joint  = ScalarTraits::cos( q(RL_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_RL_thigh_joint;
    (*this)(0,1) = -cos_q_RL_thigh_joint;
    (*this)(1,0) = sin_q_RL_hip_joint * cos_q_RL_thigh_joint;
    (*this)(1,1) = -sin_q_RL_hip_joint * sin_q_RL_thigh_joint;
    (*this)(1,2) = cos_q_RL_hip_joint;
    (*this)(2,0) = -cos_q_RL_hip_joint * cos_q_RL_thigh_joint;
    (*this)(2,1) = cos_q_RL_hip_joint * sin_q_RL_thigh_joint;
    (*this)(2,2) = sin_q_RL_hip_joint;
    (*this)(3,0) = ((- ty_RL_hip_joint * cos_q_RL_hip_joint)- ty_RL_thigh_joint) * cos_q_RL_thigh_joint;
    (*this)(3,1) = (( ty_RL_hip_joint * cos_q_RL_hip_joint)+ ty_RL_thigh_joint) * sin_q_RL_thigh_joint;
    (*this)(3,2) = ( tx_RL_calf_joint * cos_q_RL_thigh_joint)+( ty_RL_hip_joint * sin_q_RL_hip_joint);
    (*this)(3,3) = -sin_q_RL_thigh_joint;
    (*this)(3,4) = -cos_q_RL_thigh_joint;
    (*this)(4,0) = ( tx_RL_hip_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)-( ty_RL_thigh_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint);
    (*this)(4,1) = (- tx_RL_hip_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)-( ty_RL_thigh_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint)+( tx_RL_calf_joint * cos_q_RL_hip_joint);
    (*this)(4,2) = ( tx_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)-( tx_RL_hip_joint * sin_q_RL_hip_joint);
    (*this)(4,3) = sin_q_RL_hip_joint * cos_q_RL_thigh_joint;
    (*this)(4,4) = -sin_q_RL_hip_joint * sin_q_RL_thigh_joint;
    (*this)(4,5) = cos_q_RL_hip_joint;
    (*this)(5,0) = ((( ty_RL_thigh_joint * cos_q_RL_hip_joint)+ ty_RL_hip_joint) * sin_q_RL_thigh_joint)+( tx_RL_hip_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(5,1) = (- tx_RL_hip_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+((( ty_RL_thigh_joint * cos_q_RL_hip_joint)+ ty_RL_hip_joint) * cos_q_RL_thigh_joint)+( tx_RL_calf_joint * sin_q_RL_hip_joint);
    (*this)(5,2) = ( tx_RL_hip_joint * cos_q_RL_hip_joint)-( tx_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint);
    (*this)(5,3) = -cos_q_RL_hip_joint * cos_q_RL_thigh_joint;
    (*this)(5,4) = cos_q_RL_hip_joint * sin_q_RL_thigh_joint;
    (*this)(5,5) = sin_q_RL_hip_joint;
    return *this;
}
MotionTransforms::Type_fr_base_X_fr_RR_hip_joint::Type_fr_base_X_fr_RR_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = - ty_RR_hip_joint;    // Maxima DSL: -_k__ty_RR_hip_joint
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,0) =  tx_RR_hip_joint;    // Maxima DSL: _k__tx_RR_hip_joint
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 1.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) =  tx_RR_hip_joint;    // Maxima DSL: _k__tx_RR_hip_joint
    (*this)(5,2) = - ty_RR_hip_joint;    // Maxima DSL: -_k__ty_RR_hip_joint
    (*this)(5,3) = -1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_fr_base_X_fr_RR_hip_joint& MotionTransforms::Type_fr_base_X_fr_RR_hip_joint::update(const state_t& q)
{
    return *this;
}
MotionTransforms::Type_fr_base_X_fr_RR_thigh_joint::Type_fr_base_X_fr_RR_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = -1.0;
    (*this)(3,5) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,4) = 0.0;
}

const MotionTransforms::Type_fr_base_X_fr_RR_thigh_joint& MotionTransforms::Type_fr_base_X_fr_RR_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    (*this)(1,0) = sin_q_RR_hip_joint;
    (*this)(1,2) = cos_q_RR_hip_joint;
    (*this)(2,0) = -cos_q_RR_hip_joint;
    (*this)(2,2) = sin_q_RR_hip_joint;
    (*this)(3,0) = (- ty_RR_hip_joint * cos_q_RR_hip_joint)- ty_RR_thigh_joint;
    (*this)(3,2) =  ty_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(4,0) =  tx_RR_hip_joint * cos_q_RR_hip_joint;
    (*this)(4,1) = - ty_RR_thigh_joint * sin_q_RR_hip_joint;
    (*this)(4,2) = - tx_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(4,3) = sin_q_RR_hip_joint;
    (*this)(4,5) = cos_q_RR_hip_joint;
    (*this)(5,0) =  tx_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(5,1) = ( ty_RR_thigh_joint * cos_q_RR_hip_joint)+ ty_RR_hip_joint;
    (*this)(5,2) =  tx_RR_hip_joint * cos_q_RR_hip_joint;
    (*this)(5,3) = -cos_q_RR_hip_joint;
    (*this)(5,5) = sin_q_RR_hip_joint;
    return *this;
}
MotionTransforms::Type_fr_base_X_fr_RR_calf_joint::Type_fr_base_X_fr_RR_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,5) = 0.0;
}

const MotionTransforms::Type_fr_base_X_fr_RR_calf_joint& MotionTransforms::Type_fr_base_X_fr_RR_calf_joint::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    Scalar sin_q_RR_thigh_joint  = ScalarTraits::sin( q(RR_THIGH_JOINT) );
    Scalar cos_q_RR_thigh_joint  = ScalarTraits::cos( q(RR_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_RR_thigh_joint;
    (*this)(0,1) = -cos_q_RR_thigh_joint;
    (*this)(1,0) = sin_q_RR_hip_joint * cos_q_RR_thigh_joint;
    (*this)(1,1) = -sin_q_RR_hip_joint * sin_q_RR_thigh_joint;
    (*this)(1,2) = cos_q_RR_hip_joint;
    (*this)(2,0) = -cos_q_RR_hip_joint * cos_q_RR_thigh_joint;
    (*this)(2,1) = cos_q_RR_hip_joint * sin_q_RR_thigh_joint;
    (*this)(2,2) = sin_q_RR_hip_joint;
    (*this)(3,0) = ((- ty_RR_hip_joint * cos_q_RR_hip_joint)- ty_RR_thigh_joint) * cos_q_RR_thigh_joint;
    (*this)(3,1) = (( ty_RR_hip_joint * cos_q_RR_hip_joint)+ ty_RR_thigh_joint) * sin_q_RR_thigh_joint;
    (*this)(3,2) = ( tx_RR_calf_joint * cos_q_RR_thigh_joint)+( ty_RR_hip_joint * sin_q_RR_hip_joint);
    (*this)(3,3) = -sin_q_RR_thigh_joint;
    (*this)(3,4) = -cos_q_RR_thigh_joint;
    (*this)(4,0) = ( tx_RR_hip_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)-( ty_RR_thigh_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint);
    (*this)(4,1) = (- tx_RR_hip_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)-( ty_RR_thigh_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint)+( tx_RR_calf_joint * cos_q_RR_hip_joint);
    (*this)(4,2) = ( tx_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)-( tx_RR_hip_joint * sin_q_RR_hip_joint);
    (*this)(4,3) = sin_q_RR_hip_joint * cos_q_RR_thigh_joint;
    (*this)(4,4) = -sin_q_RR_hip_joint * sin_q_RR_thigh_joint;
    (*this)(4,5) = cos_q_RR_hip_joint;
    (*this)(5,0) = ((( ty_RR_thigh_joint * cos_q_RR_hip_joint)+ ty_RR_hip_joint) * sin_q_RR_thigh_joint)+( tx_RR_hip_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(5,1) = (- tx_RR_hip_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+((( ty_RR_thigh_joint * cos_q_RR_hip_joint)+ ty_RR_hip_joint) * cos_q_RR_thigh_joint)+( tx_RR_calf_joint * sin_q_RR_hip_joint);
    (*this)(5,2) = ( tx_RR_hip_joint * cos_q_RR_hip_joint)-( tx_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint);
    (*this)(5,3) = -cos_q_RR_hip_joint * cos_q_RR_thigh_joint;
    (*this)(5,4) = cos_q_RR_hip_joint * sin_q_RR_thigh_joint;
    (*this)(5,5) = sin_q_RR_hip_joint;
    return *this;
}
MotionTransforms::Type_imu_link_X_fr_FL_hip_joint::Type_imu_link_X_fr_FL_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = - ty_FL_hip_joint;    // Maxima DSL: -_k__ty_FL_hip_joint
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,0) =  tx_FL_hip_joint;    // Maxima DSL: _k__tx_FL_hip_joint
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 1.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) =  tx_FL_hip_joint;    // Maxima DSL: _k__tx_FL_hip_joint
    (*this)(5,2) = - ty_FL_hip_joint;    // Maxima DSL: -_k__ty_FL_hip_joint
    (*this)(5,3) = -1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_imu_link_X_fr_FL_hip_joint& MotionTransforms::Type_imu_link_X_fr_FL_hip_joint::update(const state_t& q)
{
    return *this;
}
MotionTransforms::Type_imu_link_X_fr_FL_thigh_joint::Type_imu_link_X_fr_FL_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = -1.0;
    (*this)(3,5) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,4) = 0.0;
}

const MotionTransforms::Type_imu_link_X_fr_FL_thigh_joint& MotionTransforms::Type_imu_link_X_fr_FL_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    (*this)(1,0) = sin_q_FL_hip_joint;
    (*this)(1,2) = cos_q_FL_hip_joint;
    (*this)(2,0) = -cos_q_FL_hip_joint;
    (*this)(2,2) = sin_q_FL_hip_joint;
    (*this)(3,0) = (- ty_FL_hip_joint * cos_q_FL_hip_joint)- ty_FL_thigh_joint;
    (*this)(3,2) =  ty_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(4,0) =  tx_FL_hip_joint * cos_q_FL_hip_joint;
    (*this)(4,1) = - ty_FL_thigh_joint * sin_q_FL_hip_joint;
    (*this)(4,2) = - tx_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(4,3) = sin_q_FL_hip_joint;
    (*this)(4,5) = cos_q_FL_hip_joint;
    (*this)(5,0) =  tx_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(5,1) = ( ty_FL_thigh_joint * cos_q_FL_hip_joint)+ ty_FL_hip_joint;
    (*this)(5,2) =  tx_FL_hip_joint * cos_q_FL_hip_joint;
    (*this)(5,3) = -cos_q_FL_hip_joint;
    (*this)(5,5) = sin_q_FL_hip_joint;
    return *this;
}
MotionTransforms::Type_imu_link_X_fr_FL_calf_joint::Type_imu_link_X_fr_FL_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,5) = 0.0;
}

const MotionTransforms::Type_imu_link_X_fr_FL_calf_joint& MotionTransforms::Type_imu_link_X_fr_FL_calf_joint::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    Scalar sin_q_FL_thigh_joint  = ScalarTraits::sin( q(FL_THIGH_JOINT) );
    Scalar cos_q_FL_thigh_joint  = ScalarTraits::cos( q(FL_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_FL_thigh_joint;
    (*this)(0,1) = -cos_q_FL_thigh_joint;
    (*this)(1,0) = sin_q_FL_hip_joint * cos_q_FL_thigh_joint;
    (*this)(1,1) = -sin_q_FL_hip_joint * sin_q_FL_thigh_joint;
    (*this)(1,2) = cos_q_FL_hip_joint;
    (*this)(2,0) = -cos_q_FL_hip_joint * cos_q_FL_thigh_joint;
    (*this)(2,1) = cos_q_FL_hip_joint * sin_q_FL_thigh_joint;
    (*this)(2,2) = sin_q_FL_hip_joint;
    (*this)(3,0) = ((- ty_FL_hip_joint * cos_q_FL_hip_joint)- ty_FL_thigh_joint) * cos_q_FL_thigh_joint;
    (*this)(3,1) = (( ty_FL_hip_joint * cos_q_FL_hip_joint)+ ty_FL_thigh_joint) * sin_q_FL_thigh_joint;
    (*this)(3,2) = ( tx_FL_calf_joint * cos_q_FL_thigh_joint)+( ty_FL_hip_joint * sin_q_FL_hip_joint);
    (*this)(3,3) = -sin_q_FL_thigh_joint;
    (*this)(3,4) = -cos_q_FL_thigh_joint;
    (*this)(4,0) = ( tx_FL_hip_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)-( ty_FL_thigh_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint);
    (*this)(4,1) = (- tx_FL_hip_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)-( ty_FL_thigh_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint)+( tx_FL_calf_joint * cos_q_FL_hip_joint);
    (*this)(4,2) = ( tx_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)-( tx_FL_hip_joint * sin_q_FL_hip_joint);
    (*this)(4,3) = sin_q_FL_hip_joint * cos_q_FL_thigh_joint;
    (*this)(4,4) = -sin_q_FL_hip_joint * sin_q_FL_thigh_joint;
    (*this)(4,5) = cos_q_FL_hip_joint;
    (*this)(5,0) = ((( ty_FL_thigh_joint * cos_q_FL_hip_joint)+ ty_FL_hip_joint) * sin_q_FL_thigh_joint)+( tx_FL_hip_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(5,1) = (- tx_FL_hip_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+((( ty_FL_thigh_joint * cos_q_FL_hip_joint)+ ty_FL_hip_joint) * cos_q_FL_thigh_joint)+( tx_FL_calf_joint * sin_q_FL_hip_joint);
    (*this)(5,2) = ( tx_FL_hip_joint * cos_q_FL_hip_joint)-( tx_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint);
    (*this)(5,3) = -cos_q_FL_hip_joint * cos_q_FL_thigh_joint;
    (*this)(5,4) = cos_q_FL_hip_joint * sin_q_FL_thigh_joint;
    (*this)(5,5) = sin_q_FL_hip_joint;
    return *this;
}
MotionTransforms::Type_imu_link_X_fr_FR_hip_joint::Type_imu_link_X_fr_FR_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = - ty_FR_hip_joint;    // Maxima DSL: -_k__ty_FR_hip_joint
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,0) =  tx_FR_hip_joint;    // Maxima DSL: _k__tx_FR_hip_joint
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 1.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) =  tx_FR_hip_joint;    // Maxima DSL: _k__tx_FR_hip_joint
    (*this)(5,2) = - ty_FR_hip_joint;    // Maxima DSL: -_k__ty_FR_hip_joint
    (*this)(5,3) = -1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_imu_link_X_fr_FR_hip_joint& MotionTransforms::Type_imu_link_X_fr_FR_hip_joint::update(const state_t& q)
{
    return *this;
}
MotionTransforms::Type_imu_link_X_fr_FR_thigh_joint::Type_imu_link_X_fr_FR_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = -1.0;
    (*this)(3,5) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,4) = 0.0;
}

const MotionTransforms::Type_imu_link_X_fr_FR_thigh_joint& MotionTransforms::Type_imu_link_X_fr_FR_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    (*this)(1,0) = sin_q_FR_hip_joint;
    (*this)(1,2) = cos_q_FR_hip_joint;
    (*this)(2,0) = -cos_q_FR_hip_joint;
    (*this)(2,2) = sin_q_FR_hip_joint;
    (*this)(3,0) = (- ty_FR_hip_joint * cos_q_FR_hip_joint)- ty_FR_thigh_joint;
    (*this)(3,2) =  ty_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(4,0) =  tx_FR_hip_joint * cos_q_FR_hip_joint;
    (*this)(4,1) = - ty_FR_thigh_joint * sin_q_FR_hip_joint;
    (*this)(4,2) = - tx_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(4,3) = sin_q_FR_hip_joint;
    (*this)(4,5) = cos_q_FR_hip_joint;
    (*this)(5,0) =  tx_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(5,1) = ( ty_FR_thigh_joint * cos_q_FR_hip_joint)+ ty_FR_hip_joint;
    (*this)(5,2) =  tx_FR_hip_joint * cos_q_FR_hip_joint;
    (*this)(5,3) = -cos_q_FR_hip_joint;
    (*this)(5,5) = sin_q_FR_hip_joint;
    return *this;
}
MotionTransforms::Type_imu_link_X_fr_FR_calf_joint::Type_imu_link_X_fr_FR_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,5) = 0.0;
}

const MotionTransforms::Type_imu_link_X_fr_FR_calf_joint& MotionTransforms::Type_imu_link_X_fr_FR_calf_joint::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    Scalar sin_q_FR_thigh_joint  = ScalarTraits::sin( q(FR_THIGH_JOINT) );
    Scalar cos_q_FR_thigh_joint  = ScalarTraits::cos( q(FR_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_FR_thigh_joint;
    (*this)(0,1) = -cos_q_FR_thigh_joint;
    (*this)(1,0) = sin_q_FR_hip_joint * cos_q_FR_thigh_joint;
    (*this)(1,1) = -sin_q_FR_hip_joint * sin_q_FR_thigh_joint;
    (*this)(1,2) = cos_q_FR_hip_joint;
    (*this)(2,0) = -cos_q_FR_hip_joint * cos_q_FR_thigh_joint;
    (*this)(2,1) = cos_q_FR_hip_joint * sin_q_FR_thigh_joint;
    (*this)(2,2) = sin_q_FR_hip_joint;
    (*this)(3,0) = ((- ty_FR_hip_joint * cos_q_FR_hip_joint)- ty_FR_thigh_joint) * cos_q_FR_thigh_joint;
    (*this)(3,1) = (( ty_FR_hip_joint * cos_q_FR_hip_joint)+ ty_FR_thigh_joint) * sin_q_FR_thigh_joint;
    (*this)(3,2) = ( tx_FR_calf_joint * cos_q_FR_thigh_joint)+( ty_FR_hip_joint * sin_q_FR_hip_joint);
    (*this)(3,3) = -sin_q_FR_thigh_joint;
    (*this)(3,4) = -cos_q_FR_thigh_joint;
    (*this)(4,0) = ( tx_FR_hip_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)-( ty_FR_thigh_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint);
    (*this)(4,1) = (- tx_FR_hip_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)-( ty_FR_thigh_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint)+( tx_FR_calf_joint * cos_q_FR_hip_joint);
    (*this)(4,2) = ( tx_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)-( tx_FR_hip_joint * sin_q_FR_hip_joint);
    (*this)(4,3) = sin_q_FR_hip_joint * cos_q_FR_thigh_joint;
    (*this)(4,4) = -sin_q_FR_hip_joint * sin_q_FR_thigh_joint;
    (*this)(4,5) = cos_q_FR_hip_joint;
    (*this)(5,0) = ((( ty_FR_thigh_joint * cos_q_FR_hip_joint)+ ty_FR_hip_joint) * sin_q_FR_thigh_joint)+( tx_FR_hip_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(5,1) = (- tx_FR_hip_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+((( ty_FR_thigh_joint * cos_q_FR_hip_joint)+ ty_FR_hip_joint) * cos_q_FR_thigh_joint)+( tx_FR_calf_joint * sin_q_FR_hip_joint);
    (*this)(5,2) = ( tx_FR_hip_joint * cos_q_FR_hip_joint)-( tx_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint);
    (*this)(5,3) = -cos_q_FR_hip_joint * cos_q_FR_thigh_joint;
    (*this)(5,4) = cos_q_FR_hip_joint * sin_q_FR_thigh_joint;
    (*this)(5,5) = sin_q_FR_hip_joint;
    return *this;
}
MotionTransforms::Type_imu_link_X_fr_RL_hip_joint::Type_imu_link_X_fr_RL_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = - ty_RL_hip_joint;    // Maxima DSL: -_k__ty_RL_hip_joint
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,0) =  tx_RL_hip_joint;    // Maxima DSL: _k__tx_RL_hip_joint
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 1.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) =  tx_RL_hip_joint;    // Maxima DSL: _k__tx_RL_hip_joint
    (*this)(5,2) = - ty_RL_hip_joint;    // Maxima DSL: -_k__ty_RL_hip_joint
    (*this)(5,3) = -1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_imu_link_X_fr_RL_hip_joint& MotionTransforms::Type_imu_link_X_fr_RL_hip_joint::update(const state_t& q)
{
    return *this;
}
MotionTransforms::Type_imu_link_X_fr_RL_thigh_joint::Type_imu_link_X_fr_RL_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = -1.0;
    (*this)(3,5) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,4) = 0.0;
}

const MotionTransforms::Type_imu_link_X_fr_RL_thigh_joint& MotionTransforms::Type_imu_link_X_fr_RL_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    (*this)(1,0) = sin_q_RL_hip_joint;
    (*this)(1,2) = cos_q_RL_hip_joint;
    (*this)(2,0) = -cos_q_RL_hip_joint;
    (*this)(2,2) = sin_q_RL_hip_joint;
    (*this)(3,0) = (- ty_RL_hip_joint * cos_q_RL_hip_joint)- ty_RL_thigh_joint;
    (*this)(3,2) =  ty_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(4,0) =  tx_RL_hip_joint * cos_q_RL_hip_joint;
    (*this)(4,1) = - ty_RL_thigh_joint * sin_q_RL_hip_joint;
    (*this)(4,2) = - tx_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(4,3) = sin_q_RL_hip_joint;
    (*this)(4,5) = cos_q_RL_hip_joint;
    (*this)(5,0) =  tx_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(5,1) = ( ty_RL_thigh_joint * cos_q_RL_hip_joint)+ ty_RL_hip_joint;
    (*this)(5,2) =  tx_RL_hip_joint * cos_q_RL_hip_joint;
    (*this)(5,3) = -cos_q_RL_hip_joint;
    (*this)(5,5) = sin_q_RL_hip_joint;
    return *this;
}
MotionTransforms::Type_imu_link_X_fr_RL_calf_joint::Type_imu_link_X_fr_RL_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,5) = 0.0;
}

const MotionTransforms::Type_imu_link_X_fr_RL_calf_joint& MotionTransforms::Type_imu_link_X_fr_RL_calf_joint::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    Scalar sin_q_RL_thigh_joint  = ScalarTraits::sin( q(RL_THIGH_JOINT) );
    Scalar cos_q_RL_thigh_joint  = ScalarTraits::cos( q(RL_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_RL_thigh_joint;
    (*this)(0,1) = -cos_q_RL_thigh_joint;
    (*this)(1,0) = sin_q_RL_hip_joint * cos_q_RL_thigh_joint;
    (*this)(1,1) = -sin_q_RL_hip_joint * sin_q_RL_thigh_joint;
    (*this)(1,2) = cos_q_RL_hip_joint;
    (*this)(2,0) = -cos_q_RL_hip_joint * cos_q_RL_thigh_joint;
    (*this)(2,1) = cos_q_RL_hip_joint * sin_q_RL_thigh_joint;
    (*this)(2,2) = sin_q_RL_hip_joint;
    (*this)(3,0) = ((- ty_RL_hip_joint * cos_q_RL_hip_joint)- ty_RL_thigh_joint) * cos_q_RL_thigh_joint;
    (*this)(3,1) = (( ty_RL_hip_joint * cos_q_RL_hip_joint)+ ty_RL_thigh_joint) * sin_q_RL_thigh_joint;
    (*this)(3,2) = ( tx_RL_calf_joint * cos_q_RL_thigh_joint)+( ty_RL_hip_joint * sin_q_RL_hip_joint);
    (*this)(3,3) = -sin_q_RL_thigh_joint;
    (*this)(3,4) = -cos_q_RL_thigh_joint;
    (*this)(4,0) = ( tx_RL_hip_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)-( ty_RL_thigh_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint);
    (*this)(4,1) = (- tx_RL_hip_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)-( ty_RL_thigh_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint)+( tx_RL_calf_joint * cos_q_RL_hip_joint);
    (*this)(4,2) = ( tx_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)-( tx_RL_hip_joint * sin_q_RL_hip_joint);
    (*this)(4,3) = sin_q_RL_hip_joint * cos_q_RL_thigh_joint;
    (*this)(4,4) = -sin_q_RL_hip_joint * sin_q_RL_thigh_joint;
    (*this)(4,5) = cos_q_RL_hip_joint;
    (*this)(5,0) = ((( ty_RL_thigh_joint * cos_q_RL_hip_joint)+ ty_RL_hip_joint) * sin_q_RL_thigh_joint)+( tx_RL_hip_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(5,1) = (- tx_RL_hip_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+((( ty_RL_thigh_joint * cos_q_RL_hip_joint)+ ty_RL_hip_joint) * cos_q_RL_thigh_joint)+( tx_RL_calf_joint * sin_q_RL_hip_joint);
    (*this)(5,2) = ( tx_RL_hip_joint * cos_q_RL_hip_joint)-( tx_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint);
    (*this)(5,3) = -cos_q_RL_hip_joint * cos_q_RL_thigh_joint;
    (*this)(5,4) = cos_q_RL_hip_joint * sin_q_RL_thigh_joint;
    (*this)(5,5) = sin_q_RL_hip_joint;
    return *this;
}
MotionTransforms::Type_imu_link_X_fr_RR_hip_joint::Type_imu_link_X_fr_RR_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = - ty_RR_hip_joint;    // Maxima DSL: -_k__ty_RR_hip_joint
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,0) =  tx_RR_hip_joint;    // Maxima DSL: _k__tx_RR_hip_joint
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 1.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) =  tx_RR_hip_joint;    // Maxima DSL: _k__tx_RR_hip_joint
    (*this)(5,2) = - ty_RR_hip_joint;    // Maxima DSL: -_k__ty_RR_hip_joint
    (*this)(5,3) = -1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_imu_link_X_fr_RR_hip_joint& MotionTransforms::Type_imu_link_X_fr_RR_hip_joint::update(const state_t& q)
{
    return *this;
}
MotionTransforms::Type_imu_link_X_fr_RR_thigh_joint::Type_imu_link_X_fr_RR_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = -1.0;
    (*this)(3,5) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,4) = 0.0;
}

const MotionTransforms::Type_imu_link_X_fr_RR_thigh_joint& MotionTransforms::Type_imu_link_X_fr_RR_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    (*this)(1,0) = sin_q_RR_hip_joint;
    (*this)(1,2) = cos_q_RR_hip_joint;
    (*this)(2,0) = -cos_q_RR_hip_joint;
    (*this)(2,2) = sin_q_RR_hip_joint;
    (*this)(3,0) = (- ty_RR_hip_joint * cos_q_RR_hip_joint)- ty_RR_thigh_joint;
    (*this)(3,2) =  ty_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(4,0) =  tx_RR_hip_joint * cos_q_RR_hip_joint;
    (*this)(4,1) = - ty_RR_thigh_joint * sin_q_RR_hip_joint;
    (*this)(4,2) = - tx_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(4,3) = sin_q_RR_hip_joint;
    (*this)(4,5) = cos_q_RR_hip_joint;
    (*this)(5,0) =  tx_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(5,1) = ( ty_RR_thigh_joint * cos_q_RR_hip_joint)+ ty_RR_hip_joint;
    (*this)(5,2) =  tx_RR_hip_joint * cos_q_RR_hip_joint;
    (*this)(5,3) = -cos_q_RR_hip_joint;
    (*this)(5,5) = sin_q_RR_hip_joint;
    return *this;
}
MotionTransforms::Type_imu_link_X_fr_RR_calf_joint::Type_imu_link_X_fr_RR_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,5) = 0.0;
}

const MotionTransforms::Type_imu_link_X_fr_RR_calf_joint& MotionTransforms::Type_imu_link_X_fr_RR_calf_joint::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    Scalar sin_q_RR_thigh_joint  = ScalarTraits::sin( q(RR_THIGH_JOINT) );
    Scalar cos_q_RR_thigh_joint  = ScalarTraits::cos( q(RR_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_RR_thigh_joint;
    (*this)(0,1) = -cos_q_RR_thigh_joint;
    (*this)(1,0) = sin_q_RR_hip_joint * cos_q_RR_thigh_joint;
    (*this)(1,1) = -sin_q_RR_hip_joint * sin_q_RR_thigh_joint;
    (*this)(1,2) = cos_q_RR_hip_joint;
    (*this)(2,0) = -cos_q_RR_hip_joint * cos_q_RR_thigh_joint;
    (*this)(2,1) = cos_q_RR_hip_joint * sin_q_RR_thigh_joint;
    (*this)(2,2) = sin_q_RR_hip_joint;
    (*this)(3,0) = ((- ty_RR_hip_joint * cos_q_RR_hip_joint)- ty_RR_thigh_joint) * cos_q_RR_thigh_joint;
    (*this)(3,1) = (( ty_RR_hip_joint * cos_q_RR_hip_joint)+ ty_RR_thigh_joint) * sin_q_RR_thigh_joint;
    (*this)(3,2) = ( tx_RR_calf_joint * cos_q_RR_thigh_joint)+( ty_RR_hip_joint * sin_q_RR_hip_joint);
    (*this)(3,3) = -sin_q_RR_thigh_joint;
    (*this)(3,4) = -cos_q_RR_thigh_joint;
    (*this)(4,0) = ( tx_RR_hip_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)-( ty_RR_thigh_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint);
    (*this)(4,1) = (- tx_RR_hip_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)-( ty_RR_thigh_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint)+( tx_RR_calf_joint * cos_q_RR_hip_joint);
    (*this)(4,2) = ( tx_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)-( tx_RR_hip_joint * sin_q_RR_hip_joint);
    (*this)(4,3) = sin_q_RR_hip_joint * cos_q_RR_thigh_joint;
    (*this)(4,4) = -sin_q_RR_hip_joint * sin_q_RR_thigh_joint;
    (*this)(4,5) = cos_q_RR_hip_joint;
    (*this)(5,0) = ((( ty_RR_thigh_joint * cos_q_RR_hip_joint)+ ty_RR_hip_joint) * sin_q_RR_thigh_joint)+( tx_RR_hip_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(5,1) = (- tx_RR_hip_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+((( ty_RR_thigh_joint * cos_q_RR_hip_joint)+ ty_RR_hip_joint) * cos_q_RR_thigh_joint)+( tx_RR_calf_joint * sin_q_RR_hip_joint);
    (*this)(5,2) = ( tx_RR_hip_joint * cos_q_RR_hip_joint)-( tx_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint);
    (*this)(5,3) = -cos_q_RR_hip_joint * cos_q_RR_thigh_joint;
    (*this)(5,4) = cos_q_RR_hip_joint * sin_q_RR_thigh_joint;
    (*this)(5,5) = sin_q_RR_hip_joint;
    return *this;
}
MotionTransforms::Type_fr_FR_hip_X_fr_base::Type_fr_FR_hip_X_fr_base()
{
    (*this)(0,0) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = 1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = - ty_FR_hip_joint;    // Maxima DSL: -_k__ty_FR_hip_joint
    (*this)(5,3) = 1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_fr_FR_hip_X_fr_base& MotionTransforms::Type_fr_FR_hip_X_fr_base::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    (*this)(0,1) = sin_q_FR_hip_joint;
    (*this)(0,2) = -cos_q_FR_hip_joint;
    (*this)(1,1) = cos_q_FR_hip_joint;
    (*this)(1,2) = sin_q_FR_hip_joint;
    (*this)(3,0) = - ty_FR_hip_joint * cos_q_FR_hip_joint;
    (*this)(3,1) =  tx_FR_hip_joint * cos_q_FR_hip_joint;
    (*this)(3,2) =  tx_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(3,4) = sin_q_FR_hip_joint;
    (*this)(3,5) = -cos_q_FR_hip_joint;
    (*this)(4,0) =  ty_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(4,1) = - tx_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(4,2) =  tx_FR_hip_joint * cos_q_FR_hip_joint;
    (*this)(4,4) = cos_q_FR_hip_joint;
    (*this)(4,5) = sin_q_FR_hip_joint;
    return *this;
}
MotionTransforms::Type_fr_base_X_fr_FR_hip::Type_fr_base_X_fr_FR_hip()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,2) = 0.0;
    (*this)(4,5) = 0.0;
    (*this)(5,2) = - ty_FR_hip_joint;    // Maxima DSL: -_k__ty_FR_hip_joint
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_fr_base_X_fr_FR_hip& MotionTransforms::Type_fr_base_X_fr_FR_hip::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    (*this)(1,0) = sin_q_FR_hip_joint;
    (*this)(1,1) = cos_q_FR_hip_joint;
    (*this)(2,0) = -cos_q_FR_hip_joint;
    (*this)(2,1) = sin_q_FR_hip_joint;
    (*this)(3,0) = - ty_FR_hip_joint * cos_q_FR_hip_joint;
    (*this)(3,1) =  ty_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(4,0) =  tx_FR_hip_joint * cos_q_FR_hip_joint;
    (*this)(4,1) = - tx_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(4,3) = sin_q_FR_hip_joint;
    (*this)(4,4) = cos_q_FR_hip_joint;
    (*this)(5,0) =  tx_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(5,1) =  tx_FR_hip_joint * cos_q_FR_hip_joint;
    (*this)(5,3) = -cos_q_FR_hip_joint;
    (*this)(5,4) = sin_q_FR_hip_joint;
    return *this;
}
MotionTransforms::Type_fr_FR_thigh_X_fr_FR_hip::Type_fr_FR_thigh_X_fr_FR_hip()
{
    (*this)(0,1) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 1.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 1.0;
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_fr_FR_thigh_X_fr_FR_hip& MotionTransforms::Type_fr_FR_thigh_X_fr_FR_hip::update(const state_t& q)
{
    Scalar sin_q_FR_thigh_joint  = ScalarTraits::sin( q(FR_THIGH_JOINT) );
    Scalar cos_q_FR_thigh_joint  = ScalarTraits::cos( q(FR_THIGH_JOINT) );
    (*this)(0,0) = cos_q_FR_thigh_joint;
    (*this)(0,2) = -sin_q_FR_thigh_joint;
    (*this)(1,0) = -sin_q_FR_thigh_joint;
    (*this)(1,2) = -cos_q_FR_thigh_joint;
    (*this)(3,0) = - ty_FR_thigh_joint * sin_q_FR_thigh_joint;
    (*this)(3,2) = - ty_FR_thigh_joint * cos_q_FR_thigh_joint;
    (*this)(3,3) = cos_q_FR_thigh_joint;
    (*this)(3,5) = -sin_q_FR_thigh_joint;
    (*this)(4,0) = - ty_FR_thigh_joint * cos_q_FR_thigh_joint;
    (*this)(4,2) =  ty_FR_thigh_joint * sin_q_FR_thigh_joint;
    (*this)(4,3) = -sin_q_FR_thigh_joint;
    (*this)(4,5) = -cos_q_FR_thigh_joint;
    return *this;
}
MotionTransforms::Type_fr_FR_hip_X_fr_FR_thigh::Type_fr_FR_hip_X_fr_FR_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,2) = 1.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(4,5) = 1.0;
    (*this)(5,2) = 0.0;
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_fr_FR_hip_X_fr_FR_thigh& MotionTransforms::Type_fr_FR_hip_X_fr_FR_thigh::update(const state_t& q)
{
    Scalar sin_q_FR_thigh_joint  = ScalarTraits::sin( q(FR_THIGH_JOINT) );
    Scalar cos_q_FR_thigh_joint  = ScalarTraits::cos( q(FR_THIGH_JOINT) );
    (*this)(0,0) = cos_q_FR_thigh_joint;
    (*this)(0,1) = -sin_q_FR_thigh_joint;
    (*this)(2,0) = -sin_q_FR_thigh_joint;
    (*this)(2,1) = -cos_q_FR_thigh_joint;
    (*this)(3,0) = - ty_FR_thigh_joint * sin_q_FR_thigh_joint;
    (*this)(3,1) = - ty_FR_thigh_joint * cos_q_FR_thigh_joint;
    (*this)(3,3) = cos_q_FR_thigh_joint;
    (*this)(3,4) = -sin_q_FR_thigh_joint;
    (*this)(5,0) = - ty_FR_thigh_joint * cos_q_FR_thigh_joint;
    (*this)(5,1) =  ty_FR_thigh_joint * sin_q_FR_thigh_joint;
    (*this)(5,3) = -sin_q_FR_thigh_joint;
    (*this)(5,4) = -cos_q_FR_thigh_joint;
    return *this;
}
MotionTransforms::Type_fr_FR_calf_X_fr_FR_thigh::Type_fr_FR_calf_X_fr_FR_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = - tx_FR_calf_joint;    // Maxima DSL: -_k__tx_FR_calf_joint
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 1.0;
}

const MotionTransforms::Type_fr_FR_calf_X_fr_FR_thigh& MotionTransforms::Type_fr_FR_calf_X_fr_FR_thigh::update(const state_t& q)
{
    Scalar sin_q_FR_calf_joint  = ScalarTraits::sin( q(FR_CALF_JOINT) );
    Scalar cos_q_FR_calf_joint  = ScalarTraits::cos( q(FR_CALF_JOINT) );
    (*this)(0,0) = cos_q_FR_calf_joint;
    (*this)(0,1) = sin_q_FR_calf_joint;
    (*this)(1,0) = -sin_q_FR_calf_joint;
    (*this)(1,1) = cos_q_FR_calf_joint;
    (*this)(3,2) =  tx_FR_calf_joint * sin_q_FR_calf_joint;
    (*this)(3,3) = cos_q_FR_calf_joint;
    (*this)(3,4) = sin_q_FR_calf_joint;
    (*this)(4,2) =  tx_FR_calf_joint * cos_q_FR_calf_joint;
    (*this)(4,3) = -sin_q_FR_calf_joint;
    (*this)(4,4) = cos_q_FR_calf_joint;
    return *this;
}
MotionTransforms::Type_fr_FR_thigh_X_fr_FR_calf::Type_fr_FR_thigh_X_fr_FR_calf()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = - tx_FR_calf_joint;    // Maxima DSL: -_k__tx_FR_calf_joint
    (*this)(4,5) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 1.0;
}

const MotionTransforms::Type_fr_FR_thigh_X_fr_FR_calf& MotionTransforms::Type_fr_FR_thigh_X_fr_FR_calf::update(const state_t& q)
{
    Scalar sin_q_FR_calf_joint  = ScalarTraits::sin( q(FR_CALF_JOINT) );
    Scalar cos_q_FR_calf_joint  = ScalarTraits::cos( q(FR_CALF_JOINT) );
    (*this)(0,0) = cos_q_FR_calf_joint;
    (*this)(0,1) = -sin_q_FR_calf_joint;
    (*this)(1,0) = sin_q_FR_calf_joint;
    (*this)(1,1) = cos_q_FR_calf_joint;
    (*this)(3,3) = cos_q_FR_calf_joint;
    (*this)(3,4) = -sin_q_FR_calf_joint;
    (*this)(4,3) = sin_q_FR_calf_joint;
    (*this)(4,4) = cos_q_FR_calf_joint;
    (*this)(5,0) =  tx_FR_calf_joint * sin_q_FR_calf_joint;
    (*this)(5,1) =  tx_FR_calf_joint * cos_q_FR_calf_joint;
    return *this;
}
MotionTransforms::Type_fr_FL_hip_X_fr_base::Type_fr_FL_hip_X_fr_base()
{
    (*this)(0,0) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = 1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = - ty_FL_hip_joint;    // Maxima DSL: -_k__ty_FL_hip_joint
    (*this)(5,3) = 1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_fr_FL_hip_X_fr_base& MotionTransforms::Type_fr_FL_hip_X_fr_base::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    (*this)(0,1) = sin_q_FL_hip_joint;
    (*this)(0,2) = -cos_q_FL_hip_joint;
    (*this)(1,1) = cos_q_FL_hip_joint;
    (*this)(1,2) = sin_q_FL_hip_joint;
    (*this)(3,0) = - ty_FL_hip_joint * cos_q_FL_hip_joint;
    (*this)(3,1) =  tx_FL_hip_joint * cos_q_FL_hip_joint;
    (*this)(3,2) =  tx_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(3,4) = sin_q_FL_hip_joint;
    (*this)(3,5) = -cos_q_FL_hip_joint;
    (*this)(4,0) =  ty_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(4,1) = - tx_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(4,2) =  tx_FL_hip_joint * cos_q_FL_hip_joint;
    (*this)(4,4) = cos_q_FL_hip_joint;
    (*this)(4,5) = sin_q_FL_hip_joint;
    return *this;
}
MotionTransforms::Type_fr_base_X_fr_FL_hip::Type_fr_base_X_fr_FL_hip()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,2) = 0.0;
    (*this)(4,5) = 0.0;
    (*this)(5,2) = - ty_FL_hip_joint;    // Maxima DSL: -_k__ty_FL_hip_joint
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_fr_base_X_fr_FL_hip& MotionTransforms::Type_fr_base_X_fr_FL_hip::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    (*this)(1,0) = sin_q_FL_hip_joint;
    (*this)(1,1) = cos_q_FL_hip_joint;
    (*this)(2,0) = -cos_q_FL_hip_joint;
    (*this)(2,1) = sin_q_FL_hip_joint;
    (*this)(3,0) = - ty_FL_hip_joint * cos_q_FL_hip_joint;
    (*this)(3,1) =  ty_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(4,0) =  tx_FL_hip_joint * cos_q_FL_hip_joint;
    (*this)(4,1) = - tx_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(4,3) = sin_q_FL_hip_joint;
    (*this)(4,4) = cos_q_FL_hip_joint;
    (*this)(5,0) =  tx_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(5,1) =  tx_FL_hip_joint * cos_q_FL_hip_joint;
    (*this)(5,3) = -cos_q_FL_hip_joint;
    (*this)(5,4) = sin_q_FL_hip_joint;
    return *this;
}
MotionTransforms::Type_fr_FL_thigh_X_fr_FL_hip::Type_fr_FL_thigh_X_fr_FL_hip()
{
    (*this)(0,1) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 1.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 1.0;
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_fr_FL_thigh_X_fr_FL_hip& MotionTransforms::Type_fr_FL_thigh_X_fr_FL_hip::update(const state_t& q)
{
    Scalar sin_q_FL_thigh_joint  = ScalarTraits::sin( q(FL_THIGH_JOINT) );
    Scalar cos_q_FL_thigh_joint  = ScalarTraits::cos( q(FL_THIGH_JOINT) );
    (*this)(0,0) = cos_q_FL_thigh_joint;
    (*this)(0,2) = -sin_q_FL_thigh_joint;
    (*this)(1,0) = -sin_q_FL_thigh_joint;
    (*this)(1,2) = -cos_q_FL_thigh_joint;
    (*this)(3,0) = - ty_FL_thigh_joint * sin_q_FL_thigh_joint;
    (*this)(3,2) = - ty_FL_thigh_joint * cos_q_FL_thigh_joint;
    (*this)(3,3) = cos_q_FL_thigh_joint;
    (*this)(3,5) = -sin_q_FL_thigh_joint;
    (*this)(4,0) = - ty_FL_thigh_joint * cos_q_FL_thigh_joint;
    (*this)(4,2) =  ty_FL_thigh_joint * sin_q_FL_thigh_joint;
    (*this)(4,3) = -sin_q_FL_thigh_joint;
    (*this)(4,5) = -cos_q_FL_thigh_joint;
    return *this;
}
MotionTransforms::Type_fr_FL_hip_X_fr_FL_thigh::Type_fr_FL_hip_X_fr_FL_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,2) = 1.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(4,5) = 1.0;
    (*this)(5,2) = 0.0;
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_fr_FL_hip_X_fr_FL_thigh& MotionTransforms::Type_fr_FL_hip_X_fr_FL_thigh::update(const state_t& q)
{
    Scalar sin_q_FL_thigh_joint  = ScalarTraits::sin( q(FL_THIGH_JOINT) );
    Scalar cos_q_FL_thigh_joint  = ScalarTraits::cos( q(FL_THIGH_JOINT) );
    (*this)(0,0) = cos_q_FL_thigh_joint;
    (*this)(0,1) = -sin_q_FL_thigh_joint;
    (*this)(2,0) = -sin_q_FL_thigh_joint;
    (*this)(2,1) = -cos_q_FL_thigh_joint;
    (*this)(3,0) = - ty_FL_thigh_joint * sin_q_FL_thigh_joint;
    (*this)(3,1) = - ty_FL_thigh_joint * cos_q_FL_thigh_joint;
    (*this)(3,3) = cos_q_FL_thigh_joint;
    (*this)(3,4) = -sin_q_FL_thigh_joint;
    (*this)(5,0) = - ty_FL_thigh_joint * cos_q_FL_thigh_joint;
    (*this)(5,1) =  ty_FL_thigh_joint * sin_q_FL_thigh_joint;
    (*this)(5,3) = -sin_q_FL_thigh_joint;
    (*this)(5,4) = -cos_q_FL_thigh_joint;
    return *this;
}
MotionTransforms::Type_fr_FL_calf_X_fr_FL_thigh::Type_fr_FL_calf_X_fr_FL_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = - tx_FL_calf_joint;    // Maxima DSL: -_k__tx_FL_calf_joint
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 1.0;
}

const MotionTransforms::Type_fr_FL_calf_X_fr_FL_thigh& MotionTransforms::Type_fr_FL_calf_X_fr_FL_thigh::update(const state_t& q)
{
    Scalar sin_q_FL_calf_joint  = ScalarTraits::sin( q(FL_CALF_JOINT) );
    Scalar cos_q_FL_calf_joint  = ScalarTraits::cos( q(FL_CALF_JOINT) );
    (*this)(0,0) = cos_q_FL_calf_joint;
    (*this)(0,1) = sin_q_FL_calf_joint;
    (*this)(1,0) = -sin_q_FL_calf_joint;
    (*this)(1,1) = cos_q_FL_calf_joint;
    (*this)(3,2) =  tx_FL_calf_joint * sin_q_FL_calf_joint;
    (*this)(3,3) = cos_q_FL_calf_joint;
    (*this)(3,4) = sin_q_FL_calf_joint;
    (*this)(4,2) =  tx_FL_calf_joint * cos_q_FL_calf_joint;
    (*this)(4,3) = -sin_q_FL_calf_joint;
    (*this)(4,4) = cos_q_FL_calf_joint;
    return *this;
}
MotionTransforms::Type_fr_FL_thigh_X_fr_FL_calf::Type_fr_FL_thigh_X_fr_FL_calf()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = - tx_FL_calf_joint;    // Maxima DSL: -_k__tx_FL_calf_joint
    (*this)(4,5) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 1.0;
}

const MotionTransforms::Type_fr_FL_thigh_X_fr_FL_calf& MotionTransforms::Type_fr_FL_thigh_X_fr_FL_calf::update(const state_t& q)
{
    Scalar sin_q_FL_calf_joint  = ScalarTraits::sin( q(FL_CALF_JOINT) );
    Scalar cos_q_FL_calf_joint  = ScalarTraits::cos( q(FL_CALF_JOINT) );
    (*this)(0,0) = cos_q_FL_calf_joint;
    (*this)(0,1) = -sin_q_FL_calf_joint;
    (*this)(1,0) = sin_q_FL_calf_joint;
    (*this)(1,1) = cos_q_FL_calf_joint;
    (*this)(3,3) = cos_q_FL_calf_joint;
    (*this)(3,4) = -sin_q_FL_calf_joint;
    (*this)(4,3) = sin_q_FL_calf_joint;
    (*this)(4,4) = cos_q_FL_calf_joint;
    (*this)(5,0) =  tx_FL_calf_joint * sin_q_FL_calf_joint;
    (*this)(5,1) =  tx_FL_calf_joint * cos_q_FL_calf_joint;
    return *this;
}
MotionTransforms::Type_fr_RR_hip_X_fr_base::Type_fr_RR_hip_X_fr_base()
{
    (*this)(0,0) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = 1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = - ty_RR_hip_joint;    // Maxima DSL: -_k__ty_RR_hip_joint
    (*this)(5,3) = 1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_fr_RR_hip_X_fr_base& MotionTransforms::Type_fr_RR_hip_X_fr_base::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    (*this)(0,1) = sin_q_RR_hip_joint;
    (*this)(0,2) = -cos_q_RR_hip_joint;
    (*this)(1,1) = cos_q_RR_hip_joint;
    (*this)(1,2) = sin_q_RR_hip_joint;
    (*this)(3,0) = - ty_RR_hip_joint * cos_q_RR_hip_joint;
    (*this)(3,1) =  tx_RR_hip_joint * cos_q_RR_hip_joint;
    (*this)(3,2) =  tx_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(3,4) = sin_q_RR_hip_joint;
    (*this)(3,5) = -cos_q_RR_hip_joint;
    (*this)(4,0) =  ty_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(4,1) = - tx_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(4,2) =  tx_RR_hip_joint * cos_q_RR_hip_joint;
    (*this)(4,4) = cos_q_RR_hip_joint;
    (*this)(4,5) = sin_q_RR_hip_joint;
    return *this;
}
MotionTransforms::Type_fr_base_X_fr_RR_hip::Type_fr_base_X_fr_RR_hip()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,2) = 0.0;
    (*this)(4,5) = 0.0;
    (*this)(5,2) = - ty_RR_hip_joint;    // Maxima DSL: -_k__ty_RR_hip_joint
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_fr_base_X_fr_RR_hip& MotionTransforms::Type_fr_base_X_fr_RR_hip::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    (*this)(1,0) = sin_q_RR_hip_joint;
    (*this)(1,1) = cos_q_RR_hip_joint;
    (*this)(2,0) = -cos_q_RR_hip_joint;
    (*this)(2,1) = sin_q_RR_hip_joint;
    (*this)(3,0) = - ty_RR_hip_joint * cos_q_RR_hip_joint;
    (*this)(3,1) =  ty_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(4,0) =  tx_RR_hip_joint * cos_q_RR_hip_joint;
    (*this)(4,1) = - tx_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(4,3) = sin_q_RR_hip_joint;
    (*this)(4,4) = cos_q_RR_hip_joint;
    (*this)(5,0) =  tx_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(5,1) =  tx_RR_hip_joint * cos_q_RR_hip_joint;
    (*this)(5,3) = -cos_q_RR_hip_joint;
    (*this)(5,4) = sin_q_RR_hip_joint;
    return *this;
}
MotionTransforms::Type_fr_RR_thigh_X_fr_RR_hip::Type_fr_RR_thigh_X_fr_RR_hip()
{
    (*this)(0,1) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 1.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 1.0;
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_fr_RR_thigh_X_fr_RR_hip& MotionTransforms::Type_fr_RR_thigh_X_fr_RR_hip::update(const state_t& q)
{
    Scalar sin_q_RR_thigh_joint  = ScalarTraits::sin( q(RR_THIGH_JOINT) );
    Scalar cos_q_RR_thigh_joint  = ScalarTraits::cos( q(RR_THIGH_JOINT) );
    (*this)(0,0) = cos_q_RR_thigh_joint;
    (*this)(0,2) = -sin_q_RR_thigh_joint;
    (*this)(1,0) = -sin_q_RR_thigh_joint;
    (*this)(1,2) = -cos_q_RR_thigh_joint;
    (*this)(3,0) = - ty_RR_thigh_joint * sin_q_RR_thigh_joint;
    (*this)(3,2) = - ty_RR_thigh_joint * cos_q_RR_thigh_joint;
    (*this)(3,3) = cos_q_RR_thigh_joint;
    (*this)(3,5) = -sin_q_RR_thigh_joint;
    (*this)(4,0) = - ty_RR_thigh_joint * cos_q_RR_thigh_joint;
    (*this)(4,2) =  ty_RR_thigh_joint * sin_q_RR_thigh_joint;
    (*this)(4,3) = -sin_q_RR_thigh_joint;
    (*this)(4,5) = -cos_q_RR_thigh_joint;
    return *this;
}
MotionTransforms::Type_fr_RR_hip_X_fr_RR_thigh::Type_fr_RR_hip_X_fr_RR_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,2) = 1.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(4,5) = 1.0;
    (*this)(5,2) = 0.0;
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_fr_RR_hip_X_fr_RR_thigh& MotionTransforms::Type_fr_RR_hip_X_fr_RR_thigh::update(const state_t& q)
{
    Scalar sin_q_RR_thigh_joint  = ScalarTraits::sin( q(RR_THIGH_JOINT) );
    Scalar cos_q_RR_thigh_joint  = ScalarTraits::cos( q(RR_THIGH_JOINT) );
    (*this)(0,0) = cos_q_RR_thigh_joint;
    (*this)(0,1) = -sin_q_RR_thigh_joint;
    (*this)(2,0) = -sin_q_RR_thigh_joint;
    (*this)(2,1) = -cos_q_RR_thigh_joint;
    (*this)(3,0) = - ty_RR_thigh_joint * sin_q_RR_thigh_joint;
    (*this)(3,1) = - ty_RR_thigh_joint * cos_q_RR_thigh_joint;
    (*this)(3,3) = cos_q_RR_thigh_joint;
    (*this)(3,4) = -sin_q_RR_thigh_joint;
    (*this)(5,0) = - ty_RR_thigh_joint * cos_q_RR_thigh_joint;
    (*this)(5,1) =  ty_RR_thigh_joint * sin_q_RR_thigh_joint;
    (*this)(5,3) = -sin_q_RR_thigh_joint;
    (*this)(5,4) = -cos_q_RR_thigh_joint;
    return *this;
}
MotionTransforms::Type_fr_RR_calf_X_fr_RR_thigh::Type_fr_RR_calf_X_fr_RR_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = - tx_RR_calf_joint;    // Maxima DSL: -_k__tx_RR_calf_joint
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 1.0;
}

const MotionTransforms::Type_fr_RR_calf_X_fr_RR_thigh& MotionTransforms::Type_fr_RR_calf_X_fr_RR_thigh::update(const state_t& q)
{
    Scalar sin_q_RR_calf_joint  = ScalarTraits::sin( q(RR_CALF_JOINT) );
    Scalar cos_q_RR_calf_joint  = ScalarTraits::cos( q(RR_CALF_JOINT) );
    (*this)(0,0) = cos_q_RR_calf_joint;
    (*this)(0,1) = sin_q_RR_calf_joint;
    (*this)(1,0) = -sin_q_RR_calf_joint;
    (*this)(1,1) = cos_q_RR_calf_joint;
    (*this)(3,2) =  tx_RR_calf_joint * sin_q_RR_calf_joint;
    (*this)(3,3) = cos_q_RR_calf_joint;
    (*this)(3,4) = sin_q_RR_calf_joint;
    (*this)(4,2) =  tx_RR_calf_joint * cos_q_RR_calf_joint;
    (*this)(4,3) = -sin_q_RR_calf_joint;
    (*this)(4,4) = cos_q_RR_calf_joint;
    return *this;
}
MotionTransforms::Type_fr_RR_thigh_X_fr_RR_calf::Type_fr_RR_thigh_X_fr_RR_calf()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = - tx_RR_calf_joint;    // Maxima DSL: -_k__tx_RR_calf_joint
    (*this)(4,5) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 1.0;
}

const MotionTransforms::Type_fr_RR_thigh_X_fr_RR_calf& MotionTransforms::Type_fr_RR_thigh_X_fr_RR_calf::update(const state_t& q)
{
    Scalar sin_q_RR_calf_joint  = ScalarTraits::sin( q(RR_CALF_JOINT) );
    Scalar cos_q_RR_calf_joint  = ScalarTraits::cos( q(RR_CALF_JOINT) );
    (*this)(0,0) = cos_q_RR_calf_joint;
    (*this)(0,1) = -sin_q_RR_calf_joint;
    (*this)(1,0) = sin_q_RR_calf_joint;
    (*this)(1,1) = cos_q_RR_calf_joint;
    (*this)(3,3) = cos_q_RR_calf_joint;
    (*this)(3,4) = -sin_q_RR_calf_joint;
    (*this)(4,3) = sin_q_RR_calf_joint;
    (*this)(4,4) = cos_q_RR_calf_joint;
    (*this)(5,0) =  tx_RR_calf_joint * sin_q_RR_calf_joint;
    (*this)(5,1) =  tx_RR_calf_joint * cos_q_RR_calf_joint;
    return *this;
}
MotionTransforms::Type_fr_RL_hip_X_fr_base::Type_fr_RL_hip_X_fr_base()
{
    (*this)(0,0) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = 1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = - ty_RL_hip_joint;    // Maxima DSL: -_k__ty_RL_hip_joint
    (*this)(5,3) = 1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_fr_RL_hip_X_fr_base& MotionTransforms::Type_fr_RL_hip_X_fr_base::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    (*this)(0,1) = sin_q_RL_hip_joint;
    (*this)(0,2) = -cos_q_RL_hip_joint;
    (*this)(1,1) = cos_q_RL_hip_joint;
    (*this)(1,2) = sin_q_RL_hip_joint;
    (*this)(3,0) = - ty_RL_hip_joint * cos_q_RL_hip_joint;
    (*this)(3,1) =  tx_RL_hip_joint * cos_q_RL_hip_joint;
    (*this)(3,2) =  tx_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(3,4) = sin_q_RL_hip_joint;
    (*this)(3,5) = -cos_q_RL_hip_joint;
    (*this)(4,0) =  ty_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(4,1) = - tx_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(4,2) =  tx_RL_hip_joint * cos_q_RL_hip_joint;
    (*this)(4,4) = cos_q_RL_hip_joint;
    (*this)(4,5) = sin_q_RL_hip_joint;
    return *this;
}
MotionTransforms::Type_fr_base_X_fr_RL_hip::Type_fr_base_X_fr_RL_hip()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,2) = 0.0;
    (*this)(4,5) = 0.0;
    (*this)(5,2) = - ty_RL_hip_joint;    // Maxima DSL: -_k__ty_RL_hip_joint
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_fr_base_X_fr_RL_hip& MotionTransforms::Type_fr_base_X_fr_RL_hip::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    (*this)(1,0) = sin_q_RL_hip_joint;
    (*this)(1,1) = cos_q_RL_hip_joint;
    (*this)(2,0) = -cos_q_RL_hip_joint;
    (*this)(2,1) = sin_q_RL_hip_joint;
    (*this)(3,0) = - ty_RL_hip_joint * cos_q_RL_hip_joint;
    (*this)(3,1) =  ty_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(4,0) =  tx_RL_hip_joint * cos_q_RL_hip_joint;
    (*this)(4,1) = - tx_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(4,3) = sin_q_RL_hip_joint;
    (*this)(4,4) = cos_q_RL_hip_joint;
    (*this)(5,0) =  tx_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(5,1) =  tx_RL_hip_joint * cos_q_RL_hip_joint;
    (*this)(5,3) = -cos_q_RL_hip_joint;
    (*this)(5,4) = sin_q_RL_hip_joint;
    return *this;
}
MotionTransforms::Type_fr_RL_thigh_X_fr_RL_hip::Type_fr_RL_thigh_X_fr_RL_hip()
{
    (*this)(0,1) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 1.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 1.0;
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_fr_RL_thigh_X_fr_RL_hip& MotionTransforms::Type_fr_RL_thigh_X_fr_RL_hip::update(const state_t& q)
{
    Scalar sin_q_RL_thigh_joint  = ScalarTraits::sin( q(RL_THIGH_JOINT) );
    Scalar cos_q_RL_thigh_joint  = ScalarTraits::cos( q(RL_THIGH_JOINT) );
    (*this)(0,0) = cos_q_RL_thigh_joint;
    (*this)(0,2) = -sin_q_RL_thigh_joint;
    (*this)(1,0) = -sin_q_RL_thigh_joint;
    (*this)(1,2) = -cos_q_RL_thigh_joint;
    (*this)(3,0) = - ty_RL_thigh_joint * sin_q_RL_thigh_joint;
    (*this)(3,2) = - ty_RL_thigh_joint * cos_q_RL_thigh_joint;
    (*this)(3,3) = cos_q_RL_thigh_joint;
    (*this)(3,5) = -sin_q_RL_thigh_joint;
    (*this)(4,0) = - ty_RL_thigh_joint * cos_q_RL_thigh_joint;
    (*this)(4,2) =  ty_RL_thigh_joint * sin_q_RL_thigh_joint;
    (*this)(4,3) = -sin_q_RL_thigh_joint;
    (*this)(4,5) = -cos_q_RL_thigh_joint;
    return *this;
}
MotionTransforms::Type_fr_RL_hip_X_fr_RL_thigh::Type_fr_RL_hip_X_fr_RL_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,2) = 1.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(4,5) = 1.0;
    (*this)(5,2) = 0.0;
    (*this)(5,5) = 0.0;
}

const MotionTransforms::Type_fr_RL_hip_X_fr_RL_thigh& MotionTransforms::Type_fr_RL_hip_X_fr_RL_thigh::update(const state_t& q)
{
    Scalar sin_q_RL_thigh_joint  = ScalarTraits::sin( q(RL_THIGH_JOINT) );
    Scalar cos_q_RL_thigh_joint  = ScalarTraits::cos( q(RL_THIGH_JOINT) );
    (*this)(0,0) = cos_q_RL_thigh_joint;
    (*this)(0,1) = -sin_q_RL_thigh_joint;
    (*this)(2,0) = -sin_q_RL_thigh_joint;
    (*this)(2,1) = -cos_q_RL_thigh_joint;
    (*this)(3,0) = - ty_RL_thigh_joint * sin_q_RL_thigh_joint;
    (*this)(3,1) = - ty_RL_thigh_joint * cos_q_RL_thigh_joint;
    (*this)(3,3) = cos_q_RL_thigh_joint;
    (*this)(3,4) = -sin_q_RL_thigh_joint;
    (*this)(5,0) = - ty_RL_thigh_joint * cos_q_RL_thigh_joint;
    (*this)(5,1) =  ty_RL_thigh_joint * sin_q_RL_thigh_joint;
    (*this)(5,3) = -sin_q_RL_thigh_joint;
    (*this)(5,4) = -cos_q_RL_thigh_joint;
    return *this;
}
MotionTransforms::Type_fr_RL_calf_X_fr_RL_thigh::Type_fr_RL_calf_X_fr_RL_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = - tx_RL_calf_joint;    // Maxima DSL: -_k__tx_RL_calf_joint
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 1.0;
}

const MotionTransforms::Type_fr_RL_calf_X_fr_RL_thigh& MotionTransforms::Type_fr_RL_calf_X_fr_RL_thigh::update(const state_t& q)
{
    Scalar sin_q_RL_calf_joint  = ScalarTraits::sin( q(RL_CALF_JOINT) );
    Scalar cos_q_RL_calf_joint  = ScalarTraits::cos( q(RL_CALF_JOINT) );
    (*this)(0,0) = cos_q_RL_calf_joint;
    (*this)(0,1) = sin_q_RL_calf_joint;
    (*this)(1,0) = -sin_q_RL_calf_joint;
    (*this)(1,1) = cos_q_RL_calf_joint;
    (*this)(3,2) =  tx_RL_calf_joint * sin_q_RL_calf_joint;
    (*this)(3,3) = cos_q_RL_calf_joint;
    (*this)(3,4) = sin_q_RL_calf_joint;
    (*this)(4,2) =  tx_RL_calf_joint * cos_q_RL_calf_joint;
    (*this)(4,3) = -sin_q_RL_calf_joint;
    (*this)(4,4) = cos_q_RL_calf_joint;
    return *this;
}
MotionTransforms::Type_fr_RL_thigh_X_fr_RL_calf::Type_fr_RL_thigh_X_fr_RL_calf()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = - tx_RL_calf_joint;    // Maxima DSL: -_k__tx_RL_calf_joint
    (*this)(4,5) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 1.0;
}

const MotionTransforms::Type_fr_RL_thigh_X_fr_RL_calf& MotionTransforms::Type_fr_RL_thigh_X_fr_RL_calf::update(const state_t& q)
{
    Scalar sin_q_RL_calf_joint  = ScalarTraits::sin( q(RL_CALF_JOINT) );
    Scalar cos_q_RL_calf_joint  = ScalarTraits::cos( q(RL_CALF_JOINT) );
    (*this)(0,0) = cos_q_RL_calf_joint;
    (*this)(0,1) = -sin_q_RL_calf_joint;
    (*this)(1,0) = sin_q_RL_calf_joint;
    (*this)(1,1) = cos_q_RL_calf_joint;
    (*this)(3,3) = cos_q_RL_calf_joint;
    (*this)(3,4) = -sin_q_RL_calf_joint;
    (*this)(4,3) = sin_q_RL_calf_joint;
    (*this)(4,4) = cos_q_RL_calf_joint;
    (*this)(5,0) =  tx_RL_calf_joint * sin_q_RL_calf_joint;
    (*this)(5,1) =  tx_RL_calf_joint * cos_q_RL_calf_joint;
    return *this;
}

ForceTransforms::Type_fr_base_X_FL_foot::Type_fr_base_X_FL_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
}

const ForceTransforms::Type_fr_base_X_FL_foot& ForceTransforms::Type_fr_base_X_FL_foot::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    Scalar sin_q_FL_thigh_joint  = ScalarTraits::sin( q(FL_THIGH_JOINT) );
    Scalar cos_q_FL_thigh_joint  = ScalarTraits::cos( q(FL_THIGH_JOINT) );
    Scalar sin_q_FL_calf_joint  = ScalarTraits::sin( q(FL_CALF_JOINT) );
    Scalar cos_q_FL_calf_joint  = ScalarTraits::cos( q(FL_CALF_JOINT) );
    (*this)(0,0) = (cos_q_FL_calf_joint * cos_q_FL_thigh_joint)-(sin_q_FL_calf_joint * sin_q_FL_thigh_joint);
    (*this)(0,2) = (cos_q_FL_calf_joint * sin_q_FL_thigh_joint)+(sin_q_FL_calf_joint * cos_q_FL_thigh_joint);
    (*this)(0,3) = (((- ty_FL_hip_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_thigh_joint * cos_q_FL_calf_joint)) * sin_q_FL_thigh_joint)+(((- ty_FL_hip_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_thigh_joint * sin_q_FL_calf_joint)) * cos_q_FL_thigh_joint);
    (*this)(0,4) = (- tx_FL_foot * sin_q_FL_calf_joint * sin_q_FL_thigh_joint)+((( tx_FL_foot * cos_q_FL_calf_joint)+ tx_FL_calf_joint) * cos_q_FL_thigh_joint)+( ty_FL_hip_joint * sin_q_FL_hip_joint);
    (*this)(0,5) = (((- ty_FL_hip_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_thigh_joint * sin_q_FL_calf_joint)) * sin_q_FL_thigh_joint)+((( ty_FL_hip_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)+( ty_FL_thigh_joint * cos_q_FL_calf_joint)) * cos_q_FL_thigh_joint);
    (*this)(1,0) = (cos_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+(sin_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(1,1) = cos_q_FL_hip_joint;
    (*this)(1,2) = (sin_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)-(cos_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(1,3) = ((( tx_FL_hip_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_thigh_joint * sin_q_FL_calf_joint * sin_q_FL_hip_joint)) * sin_q_FL_thigh_joint)+((( ty_FL_thigh_joint * cos_q_FL_calf_joint * sin_q_FL_hip_joint)+( tx_FL_hip_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)) * cos_q_FL_thigh_joint)+(((- tx_FL_calf_joint * cos_q_FL_calf_joint)- tx_FL_foot) * cos_q_FL_hip_joint);
    (*this)(1,4) = ((( tx_FL_foot * cos_q_FL_calf_joint)+ tx_FL_calf_joint) * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+( tx_FL_foot * sin_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint)-( tx_FL_hip_joint * sin_q_FL_hip_joint);
    (*this)(1,5) = ((( ty_FL_thigh_joint * cos_q_FL_calf_joint * sin_q_FL_hip_joint)+( tx_FL_hip_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)) * sin_q_FL_thigh_joint)+((( ty_FL_thigh_joint * sin_q_FL_calf_joint * sin_q_FL_hip_joint)-( tx_FL_hip_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)) * cos_q_FL_thigh_joint)-( tx_FL_calf_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint);
    (*this)(2,0) = (-cos_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)-(sin_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(2,1) = sin_q_FL_hip_joint;
    (*this)(2,2) = (cos_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)-(sin_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint);
    (*this)(2,3) = ((( tx_FL_hip_joint * cos_q_FL_calf_joint * sin_q_FL_hip_joint)+( ty_FL_thigh_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)+( ty_FL_hip_joint * sin_q_FL_calf_joint)) * sin_q_FL_thigh_joint)+((( tx_FL_hip_joint * sin_q_FL_calf_joint * sin_q_FL_hip_joint)-( ty_FL_thigh_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_hip_joint * cos_q_FL_calf_joint)) * cos_q_FL_thigh_joint)+(((- tx_FL_calf_joint * cos_q_FL_calf_joint)- tx_FL_foot) * sin_q_FL_hip_joint);
    (*this)(2,4) = (((- tx_FL_foot * cos_q_FL_calf_joint)- tx_FL_calf_joint) * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)-( tx_FL_foot * sin_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)+( tx_FL_hip_joint * cos_q_FL_hip_joint);
    (*this)(2,5) = ((( tx_FL_hip_joint * sin_q_FL_calf_joint * sin_q_FL_hip_joint)-( ty_FL_thigh_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_hip_joint * cos_q_FL_calf_joint)) * sin_q_FL_thigh_joint)+(((- tx_FL_hip_joint * cos_q_FL_calf_joint * sin_q_FL_hip_joint)-( ty_FL_thigh_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_hip_joint * sin_q_FL_calf_joint)) * cos_q_FL_thigh_joint)-( tx_FL_calf_joint * sin_q_FL_calf_joint * sin_q_FL_hip_joint);
    (*this)(3,3) = (cos_q_FL_calf_joint * cos_q_FL_thigh_joint)-(sin_q_FL_calf_joint * sin_q_FL_thigh_joint);
    (*this)(3,5) = (cos_q_FL_calf_joint * sin_q_FL_thigh_joint)+(sin_q_FL_calf_joint * cos_q_FL_thigh_joint);
    (*this)(4,3) = (cos_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+(sin_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(4,4) = cos_q_FL_hip_joint;
    (*this)(4,5) = (sin_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)-(cos_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(5,3) = (-cos_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)-(sin_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(5,4) = sin_q_FL_hip_joint;
    (*this)(5,5) = (cos_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)-(sin_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint);
    return *this;
}
ForceTransforms::Type_fr_base_X_FR_foot::Type_fr_base_X_FR_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
}

const ForceTransforms::Type_fr_base_X_FR_foot& ForceTransforms::Type_fr_base_X_FR_foot::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    Scalar sin_q_FR_thigh_joint  = ScalarTraits::sin( q(FR_THIGH_JOINT) );
    Scalar cos_q_FR_thigh_joint  = ScalarTraits::cos( q(FR_THIGH_JOINT) );
    Scalar sin_q_FR_calf_joint  = ScalarTraits::sin( q(FR_CALF_JOINT) );
    Scalar cos_q_FR_calf_joint  = ScalarTraits::cos( q(FR_CALF_JOINT) );
    (*this)(0,0) = (cos_q_FR_calf_joint * cos_q_FR_thigh_joint)-(sin_q_FR_calf_joint * sin_q_FR_thigh_joint);
    (*this)(0,2) = (cos_q_FR_calf_joint * sin_q_FR_thigh_joint)+(sin_q_FR_calf_joint * cos_q_FR_thigh_joint);
    (*this)(0,3) = (((- ty_FR_hip_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_thigh_joint * cos_q_FR_calf_joint)) * sin_q_FR_thigh_joint)+(((- ty_FR_hip_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_thigh_joint * sin_q_FR_calf_joint)) * cos_q_FR_thigh_joint);
    (*this)(0,4) = (- tx_FR_foot * sin_q_FR_calf_joint * sin_q_FR_thigh_joint)+((( tx_FR_foot * cos_q_FR_calf_joint)+ tx_FR_calf_joint) * cos_q_FR_thigh_joint)+( ty_FR_hip_joint * sin_q_FR_hip_joint);
    (*this)(0,5) = (((- ty_FR_hip_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_thigh_joint * sin_q_FR_calf_joint)) * sin_q_FR_thigh_joint)+((( ty_FR_hip_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)+( ty_FR_thigh_joint * cos_q_FR_calf_joint)) * cos_q_FR_thigh_joint);
    (*this)(1,0) = (cos_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+(sin_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(1,1) = cos_q_FR_hip_joint;
    (*this)(1,2) = (sin_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)-(cos_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(1,3) = ((( tx_FR_hip_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_thigh_joint * sin_q_FR_calf_joint * sin_q_FR_hip_joint)) * sin_q_FR_thigh_joint)+((( ty_FR_thigh_joint * cos_q_FR_calf_joint * sin_q_FR_hip_joint)+( tx_FR_hip_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)) * cos_q_FR_thigh_joint)+(((- tx_FR_calf_joint * cos_q_FR_calf_joint)- tx_FR_foot) * cos_q_FR_hip_joint);
    (*this)(1,4) = ((( tx_FR_foot * cos_q_FR_calf_joint)+ tx_FR_calf_joint) * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+( tx_FR_foot * sin_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint)-( tx_FR_hip_joint * sin_q_FR_hip_joint);
    (*this)(1,5) = ((( ty_FR_thigh_joint * cos_q_FR_calf_joint * sin_q_FR_hip_joint)+( tx_FR_hip_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)) * sin_q_FR_thigh_joint)+((( ty_FR_thigh_joint * sin_q_FR_calf_joint * sin_q_FR_hip_joint)-( tx_FR_hip_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)) * cos_q_FR_thigh_joint)-( tx_FR_calf_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint);
    (*this)(2,0) = (-cos_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)-(sin_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(2,1) = sin_q_FR_hip_joint;
    (*this)(2,2) = (cos_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)-(sin_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint);
    (*this)(2,3) = ((( tx_FR_hip_joint * cos_q_FR_calf_joint * sin_q_FR_hip_joint)+( ty_FR_thigh_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)+( ty_FR_hip_joint * sin_q_FR_calf_joint)) * sin_q_FR_thigh_joint)+((( tx_FR_hip_joint * sin_q_FR_calf_joint * sin_q_FR_hip_joint)-( ty_FR_thigh_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_hip_joint * cos_q_FR_calf_joint)) * cos_q_FR_thigh_joint)+(((- tx_FR_calf_joint * cos_q_FR_calf_joint)- tx_FR_foot) * sin_q_FR_hip_joint);
    (*this)(2,4) = (((- tx_FR_foot * cos_q_FR_calf_joint)- tx_FR_calf_joint) * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)-( tx_FR_foot * sin_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)+( tx_FR_hip_joint * cos_q_FR_hip_joint);
    (*this)(2,5) = ((( tx_FR_hip_joint * sin_q_FR_calf_joint * sin_q_FR_hip_joint)-( ty_FR_thigh_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_hip_joint * cos_q_FR_calf_joint)) * sin_q_FR_thigh_joint)+(((- tx_FR_hip_joint * cos_q_FR_calf_joint * sin_q_FR_hip_joint)-( ty_FR_thigh_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_hip_joint * sin_q_FR_calf_joint)) * cos_q_FR_thigh_joint)-( tx_FR_calf_joint * sin_q_FR_calf_joint * sin_q_FR_hip_joint);
    (*this)(3,3) = (cos_q_FR_calf_joint * cos_q_FR_thigh_joint)-(sin_q_FR_calf_joint * sin_q_FR_thigh_joint);
    (*this)(3,5) = (cos_q_FR_calf_joint * sin_q_FR_thigh_joint)+(sin_q_FR_calf_joint * cos_q_FR_thigh_joint);
    (*this)(4,3) = (cos_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+(sin_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(4,4) = cos_q_FR_hip_joint;
    (*this)(4,5) = (sin_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)-(cos_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(5,3) = (-cos_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)-(sin_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(5,4) = sin_q_FR_hip_joint;
    (*this)(5,5) = (cos_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)-(sin_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint);
    return *this;
}
ForceTransforms::Type_fr_base_X_RL_foot::Type_fr_base_X_RL_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
}

const ForceTransforms::Type_fr_base_X_RL_foot& ForceTransforms::Type_fr_base_X_RL_foot::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    Scalar sin_q_RL_thigh_joint  = ScalarTraits::sin( q(RL_THIGH_JOINT) );
    Scalar cos_q_RL_thigh_joint  = ScalarTraits::cos( q(RL_THIGH_JOINT) );
    Scalar sin_q_RL_calf_joint  = ScalarTraits::sin( q(RL_CALF_JOINT) );
    Scalar cos_q_RL_calf_joint  = ScalarTraits::cos( q(RL_CALF_JOINT) );
    (*this)(0,0) = (cos_q_RL_calf_joint * cos_q_RL_thigh_joint)-(sin_q_RL_calf_joint * sin_q_RL_thigh_joint);
    (*this)(0,2) = (cos_q_RL_calf_joint * sin_q_RL_thigh_joint)+(sin_q_RL_calf_joint * cos_q_RL_thigh_joint);
    (*this)(0,3) = (((- ty_RL_hip_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_thigh_joint * cos_q_RL_calf_joint)) * sin_q_RL_thigh_joint)+(((- ty_RL_hip_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_thigh_joint * sin_q_RL_calf_joint)) * cos_q_RL_thigh_joint);
    (*this)(0,4) = (- tx_RL_foot * sin_q_RL_calf_joint * sin_q_RL_thigh_joint)+((( tx_RL_foot * cos_q_RL_calf_joint)+ tx_RL_calf_joint) * cos_q_RL_thigh_joint)+( ty_RL_hip_joint * sin_q_RL_hip_joint);
    (*this)(0,5) = (((- ty_RL_hip_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_thigh_joint * sin_q_RL_calf_joint)) * sin_q_RL_thigh_joint)+((( ty_RL_hip_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)+( ty_RL_thigh_joint * cos_q_RL_calf_joint)) * cos_q_RL_thigh_joint);
    (*this)(1,0) = (cos_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+(sin_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(1,1) = cos_q_RL_hip_joint;
    (*this)(1,2) = (sin_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)-(cos_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(1,3) = ((( tx_RL_hip_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_thigh_joint * sin_q_RL_calf_joint * sin_q_RL_hip_joint)) * sin_q_RL_thigh_joint)+((( ty_RL_thigh_joint * cos_q_RL_calf_joint * sin_q_RL_hip_joint)+( tx_RL_hip_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)) * cos_q_RL_thigh_joint)+(((- tx_RL_calf_joint * cos_q_RL_calf_joint)- tx_RL_foot) * cos_q_RL_hip_joint);
    (*this)(1,4) = ((( tx_RL_foot * cos_q_RL_calf_joint)+ tx_RL_calf_joint) * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+( tx_RL_foot * sin_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint)-( tx_RL_hip_joint * sin_q_RL_hip_joint);
    (*this)(1,5) = ((( ty_RL_thigh_joint * cos_q_RL_calf_joint * sin_q_RL_hip_joint)+( tx_RL_hip_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)) * sin_q_RL_thigh_joint)+((( ty_RL_thigh_joint * sin_q_RL_calf_joint * sin_q_RL_hip_joint)-( tx_RL_hip_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)) * cos_q_RL_thigh_joint)-( tx_RL_calf_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint);
    (*this)(2,0) = (-cos_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)-(sin_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(2,1) = sin_q_RL_hip_joint;
    (*this)(2,2) = (cos_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)-(sin_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint);
    (*this)(2,3) = ((( tx_RL_hip_joint * cos_q_RL_calf_joint * sin_q_RL_hip_joint)+( ty_RL_thigh_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)+( ty_RL_hip_joint * sin_q_RL_calf_joint)) * sin_q_RL_thigh_joint)+((( tx_RL_hip_joint * sin_q_RL_calf_joint * sin_q_RL_hip_joint)-( ty_RL_thigh_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_hip_joint * cos_q_RL_calf_joint)) * cos_q_RL_thigh_joint)+(((- tx_RL_calf_joint * cos_q_RL_calf_joint)- tx_RL_foot) * sin_q_RL_hip_joint);
    (*this)(2,4) = (((- tx_RL_foot * cos_q_RL_calf_joint)- tx_RL_calf_joint) * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)-( tx_RL_foot * sin_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)+( tx_RL_hip_joint * cos_q_RL_hip_joint);
    (*this)(2,5) = ((( tx_RL_hip_joint * sin_q_RL_calf_joint * sin_q_RL_hip_joint)-( ty_RL_thigh_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_hip_joint * cos_q_RL_calf_joint)) * sin_q_RL_thigh_joint)+(((- tx_RL_hip_joint * cos_q_RL_calf_joint * sin_q_RL_hip_joint)-( ty_RL_thigh_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_hip_joint * sin_q_RL_calf_joint)) * cos_q_RL_thigh_joint)-( tx_RL_calf_joint * sin_q_RL_calf_joint * sin_q_RL_hip_joint);
    (*this)(3,3) = (cos_q_RL_calf_joint * cos_q_RL_thigh_joint)-(sin_q_RL_calf_joint * sin_q_RL_thigh_joint);
    (*this)(3,5) = (cos_q_RL_calf_joint * sin_q_RL_thigh_joint)+(sin_q_RL_calf_joint * cos_q_RL_thigh_joint);
    (*this)(4,3) = (cos_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+(sin_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(4,4) = cos_q_RL_hip_joint;
    (*this)(4,5) = (sin_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)-(cos_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(5,3) = (-cos_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)-(sin_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(5,4) = sin_q_RL_hip_joint;
    (*this)(5,5) = (cos_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)-(sin_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint);
    return *this;
}
ForceTransforms::Type_fr_base_X_RR_foot::Type_fr_base_X_RR_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
}

const ForceTransforms::Type_fr_base_X_RR_foot& ForceTransforms::Type_fr_base_X_RR_foot::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    Scalar sin_q_RR_thigh_joint  = ScalarTraits::sin( q(RR_THIGH_JOINT) );
    Scalar cos_q_RR_thigh_joint  = ScalarTraits::cos( q(RR_THIGH_JOINT) );
    Scalar sin_q_RR_calf_joint  = ScalarTraits::sin( q(RR_CALF_JOINT) );
    Scalar cos_q_RR_calf_joint  = ScalarTraits::cos( q(RR_CALF_JOINT) );
    (*this)(0,0) = (cos_q_RR_calf_joint * cos_q_RR_thigh_joint)-(sin_q_RR_calf_joint * sin_q_RR_thigh_joint);
    (*this)(0,2) = (cos_q_RR_calf_joint * sin_q_RR_thigh_joint)+(sin_q_RR_calf_joint * cos_q_RR_thigh_joint);
    (*this)(0,3) = (((- ty_RR_hip_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_thigh_joint * cos_q_RR_calf_joint)) * sin_q_RR_thigh_joint)+(((- ty_RR_hip_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_thigh_joint * sin_q_RR_calf_joint)) * cos_q_RR_thigh_joint);
    (*this)(0,4) = (- tx_RR_foot * sin_q_RR_calf_joint * sin_q_RR_thigh_joint)+((( tx_RR_foot * cos_q_RR_calf_joint)+ tx_RR_calf_joint) * cos_q_RR_thigh_joint)+( ty_RR_hip_joint * sin_q_RR_hip_joint);
    (*this)(0,5) = (((- ty_RR_hip_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_thigh_joint * sin_q_RR_calf_joint)) * sin_q_RR_thigh_joint)+((( ty_RR_hip_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)+( ty_RR_thigh_joint * cos_q_RR_calf_joint)) * cos_q_RR_thigh_joint);
    (*this)(1,0) = (cos_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+(sin_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(1,1) = cos_q_RR_hip_joint;
    (*this)(1,2) = (sin_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)-(cos_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(1,3) = ((( tx_RR_hip_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_thigh_joint * sin_q_RR_calf_joint * sin_q_RR_hip_joint)) * sin_q_RR_thigh_joint)+((( ty_RR_thigh_joint * cos_q_RR_calf_joint * sin_q_RR_hip_joint)+( tx_RR_hip_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)) * cos_q_RR_thigh_joint)+(((- tx_RR_calf_joint * cos_q_RR_calf_joint)- tx_RR_foot) * cos_q_RR_hip_joint);
    (*this)(1,4) = ((( tx_RR_foot * cos_q_RR_calf_joint)+ tx_RR_calf_joint) * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+( tx_RR_foot * sin_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint)-( tx_RR_hip_joint * sin_q_RR_hip_joint);
    (*this)(1,5) = ((( ty_RR_thigh_joint * cos_q_RR_calf_joint * sin_q_RR_hip_joint)+( tx_RR_hip_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)) * sin_q_RR_thigh_joint)+((( ty_RR_thigh_joint * sin_q_RR_calf_joint * sin_q_RR_hip_joint)-( tx_RR_hip_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)) * cos_q_RR_thigh_joint)-( tx_RR_calf_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint);
    (*this)(2,0) = (-cos_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)-(sin_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(2,1) = sin_q_RR_hip_joint;
    (*this)(2,2) = (cos_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)-(sin_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint);
    (*this)(2,3) = ((( tx_RR_hip_joint * cos_q_RR_calf_joint * sin_q_RR_hip_joint)+( ty_RR_thigh_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)+( ty_RR_hip_joint * sin_q_RR_calf_joint)) * sin_q_RR_thigh_joint)+((( tx_RR_hip_joint * sin_q_RR_calf_joint * sin_q_RR_hip_joint)-( ty_RR_thigh_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_hip_joint * cos_q_RR_calf_joint)) * cos_q_RR_thigh_joint)+(((- tx_RR_calf_joint * cos_q_RR_calf_joint)- tx_RR_foot) * sin_q_RR_hip_joint);
    (*this)(2,4) = (((- tx_RR_foot * cos_q_RR_calf_joint)- tx_RR_calf_joint) * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)-( tx_RR_foot * sin_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)+( tx_RR_hip_joint * cos_q_RR_hip_joint);
    (*this)(2,5) = ((( tx_RR_hip_joint * sin_q_RR_calf_joint * sin_q_RR_hip_joint)-( ty_RR_thigh_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_hip_joint * cos_q_RR_calf_joint)) * sin_q_RR_thigh_joint)+(((- tx_RR_hip_joint * cos_q_RR_calf_joint * sin_q_RR_hip_joint)-( ty_RR_thigh_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_hip_joint * sin_q_RR_calf_joint)) * cos_q_RR_thigh_joint)-( tx_RR_calf_joint * sin_q_RR_calf_joint * sin_q_RR_hip_joint);
    (*this)(3,3) = (cos_q_RR_calf_joint * cos_q_RR_thigh_joint)-(sin_q_RR_calf_joint * sin_q_RR_thigh_joint);
    (*this)(3,5) = (cos_q_RR_calf_joint * sin_q_RR_thigh_joint)+(sin_q_RR_calf_joint * cos_q_RR_thigh_joint);
    (*this)(4,3) = (cos_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+(sin_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(4,4) = cos_q_RR_hip_joint;
    (*this)(4,5) = (sin_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)-(cos_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(5,3) = (-cos_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)-(sin_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(5,4) = sin_q_RR_hip_joint;
    (*this)(5,5) = (cos_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)-(sin_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint);
    return *this;
}
ForceTransforms::Type_imu_link_X_FL_foot::Type_imu_link_X_FL_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
}

const ForceTransforms::Type_imu_link_X_FL_foot& ForceTransforms::Type_imu_link_X_FL_foot::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    Scalar sin_q_FL_thigh_joint  = ScalarTraits::sin( q(FL_THIGH_JOINT) );
    Scalar cos_q_FL_thigh_joint  = ScalarTraits::cos( q(FL_THIGH_JOINT) );
    Scalar sin_q_FL_calf_joint  = ScalarTraits::sin( q(FL_CALF_JOINT) );
    Scalar cos_q_FL_calf_joint  = ScalarTraits::cos( q(FL_CALF_JOINT) );
    (*this)(0,0) = (cos_q_FL_calf_joint * cos_q_FL_thigh_joint)-(sin_q_FL_calf_joint * sin_q_FL_thigh_joint);
    (*this)(0,2) = (cos_q_FL_calf_joint * sin_q_FL_thigh_joint)+(sin_q_FL_calf_joint * cos_q_FL_thigh_joint);
    (*this)(0,3) = (((- ty_FL_hip_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_thigh_joint * cos_q_FL_calf_joint)) * sin_q_FL_thigh_joint)+(((- ty_FL_hip_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_thigh_joint * sin_q_FL_calf_joint)) * cos_q_FL_thigh_joint);
    (*this)(0,4) = (- tx_FL_foot * sin_q_FL_calf_joint * sin_q_FL_thigh_joint)+((( tx_FL_foot * cos_q_FL_calf_joint)+ tx_FL_calf_joint) * cos_q_FL_thigh_joint)+( ty_FL_hip_joint * sin_q_FL_hip_joint);
    (*this)(0,5) = (((- ty_FL_hip_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_thigh_joint * sin_q_FL_calf_joint)) * sin_q_FL_thigh_joint)+((( ty_FL_hip_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)+( ty_FL_thigh_joint * cos_q_FL_calf_joint)) * cos_q_FL_thigh_joint);
    (*this)(1,0) = (cos_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+(sin_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(1,1) = cos_q_FL_hip_joint;
    (*this)(1,2) = (sin_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)-(cos_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(1,3) = ((( tx_FL_hip_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_thigh_joint * sin_q_FL_calf_joint * sin_q_FL_hip_joint)) * sin_q_FL_thigh_joint)+((( ty_FL_thigh_joint * cos_q_FL_calf_joint * sin_q_FL_hip_joint)+( tx_FL_hip_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)) * cos_q_FL_thigh_joint)+(((- tx_FL_calf_joint * cos_q_FL_calf_joint)- tx_FL_foot) * cos_q_FL_hip_joint);
    (*this)(1,4) = ((( tx_FL_foot * cos_q_FL_calf_joint)+ tx_FL_calf_joint) * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+( tx_FL_foot * sin_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint)-( tx_FL_hip_joint * sin_q_FL_hip_joint);
    (*this)(1,5) = ((( ty_FL_thigh_joint * cos_q_FL_calf_joint * sin_q_FL_hip_joint)+( tx_FL_hip_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)) * sin_q_FL_thigh_joint)+((( ty_FL_thigh_joint * sin_q_FL_calf_joint * sin_q_FL_hip_joint)-( tx_FL_hip_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)) * cos_q_FL_thigh_joint)-( tx_FL_calf_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint);
    (*this)(2,0) = (-cos_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)-(sin_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(2,1) = sin_q_FL_hip_joint;
    (*this)(2,2) = (cos_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)-(sin_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint);
    (*this)(2,3) = ((( tx_FL_hip_joint * cos_q_FL_calf_joint * sin_q_FL_hip_joint)+( ty_FL_thigh_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)+( ty_FL_hip_joint * sin_q_FL_calf_joint)) * sin_q_FL_thigh_joint)+((( tx_FL_hip_joint * sin_q_FL_calf_joint * sin_q_FL_hip_joint)-( ty_FL_thigh_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_hip_joint * cos_q_FL_calf_joint)) * cos_q_FL_thigh_joint)+(((- tx_FL_calf_joint * cos_q_FL_calf_joint)- tx_FL_foot) * sin_q_FL_hip_joint);
    (*this)(2,4) = (((- tx_FL_foot * cos_q_FL_calf_joint)- tx_FL_calf_joint) * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)-( tx_FL_foot * sin_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)+( tx_FL_hip_joint * cos_q_FL_hip_joint);
    (*this)(2,5) = ((( tx_FL_hip_joint * sin_q_FL_calf_joint * sin_q_FL_hip_joint)-( ty_FL_thigh_joint * cos_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_hip_joint * cos_q_FL_calf_joint)) * sin_q_FL_thigh_joint)+(((- tx_FL_hip_joint * cos_q_FL_calf_joint * sin_q_FL_hip_joint)-( ty_FL_thigh_joint * sin_q_FL_calf_joint * cos_q_FL_hip_joint)-( ty_FL_hip_joint * sin_q_FL_calf_joint)) * cos_q_FL_thigh_joint)-( tx_FL_calf_joint * sin_q_FL_calf_joint * sin_q_FL_hip_joint);
    (*this)(3,3) = (cos_q_FL_calf_joint * cos_q_FL_thigh_joint)-(sin_q_FL_calf_joint * sin_q_FL_thigh_joint);
    (*this)(3,5) = (cos_q_FL_calf_joint * sin_q_FL_thigh_joint)+(sin_q_FL_calf_joint * cos_q_FL_thigh_joint);
    (*this)(4,3) = (cos_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+(sin_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(4,4) = cos_q_FL_hip_joint;
    (*this)(4,5) = (sin_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)-(cos_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(5,3) = (-cos_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)-(sin_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(5,4) = sin_q_FL_hip_joint;
    (*this)(5,5) = (cos_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)-(sin_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint);
    return *this;
}
ForceTransforms::Type_imu_link_X_FR_foot::Type_imu_link_X_FR_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
}

const ForceTransforms::Type_imu_link_X_FR_foot& ForceTransforms::Type_imu_link_X_FR_foot::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    Scalar sin_q_FR_thigh_joint  = ScalarTraits::sin( q(FR_THIGH_JOINT) );
    Scalar cos_q_FR_thigh_joint  = ScalarTraits::cos( q(FR_THIGH_JOINT) );
    Scalar sin_q_FR_calf_joint  = ScalarTraits::sin( q(FR_CALF_JOINT) );
    Scalar cos_q_FR_calf_joint  = ScalarTraits::cos( q(FR_CALF_JOINT) );
    (*this)(0,0) = (cos_q_FR_calf_joint * cos_q_FR_thigh_joint)-(sin_q_FR_calf_joint * sin_q_FR_thigh_joint);
    (*this)(0,2) = (cos_q_FR_calf_joint * sin_q_FR_thigh_joint)+(sin_q_FR_calf_joint * cos_q_FR_thigh_joint);
    (*this)(0,3) = (((- ty_FR_hip_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_thigh_joint * cos_q_FR_calf_joint)) * sin_q_FR_thigh_joint)+(((- ty_FR_hip_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_thigh_joint * sin_q_FR_calf_joint)) * cos_q_FR_thigh_joint);
    (*this)(0,4) = (- tx_FR_foot * sin_q_FR_calf_joint * sin_q_FR_thigh_joint)+((( tx_FR_foot * cos_q_FR_calf_joint)+ tx_FR_calf_joint) * cos_q_FR_thigh_joint)+( ty_FR_hip_joint * sin_q_FR_hip_joint);
    (*this)(0,5) = (((- ty_FR_hip_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_thigh_joint * sin_q_FR_calf_joint)) * sin_q_FR_thigh_joint)+((( ty_FR_hip_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)+( ty_FR_thigh_joint * cos_q_FR_calf_joint)) * cos_q_FR_thigh_joint);
    (*this)(1,0) = (cos_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+(sin_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(1,1) = cos_q_FR_hip_joint;
    (*this)(1,2) = (sin_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)-(cos_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(1,3) = ((( tx_FR_hip_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_thigh_joint * sin_q_FR_calf_joint * sin_q_FR_hip_joint)) * sin_q_FR_thigh_joint)+((( ty_FR_thigh_joint * cos_q_FR_calf_joint * sin_q_FR_hip_joint)+( tx_FR_hip_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)) * cos_q_FR_thigh_joint)+(((- tx_FR_calf_joint * cos_q_FR_calf_joint)- tx_FR_foot) * cos_q_FR_hip_joint);
    (*this)(1,4) = ((( tx_FR_foot * cos_q_FR_calf_joint)+ tx_FR_calf_joint) * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+( tx_FR_foot * sin_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint)-( tx_FR_hip_joint * sin_q_FR_hip_joint);
    (*this)(1,5) = ((( ty_FR_thigh_joint * cos_q_FR_calf_joint * sin_q_FR_hip_joint)+( tx_FR_hip_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)) * sin_q_FR_thigh_joint)+((( ty_FR_thigh_joint * sin_q_FR_calf_joint * sin_q_FR_hip_joint)-( tx_FR_hip_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)) * cos_q_FR_thigh_joint)-( tx_FR_calf_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint);
    (*this)(2,0) = (-cos_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)-(sin_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(2,1) = sin_q_FR_hip_joint;
    (*this)(2,2) = (cos_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)-(sin_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint);
    (*this)(2,3) = ((( tx_FR_hip_joint * cos_q_FR_calf_joint * sin_q_FR_hip_joint)+( ty_FR_thigh_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)+( ty_FR_hip_joint * sin_q_FR_calf_joint)) * sin_q_FR_thigh_joint)+((( tx_FR_hip_joint * sin_q_FR_calf_joint * sin_q_FR_hip_joint)-( ty_FR_thigh_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_hip_joint * cos_q_FR_calf_joint)) * cos_q_FR_thigh_joint)+(((- tx_FR_calf_joint * cos_q_FR_calf_joint)- tx_FR_foot) * sin_q_FR_hip_joint);
    (*this)(2,4) = (((- tx_FR_foot * cos_q_FR_calf_joint)- tx_FR_calf_joint) * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)-( tx_FR_foot * sin_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)+( tx_FR_hip_joint * cos_q_FR_hip_joint);
    (*this)(2,5) = ((( tx_FR_hip_joint * sin_q_FR_calf_joint * sin_q_FR_hip_joint)-( ty_FR_thigh_joint * cos_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_hip_joint * cos_q_FR_calf_joint)) * sin_q_FR_thigh_joint)+(((- tx_FR_hip_joint * cos_q_FR_calf_joint * sin_q_FR_hip_joint)-( ty_FR_thigh_joint * sin_q_FR_calf_joint * cos_q_FR_hip_joint)-( ty_FR_hip_joint * sin_q_FR_calf_joint)) * cos_q_FR_thigh_joint)-( tx_FR_calf_joint * sin_q_FR_calf_joint * sin_q_FR_hip_joint);
    (*this)(3,3) = (cos_q_FR_calf_joint * cos_q_FR_thigh_joint)-(sin_q_FR_calf_joint * sin_q_FR_thigh_joint);
    (*this)(3,5) = (cos_q_FR_calf_joint * sin_q_FR_thigh_joint)+(sin_q_FR_calf_joint * cos_q_FR_thigh_joint);
    (*this)(4,3) = (cos_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+(sin_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(4,4) = cos_q_FR_hip_joint;
    (*this)(4,5) = (sin_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)-(cos_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(5,3) = (-cos_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)-(sin_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(5,4) = sin_q_FR_hip_joint;
    (*this)(5,5) = (cos_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)-(sin_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint);
    return *this;
}
ForceTransforms::Type_imu_link_X_RL_foot::Type_imu_link_X_RL_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
}

const ForceTransforms::Type_imu_link_X_RL_foot& ForceTransforms::Type_imu_link_X_RL_foot::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    Scalar sin_q_RL_thigh_joint  = ScalarTraits::sin( q(RL_THIGH_JOINT) );
    Scalar cos_q_RL_thigh_joint  = ScalarTraits::cos( q(RL_THIGH_JOINT) );
    Scalar sin_q_RL_calf_joint  = ScalarTraits::sin( q(RL_CALF_JOINT) );
    Scalar cos_q_RL_calf_joint  = ScalarTraits::cos( q(RL_CALF_JOINT) );
    (*this)(0,0) = (cos_q_RL_calf_joint * cos_q_RL_thigh_joint)-(sin_q_RL_calf_joint * sin_q_RL_thigh_joint);
    (*this)(0,2) = (cos_q_RL_calf_joint * sin_q_RL_thigh_joint)+(sin_q_RL_calf_joint * cos_q_RL_thigh_joint);
    (*this)(0,3) = (((- ty_RL_hip_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_thigh_joint * cos_q_RL_calf_joint)) * sin_q_RL_thigh_joint)+(((- ty_RL_hip_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_thigh_joint * sin_q_RL_calf_joint)) * cos_q_RL_thigh_joint);
    (*this)(0,4) = (- tx_RL_foot * sin_q_RL_calf_joint * sin_q_RL_thigh_joint)+((( tx_RL_foot * cos_q_RL_calf_joint)+ tx_RL_calf_joint) * cos_q_RL_thigh_joint)+( ty_RL_hip_joint * sin_q_RL_hip_joint);
    (*this)(0,5) = (((- ty_RL_hip_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_thigh_joint * sin_q_RL_calf_joint)) * sin_q_RL_thigh_joint)+((( ty_RL_hip_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)+( ty_RL_thigh_joint * cos_q_RL_calf_joint)) * cos_q_RL_thigh_joint);
    (*this)(1,0) = (cos_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+(sin_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(1,1) = cos_q_RL_hip_joint;
    (*this)(1,2) = (sin_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)-(cos_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(1,3) = ((( tx_RL_hip_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_thigh_joint * sin_q_RL_calf_joint * sin_q_RL_hip_joint)) * sin_q_RL_thigh_joint)+((( ty_RL_thigh_joint * cos_q_RL_calf_joint * sin_q_RL_hip_joint)+( tx_RL_hip_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)) * cos_q_RL_thigh_joint)+(((- tx_RL_calf_joint * cos_q_RL_calf_joint)- tx_RL_foot) * cos_q_RL_hip_joint);
    (*this)(1,4) = ((( tx_RL_foot * cos_q_RL_calf_joint)+ tx_RL_calf_joint) * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+( tx_RL_foot * sin_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint)-( tx_RL_hip_joint * sin_q_RL_hip_joint);
    (*this)(1,5) = ((( ty_RL_thigh_joint * cos_q_RL_calf_joint * sin_q_RL_hip_joint)+( tx_RL_hip_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)) * sin_q_RL_thigh_joint)+((( ty_RL_thigh_joint * sin_q_RL_calf_joint * sin_q_RL_hip_joint)-( tx_RL_hip_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)) * cos_q_RL_thigh_joint)-( tx_RL_calf_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint);
    (*this)(2,0) = (-cos_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)-(sin_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(2,1) = sin_q_RL_hip_joint;
    (*this)(2,2) = (cos_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)-(sin_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint);
    (*this)(2,3) = ((( tx_RL_hip_joint * cos_q_RL_calf_joint * sin_q_RL_hip_joint)+( ty_RL_thigh_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)+( ty_RL_hip_joint * sin_q_RL_calf_joint)) * sin_q_RL_thigh_joint)+((( tx_RL_hip_joint * sin_q_RL_calf_joint * sin_q_RL_hip_joint)-( ty_RL_thigh_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_hip_joint * cos_q_RL_calf_joint)) * cos_q_RL_thigh_joint)+(((- tx_RL_calf_joint * cos_q_RL_calf_joint)- tx_RL_foot) * sin_q_RL_hip_joint);
    (*this)(2,4) = (((- tx_RL_foot * cos_q_RL_calf_joint)- tx_RL_calf_joint) * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)-( tx_RL_foot * sin_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)+( tx_RL_hip_joint * cos_q_RL_hip_joint);
    (*this)(2,5) = ((( tx_RL_hip_joint * sin_q_RL_calf_joint * sin_q_RL_hip_joint)-( ty_RL_thigh_joint * cos_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_hip_joint * cos_q_RL_calf_joint)) * sin_q_RL_thigh_joint)+(((- tx_RL_hip_joint * cos_q_RL_calf_joint * sin_q_RL_hip_joint)-( ty_RL_thigh_joint * sin_q_RL_calf_joint * cos_q_RL_hip_joint)-( ty_RL_hip_joint * sin_q_RL_calf_joint)) * cos_q_RL_thigh_joint)-( tx_RL_calf_joint * sin_q_RL_calf_joint * sin_q_RL_hip_joint);
    (*this)(3,3) = (cos_q_RL_calf_joint * cos_q_RL_thigh_joint)-(sin_q_RL_calf_joint * sin_q_RL_thigh_joint);
    (*this)(3,5) = (cos_q_RL_calf_joint * sin_q_RL_thigh_joint)+(sin_q_RL_calf_joint * cos_q_RL_thigh_joint);
    (*this)(4,3) = (cos_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+(sin_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(4,4) = cos_q_RL_hip_joint;
    (*this)(4,5) = (sin_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)-(cos_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(5,3) = (-cos_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)-(sin_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(5,4) = sin_q_RL_hip_joint;
    (*this)(5,5) = (cos_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)-(sin_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint);
    return *this;
}
ForceTransforms::Type_imu_link_X_RR_foot::Type_imu_link_X_RR_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
}

const ForceTransforms::Type_imu_link_X_RR_foot& ForceTransforms::Type_imu_link_X_RR_foot::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    Scalar sin_q_RR_thigh_joint  = ScalarTraits::sin( q(RR_THIGH_JOINT) );
    Scalar cos_q_RR_thigh_joint  = ScalarTraits::cos( q(RR_THIGH_JOINT) );
    Scalar sin_q_RR_calf_joint  = ScalarTraits::sin( q(RR_CALF_JOINT) );
    Scalar cos_q_RR_calf_joint  = ScalarTraits::cos( q(RR_CALF_JOINT) );
    (*this)(0,0) = (cos_q_RR_calf_joint * cos_q_RR_thigh_joint)-(sin_q_RR_calf_joint * sin_q_RR_thigh_joint);
    (*this)(0,2) = (cos_q_RR_calf_joint * sin_q_RR_thigh_joint)+(sin_q_RR_calf_joint * cos_q_RR_thigh_joint);
    (*this)(0,3) = (((- ty_RR_hip_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_thigh_joint * cos_q_RR_calf_joint)) * sin_q_RR_thigh_joint)+(((- ty_RR_hip_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_thigh_joint * sin_q_RR_calf_joint)) * cos_q_RR_thigh_joint);
    (*this)(0,4) = (- tx_RR_foot * sin_q_RR_calf_joint * sin_q_RR_thigh_joint)+((( tx_RR_foot * cos_q_RR_calf_joint)+ tx_RR_calf_joint) * cos_q_RR_thigh_joint)+( ty_RR_hip_joint * sin_q_RR_hip_joint);
    (*this)(0,5) = (((- ty_RR_hip_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_thigh_joint * sin_q_RR_calf_joint)) * sin_q_RR_thigh_joint)+((( ty_RR_hip_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)+( ty_RR_thigh_joint * cos_q_RR_calf_joint)) * cos_q_RR_thigh_joint);
    (*this)(1,0) = (cos_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+(sin_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(1,1) = cos_q_RR_hip_joint;
    (*this)(1,2) = (sin_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)-(cos_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(1,3) = ((( tx_RR_hip_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_thigh_joint * sin_q_RR_calf_joint * sin_q_RR_hip_joint)) * sin_q_RR_thigh_joint)+((( ty_RR_thigh_joint * cos_q_RR_calf_joint * sin_q_RR_hip_joint)+( tx_RR_hip_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)) * cos_q_RR_thigh_joint)+(((- tx_RR_calf_joint * cos_q_RR_calf_joint)- tx_RR_foot) * cos_q_RR_hip_joint);
    (*this)(1,4) = ((( tx_RR_foot * cos_q_RR_calf_joint)+ tx_RR_calf_joint) * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+( tx_RR_foot * sin_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint)-( tx_RR_hip_joint * sin_q_RR_hip_joint);
    (*this)(1,5) = ((( ty_RR_thigh_joint * cos_q_RR_calf_joint * sin_q_RR_hip_joint)+( tx_RR_hip_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)) * sin_q_RR_thigh_joint)+((( ty_RR_thigh_joint * sin_q_RR_calf_joint * sin_q_RR_hip_joint)-( tx_RR_hip_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)) * cos_q_RR_thigh_joint)-( tx_RR_calf_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint);
    (*this)(2,0) = (-cos_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)-(sin_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(2,1) = sin_q_RR_hip_joint;
    (*this)(2,2) = (cos_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)-(sin_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint);
    (*this)(2,3) = ((( tx_RR_hip_joint * cos_q_RR_calf_joint * sin_q_RR_hip_joint)+( ty_RR_thigh_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)+( ty_RR_hip_joint * sin_q_RR_calf_joint)) * sin_q_RR_thigh_joint)+((( tx_RR_hip_joint * sin_q_RR_calf_joint * sin_q_RR_hip_joint)-( ty_RR_thigh_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_hip_joint * cos_q_RR_calf_joint)) * cos_q_RR_thigh_joint)+(((- tx_RR_calf_joint * cos_q_RR_calf_joint)- tx_RR_foot) * sin_q_RR_hip_joint);
    (*this)(2,4) = (((- tx_RR_foot * cos_q_RR_calf_joint)- tx_RR_calf_joint) * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)-( tx_RR_foot * sin_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)+( tx_RR_hip_joint * cos_q_RR_hip_joint);
    (*this)(2,5) = ((( tx_RR_hip_joint * sin_q_RR_calf_joint * sin_q_RR_hip_joint)-( ty_RR_thigh_joint * cos_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_hip_joint * cos_q_RR_calf_joint)) * sin_q_RR_thigh_joint)+(((- tx_RR_hip_joint * cos_q_RR_calf_joint * sin_q_RR_hip_joint)-( ty_RR_thigh_joint * sin_q_RR_calf_joint * cos_q_RR_hip_joint)-( ty_RR_hip_joint * sin_q_RR_calf_joint)) * cos_q_RR_thigh_joint)-( tx_RR_calf_joint * sin_q_RR_calf_joint * sin_q_RR_hip_joint);
    (*this)(3,3) = (cos_q_RR_calf_joint * cos_q_RR_thigh_joint)-(sin_q_RR_calf_joint * sin_q_RR_thigh_joint);
    (*this)(3,5) = (cos_q_RR_calf_joint * sin_q_RR_thigh_joint)+(sin_q_RR_calf_joint * cos_q_RR_thigh_joint);
    (*this)(4,3) = (cos_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+(sin_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(4,4) = cos_q_RR_hip_joint;
    (*this)(4,5) = (sin_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)-(cos_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(5,3) = (-cos_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)-(sin_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(5,4) = sin_q_RR_hip_joint;
    (*this)(5,5) = (cos_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)-(sin_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint);
    return *this;
}
ForceTransforms::Type_fr_base_X_fr_FL_hip_joint::Type_fr_base_X_fr_FL_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) = - ty_FL_hip_joint;    // Maxima DSL: -_k__ty_FL_hip_joint
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) =  tx_FL_hip_joint;    // Maxima DSL: _k__tx_FL_hip_joint
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) =  tx_FL_hip_joint;    // Maxima DSL: _k__tx_FL_hip_joint
    (*this)(2,5) = - ty_FL_hip_joint;    // Maxima DSL: -_k__ty_FL_hip_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 1.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = -1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_fr_base_X_fr_FL_hip_joint& ForceTransforms::Type_fr_base_X_fr_FL_hip_joint::update(const state_t& q)
{
    return *this;
}
ForceTransforms::Type_fr_base_X_fr_FL_thigh_joint::Type_fr_base_X_fr_FL_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = -1.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,4) = 0.0;
}

const ForceTransforms::Type_fr_base_X_fr_FL_thigh_joint& ForceTransforms::Type_fr_base_X_fr_FL_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    (*this)(0,3) = (- ty_FL_hip_joint * cos_q_FL_hip_joint)- ty_FL_thigh_joint;
    (*this)(0,5) =  ty_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(1,0) = sin_q_FL_hip_joint;
    (*this)(1,2) = cos_q_FL_hip_joint;
    (*this)(1,3) =  tx_FL_hip_joint * cos_q_FL_hip_joint;
    (*this)(1,4) = - ty_FL_thigh_joint * sin_q_FL_hip_joint;
    (*this)(1,5) = - tx_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(2,0) = -cos_q_FL_hip_joint;
    (*this)(2,2) = sin_q_FL_hip_joint;
    (*this)(2,3) =  tx_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(2,4) = ( ty_FL_thigh_joint * cos_q_FL_hip_joint)+ ty_FL_hip_joint;
    (*this)(2,5) =  tx_FL_hip_joint * cos_q_FL_hip_joint;
    (*this)(4,3) = sin_q_FL_hip_joint;
    (*this)(4,5) = cos_q_FL_hip_joint;
    (*this)(5,3) = -cos_q_FL_hip_joint;
    (*this)(5,5) = sin_q_FL_hip_joint;
    return *this;
}
ForceTransforms::Type_fr_base_X_fr_FL_calf_joint::Type_fr_base_X_fr_FL_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
}

const ForceTransforms::Type_fr_base_X_fr_FL_calf_joint& ForceTransforms::Type_fr_base_X_fr_FL_calf_joint::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    Scalar sin_q_FL_thigh_joint  = ScalarTraits::sin( q(FL_THIGH_JOINT) );
    Scalar cos_q_FL_thigh_joint  = ScalarTraits::cos( q(FL_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_FL_thigh_joint;
    (*this)(0,1) = -cos_q_FL_thigh_joint;
    (*this)(0,3) = ((- ty_FL_hip_joint * cos_q_FL_hip_joint)- ty_FL_thigh_joint) * cos_q_FL_thigh_joint;
    (*this)(0,4) = (( ty_FL_hip_joint * cos_q_FL_hip_joint)+ ty_FL_thigh_joint) * sin_q_FL_thigh_joint;
    (*this)(0,5) = ( tx_FL_calf_joint * cos_q_FL_thigh_joint)+( ty_FL_hip_joint * sin_q_FL_hip_joint);
    (*this)(1,0) = sin_q_FL_hip_joint * cos_q_FL_thigh_joint;
    (*this)(1,1) = -sin_q_FL_hip_joint * sin_q_FL_thigh_joint;
    (*this)(1,2) = cos_q_FL_hip_joint;
    (*this)(1,3) = ( tx_FL_hip_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)-( ty_FL_thigh_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint);
    (*this)(1,4) = (- tx_FL_hip_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)-( ty_FL_thigh_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint)+( tx_FL_calf_joint * cos_q_FL_hip_joint);
    (*this)(1,5) = ( tx_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)-( tx_FL_hip_joint * sin_q_FL_hip_joint);
    (*this)(2,0) = -cos_q_FL_hip_joint * cos_q_FL_thigh_joint;
    (*this)(2,1) = cos_q_FL_hip_joint * sin_q_FL_thigh_joint;
    (*this)(2,2) = sin_q_FL_hip_joint;
    (*this)(2,3) = ((( ty_FL_thigh_joint * cos_q_FL_hip_joint)+ ty_FL_hip_joint) * sin_q_FL_thigh_joint)+( tx_FL_hip_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(2,4) = (- tx_FL_hip_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+((( ty_FL_thigh_joint * cos_q_FL_hip_joint)+ ty_FL_hip_joint) * cos_q_FL_thigh_joint)+( tx_FL_calf_joint * sin_q_FL_hip_joint);
    (*this)(2,5) = ( tx_FL_hip_joint * cos_q_FL_hip_joint)-( tx_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint);
    (*this)(3,3) = -sin_q_FL_thigh_joint;
    (*this)(3,4) = -cos_q_FL_thigh_joint;
    (*this)(4,3) = sin_q_FL_hip_joint * cos_q_FL_thigh_joint;
    (*this)(4,4) = -sin_q_FL_hip_joint * sin_q_FL_thigh_joint;
    (*this)(4,5) = cos_q_FL_hip_joint;
    (*this)(5,3) = -cos_q_FL_hip_joint * cos_q_FL_thigh_joint;
    (*this)(5,4) = cos_q_FL_hip_joint * sin_q_FL_thigh_joint;
    (*this)(5,5) = sin_q_FL_hip_joint;
    return *this;
}
ForceTransforms::Type_fr_base_X_fr_FR_hip_joint::Type_fr_base_X_fr_FR_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) = - ty_FR_hip_joint;    // Maxima DSL: -_k__ty_FR_hip_joint
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) =  tx_FR_hip_joint;    // Maxima DSL: _k__tx_FR_hip_joint
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) =  tx_FR_hip_joint;    // Maxima DSL: _k__tx_FR_hip_joint
    (*this)(2,5) = - ty_FR_hip_joint;    // Maxima DSL: -_k__ty_FR_hip_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 1.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = -1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_fr_base_X_fr_FR_hip_joint& ForceTransforms::Type_fr_base_X_fr_FR_hip_joint::update(const state_t& q)
{
    return *this;
}
ForceTransforms::Type_fr_base_X_fr_FR_thigh_joint::Type_fr_base_X_fr_FR_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = -1.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,4) = 0.0;
}

const ForceTransforms::Type_fr_base_X_fr_FR_thigh_joint& ForceTransforms::Type_fr_base_X_fr_FR_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    (*this)(0,3) = (- ty_FR_hip_joint * cos_q_FR_hip_joint)- ty_FR_thigh_joint;
    (*this)(0,5) =  ty_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(1,0) = sin_q_FR_hip_joint;
    (*this)(1,2) = cos_q_FR_hip_joint;
    (*this)(1,3) =  tx_FR_hip_joint * cos_q_FR_hip_joint;
    (*this)(1,4) = - ty_FR_thigh_joint * sin_q_FR_hip_joint;
    (*this)(1,5) = - tx_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(2,0) = -cos_q_FR_hip_joint;
    (*this)(2,2) = sin_q_FR_hip_joint;
    (*this)(2,3) =  tx_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(2,4) = ( ty_FR_thigh_joint * cos_q_FR_hip_joint)+ ty_FR_hip_joint;
    (*this)(2,5) =  tx_FR_hip_joint * cos_q_FR_hip_joint;
    (*this)(4,3) = sin_q_FR_hip_joint;
    (*this)(4,5) = cos_q_FR_hip_joint;
    (*this)(5,3) = -cos_q_FR_hip_joint;
    (*this)(5,5) = sin_q_FR_hip_joint;
    return *this;
}
ForceTransforms::Type_fr_base_X_fr_FR_calf_joint::Type_fr_base_X_fr_FR_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
}

const ForceTransforms::Type_fr_base_X_fr_FR_calf_joint& ForceTransforms::Type_fr_base_X_fr_FR_calf_joint::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    Scalar sin_q_FR_thigh_joint  = ScalarTraits::sin( q(FR_THIGH_JOINT) );
    Scalar cos_q_FR_thigh_joint  = ScalarTraits::cos( q(FR_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_FR_thigh_joint;
    (*this)(0,1) = -cos_q_FR_thigh_joint;
    (*this)(0,3) = ((- ty_FR_hip_joint * cos_q_FR_hip_joint)- ty_FR_thigh_joint) * cos_q_FR_thigh_joint;
    (*this)(0,4) = (( ty_FR_hip_joint * cos_q_FR_hip_joint)+ ty_FR_thigh_joint) * sin_q_FR_thigh_joint;
    (*this)(0,5) = ( tx_FR_calf_joint * cos_q_FR_thigh_joint)+( ty_FR_hip_joint * sin_q_FR_hip_joint);
    (*this)(1,0) = sin_q_FR_hip_joint * cos_q_FR_thigh_joint;
    (*this)(1,1) = -sin_q_FR_hip_joint * sin_q_FR_thigh_joint;
    (*this)(1,2) = cos_q_FR_hip_joint;
    (*this)(1,3) = ( tx_FR_hip_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)-( ty_FR_thigh_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint);
    (*this)(1,4) = (- tx_FR_hip_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)-( ty_FR_thigh_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint)+( tx_FR_calf_joint * cos_q_FR_hip_joint);
    (*this)(1,5) = ( tx_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)-( tx_FR_hip_joint * sin_q_FR_hip_joint);
    (*this)(2,0) = -cos_q_FR_hip_joint * cos_q_FR_thigh_joint;
    (*this)(2,1) = cos_q_FR_hip_joint * sin_q_FR_thigh_joint;
    (*this)(2,2) = sin_q_FR_hip_joint;
    (*this)(2,3) = ((( ty_FR_thigh_joint * cos_q_FR_hip_joint)+ ty_FR_hip_joint) * sin_q_FR_thigh_joint)+( tx_FR_hip_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(2,4) = (- tx_FR_hip_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+((( ty_FR_thigh_joint * cos_q_FR_hip_joint)+ ty_FR_hip_joint) * cos_q_FR_thigh_joint)+( tx_FR_calf_joint * sin_q_FR_hip_joint);
    (*this)(2,5) = ( tx_FR_hip_joint * cos_q_FR_hip_joint)-( tx_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint);
    (*this)(3,3) = -sin_q_FR_thigh_joint;
    (*this)(3,4) = -cos_q_FR_thigh_joint;
    (*this)(4,3) = sin_q_FR_hip_joint * cos_q_FR_thigh_joint;
    (*this)(4,4) = -sin_q_FR_hip_joint * sin_q_FR_thigh_joint;
    (*this)(4,5) = cos_q_FR_hip_joint;
    (*this)(5,3) = -cos_q_FR_hip_joint * cos_q_FR_thigh_joint;
    (*this)(5,4) = cos_q_FR_hip_joint * sin_q_FR_thigh_joint;
    (*this)(5,5) = sin_q_FR_hip_joint;
    return *this;
}
ForceTransforms::Type_fr_base_X_fr_RL_hip_joint::Type_fr_base_X_fr_RL_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) = - ty_RL_hip_joint;    // Maxima DSL: -_k__ty_RL_hip_joint
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) =  tx_RL_hip_joint;    // Maxima DSL: _k__tx_RL_hip_joint
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) =  tx_RL_hip_joint;    // Maxima DSL: _k__tx_RL_hip_joint
    (*this)(2,5) = - ty_RL_hip_joint;    // Maxima DSL: -_k__ty_RL_hip_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 1.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = -1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_fr_base_X_fr_RL_hip_joint& ForceTransforms::Type_fr_base_X_fr_RL_hip_joint::update(const state_t& q)
{
    return *this;
}
ForceTransforms::Type_fr_base_X_fr_RL_thigh_joint::Type_fr_base_X_fr_RL_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = -1.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,4) = 0.0;
}

const ForceTransforms::Type_fr_base_X_fr_RL_thigh_joint& ForceTransforms::Type_fr_base_X_fr_RL_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    (*this)(0,3) = (- ty_RL_hip_joint * cos_q_RL_hip_joint)- ty_RL_thigh_joint;
    (*this)(0,5) =  ty_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(1,0) = sin_q_RL_hip_joint;
    (*this)(1,2) = cos_q_RL_hip_joint;
    (*this)(1,3) =  tx_RL_hip_joint * cos_q_RL_hip_joint;
    (*this)(1,4) = - ty_RL_thigh_joint * sin_q_RL_hip_joint;
    (*this)(1,5) = - tx_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(2,0) = -cos_q_RL_hip_joint;
    (*this)(2,2) = sin_q_RL_hip_joint;
    (*this)(2,3) =  tx_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(2,4) = ( ty_RL_thigh_joint * cos_q_RL_hip_joint)+ ty_RL_hip_joint;
    (*this)(2,5) =  tx_RL_hip_joint * cos_q_RL_hip_joint;
    (*this)(4,3) = sin_q_RL_hip_joint;
    (*this)(4,5) = cos_q_RL_hip_joint;
    (*this)(5,3) = -cos_q_RL_hip_joint;
    (*this)(5,5) = sin_q_RL_hip_joint;
    return *this;
}
ForceTransforms::Type_fr_base_X_fr_RL_calf_joint::Type_fr_base_X_fr_RL_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
}

const ForceTransforms::Type_fr_base_X_fr_RL_calf_joint& ForceTransforms::Type_fr_base_X_fr_RL_calf_joint::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    Scalar sin_q_RL_thigh_joint  = ScalarTraits::sin( q(RL_THIGH_JOINT) );
    Scalar cos_q_RL_thigh_joint  = ScalarTraits::cos( q(RL_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_RL_thigh_joint;
    (*this)(0,1) = -cos_q_RL_thigh_joint;
    (*this)(0,3) = ((- ty_RL_hip_joint * cos_q_RL_hip_joint)- ty_RL_thigh_joint) * cos_q_RL_thigh_joint;
    (*this)(0,4) = (( ty_RL_hip_joint * cos_q_RL_hip_joint)+ ty_RL_thigh_joint) * sin_q_RL_thigh_joint;
    (*this)(0,5) = ( tx_RL_calf_joint * cos_q_RL_thigh_joint)+( ty_RL_hip_joint * sin_q_RL_hip_joint);
    (*this)(1,0) = sin_q_RL_hip_joint * cos_q_RL_thigh_joint;
    (*this)(1,1) = -sin_q_RL_hip_joint * sin_q_RL_thigh_joint;
    (*this)(1,2) = cos_q_RL_hip_joint;
    (*this)(1,3) = ( tx_RL_hip_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)-( ty_RL_thigh_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint);
    (*this)(1,4) = (- tx_RL_hip_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)-( ty_RL_thigh_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint)+( tx_RL_calf_joint * cos_q_RL_hip_joint);
    (*this)(1,5) = ( tx_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)-( tx_RL_hip_joint * sin_q_RL_hip_joint);
    (*this)(2,0) = -cos_q_RL_hip_joint * cos_q_RL_thigh_joint;
    (*this)(2,1) = cos_q_RL_hip_joint * sin_q_RL_thigh_joint;
    (*this)(2,2) = sin_q_RL_hip_joint;
    (*this)(2,3) = ((( ty_RL_thigh_joint * cos_q_RL_hip_joint)+ ty_RL_hip_joint) * sin_q_RL_thigh_joint)+( tx_RL_hip_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(2,4) = (- tx_RL_hip_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+((( ty_RL_thigh_joint * cos_q_RL_hip_joint)+ ty_RL_hip_joint) * cos_q_RL_thigh_joint)+( tx_RL_calf_joint * sin_q_RL_hip_joint);
    (*this)(2,5) = ( tx_RL_hip_joint * cos_q_RL_hip_joint)-( tx_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint);
    (*this)(3,3) = -sin_q_RL_thigh_joint;
    (*this)(3,4) = -cos_q_RL_thigh_joint;
    (*this)(4,3) = sin_q_RL_hip_joint * cos_q_RL_thigh_joint;
    (*this)(4,4) = -sin_q_RL_hip_joint * sin_q_RL_thigh_joint;
    (*this)(4,5) = cos_q_RL_hip_joint;
    (*this)(5,3) = -cos_q_RL_hip_joint * cos_q_RL_thigh_joint;
    (*this)(5,4) = cos_q_RL_hip_joint * sin_q_RL_thigh_joint;
    (*this)(5,5) = sin_q_RL_hip_joint;
    return *this;
}
ForceTransforms::Type_fr_base_X_fr_RR_hip_joint::Type_fr_base_X_fr_RR_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) = - ty_RR_hip_joint;    // Maxima DSL: -_k__ty_RR_hip_joint
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) =  tx_RR_hip_joint;    // Maxima DSL: _k__tx_RR_hip_joint
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) =  tx_RR_hip_joint;    // Maxima DSL: _k__tx_RR_hip_joint
    (*this)(2,5) = - ty_RR_hip_joint;    // Maxima DSL: -_k__ty_RR_hip_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 1.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = -1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_fr_base_X_fr_RR_hip_joint& ForceTransforms::Type_fr_base_X_fr_RR_hip_joint::update(const state_t& q)
{
    return *this;
}
ForceTransforms::Type_fr_base_X_fr_RR_thigh_joint::Type_fr_base_X_fr_RR_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = -1.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,4) = 0.0;
}

const ForceTransforms::Type_fr_base_X_fr_RR_thigh_joint& ForceTransforms::Type_fr_base_X_fr_RR_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    (*this)(0,3) = (- ty_RR_hip_joint * cos_q_RR_hip_joint)- ty_RR_thigh_joint;
    (*this)(0,5) =  ty_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(1,0) = sin_q_RR_hip_joint;
    (*this)(1,2) = cos_q_RR_hip_joint;
    (*this)(1,3) =  tx_RR_hip_joint * cos_q_RR_hip_joint;
    (*this)(1,4) = - ty_RR_thigh_joint * sin_q_RR_hip_joint;
    (*this)(1,5) = - tx_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(2,0) = -cos_q_RR_hip_joint;
    (*this)(2,2) = sin_q_RR_hip_joint;
    (*this)(2,3) =  tx_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(2,4) = ( ty_RR_thigh_joint * cos_q_RR_hip_joint)+ ty_RR_hip_joint;
    (*this)(2,5) =  tx_RR_hip_joint * cos_q_RR_hip_joint;
    (*this)(4,3) = sin_q_RR_hip_joint;
    (*this)(4,5) = cos_q_RR_hip_joint;
    (*this)(5,3) = -cos_q_RR_hip_joint;
    (*this)(5,5) = sin_q_RR_hip_joint;
    return *this;
}
ForceTransforms::Type_fr_base_X_fr_RR_calf_joint::Type_fr_base_X_fr_RR_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
}

const ForceTransforms::Type_fr_base_X_fr_RR_calf_joint& ForceTransforms::Type_fr_base_X_fr_RR_calf_joint::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    Scalar sin_q_RR_thigh_joint  = ScalarTraits::sin( q(RR_THIGH_JOINT) );
    Scalar cos_q_RR_thigh_joint  = ScalarTraits::cos( q(RR_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_RR_thigh_joint;
    (*this)(0,1) = -cos_q_RR_thigh_joint;
    (*this)(0,3) = ((- ty_RR_hip_joint * cos_q_RR_hip_joint)- ty_RR_thigh_joint) * cos_q_RR_thigh_joint;
    (*this)(0,4) = (( ty_RR_hip_joint * cos_q_RR_hip_joint)+ ty_RR_thigh_joint) * sin_q_RR_thigh_joint;
    (*this)(0,5) = ( tx_RR_calf_joint * cos_q_RR_thigh_joint)+( ty_RR_hip_joint * sin_q_RR_hip_joint);
    (*this)(1,0) = sin_q_RR_hip_joint * cos_q_RR_thigh_joint;
    (*this)(1,1) = -sin_q_RR_hip_joint * sin_q_RR_thigh_joint;
    (*this)(1,2) = cos_q_RR_hip_joint;
    (*this)(1,3) = ( tx_RR_hip_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)-( ty_RR_thigh_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint);
    (*this)(1,4) = (- tx_RR_hip_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)-( ty_RR_thigh_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint)+( tx_RR_calf_joint * cos_q_RR_hip_joint);
    (*this)(1,5) = ( tx_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)-( tx_RR_hip_joint * sin_q_RR_hip_joint);
    (*this)(2,0) = -cos_q_RR_hip_joint * cos_q_RR_thigh_joint;
    (*this)(2,1) = cos_q_RR_hip_joint * sin_q_RR_thigh_joint;
    (*this)(2,2) = sin_q_RR_hip_joint;
    (*this)(2,3) = ((( ty_RR_thigh_joint * cos_q_RR_hip_joint)+ ty_RR_hip_joint) * sin_q_RR_thigh_joint)+( tx_RR_hip_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(2,4) = (- tx_RR_hip_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+((( ty_RR_thigh_joint * cos_q_RR_hip_joint)+ ty_RR_hip_joint) * cos_q_RR_thigh_joint)+( tx_RR_calf_joint * sin_q_RR_hip_joint);
    (*this)(2,5) = ( tx_RR_hip_joint * cos_q_RR_hip_joint)-( tx_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint);
    (*this)(3,3) = -sin_q_RR_thigh_joint;
    (*this)(3,4) = -cos_q_RR_thigh_joint;
    (*this)(4,3) = sin_q_RR_hip_joint * cos_q_RR_thigh_joint;
    (*this)(4,4) = -sin_q_RR_hip_joint * sin_q_RR_thigh_joint;
    (*this)(4,5) = cos_q_RR_hip_joint;
    (*this)(5,3) = -cos_q_RR_hip_joint * cos_q_RR_thigh_joint;
    (*this)(5,4) = cos_q_RR_hip_joint * sin_q_RR_thigh_joint;
    (*this)(5,5) = sin_q_RR_hip_joint;
    return *this;
}
ForceTransforms::Type_imu_link_X_fr_FL_hip_joint::Type_imu_link_X_fr_FL_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) = - ty_FL_hip_joint;    // Maxima DSL: -_k__ty_FL_hip_joint
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) =  tx_FL_hip_joint;    // Maxima DSL: _k__tx_FL_hip_joint
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) =  tx_FL_hip_joint;    // Maxima DSL: _k__tx_FL_hip_joint
    (*this)(2,5) = - ty_FL_hip_joint;    // Maxima DSL: -_k__ty_FL_hip_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 1.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = -1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_imu_link_X_fr_FL_hip_joint& ForceTransforms::Type_imu_link_X_fr_FL_hip_joint::update(const state_t& q)
{
    return *this;
}
ForceTransforms::Type_imu_link_X_fr_FL_thigh_joint::Type_imu_link_X_fr_FL_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = -1.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,4) = 0.0;
}

const ForceTransforms::Type_imu_link_X_fr_FL_thigh_joint& ForceTransforms::Type_imu_link_X_fr_FL_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    (*this)(0,3) = (- ty_FL_hip_joint * cos_q_FL_hip_joint)- ty_FL_thigh_joint;
    (*this)(0,5) =  ty_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(1,0) = sin_q_FL_hip_joint;
    (*this)(1,2) = cos_q_FL_hip_joint;
    (*this)(1,3) =  tx_FL_hip_joint * cos_q_FL_hip_joint;
    (*this)(1,4) = - ty_FL_thigh_joint * sin_q_FL_hip_joint;
    (*this)(1,5) = - tx_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(2,0) = -cos_q_FL_hip_joint;
    (*this)(2,2) = sin_q_FL_hip_joint;
    (*this)(2,3) =  tx_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(2,4) = ( ty_FL_thigh_joint * cos_q_FL_hip_joint)+ ty_FL_hip_joint;
    (*this)(2,5) =  tx_FL_hip_joint * cos_q_FL_hip_joint;
    (*this)(4,3) = sin_q_FL_hip_joint;
    (*this)(4,5) = cos_q_FL_hip_joint;
    (*this)(5,3) = -cos_q_FL_hip_joint;
    (*this)(5,5) = sin_q_FL_hip_joint;
    return *this;
}
ForceTransforms::Type_imu_link_X_fr_FL_calf_joint::Type_imu_link_X_fr_FL_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
}

const ForceTransforms::Type_imu_link_X_fr_FL_calf_joint& ForceTransforms::Type_imu_link_X_fr_FL_calf_joint::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    Scalar sin_q_FL_thigh_joint  = ScalarTraits::sin( q(FL_THIGH_JOINT) );
    Scalar cos_q_FL_thigh_joint  = ScalarTraits::cos( q(FL_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_FL_thigh_joint;
    (*this)(0,1) = -cos_q_FL_thigh_joint;
    (*this)(0,3) = ((- ty_FL_hip_joint * cos_q_FL_hip_joint)- ty_FL_thigh_joint) * cos_q_FL_thigh_joint;
    (*this)(0,4) = (( ty_FL_hip_joint * cos_q_FL_hip_joint)+ ty_FL_thigh_joint) * sin_q_FL_thigh_joint;
    (*this)(0,5) = ( tx_FL_calf_joint * cos_q_FL_thigh_joint)+( ty_FL_hip_joint * sin_q_FL_hip_joint);
    (*this)(1,0) = sin_q_FL_hip_joint * cos_q_FL_thigh_joint;
    (*this)(1,1) = -sin_q_FL_hip_joint * sin_q_FL_thigh_joint;
    (*this)(1,2) = cos_q_FL_hip_joint;
    (*this)(1,3) = ( tx_FL_hip_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)-( ty_FL_thigh_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint);
    (*this)(1,4) = (- tx_FL_hip_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)-( ty_FL_thigh_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint)+( tx_FL_calf_joint * cos_q_FL_hip_joint);
    (*this)(1,5) = ( tx_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)-( tx_FL_hip_joint * sin_q_FL_hip_joint);
    (*this)(2,0) = -cos_q_FL_hip_joint * cos_q_FL_thigh_joint;
    (*this)(2,1) = cos_q_FL_hip_joint * sin_q_FL_thigh_joint;
    (*this)(2,2) = sin_q_FL_hip_joint;
    (*this)(2,3) = ((( ty_FL_thigh_joint * cos_q_FL_hip_joint)+ ty_FL_hip_joint) * sin_q_FL_thigh_joint)+( tx_FL_hip_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(2,4) = (- tx_FL_hip_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+((( ty_FL_thigh_joint * cos_q_FL_hip_joint)+ ty_FL_hip_joint) * cos_q_FL_thigh_joint)+( tx_FL_calf_joint * sin_q_FL_hip_joint);
    (*this)(2,5) = ( tx_FL_hip_joint * cos_q_FL_hip_joint)-( tx_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint);
    (*this)(3,3) = -sin_q_FL_thigh_joint;
    (*this)(3,4) = -cos_q_FL_thigh_joint;
    (*this)(4,3) = sin_q_FL_hip_joint * cos_q_FL_thigh_joint;
    (*this)(4,4) = -sin_q_FL_hip_joint * sin_q_FL_thigh_joint;
    (*this)(4,5) = cos_q_FL_hip_joint;
    (*this)(5,3) = -cos_q_FL_hip_joint * cos_q_FL_thigh_joint;
    (*this)(5,4) = cos_q_FL_hip_joint * sin_q_FL_thigh_joint;
    (*this)(5,5) = sin_q_FL_hip_joint;
    return *this;
}
ForceTransforms::Type_imu_link_X_fr_FR_hip_joint::Type_imu_link_X_fr_FR_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) = - ty_FR_hip_joint;    // Maxima DSL: -_k__ty_FR_hip_joint
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) =  tx_FR_hip_joint;    // Maxima DSL: _k__tx_FR_hip_joint
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) =  tx_FR_hip_joint;    // Maxima DSL: _k__tx_FR_hip_joint
    (*this)(2,5) = - ty_FR_hip_joint;    // Maxima DSL: -_k__ty_FR_hip_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 1.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = -1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_imu_link_X_fr_FR_hip_joint& ForceTransforms::Type_imu_link_X_fr_FR_hip_joint::update(const state_t& q)
{
    return *this;
}
ForceTransforms::Type_imu_link_X_fr_FR_thigh_joint::Type_imu_link_X_fr_FR_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = -1.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,4) = 0.0;
}

const ForceTransforms::Type_imu_link_X_fr_FR_thigh_joint& ForceTransforms::Type_imu_link_X_fr_FR_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    (*this)(0,3) = (- ty_FR_hip_joint * cos_q_FR_hip_joint)- ty_FR_thigh_joint;
    (*this)(0,5) =  ty_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(1,0) = sin_q_FR_hip_joint;
    (*this)(1,2) = cos_q_FR_hip_joint;
    (*this)(1,3) =  tx_FR_hip_joint * cos_q_FR_hip_joint;
    (*this)(1,4) = - ty_FR_thigh_joint * sin_q_FR_hip_joint;
    (*this)(1,5) = - tx_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(2,0) = -cos_q_FR_hip_joint;
    (*this)(2,2) = sin_q_FR_hip_joint;
    (*this)(2,3) =  tx_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(2,4) = ( ty_FR_thigh_joint * cos_q_FR_hip_joint)+ ty_FR_hip_joint;
    (*this)(2,5) =  tx_FR_hip_joint * cos_q_FR_hip_joint;
    (*this)(4,3) = sin_q_FR_hip_joint;
    (*this)(4,5) = cos_q_FR_hip_joint;
    (*this)(5,3) = -cos_q_FR_hip_joint;
    (*this)(5,5) = sin_q_FR_hip_joint;
    return *this;
}
ForceTransforms::Type_imu_link_X_fr_FR_calf_joint::Type_imu_link_X_fr_FR_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
}

const ForceTransforms::Type_imu_link_X_fr_FR_calf_joint& ForceTransforms::Type_imu_link_X_fr_FR_calf_joint::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    Scalar sin_q_FR_thigh_joint  = ScalarTraits::sin( q(FR_THIGH_JOINT) );
    Scalar cos_q_FR_thigh_joint  = ScalarTraits::cos( q(FR_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_FR_thigh_joint;
    (*this)(0,1) = -cos_q_FR_thigh_joint;
    (*this)(0,3) = ((- ty_FR_hip_joint * cos_q_FR_hip_joint)- ty_FR_thigh_joint) * cos_q_FR_thigh_joint;
    (*this)(0,4) = (( ty_FR_hip_joint * cos_q_FR_hip_joint)+ ty_FR_thigh_joint) * sin_q_FR_thigh_joint;
    (*this)(0,5) = ( tx_FR_calf_joint * cos_q_FR_thigh_joint)+( ty_FR_hip_joint * sin_q_FR_hip_joint);
    (*this)(1,0) = sin_q_FR_hip_joint * cos_q_FR_thigh_joint;
    (*this)(1,1) = -sin_q_FR_hip_joint * sin_q_FR_thigh_joint;
    (*this)(1,2) = cos_q_FR_hip_joint;
    (*this)(1,3) = ( tx_FR_hip_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)-( ty_FR_thigh_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint);
    (*this)(1,4) = (- tx_FR_hip_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)-( ty_FR_thigh_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint)+( tx_FR_calf_joint * cos_q_FR_hip_joint);
    (*this)(1,5) = ( tx_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)-( tx_FR_hip_joint * sin_q_FR_hip_joint);
    (*this)(2,0) = -cos_q_FR_hip_joint * cos_q_FR_thigh_joint;
    (*this)(2,1) = cos_q_FR_hip_joint * sin_q_FR_thigh_joint;
    (*this)(2,2) = sin_q_FR_hip_joint;
    (*this)(2,3) = ((( ty_FR_thigh_joint * cos_q_FR_hip_joint)+ ty_FR_hip_joint) * sin_q_FR_thigh_joint)+( tx_FR_hip_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(2,4) = (- tx_FR_hip_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+((( ty_FR_thigh_joint * cos_q_FR_hip_joint)+ ty_FR_hip_joint) * cos_q_FR_thigh_joint)+( tx_FR_calf_joint * sin_q_FR_hip_joint);
    (*this)(2,5) = ( tx_FR_hip_joint * cos_q_FR_hip_joint)-( tx_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint);
    (*this)(3,3) = -sin_q_FR_thigh_joint;
    (*this)(3,4) = -cos_q_FR_thigh_joint;
    (*this)(4,3) = sin_q_FR_hip_joint * cos_q_FR_thigh_joint;
    (*this)(4,4) = -sin_q_FR_hip_joint * sin_q_FR_thigh_joint;
    (*this)(4,5) = cos_q_FR_hip_joint;
    (*this)(5,3) = -cos_q_FR_hip_joint * cos_q_FR_thigh_joint;
    (*this)(5,4) = cos_q_FR_hip_joint * sin_q_FR_thigh_joint;
    (*this)(5,5) = sin_q_FR_hip_joint;
    return *this;
}
ForceTransforms::Type_imu_link_X_fr_RL_hip_joint::Type_imu_link_X_fr_RL_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) = - ty_RL_hip_joint;    // Maxima DSL: -_k__ty_RL_hip_joint
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) =  tx_RL_hip_joint;    // Maxima DSL: _k__tx_RL_hip_joint
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) =  tx_RL_hip_joint;    // Maxima DSL: _k__tx_RL_hip_joint
    (*this)(2,5) = - ty_RL_hip_joint;    // Maxima DSL: -_k__ty_RL_hip_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 1.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = -1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_imu_link_X_fr_RL_hip_joint& ForceTransforms::Type_imu_link_X_fr_RL_hip_joint::update(const state_t& q)
{
    return *this;
}
ForceTransforms::Type_imu_link_X_fr_RL_thigh_joint::Type_imu_link_X_fr_RL_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = -1.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,4) = 0.0;
}

const ForceTransforms::Type_imu_link_X_fr_RL_thigh_joint& ForceTransforms::Type_imu_link_X_fr_RL_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    (*this)(0,3) = (- ty_RL_hip_joint * cos_q_RL_hip_joint)- ty_RL_thigh_joint;
    (*this)(0,5) =  ty_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(1,0) = sin_q_RL_hip_joint;
    (*this)(1,2) = cos_q_RL_hip_joint;
    (*this)(1,3) =  tx_RL_hip_joint * cos_q_RL_hip_joint;
    (*this)(1,4) = - ty_RL_thigh_joint * sin_q_RL_hip_joint;
    (*this)(1,5) = - tx_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(2,0) = -cos_q_RL_hip_joint;
    (*this)(2,2) = sin_q_RL_hip_joint;
    (*this)(2,3) =  tx_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(2,4) = ( ty_RL_thigh_joint * cos_q_RL_hip_joint)+ ty_RL_hip_joint;
    (*this)(2,5) =  tx_RL_hip_joint * cos_q_RL_hip_joint;
    (*this)(4,3) = sin_q_RL_hip_joint;
    (*this)(4,5) = cos_q_RL_hip_joint;
    (*this)(5,3) = -cos_q_RL_hip_joint;
    (*this)(5,5) = sin_q_RL_hip_joint;
    return *this;
}
ForceTransforms::Type_imu_link_X_fr_RL_calf_joint::Type_imu_link_X_fr_RL_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
}

const ForceTransforms::Type_imu_link_X_fr_RL_calf_joint& ForceTransforms::Type_imu_link_X_fr_RL_calf_joint::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    Scalar sin_q_RL_thigh_joint  = ScalarTraits::sin( q(RL_THIGH_JOINT) );
    Scalar cos_q_RL_thigh_joint  = ScalarTraits::cos( q(RL_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_RL_thigh_joint;
    (*this)(0,1) = -cos_q_RL_thigh_joint;
    (*this)(0,3) = ((- ty_RL_hip_joint * cos_q_RL_hip_joint)- ty_RL_thigh_joint) * cos_q_RL_thigh_joint;
    (*this)(0,4) = (( ty_RL_hip_joint * cos_q_RL_hip_joint)+ ty_RL_thigh_joint) * sin_q_RL_thigh_joint;
    (*this)(0,5) = ( tx_RL_calf_joint * cos_q_RL_thigh_joint)+( ty_RL_hip_joint * sin_q_RL_hip_joint);
    (*this)(1,0) = sin_q_RL_hip_joint * cos_q_RL_thigh_joint;
    (*this)(1,1) = -sin_q_RL_hip_joint * sin_q_RL_thigh_joint;
    (*this)(1,2) = cos_q_RL_hip_joint;
    (*this)(1,3) = ( tx_RL_hip_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)-( ty_RL_thigh_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint);
    (*this)(1,4) = (- tx_RL_hip_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)-( ty_RL_thigh_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint)+( tx_RL_calf_joint * cos_q_RL_hip_joint);
    (*this)(1,5) = ( tx_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)-( tx_RL_hip_joint * sin_q_RL_hip_joint);
    (*this)(2,0) = -cos_q_RL_hip_joint * cos_q_RL_thigh_joint;
    (*this)(2,1) = cos_q_RL_hip_joint * sin_q_RL_thigh_joint;
    (*this)(2,2) = sin_q_RL_hip_joint;
    (*this)(2,3) = ((( ty_RL_thigh_joint * cos_q_RL_hip_joint)+ ty_RL_hip_joint) * sin_q_RL_thigh_joint)+( tx_RL_hip_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(2,4) = (- tx_RL_hip_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+((( ty_RL_thigh_joint * cos_q_RL_hip_joint)+ ty_RL_hip_joint) * cos_q_RL_thigh_joint)+( tx_RL_calf_joint * sin_q_RL_hip_joint);
    (*this)(2,5) = ( tx_RL_hip_joint * cos_q_RL_hip_joint)-( tx_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint);
    (*this)(3,3) = -sin_q_RL_thigh_joint;
    (*this)(3,4) = -cos_q_RL_thigh_joint;
    (*this)(4,3) = sin_q_RL_hip_joint * cos_q_RL_thigh_joint;
    (*this)(4,4) = -sin_q_RL_hip_joint * sin_q_RL_thigh_joint;
    (*this)(4,5) = cos_q_RL_hip_joint;
    (*this)(5,3) = -cos_q_RL_hip_joint * cos_q_RL_thigh_joint;
    (*this)(5,4) = cos_q_RL_hip_joint * sin_q_RL_thigh_joint;
    (*this)(5,5) = sin_q_RL_hip_joint;
    return *this;
}
ForceTransforms::Type_imu_link_X_fr_RR_hip_joint::Type_imu_link_X_fr_RR_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) = - ty_RR_hip_joint;    // Maxima DSL: -_k__ty_RR_hip_joint
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) =  tx_RR_hip_joint;    // Maxima DSL: _k__tx_RR_hip_joint
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) =  tx_RR_hip_joint;    // Maxima DSL: _k__tx_RR_hip_joint
    (*this)(2,5) = - ty_RR_hip_joint;    // Maxima DSL: -_k__ty_RR_hip_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 1.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = -1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_imu_link_X_fr_RR_hip_joint& ForceTransforms::Type_imu_link_X_fr_RR_hip_joint::update(const state_t& q)
{
    return *this;
}
ForceTransforms::Type_imu_link_X_fr_RR_thigh_joint::Type_imu_link_X_fr_RR_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = -1.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,4) = 0.0;
}

const ForceTransforms::Type_imu_link_X_fr_RR_thigh_joint& ForceTransforms::Type_imu_link_X_fr_RR_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    (*this)(0,3) = (- ty_RR_hip_joint * cos_q_RR_hip_joint)- ty_RR_thigh_joint;
    (*this)(0,5) =  ty_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(1,0) = sin_q_RR_hip_joint;
    (*this)(1,2) = cos_q_RR_hip_joint;
    (*this)(1,3) =  tx_RR_hip_joint * cos_q_RR_hip_joint;
    (*this)(1,4) = - ty_RR_thigh_joint * sin_q_RR_hip_joint;
    (*this)(1,5) = - tx_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(2,0) = -cos_q_RR_hip_joint;
    (*this)(2,2) = sin_q_RR_hip_joint;
    (*this)(2,3) =  tx_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(2,4) = ( ty_RR_thigh_joint * cos_q_RR_hip_joint)+ ty_RR_hip_joint;
    (*this)(2,5) =  tx_RR_hip_joint * cos_q_RR_hip_joint;
    (*this)(4,3) = sin_q_RR_hip_joint;
    (*this)(4,5) = cos_q_RR_hip_joint;
    (*this)(5,3) = -cos_q_RR_hip_joint;
    (*this)(5,5) = sin_q_RR_hip_joint;
    return *this;
}
ForceTransforms::Type_imu_link_X_fr_RR_calf_joint::Type_imu_link_X_fr_RR_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
}

const ForceTransforms::Type_imu_link_X_fr_RR_calf_joint& ForceTransforms::Type_imu_link_X_fr_RR_calf_joint::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    Scalar sin_q_RR_thigh_joint  = ScalarTraits::sin( q(RR_THIGH_JOINT) );
    Scalar cos_q_RR_thigh_joint  = ScalarTraits::cos( q(RR_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_RR_thigh_joint;
    (*this)(0,1) = -cos_q_RR_thigh_joint;
    (*this)(0,3) = ((- ty_RR_hip_joint * cos_q_RR_hip_joint)- ty_RR_thigh_joint) * cos_q_RR_thigh_joint;
    (*this)(0,4) = (( ty_RR_hip_joint * cos_q_RR_hip_joint)+ ty_RR_thigh_joint) * sin_q_RR_thigh_joint;
    (*this)(0,5) = ( tx_RR_calf_joint * cos_q_RR_thigh_joint)+( ty_RR_hip_joint * sin_q_RR_hip_joint);
    (*this)(1,0) = sin_q_RR_hip_joint * cos_q_RR_thigh_joint;
    (*this)(1,1) = -sin_q_RR_hip_joint * sin_q_RR_thigh_joint;
    (*this)(1,2) = cos_q_RR_hip_joint;
    (*this)(1,3) = ( tx_RR_hip_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)-( ty_RR_thigh_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint);
    (*this)(1,4) = (- tx_RR_hip_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)-( ty_RR_thigh_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint)+( tx_RR_calf_joint * cos_q_RR_hip_joint);
    (*this)(1,5) = ( tx_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)-( tx_RR_hip_joint * sin_q_RR_hip_joint);
    (*this)(2,0) = -cos_q_RR_hip_joint * cos_q_RR_thigh_joint;
    (*this)(2,1) = cos_q_RR_hip_joint * sin_q_RR_thigh_joint;
    (*this)(2,2) = sin_q_RR_hip_joint;
    (*this)(2,3) = ((( ty_RR_thigh_joint * cos_q_RR_hip_joint)+ ty_RR_hip_joint) * sin_q_RR_thigh_joint)+( tx_RR_hip_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(2,4) = (- tx_RR_hip_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+((( ty_RR_thigh_joint * cos_q_RR_hip_joint)+ ty_RR_hip_joint) * cos_q_RR_thigh_joint)+( tx_RR_calf_joint * sin_q_RR_hip_joint);
    (*this)(2,5) = ( tx_RR_hip_joint * cos_q_RR_hip_joint)-( tx_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint);
    (*this)(3,3) = -sin_q_RR_thigh_joint;
    (*this)(3,4) = -cos_q_RR_thigh_joint;
    (*this)(4,3) = sin_q_RR_hip_joint * cos_q_RR_thigh_joint;
    (*this)(4,4) = -sin_q_RR_hip_joint * sin_q_RR_thigh_joint;
    (*this)(4,5) = cos_q_RR_hip_joint;
    (*this)(5,3) = -cos_q_RR_hip_joint * cos_q_RR_thigh_joint;
    (*this)(5,4) = cos_q_RR_hip_joint * sin_q_RR_thigh_joint;
    (*this)(5,5) = sin_q_RR_hip_joint;
    return *this;
}
ForceTransforms::Type_fr_FR_hip_X_fr_base::Type_fr_FR_hip_X_fr_base()
{
    (*this)(0,0) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(2,0) = 1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = - ty_FR_hip_joint;    // Maxima DSL: -_k__ty_FR_hip_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_fr_FR_hip_X_fr_base& ForceTransforms::Type_fr_FR_hip_X_fr_base::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    (*this)(0,1) = sin_q_FR_hip_joint;
    (*this)(0,2) = -cos_q_FR_hip_joint;
    (*this)(0,3) = - ty_FR_hip_joint * cos_q_FR_hip_joint;
    (*this)(0,4) =  tx_FR_hip_joint * cos_q_FR_hip_joint;
    (*this)(0,5) =  tx_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(1,1) = cos_q_FR_hip_joint;
    (*this)(1,2) = sin_q_FR_hip_joint;
    (*this)(1,3) =  ty_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(1,4) = - tx_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(1,5) =  tx_FR_hip_joint * cos_q_FR_hip_joint;
    (*this)(3,4) = sin_q_FR_hip_joint;
    (*this)(3,5) = -cos_q_FR_hip_joint;
    (*this)(4,4) = cos_q_FR_hip_joint;
    (*this)(4,5) = sin_q_FR_hip_joint;
    return *this;
}
ForceTransforms::Type_fr_base_X_fr_FR_hip::Type_fr_base_X_fr_FR_hip()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,5) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,5) = - ty_FR_hip_joint;    // Maxima DSL: -_k__ty_FR_hip_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_fr_base_X_fr_FR_hip& ForceTransforms::Type_fr_base_X_fr_FR_hip::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    (*this)(0,3) = - ty_FR_hip_joint * cos_q_FR_hip_joint;
    (*this)(0,4) =  ty_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(1,0) = sin_q_FR_hip_joint;
    (*this)(1,1) = cos_q_FR_hip_joint;
    (*this)(1,3) =  tx_FR_hip_joint * cos_q_FR_hip_joint;
    (*this)(1,4) = - tx_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(2,0) = -cos_q_FR_hip_joint;
    (*this)(2,1) = sin_q_FR_hip_joint;
    (*this)(2,3) =  tx_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(2,4) =  tx_FR_hip_joint * cos_q_FR_hip_joint;
    (*this)(4,3) = sin_q_FR_hip_joint;
    (*this)(4,4) = cos_q_FR_hip_joint;
    (*this)(5,3) = -cos_q_FR_hip_joint;
    (*this)(5,4) = sin_q_FR_hip_joint;
    return *this;
}
ForceTransforms::Type_fr_FR_thigh_X_fr_FR_hip::Type_fr_FR_thigh_X_fr_FR_hip()
{
    (*this)(0,1) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 1.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 1.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_fr_FR_thigh_X_fr_FR_hip& ForceTransforms::Type_fr_FR_thigh_X_fr_FR_hip::update(const state_t& q)
{
    Scalar sin_q_FR_thigh_joint  = ScalarTraits::sin( q(FR_THIGH_JOINT) );
    Scalar cos_q_FR_thigh_joint  = ScalarTraits::cos( q(FR_THIGH_JOINT) );
    (*this)(0,0) = cos_q_FR_thigh_joint;
    (*this)(0,2) = -sin_q_FR_thigh_joint;
    (*this)(0,3) = - ty_FR_thigh_joint * sin_q_FR_thigh_joint;
    (*this)(0,5) = - ty_FR_thigh_joint * cos_q_FR_thigh_joint;
    (*this)(1,0) = -sin_q_FR_thigh_joint;
    (*this)(1,2) = -cos_q_FR_thigh_joint;
    (*this)(1,3) = - ty_FR_thigh_joint * cos_q_FR_thigh_joint;
    (*this)(1,5) =  ty_FR_thigh_joint * sin_q_FR_thigh_joint;
    (*this)(3,3) = cos_q_FR_thigh_joint;
    (*this)(3,5) = -sin_q_FR_thigh_joint;
    (*this)(4,3) = -sin_q_FR_thigh_joint;
    (*this)(4,5) = -cos_q_FR_thigh_joint;
    return *this;
}
ForceTransforms::Type_fr_FR_hip_X_fr_FR_thigh::Type_fr_FR_hip_X_fr_FR_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,2) = 1.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(4,5) = 1.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_fr_FR_hip_X_fr_FR_thigh& ForceTransforms::Type_fr_FR_hip_X_fr_FR_thigh::update(const state_t& q)
{
    Scalar sin_q_FR_thigh_joint  = ScalarTraits::sin( q(FR_THIGH_JOINT) );
    Scalar cos_q_FR_thigh_joint  = ScalarTraits::cos( q(FR_THIGH_JOINT) );
    (*this)(0,0) = cos_q_FR_thigh_joint;
    (*this)(0,1) = -sin_q_FR_thigh_joint;
    (*this)(0,3) = - ty_FR_thigh_joint * sin_q_FR_thigh_joint;
    (*this)(0,4) = - ty_FR_thigh_joint * cos_q_FR_thigh_joint;
    (*this)(2,0) = -sin_q_FR_thigh_joint;
    (*this)(2,1) = -cos_q_FR_thigh_joint;
    (*this)(2,3) = - ty_FR_thigh_joint * cos_q_FR_thigh_joint;
    (*this)(2,4) =  ty_FR_thigh_joint * sin_q_FR_thigh_joint;
    (*this)(3,3) = cos_q_FR_thigh_joint;
    (*this)(3,4) = -sin_q_FR_thigh_joint;
    (*this)(5,3) = -sin_q_FR_thigh_joint;
    (*this)(5,4) = -cos_q_FR_thigh_joint;
    return *this;
}
ForceTransforms::Type_fr_FR_calf_X_fr_FR_thigh::Type_fr_FR_calf_X_fr_FR_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = - tx_FR_calf_joint;    // Maxima DSL: -_k__tx_FR_calf_joint
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 1.0;
}

const ForceTransforms::Type_fr_FR_calf_X_fr_FR_thigh& ForceTransforms::Type_fr_FR_calf_X_fr_FR_thigh::update(const state_t& q)
{
    Scalar sin_q_FR_calf_joint  = ScalarTraits::sin( q(FR_CALF_JOINT) );
    Scalar cos_q_FR_calf_joint  = ScalarTraits::cos( q(FR_CALF_JOINT) );
    (*this)(0,0) = cos_q_FR_calf_joint;
    (*this)(0,1) = sin_q_FR_calf_joint;
    (*this)(0,5) =  tx_FR_calf_joint * sin_q_FR_calf_joint;
    (*this)(1,0) = -sin_q_FR_calf_joint;
    (*this)(1,1) = cos_q_FR_calf_joint;
    (*this)(1,5) =  tx_FR_calf_joint * cos_q_FR_calf_joint;
    (*this)(3,3) = cos_q_FR_calf_joint;
    (*this)(3,4) = sin_q_FR_calf_joint;
    (*this)(4,3) = -sin_q_FR_calf_joint;
    (*this)(4,4) = cos_q_FR_calf_joint;
    return *this;
}
ForceTransforms::Type_fr_FR_thigh_X_fr_FR_calf::Type_fr_FR_thigh_X_fr_FR_calf()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = - tx_FR_calf_joint;    // Maxima DSL: -_k__tx_FR_calf_joint
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 1.0;
}

const ForceTransforms::Type_fr_FR_thigh_X_fr_FR_calf& ForceTransforms::Type_fr_FR_thigh_X_fr_FR_calf::update(const state_t& q)
{
    Scalar sin_q_FR_calf_joint  = ScalarTraits::sin( q(FR_CALF_JOINT) );
    Scalar cos_q_FR_calf_joint  = ScalarTraits::cos( q(FR_CALF_JOINT) );
    (*this)(0,0) = cos_q_FR_calf_joint;
    (*this)(0,1) = -sin_q_FR_calf_joint;
    (*this)(1,0) = sin_q_FR_calf_joint;
    (*this)(1,1) = cos_q_FR_calf_joint;
    (*this)(2,3) =  tx_FR_calf_joint * sin_q_FR_calf_joint;
    (*this)(2,4) =  tx_FR_calf_joint * cos_q_FR_calf_joint;
    (*this)(3,3) = cos_q_FR_calf_joint;
    (*this)(3,4) = -sin_q_FR_calf_joint;
    (*this)(4,3) = sin_q_FR_calf_joint;
    (*this)(4,4) = cos_q_FR_calf_joint;
    return *this;
}
ForceTransforms::Type_fr_FL_hip_X_fr_base::Type_fr_FL_hip_X_fr_base()
{
    (*this)(0,0) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(2,0) = 1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = - ty_FL_hip_joint;    // Maxima DSL: -_k__ty_FL_hip_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_fr_FL_hip_X_fr_base& ForceTransforms::Type_fr_FL_hip_X_fr_base::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    (*this)(0,1) = sin_q_FL_hip_joint;
    (*this)(0,2) = -cos_q_FL_hip_joint;
    (*this)(0,3) = - ty_FL_hip_joint * cos_q_FL_hip_joint;
    (*this)(0,4) =  tx_FL_hip_joint * cos_q_FL_hip_joint;
    (*this)(0,5) =  tx_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(1,1) = cos_q_FL_hip_joint;
    (*this)(1,2) = sin_q_FL_hip_joint;
    (*this)(1,3) =  ty_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(1,4) = - tx_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(1,5) =  tx_FL_hip_joint * cos_q_FL_hip_joint;
    (*this)(3,4) = sin_q_FL_hip_joint;
    (*this)(3,5) = -cos_q_FL_hip_joint;
    (*this)(4,4) = cos_q_FL_hip_joint;
    (*this)(4,5) = sin_q_FL_hip_joint;
    return *this;
}
ForceTransforms::Type_fr_base_X_fr_FL_hip::Type_fr_base_X_fr_FL_hip()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,5) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,5) = - ty_FL_hip_joint;    // Maxima DSL: -_k__ty_FL_hip_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_fr_base_X_fr_FL_hip& ForceTransforms::Type_fr_base_X_fr_FL_hip::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    (*this)(0,3) = - ty_FL_hip_joint * cos_q_FL_hip_joint;
    (*this)(0,4) =  ty_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(1,0) = sin_q_FL_hip_joint;
    (*this)(1,1) = cos_q_FL_hip_joint;
    (*this)(1,3) =  tx_FL_hip_joint * cos_q_FL_hip_joint;
    (*this)(1,4) = - tx_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(2,0) = -cos_q_FL_hip_joint;
    (*this)(2,1) = sin_q_FL_hip_joint;
    (*this)(2,3) =  tx_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(2,4) =  tx_FL_hip_joint * cos_q_FL_hip_joint;
    (*this)(4,3) = sin_q_FL_hip_joint;
    (*this)(4,4) = cos_q_FL_hip_joint;
    (*this)(5,3) = -cos_q_FL_hip_joint;
    (*this)(5,4) = sin_q_FL_hip_joint;
    return *this;
}
ForceTransforms::Type_fr_FL_thigh_X_fr_FL_hip::Type_fr_FL_thigh_X_fr_FL_hip()
{
    (*this)(0,1) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 1.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 1.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_fr_FL_thigh_X_fr_FL_hip& ForceTransforms::Type_fr_FL_thigh_X_fr_FL_hip::update(const state_t& q)
{
    Scalar sin_q_FL_thigh_joint  = ScalarTraits::sin( q(FL_THIGH_JOINT) );
    Scalar cos_q_FL_thigh_joint  = ScalarTraits::cos( q(FL_THIGH_JOINT) );
    (*this)(0,0) = cos_q_FL_thigh_joint;
    (*this)(0,2) = -sin_q_FL_thigh_joint;
    (*this)(0,3) = - ty_FL_thigh_joint * sin_q_FL_thigh_joint;
    (*this)(0,5) = - ty_FL_thigh_joint * cos_q_FL_thigh_joint;
    (*this)(1,0) = -sin_q_FL_thigh_joint;
    (*this)(1,2) = -cos_q_FL_thigh_joint;
    (*this)(1,3) = - ty_FL_thigh_joint * cos_q_FL_thigh_joint;
    (*this)(1,5) =  ty_FL_thigh_joint * sin_q_FL_thigh_joint;
    (*this)(3,3) = cos_q_FL_thigh_joint;
    (*this)(3,5) = -sin_q_FL_thigh_joint;
    (*this)(4,3) = -sin_q_FL_thigh_joint;
    (*this)(4,5) = -cos_q_FL_thigh_joint;
    return *this;
}
ForceTransforms::Type_fr_FL_hip_X_fr_FL_thigh::Type_fr_FL_hip_X_fr_FL_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,2) = 1.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(4,5) = 1.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_fr_FL_hip_X_fr_FL_thigh& ForceTransforms::Type_fr_FL_hip_X_fr_FL_thigh::update(const state_t& q)
{
    Scalar sin_q_FL_thigh_joint  = ScalarTraits::sin( q(FL_THIGH_JOINT) );
    Scalar cos_q_FL_thigh_joint  = ScalarTraits::cos( q(FL_THIGH_JOINT) );
    (*this)(0,0) = cos_q_FL_thigh_joint;
    (*this)(0,1) = -sin_q_FL_thigh_joint;
    (*this)(0,3) = - ty_FL_thigh_joint * sin_q_FL_thigh_joint;
    (*this)(0,4) = - ty_FL_thigh_joint * cos_q_FL_thigh_joint;
    (*this)(2,0) = -sin_q_FL_thigh_joint;
    (*this)(2,1) = -cos_q_FL_thigh_joint;
    (*this)(2,3) = - ty_FL_thigh_joint * cos_q_FL_thigh_joint;
    (*this)(2,4) =  ty_FL_thigh_joint * sin_q_FL_thigh_joint;
    (*this)(3,3) = cos_q_FL_thigh_joint;
    (*this)(3,4) = -sin_q_FL_thigh_joint;
    (*this)(5,3) = -sin_q_FL_thigh_joint;
    (*this)(5,4) = -cos_q_FL_thigh_joint;
    return *this;
}
ForceTransforms::Type_fr_FL_calf_X_fr_FL_thigh::Type_fr_FL_calf_X_fr_FL_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = - tx_FL_calf_joint;    // Maxima DSL: -_k__tx_FL_calf_joint
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 1.0;
}

const ForceTransforms::Type_fr_FL_calf_X_fr_FL_thigh& ForceTransforms::Type_fr_FL_calf_X_fr_FL_thigh::update(const state_t& q)
{
    Scalar sin_q_FL_calf_joint  = ScalarTraits::sin( q(FL_CALF_JOINT) );
    Scalar cos_q_FL_calf_joint  = ScalarTraits::cos( q(FL_CALF_JOINT) );
    (*this)(0,0) = cos_q_FL_calf_joint;
    (*this)(0,1) = sin_q_FL_calf_joint;
    (*this)(0,5) =  tx_FL_calf_joint * sin_q_FL_calf_joint;
    (*this)(1,0) = -sin_q_FL_calf_joint;
    (*this)(1,1) = cos_q_FL_calf_joint;
    (*this)(1,5) =  tx_FL_calf_joint * cos_q_FL_calf_joint;
    (*this)(3,3) = cos_q_FL_calf_joint;
    (*this)(3,4) = sin_q_FL_calf_joint;
    (*this)(4,3) = -sin_q_FL_calf_joint;
    (*this)(4,4) = cos_q_FL_calf_joint;
    return *this;
}
ForceTransforms::Type_fr_FL_thigh_X_fr_FL_calf::Type_fr_FL_thigh_X_fr_FL_calf()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = - tx_FL_calf_joint;    // Maxima DSL: -_k__tx_FL_calf_joint
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 1.0;
}

const ForceTransforms::Type_fr_FL_thigh_X_fr_FL_calf& ForceTransforms::Type_fr_FL_thigh_X_fr_FL_calf::update(const state_t& q)
{
    Scalar sin_q_FL_calf_joint  = ScalarTraits::sin( q(FL_CALF_JOINT) );
    Scalar cos_q_FL_calf_joint  = ScalarTraits::cos( q(FL_CALF_JOINT) );
    (*this)(0,0) = cos_q_FL_calf_joint;
    (*this)(0,1) = -sin_q_FL_calf_joint;
    (*this)(1,0) = sin_q_FL_calf_joint;
    (*this)(1,1) = cos_q_FL_calf_joint;
    (*this)(2,3) =  tx_FL_calf_joint * sin_q_FL_calf_joint;
    (*this)(2,4) =  tx_FL_calf_joint * cos_q_FL_calf_joint;
    (*this)(3,3) = cos_q_FL_calf_joint;
    (*this)(3,4) = -sin_q_FL_calf_joint;
    (*this)(4,3) = sin_q_FL_calf_joint;
    (*this)(4,4) = cos_q_FL_calf_joint;
    return *this;
}
ForceTransforms::Type_fr_RR_hip_X_fr_base::Type_fr_RR_hip_X_fr_base()
{
    (*this)(0,0) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(2,0) = 1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = - ty_RR_hip_joint;    // Maxima DSL: -_k__ty_RR_hip_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_fr_RR_hip_X_fr_base& ForceTransforms::Type_fr_RR_hip_X_fr_base::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    (*this)(0,1) = sin_q_RR_hip_joint;
    (*this)(0,2) = -cos_q_RR_hip_joint;
    (*this)(0,3) = - ty_RR_hip_joint * cos_q_RR_hip_joint;
    (*this)(0,4) =  tx_RR_hip_joint * cos_q_RR_hip_joint;
    (*this)(0,5) =  tx_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(1,1) = cos_q_RR_hip_joint;
    (*this)(1,2) = sin_q_RR_hip_joint;
    (*this)(1,3) =  ty_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(1,4) = - tx_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(1,5) =  tx_RR_hip_joint * cos_q_RR_hip_joint;
    (*this)(3,4) = sin_q_RR_hip_joint;
    (*this)(3,5) = -cos_q_RR_hip_joint;
    (*this)(4,4) = cos_q_RR_hip_joint;
    (*this)(4,5) = sin_q_RR_hip_joint;
    return *this;
}
ForceTransforms::Type_fr_base_X_fr_RR_hip::Type_fr_base_X_fr_RR_hip()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,5) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,5) = - ty_RR_hip_joint;    // Maxima DSL: -_k__ty_RR_hip_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_fr_base_X_fr_RR_hip& ForceTransforms::Type_fr_base_X_fr_RR_hip::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    (*this)(0,3) = - ty_RR_hip_joint * cos_q_RR_hip_joint;
    (*this)(0,4) =  ty_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(1,0) = sin_q_RR_hip_joint;
    (*this)(1,1) = cos_q_RR_hip_joint;
    (*this)(1,3) =  tx_RR_hip_joint * cos_q_RR_hip_joint;
    (*this)(1,4) = - tx_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(2,0) = -cos_q_RR_hip_joint;
    (*this)(2,1) = sin_q_RR_hip_joint;
    (*this)(2,3) =  tx_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(2,4) =  tx_RR_hip_joint * cos_q_RR_hip_joint;
    (*this)(4,3) = sin_q_RR_hip_joint;
    (*this)(4,4) = cos_q_RR_hip_joint;
    (*this)(5,3) = -cos_q_RR_hip_joint;
    (*this)(5,4) = sin_q_RR_hip_joint;
    return *this;
}
ForceTransforms::Type_fr_RR_thigh_X_fr_RR_hip::Type_fr_RR_thigh_X_fr_RR_hip()
{
    (*this)(0,1) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 1.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 1.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_fr_RR_thigh_X_fr_RR_hip& ForceTransforms::Type_fr_RR_thigh_X_fr_RR_hip::update(const state_t& q)
{
    Scalar sin_q_RR_thigh_joint  = ScalarTraits::sin( q(RR_THIGH_JOINT) );
    Scalar cos_q_RR_thigh_joint  = ScalarTraits::cos( q(RR_THIGH_JOINT) );
    (*this)(0,0) = cos_q_RR_thigh_joint;
    (*this)(0,2) = -sin_q_RR_thigh_joint;
    (*this)(0,3) = - ty_RR_thigh_joint * sin_q_RR_thigh_joint;
    (*this)(0,5) = - ty_RR_thigh_joint * cos_q_RR_thigh_joint;
    (*this)(1,0) = -sin_q_RR_thigh_joint;
    (*this)(1,2) = -cos_q_RR_thigh_joint;
    (*this)(1,3) = - ty_RR_thigh_joint * cos_q_RR_thigh_joint;
    (*this)(1,5) =  ty_RR_thigh_joint * sin_q_RR_thigh_joint;
    (*this)(3,3) = cos_q_RR_thigh_joint;
    (*this)(3,5) = -sin_q_RR_thigh_joint;
    (*this)(4,3) = -sin_q_RR_thigh_joint;
    (*this)(4,5) = -cos_q_RR_thigh_joint;
    return *this;
}
ForceTransforms::Type_fr_RR_hip_X_fr_RR_thigh::Type_fr_RR_hip_X_fr_RR_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,2) = 1.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(4,5) = 1.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_fr_RR_hip_X_fr_RR_thigh& ForceTransforms::Type_fr_RR_hip_X_fr_RR_thigh::update(const state_t& q)
{
    Scalar sin_q_RR_thigh_joint  = ScalarTraits::sin( q(RR_THIGH_JOINT) );
    Scalar cos_q_RR_thigh_joint  = ScalarTraits::cos( q(RR_THIGH_JOINT) );
    (*this)(0,0) = cos_q_RR_thigh_joint;
    (*this)(0,1) = -sin_q_RR_thigh_joint;
    (*this)(0,3) = - ty_RR_thigh_joint * sin_q_RR_thigh_joint;
    (*this)(0,4) = - ty_RR_thigh_joint * cos_q_RR_thigh_joint;
    (*this)(2,0) = -sin_q_RR_thigh_joint;
    (*this)(2,1) = -cos_q_RR_thigh_joint;
    (*this)(2,3) = - ty_RR_thigh_joint * cos_q_RR_thigh_joint;
    (*this)(2,4) =  ty_RR_thigh_joint * sin_q_RR_thigh_joint;
    (*this)(3,3) = cos_q_RR_thigh_joint;
    (*this)(3,4) = -sin_q_RR_thigh_joint;
    (*this)(5,3) = -sin_q_RR_thigh_joint;
    (*this)(5,4) = -cos_q_RR_thigh_joint;
    return *this;
}
ForceTransforms::Type_fr_RR_calf_X_fr_RR_thigh::Type_fr_RR_calf_X_fr_RR_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = - tx_RR_calf_joint;    // Maxima DSL: -_k__tx_RR_calf_joint
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 1.0;
}

const ForceTransforms::Type_fr_RR_calf_X_fr_RR_thigh& ForceTransforms::Type_fr_RR_calf_X_fr_RR_thigh::update(const state_t& q)
{
    Scalar sin_q_RR_calf_joint  = ScalarTraits::sin( q(RR_CALF_JOINT) );
    Scalar cos_q_RR_calf_joint  = ScalarTraits::cos( q(RR_CALF_JOINT) );
    (*this)(0,0) = cos_q_RR_calf_joint;
    (*this)(0,1) = sin_q_RR_calf_joint;
    (*this)(0,5) =  tx_RR_calf_joint * sin_q_RR_calf_joint;
    (*this)(1,0) = -sin_q_RR_calf_joint;
    (*this)(1,1) = cos_q_RR_calf_joint;
    (*this)(1,5) =  tx_RR_calf_joint * cos_q_RR_calf_joint;
    (*this)(3,3) = cos_q_RR_calf_joint;
    (*this)(3,4) = sin_q_RR_calf_joint;
    (*this)(4,3) = -sin_q_RR_calf_joint;
    (*this)(4,4) = cos_q_RR_calf_joint;
    return *this;
}
ForceTransforms::Type_fr_RR_thigh_X_fr_RR_calf::Type_fr_RR_thigh_X_fr_RR_calf()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = - tx_RR_calf_joint;    // Maxima DSL: -_k__tx_RR_calf_joint
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 1.0;
}

const ForceTransforms::Type_fr_RR_thigh_X_fr_RR_calf& ForceTransforms::Type_fr_RR_thigh_X_fr_RR_calf::update(const state_t& q)
{
    Scalar sin_q_RR_calf_joint  = ScalarTraits::sin( q(RR_CALF_JOINT) );
    Scalar cos_q_RR_calf_joint  = ScalarTraits::cos( q(RR_CALF_JOINT) );
    (*this)(0,0) = cos_q_RR_calf_joint;
    (*this)(0,1) = -sin_q_RR_calf_joint;
    (*this)(1,0) = sin_q_RR_calf_joint;
    (*this)(1,1) = cos_q_RR_calf_joint;
    (*this)(2,3) =  tx_RR_calf_joint * sin_q_RR_calf_joint;
    (*this)(2,4) =  tx_RR_calf_joint * cos_q_RR_calf_joint;
    (*this)(3,3) = cos_q_RR_calf_joint;
    (*this)(3,4) = -sin_q_RR_calf_joint;
    (*this)(4,3) = sin_q_RR_calf_joint;
    (*this)(4,4) = cos_q_RR_calf_joint;
    return *this;
}
ForceTransforms::Type_fr_RL_hip_X_fr_base::Type_fr_RL_hip_X_fr_base()
{
    (*this)(0,0) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(2,0) = 1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = - ty_RL_hip_joint;    // Maxima DSL: -_k__ty_RL_hip_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 1.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_fr_RL_hip_X_fr_base& ForceTransforms::Type_fr_RL_hip_X_fr_base::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    (*this)(0,1) = sin_q_RL_hip_joint;
    (*this)(0,2) = -cos_q_RL_hip_joint;
    (*this)(0,3) = - ty_RL_hip_joint * cos_q_RL_hip_joint;
    (*this)(0,4) =  tx_RL_hip_joint * cos_q_RL_hip_joint;
    (*this)(0,5) =  tx_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(1,1) = cos_q_RL_hip_joint;
    (*this)(1,2) = sin_q_RL_hip_joint;
    (*this)(1,3) =  ty_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(1,4) = - tx_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(1,5) =  tx_RL_hip_joint * cos_q_RL_hip_joint;
    (*this)(3,4) = sin_q_RL_hip_joint;
    (*this)(3,5) = -cos_q_RL_hip_joint;
    (*this)(4,4) = cos_q_RL_hip_joint;
    (*this)(4,5) = sin_q_RL_hip_joint;
    return *this;
}
ForceTransforms::Type_fr_base_X_fr_RL_hip::Type_fr_base_X_fr_RL_hip()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,5) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,5) = - ty_RL_hip_joint;    // Maxima DSL: -_k__ty_RL_hip_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(3,5) = 1.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_fr_base_X_fr_RL_hip& ForceTransforms::Type_fr_base_X_fr_RL_hip::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    (*this)(0,3) = - ty_RL_hip_joint * cos_q_RL_hip_joint;
    (*this)(0,4) =  ty_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(1,0) = sin_q_RL_hip_joint;
    (*this)(1,1) = cos_q_RL_hip_joint;
    (*this)(1,3) =  tx_RL_hip_joint * cos_q_RL_hip_joint;
    (*this)(1,4) = - tx_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(2,0) = -cos_q_RL_hip_joint;
    (*this)(2,1) = sin_q_RL_hip_joint;
    (*this)(2,3) =  tx_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(2,4) =  tx_RL_hip_joint * cos_q_RL_hip_joint;
    (*this)(4,3) = sin_q_RL_hip_joint;
    (*this)(4,4) = cos_q_RL_hip_joint;
    (*this)(5,3) = -cos_q_RL_hip_joint;
    (*this)(5,4) = sin_q_RL_hip_joint;
    return *this;
}
ForceTransforms::Type_fr_RL_thigh_X_fr_RL_hip::Type_fr_RL_thigh_X_fr_RL_hip()
{
    (*this)(0,1) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 1.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,4) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 1.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_fr_RL_thigh_X_fr_RL_hip& ForceTransforms::Type_fr_RL_thigh_X_fr_RL_hip::update(const state_t& q)
{
    Scalar sin_q_RL_thigh_joint  = ScalarTraits::sin( q(RL_THIGH_JOINT) );
    Scalar cos_q_RL_thigh_joint  = ScalarTraits::cos( q(RL_THIGH_JOINT) );
    (*this)(0,0) = cos_q_RL_thigh_joint;
    (*this)(0,2) = -sin_q_RL_thigh_joint;
    (*this)(0,3) = - ty_RL_thigh_joint * sin_q_RL_thigh_joint;
    (*this)(0,5) = - ty_RL_thigh_joint * cos_q_RL_thigh_joint;
    (*this)(1,0) = -sin_q_RL_thigh_joint;
    (*this)(1,2) = -cos_q_RL_thigh_joint;
    (*this)(1,3) = - ty_RL_thigh_joint * cos_q_RL_thigh_joint;
    (*this)(1,5) =  ty_RL_thigh_joint * sin_q_RL_thigh_joint;
    (*this)(3,3) = cos_q_RL_thigh_joint;
    (*this)(3,5) = -sin_q_RL_thigh_joint;
    (*this)(4,3) = -sin_q_RL_thigh_joint;
    (*this)(4,5) = -cos_q_RL_thigh_joint;
    return *this;
}
ForceTransforms::Type_fr_RL_hip_X_fr_RL_thigh::Type_fr_RL_hip_X_fr_RL_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,2) = 1.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,3) = 0.0;
    (*this)(4,4) = 0.0;
    (*this)(4,5) = 1.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,5) = 0.0;
}

const ForceTransforms::Type_fr_RL_hip_X_fr_RL_thigh& ForceTransforms::Type_fr_RL_hip_X_fr_RL_thigh::update(const state_t& q)
{
    Scalar sin_q_RL_thigh_joint  = ScalarTraits::sin( q(RL_THIGH_JOINT) );
    Scalar cos_q_RL_thigh_joint  = ScalarTraits::cos( q(RL_THIGH_JOINT) );
    (*this)(0,0) = cos_q_RL_thigh_joint;
    (*this)(0,1) = -sin_q_RL_thigh_joint;
    (*this)(0,3) = - ty_RL_thigh_joint * sin_q_RL_thigh_joint;
    (*this)(0,4) = - ty_RL_thigh_joint * cos_q_RL_thigh_joint;
    (*this)(2,0) = -sin_q_RL_thigh_joint;
    (*this)(2,1) = -cos_q_RL_thigh_joint;
    (*this)(2,3) = - ty_RL_thigh_joint * cos_q_RL_thigh_joint;
    (*this)(2,4) =  ty_RL_thigh_joint * sin_q_RL_thigh_joint;
    (*this)(3,3) = cos_q_RL_thigh_joint;
    (*this)(3,4) = -sin_q_RL_thigh_joint;
    (*this)(5,3) = -sin_q_RL_thigh_joint;
    (*this)(5,4) = -cos_q_RL_thigh_joint;
    return *this;
}
ForceTransforms::Type_fr_RL_calf_X_fr_RL_thigh::Type_fr_RL_calf_X_fr_RL_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.0;
    (*this)(2,4) = - tx_RL_calf_joint;    // Maxima DSL: -_k__tx_RL_calf_joint
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 1.0;
}

const ForceTransforms::Type_fr_RL_calf_X_fr_RL_thigh& ForceTransforms::Type_fr_RL_calf_X_fr_RL_thigh::update(const state_t& q)
{
    Scalar sin_q_RL_calf_joint  = ScalarTraits::sin( q(RL_CALF_JOINT) );
    Scalar cos_q_RL_calf_joint  = ScalarTraits::cos( q(RL_CALF_JOINT) );
    (*this)(0,0) = cos_q_RL_calf_joint;
    (*this)(0,1) = sin_q_RL_calf_joint;
    (*this)(0,5) =  tx_RL_calf_joint * sin_q_RL_calf_joint;
    (*this)(1,0) = -sin_q_RL_calf_joint;
    (*this)(1,1) = cos_q_RL_calf_joint;
    (*this)(1,5) =  tx_RL_calf_joint * cos_q_RL_calf_joint;
    (*this)(3,3) = cos_q_RL_calf_joint;
    (*this)(3,4) = sin_q_RL_calf_joint;
    (*this)(4,3) = -sin_q_RL_calf_joint;
    (*this)(4,4) = cos_q_RL_calf_joint;
    return *this;
}
ForceTransforms::Type_fr_RL_thigh_X_fr_RL_calf::Type_fr_RL_thigh_X_fr_RL_calf()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(0,4) = 0.0;
    (*this)(0,5) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(1,4) = 0.0;
    (*this)(1,5) = - tx_RL_calf_joint;    // Maxima DSL: -_k__tx_RL_calf_joint
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,5) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,5) = 0.0;
    (*this)(4,0) = 0.0;
    (*this)(4,1) = 0.0;
    (*this)(4,2) = 0.0;
    (*this)(4,5) = 0.0;
    (*this)(5,0) = 0.0;
    (*this)(5,1) = 0.0;
    (*this)(5,2) = 0.0;
    (*this)(5,3) = 0.0;
    (*this)(5,4) = 0.0;
    (*this)(5,5) = 1.0;
}

const ForceTransforms::Type_fr_RL_thigh_X_fr_RL_calf& ForceTransforms::Type_fr_RL_thigh_X_fr_RL_calf::update(const state_t& q)
{
    Scalar sin_q_RL_calf_joint  = ScalarTraits::sin( q(RL_CALF_JOINT) );
    Scalar cos_q_RL_calf_joint  = ScalarTraits::cos( q(RL_CALF_JOINT) );
    (*this)(0,0) = cos_q_RL_calf_joint;
    (*this)(0,1) = -sin_q_RL_calf_joint;
    (*this)(1,0) = sin_q_RL_calf_joint;
    (*this)(1,1) = cos_q_RL_calf_joint;
    (*this)(2,3) =  tx_RL_calf_joint * sin_q_RL_calf_joint;
    (*this)(2,4) =  tx_RL_calf_joint * cos_q_RL_calf_joint;
    (*this)(3,3) = cos_q_RL_calf_joint;
    (*this)(3,4) = -sin_q_RL_calf_joint;
    (*this)(4,3) = sin_q_RL_calf_joint;
    (*this)(4,4) = cos_q_RL_calf_joint;
    return *this;
}

HomogeneousTransforms::Type_fr_base_X_FL_foot::Type_fr_base_X_FL_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_base_X_FL_foot& HomogeneousTransforms::Type_fr_base_X_FL_foot::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    Scalar sin_q_FL_thigh_joint  = ScalarTraits::sin( q(FL_THIGH_JOINT) );
    Scalar cos_q_FL_thigh_joint  = ScalarTraits::cos( q(FL_THIGH_JOINT) );
    Scalar sin_q_FL_calf_joint  = ScalarTraits::sin( q(FL_CALF_JOINT) );
    Scalar cos_q_FL_calf_joint  = ScalarTraits::cos( q(FL_CALF_JOINT) );
    (*this)(0,0) = (cos_q_FL_calf_joint * cos_q_FL_thigh_joint)-(sin_q_FL_calf_joint * sin_q_FL_thigh_joint);
    (*this)(0,2) = (cos_q_FL_calf_joint * sin_q_FL_thigh_joint)+(sin_q_FL_calf_joint * cos_q_FL_thigh_joint);
    (*this)(0,3) = (((- tx_FL_foot * cos_q_FL_calf_joint)- tx_FL_calf_joint) * sin_q_FL_thigh_joint)-( tx_FL_foot * sin_q_FL_calf_joint * cos_q_FL_thigh_joint)+ tx_FL_hip_joint;
    (*this)(1,0) = (cos_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+(sin_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(1,1) = cos_q_FL_hip_joint;
    (*this)(1,2) = (sin_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)-(cos_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(1,3) = (- tx_FL_foot * sin_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+((( tx_FL_foot * cos_q_FL_calf_joint)+ tx_FL_calf_joint) * sin_q_FL_hip_joint * cos_q_FL_thigh_joint)+( ty_FL_thigh_joint * cos_q_FL_hip_joint)+ ty_FL_hip_joint;
    (*this)(2,0) = (-cos_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)-(sin_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(2,1) = sin_q_FL_hip_joint;
    (*this)(2,2) = (cos_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)-(sin_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint);
    (*this)(2,3) = ( tx_FL_foot * sin_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)+(((- tx_FL_foot * cos_q_FL_calf_joint)- tx_FL_calf_joint) * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)+( ty_FL_thigh_joint * sin_q_FL_hip_joint);
    return *this;
}
HomogeneousTransforms::Type_fr_base_X_FR_foot::Type_fr_base_X_FR_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_base_X_FR_foot& HomogeneousTransforms::Type_fr_base_X_FR_foot::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    Scalar sin_q_FR_thigh_joint  = ScalarTraits::sin( q(FR_THIGH_JOINT) );
    Scalar cos_q_FR_thigh_joint  = ScalarTraits::cos( q(FR_THIGH_JOINT) );
    Scalar sin_q_FR_calf_joint  = ScalarTraits::sin( q(FR_CALF_JOINT) );
    Scalar cos_q_FR_calf_joint  = ScalarTraits::cos( q(FR_CALF_JOINT) );
    (*this)(0,0) = (cos_q_FR_calf_joint * cos_q_FR_thigh_joint)-(sin_q_FR_calf_joint * sin_q_FR_thigh_joint);
    (*this)(0,2) = (cos_q_FR_calf_joint * sin_q_FR_thigh_joint)+(sin_q_FR_calf_joint * cos_q_FR_thigh_joint);
    (*this)(0,3) = (((- tx_FR_foot * cos_q_FR_calf_joint)- tx_FR_calf_joint) * sin_q_FR_thigh_joint)-( tx_FR_foot * sin_q_FR_calf_joint * cos_q_FR_thigh_joint)+ tx_FR_hip_joint;
    (*this)(1,0) = (cos_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+(sin_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(1,1) = cos_q_FR_hip_joint;
    (*this)(1,2) = (sin_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)-(cos_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(1,3) = (- tx_FR_foot * sin_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+((( tx_FR_foot * cos_q_FR_calf_joint)+ tx_FR_calf_joint) * sin_q_FR_hip_joint * cos_q_FR_thigh_joint)+( ty_FR_thigh_joint * cos_q_FR_hip_joint)+ ty_FR_hip_joint;
    (*this)(2,0) = (-cos_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)-(sin_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(2,1) = sin_q_FR_hip_joint;
    (*this)(2,2) = (cos_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)-(sin_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint);
    (*this)(2,3) = ( tx_FR_foot * sin_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)+(((- tx_FR_foot * cos_q_FR_calf_joint)- tx_FR_calf_joint) * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)+( ty_FR_thigh_joint * sin_q_FR_hip_joint);
    return *this;
}
HomogeneousTransforms::Type_fr_base_X_RL_foot::Type_fr_base_X_RL_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_base_X_RL_foot& HomogeneousTransforms::Type_fr_base_X_RL_foot::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    Scalar sin_q_RL_thigh_joint  = ScalarTraits::sin( q(RL_THIGH_JOINT) );
    Scalar cos_q_RL_thigh_joint  = ScalarTraits::cos( q(RL_THIGH_JOINT) );
    Scalar sin_q_RL_calf_joint  = ScalarTraits::sin( q(RL_CALF_JOINT) );
    Scalar cos_q_RL_calf_joint  = ScalarTraits::cos( q(RL_CALF_JOINT) );
    (*this)(0,0) = (cos_q_RL_calf_joint * cos_q_RL_thigh_joint)-(sin_q_RL_calf_joint * sin_q_RL_thigh_joint);
    (*this)(0,2) = (cos_q_RL_calf_joint * sin_q_RL_thigh_joint)+(sin_q_RL_calf_joint * cos_q_RL_thigh_joint);
    (*this)(0,3) = (((- tx_RL_foot * cos_q_RL_calf_joint)- tx_RL_calf_joint) * sin_q_RL_thigh_joint)-( tx_RL_foot * sin_q_RL_calf_joint * cos_q_RL_thigh_joint)+ tx_RL_hip_joint;
    (*this)(1,0) = (cos_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+(sin_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(1,1) = cos_q_RL_hip_joint;
    (*this)(1,2) = (sin_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)-(cos_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(1,3) = (- tx_RL_foot * sin_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+((( tx_RL_foot * cos_q_RL_calf_joint)+ tx_RL_calf_joint) * sin_q_RL_hip_joint * cos_q_RL_thigh_joint)+( ty_RL_thigh_joint * cos_q_RL_hip_joint)+ ty_RL_hip_joint;
    (*this)(2,0) = (-cos_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)-(sin_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(2,1) = sin_q_RL_hip_joint;
    (*this)(2,2) = (cos_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)-(sin_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint);
    (*this)(2,3) = ( tx_RL_foot * sin_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)+(((- tx_RL_foot * cos_q_RL_calf_joint)- tx_RL_calf_joint) * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)+( ty_RL_thigh_joint * sin_q_RL_hip_joint);
    return *this;
}
HomogeneousTransforms::Type_fr_base_X_RR_foot::Type_fr_base_X_RR_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_base_X_RR_foot& HomogeneousTransforms::Type_fr_base_X_RR_foot::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    Scalar sin_q_RR_thigh_joint  = ScalarTraits::sin( q(RR_THIGH_JOINT) );
    Scalar cos_q_RR_thigh_joint  = ScalarTraits::cos( q(RR_THIGH_JOINT) );
    Scalar sin_q_RR_calf_joint  = ScalarTraits::sin( q(RR_CALF_JOINT) );
    Scalar cos_q_RR_calf_joint  = ScalarTraits::cos( q(RR_CALF_JOINT) );
    (*this)(0,0) = (cos_q_RR_calf_joint * cos_q_RR_thigh_joint)-(sin_q_RR_calf_joint * sin_q_RR_thigh_joint);
    (*this)(0,2) = (cos_q_RR_calf_joint * sin_q_RR_thigh_joint)+(sin_q_RR_calf_joint * cos_q_RR_thigh_joint);
    (*this)(0,3) = (((- tx_RR_foot * cos_q_RR_calf_joint)- tx_RR_calf_joint) * sin_q_RR_thigh_joint)-( tx_RR_foot * sin_q_RR_calf_joint * cos_q_RR_thigh_joint)+ tx_RR_hip_joint;
    (*this)(1,0) = (cos_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+(sin_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(1,1) = cos_q_RR_hip_joint;
    (*this)(1,2) = (sin_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)-(cos_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(1,3) = (- tx_RR_foot * sin_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+((( tx_RR_foot * cos_q_RR_calf_joint)+ tx_RR_calf_joint) * sin_q_RR_hip_joint * cos_q_RR_thigh_joint)+( ty_RR_thigh_joint * cos_q_RR_hip_joint)+ ty_RR_hip_joint;
    (*this)(2,0) = (-cos_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)-(sin_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(2,1) = sin_q_RR_hip_joint;
    (*this)(2,2) = (cos_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)-(sin_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint);
    (*this)(2,3) = ( tx_RR_foot * sin_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)+(((- tx_RR_foot * cos_q_RR_calf_joint)- tx_RR_calf_joint) * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)+( ty_RR_thigh_joint * sin_q_RR_hip_joint);
    return *this;
}
HomogeneousTransforms::Type_imu_link_X_FL_foot::Type_imu_link_X_FL_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_imu_link_X_FL_foot& HomogeneousTransforms::Type_imu_link_X_FL_foot::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    Scalar sin_q_FL_thigh_joint  = ScalarTraits::sin( q(FL_THIGH_JOINT) );
    Scalar cos_q_FL_thigh_joint  = ScalarTraits::cos( q(FL_THIGH_JOINT) );
    Scalar sin_q_FL_calf_joint  = ScalarTraits::sin( q(FL_CALF_JOINT) );
    Scalar cos_q_FL_calf_joint  = ScalarTraits::cos( q(FL_CALF_JOINT) );
    (*this)(0,0) = (cos_q_FL_calf_joint * cos_q_FL_thigh_joint)-(sin_q_FL_calf_joint * sin_q_FL_thigh_joint);
    (*this)(0,2) = (cos_q_FL_calf_joint * sin_q_FL_thigh_joint)+(sin_q_FL_calf_joint * cos_q_FL_thigh_joint);
    (*this)(0,3) = (((- tx_FL_foot * cos_q_FL_calf_joint)- tx_FL_calf_joint) * sin_q_FL_thigh_joint)-( tx_FL_foot * sin_q_FL_calf_joint * cos_q_FL_thigh_joint)+ tx_FL_hip_joint;
    (*this)(1,0) = (cos_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+(sin_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(1,1) = cos_q_FL_hip_joint;
    (*this)(1,2) = (sin_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)-(cos_q_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(1,3) = (- tx_FL_foot * sin_q_FL_calf_joint * sin_q_FL_hip_joint * sin_q_FL_thigh_joint)+((( tx_FL_foot * cos_q_FL_calf_joint)+ tx_FL_calf_joint) * sin_q_FL_hip_joint * cos_q_FL_thigh_joint)+( ty_FL_thigh_joint * cos_q_FL_hip_joint)+ ty_FL_hip_joint;
    (*this)(2,0) = (-cos_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)-(sin_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint);
    (*this)(2,1) = sin_q_FL_hip_joint;
    (*this)(2,2) = (cos_q_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)-(sin_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint);
    (*this)(2,3) = ( tx_FL_foot * sin_q_FL_calf_joint * cos_q_FL_hip_joint * sin_q_FL_thigh_joint)+(((- tx_FL_foot * cos_q_FL_calf_joint)- tx_FL_calf_joint) * cos_q_FL_hip_joint * cos_q_FL_thigh_joint)+( ty_FL_thigh_joint * sin_q_FL_hip_joint);
    return *this;
}
HomogeneousTransforms::Type_imu_link_X_FR_foot::Type_imu_link_X_FR_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_imu_link_X_FR_foot& HomogeneousTransforms::Type_imu_link_X_FR_foot::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    Scalar sin_q_FR_thigh_joint  = ScalarTraits::sin( q(FR_THIGH_JOINT) );
    Scalar cos_q_FR_thigh_joint  = ScalarTraits::cos( q(FR_THIGH_JOINT) );
    Scalar sin_q_FR_calf_joint  = ScalarTraits::sin( q(FR_CALF_JOINT) );
    Scalar cos_q_FR_calf_joint  = ScalarTraits::cos( q(FR_CALF_JOINT) );
    (*this)(0,0) = (cos_q_FR_calf_joint * cos_q_FR_thigh_joint)-(sin_q_FR_calf_joint * sin_q_FR_thigh_joint);
    (*this)(0,2) = (cos_q_FR_calf_joint * sin_q_FR_thigh_joint)+(sin_q_FR_calf_joint * cos_q_FR_thigh_joint);
    (*this)(0,3) = (((- tx_FR_foot * cos_q_FR_calf_joint)- tx_FR_calf_joint) * sin_q_FR_thigh_joint)-( tx_FR_foot * sin_q_FR_calf_joint * cos_q_FR_thigh_joint)+ tx_FR_hip_joint;
    (*this)(1,0) = (cos_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+(sin_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(1,1) = cos_q_FR_hip_joint;
    (*this)(1,2) = (sin_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)-(cos_q_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(1,3) = (- tx_FR_foot * sin_q_FR_calf_joint * sin_q_FR_hip_joint * sin_q_FR_thigh_joint)+((( tx_FR_foot * cos_q_FR_calf_joint)+ tx_FR_calf_joint) * sin_q_FR_hip_joint * cos_q_FR_thigh_joint)+( ty_FR_thigh_joint * cos_q_FR_hip_joint)+ ty_FR_hip_joint;
    (*this)(2,0) = (-cos_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)-(sin_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint);
    (*this)(2,1) = sin_q_FR_hip_joint;
    (*this)(2,2) = (cos_q_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)-(sin_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint);
    (*this)(2,3) = ( tx_FR_foot * sin_q_FR_calf_joint * cos_q_FR_hip_joint * sin_q_FR_thigh_joint)+(((- tx_FR_foot * cos_q_FR_calf_joint)- tx_FR_calf_joint) * cos_q_FR_hip_joint * cos_q_FR_thigh_joint)+( ty_FR_thigh_joint * sin_q_FR_hip_joint);
    return *this;
}
HomogeneousTransforms::Type_imu_link_X_RL_foot::Type_imu_link_X_RL_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_imu_link_X_RL_foot& HomogeneousTransforms::Type_imu_link_X_RL_foot::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    Scalar sin_q_RL_thigh_joint  = ScalarTraits::sin( q(RL_THIGH_JOINT) );
    Scalar cos_q_RL_thigh_joint  = ScalarTraits::cos( q(RL_THIGH_JOINT) );
    Scalar sin_q_RL_calf_joint  = ScalarTraits::sin( q(RL_CALF_JOINT) );
    Scalar cos_q_RL_calf_joint  = ScalarTraits::cos( q(RL_CALF_JOINT) );
    (*this)(0,0) = (cos_q_RL_calf_joint * cos_q_RL_thigh_joint)-(sin_q_RL_calf_joint * sin_q_RL_thigh_joint);
    (*this)(0,2) = (cos_q_RL_calf_joint * sin_q_RL_thigh_joint)+(sin_q_RL_calf_joint * cos_q_RL_thigh_joint);
    (*this)(0,3) = (((- tx_RL_foot * cos_q_RL_calf_joint)- tx_RL_calf_joint) * sin_q_RL_thigh_joint)-( tx_RL_foot * sin_q_RL_calf_joint * cos_q_RL_thigh_joint)+ tx_RL_hip_joint;
    (*this)(1,0) = (cos_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+(sin_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(1,1) = cos_q_RL_hip_joint;
    (*this)(1,2) = (sin_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)-(cos_q_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(1,3) = (- tx_RL_foot * sin_q_RL_calf_joint * sin_q_RL_hip_joint * sin_q_RL_thigh_joint)+((( tx_RL_foot * cos_q_RL_calf_joint)+ tx_RL_calf_joint) * sin_q_RL_hip_joint * cos_q_RL_thigh_joint)+( ty_RL_thigh_joint * cos_q_RL_hip_joint)+ ty_RL_hip_joint;
    (*this)(2,0) = (-cos_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)-(sin_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint);
    (*this)(2,1) = sin_q_RL_hip_joint;
    (*this)(2,2) = (cos_q_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)-(sin_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint);
    (*this)(2,3) = ( tx_RL_foot * sin_q_RL_calf_joint * cos_q_RL_hip_joint * sin_q_RL_thigh_joint)+(((- tx_RL_foot * cos_q_RL_calf_joint)- tx_RL_calf_joint) * cos_q_RL_hip_joint * cos_q_RL_thigh_joint)+( ty_RL_thigh_joint * sin_q_RL_hip_joint);
    return *this;
}
HomogeneousTransforms::Type_imu_link_X_RR_foot::Type_imu_link_X_RR_foot()
{
    (*this)(0,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_imu_link_X_RR_foot& HomogeneousTransforms::Type_imu_link_X_RR_foot::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    Scalar sin_q_RR_thigh_joint  = ScalarTraits::sin( q(RR_THIGH_JOINT) );
    Scalar cos_q_RR_thigh_joint  = ScalarTraits::cos( q(RR_THIGH_JOINT) );
    Scalar sin_q_RR_calf_joint  = ScalarTraits::sin( q(RR_CALF_JOINT) );
    Scalar cos_q_RR_calf_joint  = ScalarTraits::cos( q(RR_CALF_JOINT) );
    (*this)(0,0) = (cos_q_RR_calf_joint * cos_q_RR_thigh_joint)-(sin_q_RR_calf_joint * sin_q_RR_thigh_joint);
    (*this)(0,2) = (cos_q_RR_calf_joint * sin_q_RR_thigh_joint)+(sin_q_RR_calf_joint * cos_q_RR_thigh_joint);
    (*this)(0,3) = (((- tx_RR_foot * cos_q_RR_calf_joint)- tx_RR_calf_joint) * sin_q_RR_thigh_joint)-( tx_RR_foot * sin_q_RR_calf_joint * cos_q_RR_thigh_joint)+ tx_RR_hip_joint;
    (*this)(1,0) = (cos_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+(sin_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(1,1) = cos_q_RR_hip_joint;
    (*this)(1,2) = (sin_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)-(cos_q_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(1,3) = (- tx_RR_foot * sin_q_RR_calf_joint * sin_q_RR_hip_joint * sin_q_RR_thigh_joint)+((( tx_RR_foot * cos_q_RR_calf_joint)+ tx_RR_calf_joint) * sin_q_RR_hip_joint * cos_q_RR_thigh_joint)+( ty_RR_thigh_joint * cos_q_RR_hip_joint)+ ty_RR_hip_joint;
    (*this)(2,0) = (-cos_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)-(sin_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint);
    (*this)(2,1) = sin_q_RR_hip_joint;
    (*this)(2,2) = (cos_q_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)-(sin_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint);
    (*this)(2,3) = ( tx_RR_foot * sin_q_RR_calf_joint * cos_q_RR_hip_joint * sin_q_RR_thigh_joint)+(((- tx_RR_foot * cos_q_RR_calf_joint)- tx_RR_calf_joint) * cos_q_RR_hip_joint * cos_q_RR_thigh_joint)+( ty_RR_thigh_joint * sin_q_RR_hip_joint);
    return *this;
}
HomogeneousTransforms::Type_fr_base_X_fr_FL_hip_joint::Type_fr_base_X_fr_FL_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) =  tx_FL_hip_joint;    // Maxima DSL: _k__tx_FL_hip_joint
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) =  ty_FL_hip_joint;    // Maxima DSL: _k__ty_FL_hip_joint
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_base_X_fr_FL_hip_joint& HomogeneousTransforms::Type_fr_base_X_fr_FL_hip_joint::update(const state_t& q)
{
    return *this;
}
HomogeneousTransforms::Type_fr_base_X_fr_FL_thigh_joint::Type_fr_base_X_fr_FL_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,3) =  tx_FL_hip_joint;    // Maxima DSL: _k__tx_FL_hip_joint
    (*this)(1,1) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_base_X_fr_FL_thigh_joint& HomogeneousTransforms::Type_fr_base_X_fr_FL_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    (*this)(1,0) = sin_q_FL_hip_joint;
    (*this)(1,2) = cos_q_FL_hip_joint;
    (*this)(1,3) = ( ty_FL_thigh_joint * cos_q_FL_hip_joint)+ ty_FL_hip_joint;
    (*this)(2,0) = -cos_q_FL_hip_joint;
    (*this)(2,2) = sin_q_FL_hip_joint;
    (*this)(2,3) =  ty_FL_thigh_joint * sin_q_FL_hip_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_base_X_fr_FL_calf_joint::Type_fr_base_X_fr_FL_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_base_X_fr_FL_calf_joint& HomogeneousTransforms::Type_fr_base_X_fr_FL_calf_joint::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    Scalar sin_q_FL_thigh_joint  = ScalarTraits::sin( q(FL_THIGH_JOINT) );
    Scalar cos_q_FL_thigh_joint  = ScalarTraits::cos( q(FL_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_FL_thigh_joint;
    (*this)(0,1) = -cos_q_FL_thigh_joint;
    (*this)(0,3) =  tx_FL_hip_joint-( tx_FL_calf_joint * sin_q_FL_thigh_joint);
    (*this)(1,0) = sin_q_FL_hip_joint * cos_q_FL_thigh_joint;
    (*this)(1,1) = -sin_q_FL_hip_joint * sin_q_FL_thigh_joint;
    (*this)(1,2) = cos_q_FL_hip_joint;
    (*this)(1,3) = ( tx_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint)+( ty_FL_thigh_joint * cos_q_FL_hip_joint)+ ty_FL_hip_joint;
    (*this)(2,0) = -cos_q_FL_hip_joint * cos_q_FL_thigh_joint;
    (*this)(2,1) = cos_q_FL_hip_joint * sin_q_FL_thigh_joint;
    (*this)(2,2) = sin_q_FL_hip_joint;
    (*this)(2,3) = ( ty_FL_thigh_joint * sin_q_FL_hip_joint)-( tx_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint);
    return *this;
}
HomogeneousTransforms::Type_fr_base_X_fr_FR_hip_joint::Type_fr_base_X_fr_FR_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) =  tx_FR_hip_joint;    // Maxima DSL: _k__tx_FR_hip_joint
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) =  ty_FR_hip_joint;    // Maxima DSL: _k__ty_FR_hip_joint
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_base_X_fr_FR_hip_joint& HomogeneousTransforms::Type_fr_base_X_fr_FR_hip_joint::update(const state_t& q)
{
    return *this;
}
HomogeneousTransforms::Type_fr_base_X_fr_FR_thigh_joint::Type_fr_base_X_fr_FR_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,3) =  tx_FR_hip_joint;    // Maxima DSL: _k__tx_FR_hip_joint
    (*this)(1,1) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_base_X_fr_FR_thigh_joint& HomogeneousTransforms::Type_fr_base_X_fr_FR_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    (*this)(1,0) = sin_q_FR_hip_joint;
    (*this)(1,2) = cos_q_FR_hip_joint;
    (*this)(1,3) = ( ty_FR_thigh_joint * cos_q_FR_hip_joint)+ ty_FR_hip_joint;
    (*this)(2,0) = -cos_q_FR_hip_joint;
    (*this)(2,2) = sin_q_FR_hip_joint;
    (*this)(2,3) =  ty_FR_thigh_joint * sin_q_FR_hip_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_base_X_fr_FR_calf_joint::Type_fr_base_X_fr_FR_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_base_X_fr_FR_calf_joint& HomogeneousTransforms::Type_fr_base_X_fr_FR_calf_joint::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    Scalar sin_q_FR_thigh_joint  = ScalarTraits::sin( q(FR_THIGH_JOINT) );
    Scalar cos_q_FR_thigh_joint  = ScalarTraits::cos( q(FR_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_FR_thigh_joint;
    (*this)(0,1) = -cos_q_FR_thigh_joint;
    (*this)(0,3) =  tx_FR_hip_joint-( tx_FR_calf_joint * sin_q_FR_thigh_joint);
    (*this)(1,0) = sin_q_FR_hip_joint * cos_q_FR_thigh_joint;
    (*this)(1,1) = -sin_q_FR_hip_joint * sin_q_FR_thigh_joint;
    (*this)(1,2) = cos_q_FR_hip_joint;
    (*this)(1,3) = ( tx_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint)+( ty_FR_thigh_joint * cos_q_FR_hip_joint)+ ty_FR_hip_joint;
    (*this)(2,0) = -cos_q_FR_hip_joint * cos_q_FR_thigh_joint;
    (*this)(2,1) = cos_q_FR_hip_joint * sin_q_FR_thigh_joint;
    (*this)(2,2) = sin_q_FR_hip_joint;
    (*this)(2,3) = ( ty_FR_thigh_joint * sin_q_FR_hip_joint)-( tx_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint);
    return *this;
}
HomogeneousTransforms::Type_fr_base_X_fr_RL_hip_joint::Type_fr_base_X_fr_RL_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) =  tx_RL_hip_joint;    // Maxima DSL: _k__tx_RL_hip_joint
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) =  ty_RL_hip_joint;    // Maxima DSL: _k__ty_RL_hip_joint
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_base_X_fr_RL_hip_joint& HomogeneousTransforms::Type_fr_base_X_fr_RL_hip_joint::update(const state_t& q)
{
    return *this;
}
HomogeneousTransforms::Type_fr_base_X_fr_RL_thigh_joint::Type_fr_base_X_fr_RL_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,3) =  tx_RL_hip_joint;    // Maxima DSL: _k__tx_RL_hip_joint
    (*this)(1,1) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_base_X_fr_RL_thigh_joint& HomogeneousTransforms::Type_fr_base_X_fr_RL_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    (*this)(1,0) = sin_q_RL_hip_joint;
    (*this)(1,2) = cos_q_RL_hip_joint;
    (*this)(1,3) = ( ty_RL_thigh_joint * cos_q_RL_hip_joint)+ ty_RL_hip_joint;
    (*this)(2,0) = -cos_q_RL_hip_joint;
    (*this)(2,2) = sin_q_RL_hip_joint;
    (*this)(2,3) =  ty_RL_thigh_joint * sin_q_RL_hip_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_base_X_fr_RL_calf_joint::Type_fr_base_X_fr_RL_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_base_X_fr_RL_calf_joint& HomogeneousTransforms::Type_fr_base_X_fr_RL_calf_joint::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    Scalar sin_q_RL_thigh_joint  = ScalarTraits::sin( q(RL_THIGH_JOINT) );
    Scalar cos_q_RL_thigh_joint  = ScalarTraits::cos( q(RL_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_RL_thigh_joint;
    (*this)(0,1) = -cos_q_RL_thigh_joint;
    (*this)(0,3) =  tx_RL_hip_joint-( tx_RL_calf_joint * sin_q_RL_thigh_joint);
    (*this)(1,0) = sin_q_RL_hip_joint * cos_q_RL_thigh_joint;
    (*this)(1,1) = -sin_q_RL_hip_joint * sin_q_RL_thigh_joint;
    (*this)(1,2) = cos_q_RL_hip_joint;
    (*this)(1,3) = ( tx_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint)+( ty_RL_thigh_joint * cos_q_RL_hip_joint)+ ty_RL_hip_joint;
    (*this)(2,0) = -cos_q_RL_hip_joint * cos_q_RL_thigh_joint;
    (*this)(2,1) = cos_q_RL_hip_joint * sin_q_RL_thigh_joint;
    (*this)(2,2) = sin_q_RL_hip_joint;
    (*this)(2,3) = ( ty_RL_thigh_joint * sin_q_RL_hip_joint)-( tx_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint);
    return *this;
}
HomogeneousTransforms::Type_fr_base_X_fr_RR_hip_joint::Type_fr_base_X_fr_RR_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) =  tx_RR_hip_joint;    // Maxima DSL: _k__tx_RR_hip_joint
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) =  ty_RR_hip_joint;    // Maxima DSL: _k__ty_RR_hip_joint
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_base_X_fr_RR_hip_joint& HomogeneousTransforms::Type_fr_base_X_fr_RR_hip_joint::update(const state_t& q)
{
    return *this;
}
HomogeneousTransforms::Type_fr_base_X_fr_RR_thigh_joint::Type_fr_base_X_fr_RR_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,3) =  tx_RR_hip_joint;    // Maxima DSL: _k__tx_RR_hip_joint
    (*this)(1,1) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_base_X_fr_RR_thigh_joint& HomogeneousTransforms::Type_fr_base_X_fr_RR_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    (*this)(1,0) = sin_q_RR_hip_joint;
    (*this)(1,2) = cos_q_RR_hip_joint;
    (*this)(1,3) = ( ty_RR_thigh_joint * cos_q_RR_hip_joint)+ ty_RR_hip_joint;
    (*this)(2,0) = -cos_q_RR_hip_joint;
    (*this)(2,2) = sin_q_RR_hip_joint;
    (*this)(2,3) =  ty_RR_thigh_joint * sin_q_RR_hip_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_base_X_fr_RR_calf_joint::Type_fr_base_X_fr_RR_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_base_X_fr_RR_calf_joint& HomogeneousTransforms::Type_fr_base_X_fr_RR_calf_joint::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    Scalar sin_q_RR_thigh_joint  = ScalarTraits::sin( q(RR_THIGH_JOINT) );
    Scalar cos_q_RR_thigh_joint  = ScalarTraits::cos( q(RR_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_RR_thigh_joint;
    (*this)(0,1) = -cos_q_RR_thigh_joint;
    (*this)(0,3) =  tx_RR_hip_joint-( tx_RR_calf_joint * sin_q_RR_thigh_joint);
    (*this)(1,0) = sin_q_RR_hip_joint * cos_q_RR_thigh_joint;
    (*this)(1,1) = -sin_q_RR_hip_joint * sin_q_RR_thigh_joint;
    (*this)(1,2) = cos_q_RR_hip_joint;
    (*this)(1,3) = ( tx_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint)+( ty_RR_thigh_joint * cos_q_RR_hip_joint)+ ty_RR_hip_joint;
    (*this)(2,0) = -cos_q_RR_hip_joint * cos_q_RR_thigh_joint;
    (*this)(2,1) = cos_q_RR_hip_joint * sin_q_RR_thigh_joint;
    (*this)(2,2) = sin_q_RR_hip_joint;
    (*this)(2,3) = ( ty_RR_thigh_joint * sin_q_RR_hip_joint)-( tx_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint);
    return *this;
}
HomogeneousTransforms::Type_imu_link_X_fr_FL_hip_joint::Type_imu_link_X_fr_FL_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) =  tx_FL_hip_joint;    // Maxima DSL: _k__tx_FL_hip_joint
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) =  ty_FL_hip_joint;    // Maxima DSL: _k__ty_FL_hip_joint
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_imu_link_X_fr_FL_hip_joint& HomogeneousTransforms::Type_imu_link_X_fr_FL_hip_joint::update(const state_t& q)
{
    return *this;
}
HomogeneousTransforms::Type_imu_link_X_fr_FL_thigh_joint::Type_imu_link_X_fr_FL_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,3) =  tx_FL_hip_joint;    // Maxima DSL: _k__tx_FL_hip_joint
    (*this)(1,1) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_imu_link_X_fr_FL_thigh_joint& HomogeneousTransforms::Type_imu_link_X_fr_FL_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    (*this)(1,0) = sin_q_FL_hip_joint;
    (*this)(1,2) = cos_q_FL_hip_joint;
    (*this)(1,3) = ( ty_FL_thigh_joint * cos_q_FL_hip_joint)+ ty_FL_hip_joint;
    (*this)(2,0) = -cos_q_FL_hip_joint;
    (*this)(2,2) = sin_q_FL_hip_joint;
    (*this)(2,3) =  ty_FL_thigh_joint * sin_q_FL_hip_joint;
    return *this;
}
HomogeneousTransforms::Type_imu_link_X_fr_FL_calf_joint::Type_imu_link_X_fr_FL_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_imu_link_X_fr_FL_calf_joint& HomogeneousTransforms::Type_imu_link_X_fr_FL_calf_joint::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    Scalar sin_q_FL_thigh_joint  = ScalarTraits::sin( q(FL_THIGH_JOINT) );
    Scalar cos_q_FL_thigh_joint  = ScalarTraits::cos( q(FL_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_FL_thigh_joint;
    (*this)(0,1) = -cos_q_FL_thigh_joint;
    (*this)(0,3) =  tx_FL_hip_joint-( tx_FL_calf_joint * sin_q_FL_thigh_joint);
    (*this)(1,0) = sin_q_FL_hip_joint * cos_q_FL_thigh_joint;
    (*this)(1,1) = -sin_q_FL_hip_joint * sin_q_FL_thigh_joint;
    (*this)(1,2) = cos_q_FL_hip_joint;
    (*this)(1,3) = ( tx_FL_calf_joint * sin_q_FL_hip_joint * cos_q_FL_thigh_joint)+( ty_FL_thigh_joint * cos_q_FL_hip_joint)+ ty_FL_hip_joint;
    (*this)(2,0) = -cos_q_FL_hip_joint * cos_q_FL_thigh_joint;
    (*this)(2,1) = cos_q_FL_hip_joint * sin_q_FL_thigh_joint;
    (*this)(2,2) = sin_q_FL_hip_joint;
    (*this)(2,3) = ( ty_FL_thigh_joint * sin_q_FL_hip_joint)-( tx_FL_calf_joint * cos_q_FL_hip_joint * cos_q_FL_thigh_joint);
    return *this;
}
HomogeneousTransforms::Type_imu_link_X_fr_FR_hip_joint::Type_imu_link_X_fr_FR_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) =  tx_FR_hip_joint;    // Maxima DSL: _k__tx_FR_hip_joint
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) =  ty_FR_hip_joint;    // Maxima DSL: _k__ty_FR_hip_joint
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_imu_link_X_fr_FR_hip_joint& HomogeneousTransforms::Type_imu_link_X_fr_FR_hip_joint::update(const state_t& q)
{
    return *this;
}
HomogeneousTransforms::Type_imu_link_X_fr_FR_thigh_joint::Type_imu_link_X_fr_FR_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,3) =  tx_FR_hip_joint;    // Maxima DSL: _k__tx_FR_hip_joint
    (*this)(1,1) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_imu_link_X_fr_FR_thigh_joint& HomogeneousTransforms::Type_imu_link_X_fr_FR_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    (*this)(1,0) = sin_q_FR_hip_joint;
    (*this)(1,2) = cos_q_FR_hip_joint;
    (*this)(1,3) = ( ty_FR_thigh_joint * cos_q_FR_hip_joint)+ ty_FR_hip_joint;
    (*this)(2,0) = -cos_q_FR_hip_joint;
    (*this)(2,2) = sin_q_FR_hip_joint;
    (*this)(2,3) =  ty_FR_thigh_joint * sin_q_FR_hip_joint;
    return *this;
}
HomogeneousTransforms::Type_imu_link_X_fr_FR_calf_joint::Type_imu_link_X_fr_FR_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_imu_link_X_fr_FR_calf_joint& HomogeneousTransforms::Type_imu_link_X_fr_FR_calf_joint::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    Scalar sin_q_FR_thigh_joint  = ScalarTraits::sin( q(FR_THIGH_JOINT) );
    Scalar cos_q_FR_thigh_joint  = ScalarTraits::cos( q(FR_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_FR_thigh_joint;
    (*this)(0,1) = -cos_q_FR_thigh_joint;
    (*this)(0,3) =  tx_FR_hip_joint-( tx_FR_calf_joint * sin_q_FR_thigh_joint);
    (*this)(1,0) = sin_q_FR_hip_joint * cos_q_FR_thigh_joint;
    (*this)(1,1) = -sin_q_FR_hip_joint * sin_q_FR_thigh_joint;
    (*this)(1,2) = cos_q_FR_hip_joint;
    (*this)(1,3) = ( tx_FR_calf_joint * sin_q_FR_hip_joint * cos_q_FR_thigh_joint)+( ty_FR_thigh_joint * cos_q_FR_hip_joint)+ ty_FR_hip_joint;
    (*this)(2,0) = -cos_q_FR_hip_joint * cos_q_FR_thigh_joint;
    (*this)(2,1) = cos_q_FR_hip_joint * sin_q_FR_thigh_joint;
    (*this)(2,2) = sin_q_FR_hip_joint;
    (*this)(2,3) = ( ty_FR_thigh_joint * sin_q_FR_hip_joint)-( tx_FR_calf_joint * cos_q_FR_hip_joint * cos_q_FR_thigh_joint);
    return *this;
}
HomogeneousTransforms::Type_imu_link_X_fr_RL_hip_joint::Type_imu_link_X_fr_RL_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) =  tx_RL_hip_joint;    // Maxima DSL: _k__tx_RL_hip_joint
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) =  ty_RL_hip_joint;    // Maxima DSL: _k__ty_RL_hip_joint
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_imu_link_X_fr_RL_hip_joint& HomogeneousTransforms::Type_imu_link_X_fr_RL_hip_joint::update(const state_t& q)
{
    return *this;
}
HomogeneousTransforms::Type_imu_link_X_fr_RL_thigh_joint::Type_imu_link_X_fr_RL_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,3) =  tx_RL_hip_joint;    // Maxima DSL: _k__tx_RL_hip_joint
    (*this)(1,1) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_imu_link_X_fr_RL_thigh_joint& HomogeneousTransforms::Type_imu_link_X_fr_RL_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    (*this)(1,0) = sin_q_RL_hip_joint;
    (*this)(1,2) = cos_q_RL_hip_joint;
    (*this)(1,3) = ( ty_RL_thigh_joint * cos_q_RL_hip_joint)+ ty_RL_hip_joint;
    (*this)(2,0) = -cos_q_RL_hip_joint;
    (*this)(2,2) = sin_q_RL_hip_joint;
    (*this)(2,3) =  ty_RL_thigh_joint * sin_q_RL_hip_joint;
    return *this;
}
HomogeneousTransforms::Type_imu_link_X_fr_RL_calf_joint::Type_imu_link_X_fr_RL_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_imu_link_X_fr_RL_calf_joint& HomogeneousTransforms::Type_imu_link_X_fr_RL_calf_joint::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    Scalar sin_q_RL_thigh_joint  = ScalarTraits::sin( q(RL_THIGH_JOINT) );
    Scalar cos_q_RL_thigh_joint  = ScalarTraits::cos( q(RL_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_RL_thigh_joint;
    (*this)(0,1) = -cos_q_RL_thigh_joint;
    (*this)(0,3) =  tx_RL_hip_joint-( tx_RL_calf_joint * sin_q_RL_thigh_joint);
    (*this)(1,0) = sin_q_RL_hip_joint * cos_q_RL_thigh_joint;
    (*this)(1,1) = -sin_q_RL_hip_joint * sin_q_RL_thigh_joint;
    (*this)(1,2) = cos_q_RL_hip_joint;
    (*this)(1,3) = ( tx_RL_calf_joint * sin_q_RL_hip_joint * cos_q_RL_thigh_joint)+( ty_RL_thigh_joint * cos_q_RL_hip_joint)+ ty_RL_hip_joint;
    (*this)(2,0) = -cos_q_RL_hip_joint * cos_q_RL_thigh_joint;
    (*this)(2,1) = cos_q_RL_hip_joint * sin_q_RL_thigh_joint;
    (*this)(2,2) = sin_q_RL_hip_joint;
    (*this)(2,3) = ( ty_RL_thigh_joint * sin_q_RL_hip_joint)-( tx_RL_calf_joint * cos_q_RL_hip_joint * cos_q_RL_thigh_joint);
    return *this;
}
HomogeneousTransforms::Type_imu_link_X_fr_RR_hip_joint::Type_imu_link_X_fr_RR_hip_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) =  tx_RR_hip_joint;    // Maxima DSL: _k__tx_RR_hip_joint
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 1.0;
    (*this)(1,2) = 0.0;
    (*this)(1,3) =  ty_RR_hip_joint;    // Maxima DSL: _k__ty_RR_hip_joint
    (*this)(2,0) = -1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_imu_link_X_fr_RR_hip_joint& HomogeneousTransforms::Type_imu_link_X_fr_RR_hip_joint::update(const state_t& q)
{
    return *this;
}
HomogeneousTransforms::Type_imu_link_X_fr_RR_thigh_joint::Type_imu_link_X_fr_RR_thigh_joint()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = -1.0;
    (*this)(0,2) = 0.0;
    (*this)(0,3) =  tx_RR_hip_joint;    // Maxima DSL: _k__tx_RR_hip_joint
    (*this)(1,1) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_imu_link_X_fr_RR_thigh_joint& HomogeneousTransforms::Type_imu_link_X_fr_RR_thigh_joint::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    (*this)(1,0) = sin_q_RR_hip_joint;
    (*this)(1,2) = cos_q_RR_hip_joint;
    (*this)(1,3) = ( ty_RR_thigh_joint * cos_q_RR_hip_joint)+ ty_RR_hip_joint;
    (*this)(2,0) = -cos_q_RR_hip_joint;
    (*this)(2,2) = sin_q_RR_hip_joint;
    (*this)(2,3) =  ty_RR_thigh_joint * sin_q_RR_hip_joint;
    return *this;
}
HomogeneousTransforms::Type_imu_link_X_fr_RR_calf_joint::Type_imu_link_X_fr_RR_calf_joint()
{
    (*this)(0,2) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_imu_link_X_fr_RR_calf_joint& HomogeneousTransforms::Type_imu_link_X_fr_RR_calf_joint::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    Scalar sin_q_RR_thigh_joint  = ScalarTraits::sin( q(RR_THIGH_JOINT) );
    Scalar cos_q_RR_thigh_joint  = ScalarTraits::cos( q(RR_THIGH_JOINT) );
    (*this)(0,0) = -sin_q_RR_thigh_joint;
    (*this)(0,1) = -cos_q_RR_thigh_joint;
    (*this)(0,3) =  tx_RR_hip_joint-( tx_RR_calf_joint * sin_q_RR_thigh_joint);
    (*this)(1,0) = sin_q_RR_hip_joint * cos_q_RR_thigh_joint;
    (*this)(1,1) = -sin_q_RR_hip_joint * sin_q_RR_thigh_joint;
    (*this)(1,2) = cos_q_RR_hip_joint;
    (*this)(1,3) = ( tx_RR_calf_joint * sin_q_RR_hip_joint * cos_q_RR_thigh_joint)+( ty_RR_thigh_joint * cos_q_RR_hip_joint)+ ty_RR_hip_joint;
    (*this)(2,0) = -cos_q_RR_hip_joint * cos_q_RR_thigh_joint;
    (*this)(2,1) = cos_q_RR_hip_joint * sin_q_RR_thigh_joint;
    (*this)(2,2) = sin_q_RR_hip_joint;
    (*this)(2,3) = ( ty_RR_thigh_joint * sin_q_RR_hip_joint)-( tx_RR_calf_joint * cos_q_RR_hip_joint * cos_q_RR_thigh_joint);
    return *this;
}
HomogeneousTransforms::Type_fr_FR_hip_X_fr_base::Type_fr_FR_hip_X_fr_base()
{
    (*this)(0,0) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(2,0) = 1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = - tx_FR_hip_joint;    // Maxima DSL: -_k__tx_FR_hip_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_FR_hip_X_fr_base& HomogeneousTransforms::Type_fr_FR_hip_X_fr_base::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    (*this)(0,1) = sin_q_FR_hip_joint;
    (*this)(0,2) = -cos_q_FR_hip_joint;
    (*this)(0,3) = - ty_FR_hip_joint * sin_q_FR_hip_joint;
    (*this)(1,1) = cos_q_FR_hip_joint;
    (*this)(1,2) = sin_q_FR_hip_joint;
    (*this)(1,3) = - ty_FR_hip_joint * cos_q_FR_hip_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_base_X_fr_FR_hip::Type_fr_base_X_fr_FR_hip()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) =  tx_FR_hip_joint;    // Maxima DSL: _k__tx_FR_hip_joint
    (*this)(1,2) = 0.0;
    (*this)(1,3) =  ty_FR_hip_joint;    // Maxima DSL: _k__ty_FR_hip_joint
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_base_X_fr_FR_hip& HomogeneousTransforms::Type_fr_base_X_fr_FR_hip::update(const state_t& q)
{
    Scalar sin_q_FR_hip_joint  = ScalarTraits::sin( q(FR_HIP_JOINT) );
    Scalar cos_q_FR_hip_joint  = ScalarTraits::cos( q(FR_HIP_JOINT) );
    (*this)(1,0) = sin_q_FR_hip_joint;
    (*this)(1,1) = cos_q_FR_hip_joint;
    (*this)(2,0) = -cos_q_FR_hip_joint;
    (*this)(2,1) = sin_q_FR_hip_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_FR_thigh_X_fr_FR_hip::Type_fr_FR_thigh_X_fr_FR_hip()
{
    (*this)(0,1) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 1.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = - ty_FR_thigh_joint;    // Maxima DSL: -_k__ty_FR_thigh_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_FR_thigh_X_fr_FR_hip& HomogeneousTransforms::Type_fr_FR_thigh_X_fr_FR_hip::update(const state_t& q)
{
    Scalar sin_q_FR_thigh_joint  = ScalarTraits::sin( q(FR_THIGH_JOINT) );
    Scalar cos_q_FR_thigh_joint  = ScalarTraits::cos( q(FR_THIGH_JOINT) );
    (*this)(0,0) = cos_q_FR_thigh_joint;
    (*this)(0,2) = -sin_q_FR_thigh_joint;
    (*this)(1,0) = -sin_q_FR_thigh_joint;
    (*this)(1,2) = -cos_q_FR_thigh_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_FR_hip_X_fr_FR_thigh::Type_fr_FR_hip_X_fr_FR_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,2) = 1.0;
    (*this)(1,3) =  ty_FR_thigh_joint;    // Maxima DSL: _k__ty_FR_thigh_joint
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_FR_hip_X_fr_FR_thigh& HomogeneousTransforms::Type_fr_FR_hip_X_fr_FR_thigh::update(const state_t& q)
{
    Scalar sin_q_FR_thigh_joint  = ScalarTraits::sin( q(FR_THIGH_JOINT) );
    Scalar cos_q_FR_thigh_joint  = ScalarTraits::cos( q(FR_THIGH_JOINT) );
    (*this)(0,0) = cos_q_FR_thigh_joint;
    (*this)(0,1) = -sin_q_FR_thigh_joint;
    (*this)(2,0) = -sin_q_FR_thigh_joint;
    (*this)(2,1) = -cos_q_FR_thigh_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_FR_calf_X_fr_FR_thigh::Type_fr_FR_calf_X_fr_FR_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_FR_calf_X_fr_FR_thigh& HomogeneousTransforms::Type_fr_FR_calf_X_fr_FR_thigh::update(const state_t& q)
{
    Scalar sin_q_FR_calf_joint  = ScalarTraits::sin( q(FR_CALF_JOINT) );
    Scalar cos_q_FR_calf_joint  = ScalarTraits::cos( q(FR_CALF_JOINT) );
    (*this)(0,0) = cos_q_FR_calf_joint;
    (*this)(0,1) = sin_q_FR_calf_joint;
    (*this)(0,3) = - tx_FR_calf_joint * cos_q_FR_calf_joint;
    (*this)(1,0) = -sin_q_FR_calf_joint;
    (*this)(1,1) = cos_q_FR_calf_joint;
    (*this)(1,3) =  tx_FR_calf_joint * sin_q_FR_calf_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_FR_thigh_X_fr_FR_calf::Type_fr_FR_thigh_X_fr_FR_calf()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) =  tx_FR_calf_joint;    // Maxima DSL: _k__tx_FR_calf_joint
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_FR_thigh_X_fr_FR_calf& HomogeneousTransforms::Type_fr_FR_thigh_X_fr_FR_calf::update(const state_t& q)
{
    Scalar sin_q_FR_calf_joint  = ScalarTraits::sin( q(FR_CALF_JOINT) );
    Scalar cos_q_FR_calf_joint  = ScalarTraits::cos( q(FR_CALF_JOINT) );
    (*this)(0,0) = cos_q_FR_calf_joint;
    (*this)(0,1) = -sin_q_FR_calf_joint;
    (*this)(1,0) = sin_q_FR_calf_joint;
    (*this)(1,1) = cos_q_FR_calf_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_FL_hip_X_fr_base::Type_fr_FL_hip_X_fr_base()
{
    (*this)(0,0) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(2,0) = 1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = - tx_FL_hip_joint;    // Maxima DSL: -_k__tx_FL_hip_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_FL_hip_X_fr_base& HomogeneousTransforms::Type_fr_FL_hip_X_fr_base::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    (*this)(0,1) = sin_q_FL_hip_joint;
    (*this)(0,2) = -cos_q_FL_hip_joint;
    (*this)(0,3) = - ty_FL_hip_joint * sin_q_FL_hip_joint;
    (*this)(1,1) = cos_q_FL_hip_joint;
    (*this)(1,2) = sin_q_FL_hip_joint;
    (*this)(1,3) = - ty_FL_hip_joint * cos_q_FL_hip_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_base_X_fr_FL_hip::Type_fr_base_X_fr_FL_hip()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) =  tx_FL_hip_joint;    // Maxima DSL: _k__tx_FL_hip_joint
    (*this)(1,2) = 0.0;
    (*this)(1,3) =  ty_FL_hip_joint;    // Maxima DSL: _k__ty_FL_hip_joint
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_base_X_fr_FL_hip& HomogeneousTransforms::Type_fr_base_X_fr_FL_hip::update(const state_t& q)
{
    Scalar sin_q_FL_hip_joint  = ScalarTraits::sin( q(FL_HIP_JOINT) );
    Scalar cos_q_FL_hip_joint  = ScalarTraits::cos( q(FL_HIP_JOINT) );
    (*this)(1,0) = sin_q_FL_hip_joint;
    (*this)(1,1) = cos_q_FL_hip_joint;
    (*this)(2,0) = -cos_q_FL_hip_joint;
    (*this)(2,1) = sin_q_FL_hip_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_FL_thigh_X_fr_FL_hip::Type_fr_FL_thigh_X_fr_FL_hip()
{
    (*this)(0,1) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 1.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = - ty_FL_thigh_joint;    // Maxima DSL: -_k__ty_FL_thigh_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_FL_thigh_X_fr_FL_hip& HomogeneousTransforms::Type_fr_FL_thigh_X_fr_FL_hip::update(const state_t& q)
{
    Scalar sin_q_FL_thigh_joint  = ScalarTraits::sin( q(FL_THIGH_JOINT) );
    Scalar cos_q_FL_thigh_joint  = ScalarTraits::cos( q(FL_THIGH_JOINT) );
    (*this)(0,0) = cos_q_FL_thigh_joint;
    (*this)(0,2) = -sin_q_FL_thigh_joint;
    (*this)(1,0) = -sin_q_FL_thigh_joint;
    (*this)(1,2) = -cos_q_FL_thigh_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_FL_hip_X_fr_FL_thigh::Type_fr_FL_hip_X_fr_FL_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,2) = 1.0;
    (*this)(1,3) =  ty_FL_thigh_joint;    // Maxima DSL: _k__ty_FL_thigh_joint
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_FL_hip_X_fr_FL_thigh& HomogeneousTransforms::Type_fr_FL_hip_X_fr_FL_thigh::update(const state_t& q)
{
    Scalar sin_q_FL_thigh_joint  = ScalarTraits::sin( q(FL_THIGH_JOINT) );
    Scalar cos_q_FL_thigh_joint  = ScalarTraits::cos( q(FL_THIGH_JOINT) );
    (*this)(0,0) = cos_q_FL_thigh_joint;
    (*this)(0,1) = -sin_q_FL_thigh_joint;
    (*this)(2,0) = -sin_q_FL_thigh_joint;
    (*this)(2,1) = -cos_q_FL_thigh_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_FL_calf_X_fr_FL_thigh::Type_fr_FL_calf_X_fr_FL_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_FL_calf_X_fr_FL_thigh& HomogeneousTransforms::Type_fr_FL_calf_X_fr_FL_thigh::update(const state_t& q)
{
    Scalar sin_q_FL_calf_joint  = ScalarTraits::sin( q(FL_CALF_JOINT) );
    Scalar cos_q_FL_calf_joint  = ScalarTraits::cos( q(FL_CALF_JOINT) );
    (*this)(0,0) = cos_q_FL_calf_joint;
    (*this)(0,1) = sin_q_FL_calf_joint;
    (*this)(0,3) = - tx_FL_calf_joint * cos_q_FL_calf_joint;
    (*this)(1,0) = -sin_q_FL_calf_joint;
    (*this)(1,1) = cos_q_FL_calf_joint;
    (*this)(1,3) =  tx_FL_calf_joint * sin_q_FL_calf_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_FL_thigh_X_fr_FL_calf::Type_fr_FL_thigh_X_fr_FL_calf()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) =  tx_FL_calf_joint;    // Maxima DSL: _k__tx_FL_calf_joint
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_FL_thigh_X_fr_FL_calf& HomogeneousTransforms::Type_fr_FL_thigh_X_fr_FL_calf::update(const state_t& q)
{
    Scalar sin_q_FL_calf_joint  = ScalarTraits::sin( q(FL_CALF_JOINT) );
    Scalar cos_q_FL_calf_joint  = ScalarTraits::cos( q(FL_CALF_JOINT) );
    (*this)(0,0) = cos_q_FL_calf_joint;
    (*this)(0,1) = -sin_q_FL_calf_joint;
    (*this)(1,0) = sin_q_FL_calf_joint;
    (*this)(1,1) = cos_q_FL_calf_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_RR_hip_X_fr_base::Type_fr_RR_hip_X_fr_base()
{
    (*this)(0,0) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(2,0) = 1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = - tx_RR_hip_joint;    // Maxima DSL: -_k__tx_RR_hip_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_RR_hip_X_fr_base& HomogeneousTransforms::Type_fr_RR_hip_X_fr_base::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    (*this)(0,1) = sin_q_RR_hip_joint;
    (*this)(0,2) = -cos_q_RR_hip_joint;
    (*this)(0,3) = - ty_RR_hip_joint * sin_q_RR_hip_joint;
    (*this)(1,1) = cos_q_RR_hip_joint;
    (*this)(1,2) = sin_q_RR_hip_joint;
    (*this)(1,3) = - ty_RR_hip_joint * cos_q_RR_hip_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_base_X_fr_RR_hip::Type_fr_base_X_fr_RR_hip()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) =  tx_RR_hip_joint;    // Maxima DSL: _k__tx_RR_hip_joint
    (*this)(1,2) = 0.0;
    (*this)(1,3) =  ty_RR_hip_joint;    // Maxima DSL: _k__ty_RR_hip_joint
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_base_X_fr_RR_hip& HomogeneousTransforms::Type_fr_base_X_fr_RR_hip::update(const state_t& q)
{
    Scalar sin_q_RR_hip_joint  = ScalarTraits::sin( q(RR_HIP_JOINT) );
    Scalar cos_q_RR_hip_joint  = ScalarTraits::cos( q(RR_HIP_JOINT) );
    (*this)(1,0) = sin_q_RR_hip_joint;
    (*this)(1,1) = cos_q_RR_hip_joint;
    (*this)(2,0) = -cos_q_RR_hip_joint;
    (*this)(2,1) = sin_q_RR_hip_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_RR_thigh_X_fr_RR_hip::Type_fr_RR_thigh_X_fr_RR_hip()
{
    (*this)(0,1) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 1.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = - ty_RR_thigh_joint;    // Maxima DSL: -_k__ty_RR_thigh_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_RR_thigh_X_fr_RR_hip& HomogeneousTransforms::Type_fr_RR_thigh_X_fr_RR_hip::update(const state_t& q)
{
    Scalar sin_q_RR_thigh_joint  = ScalarTraits::sin( q(RR_THIGH_JOINT) );
    Scalar cos_q_RR_thigh_joint  = ScalarTraits::cos( q(RR_THIGH_JOINT) );
    (*this)(0,0) = cos_q_RR_thigh_joint;
    (*this)(0,2) = -sin_q_RR_thigh_joint;
    (*this)(1,0) = -sin_q_RR_thigh_joint;
    (*this)(1,2) = -cos_q_RR_thigh_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_RR_hip_X_fr_RR_thigh::Type_fr_RR_hip_X_fr_RR_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,2) = 1.0;
    (*this)(1,3) =  ty_RR_thigh_joint;    // Maxima DSL: _k__ty_RR_thigh_joint
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_RR_hip_X_fr_RR_thigh& HomogeneousTransforms::Type_fr_RR_hip_X_fr_RR_thigh::update(const state_t& q)
{
    Scalar sin_q_RR_thigh_joint  = ScalarTraits::sin( q(RR_THIGH_JOINT) );
    Scalar cos_q_RR_thigh_joint  = ScalarTraits::cos( q(RR_THIGH_JOINT) );
    (*this)(0,0) = cos_q_RR_thigh_joint;
    (*this)(0,1) = -sin_q_RR_thigh_joint;
    (*this)(2,0) = -sin_q_RR_thigh_joint;
    (*this)(2,1) = -cos_q_RR_thigh_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_RR_calf_X_fr_RR_thigh::Type_fr_RR_calf_X_fr_RR_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_RR_calf_X_fr_RR_thigh& HomogeneousTransforms::Type_fr_RR_calf_X_fr_RR_thigh::update(const state_t& q)
{
    Scalar sin_q_RR_calf_joint  = ScalarTraits::sin( q(RR_CALF_JOINT) );
    Scalar cos_q_RR_calf_joint  = ScalarTraits::cos( q(RR_CALF_JOINT) );
    (*this)(0,0) = cos_q_RR_calf_joint;
    (*this)(0,1) = sin_q_RR_calf_joint;
    (*this)(0,3) = - tx_RR_calf_joint * cos_q_RR_calf_joint;
    (*this)(1,0) = -sin_q_RR_calf_joint;
    (*this)(1,1) = cos_q_RR_calf_joint;
    (*this)(1,3) =  tx_RR_calf_joint * sin_q_RR_calf_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_RR_thigh_X_fr_RR_calf::Type_fr_RR_thigh_X_fr_RR_calf()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) =  tx_RR_calf_joint;    // Maxima DSL: _k__tx_RR_calf_joint
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_RR_thigh_X_fr_RR_calf& HomogeneousTransforms::Type_fr_RR_thigh_X_fr_RR_calf::update(const state_t& q)
{
    Scalar sin_q_RR_calf_joint  = ScalarTraits::sin( q(RR_CALF_JOINT) );
    Scalar cos_q_RR_calf_joint  = ScalarTraits::cos( q(RR_CALF_JOINT) );
    (*this)(0,0) = cos_q_RR_calf_joint;
    (*this)(0,1) = -sin_q_RR_calf_joint;
    (*this)(1,0) = sin_q_RR_calf_joint;
    (*this)(1,1) = cos_q_RR_calf_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_RL_hip_X_fr_base::Type_fr_RL_hip_X_fr_base()
{
    (*this)(0,0) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(2,0) = 1.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = - tx_RL_hip_joint;    // Maxima DSL: -_k__tx_RL_hip_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_RL_hip_X_fr_base& HomogeneousTransforms::Type_fr_RL_hip_X_fr_base::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    (*this)(0,1) = sin_q_RL_hip_joint;
    (*this)(0,2) = -cos_q_RL_hip_joint;
    (*this)(0,3) = - ty_RL_hip_joint * sin_q_RL_hip_joint;
    (*this)(1,1) = cos_q_RL_hip_joint;
    (*this)(1,2) = sin_q_RL_hip_joint;
    (*this)(1,3) = - ty_RL_hip_joint * cos_q_RL_hip_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_base_X_fr_RL_hip::Type_fr_base_X_fr_RL_hip()
{
    (*this)(0,0) = 0.0;
    (*this)(0,1) = 0.0;
    (*this)(0,2) = 1.0;
    (*this)(0,3) =  tx_RL_hip_joint;    // Maxima DSL: _k__tx_RL_hip_joint
    (*this)(1,2) = 0.0;
    (*this)(1,3) =  ty_RL_hip_joint;    // Maxima DSL: _k__ty_RL_hip_joint
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_base_X_fr_RL_hip& HomogeneousTransforms::Type_fr_base_X_fr_RL_hip::update(const state_t& q)
{
    Scalar sin_q_RL_hip_joint  = ScalarTraits::sin( q(RL_HIP_JOINT) );
    Scalar cos_q_RL_hip_joint  = ScalarTraits::cos( q(RL_HIP_JOINT) );
    (*this)(1,0) = sin_q_RL_hip_joint;
    (*this)(1,1) = cos_q_RL_hip_joint;
    (*this)(2,0) = -cos_q_RL_hip_joint;
    (*this)(2,1) = sin_q_RL_hip_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_RL_thigh_X_fr_RL_hip::Type_fr_RL_thigh_X_fr_RL_hip()
{
    (*this)(0,1) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 1.0;
    (*this)(2,2) = 0.0;
    (*this)(2,3) = - ty_RL_thigh_joint;    // Maxima DSL: -_k__ty_RL_thigh_joint
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_RL_thigh_X_fr_RL_hip& HomogeneousTransforms::Type_fr_RL_thigh_X_fr_RL_hip::update(const state_t& q)
{
    Scalar sin_q_RL_thigh_joint  = ScalarTraits::sin( q(RL_THIGH_JOINT) );
    Scalar cos_q_RL_thigh_joint  = ScalarTraits::cos( q(RL_THIGH_JOINT) );
    (*this)(0,0) = cos_q_RL_thigh_joint;
    (*this)(0,2) = -sin_q_RL_thigh_joint;
    (*this)(1,0) = -sin_q_RL_thigh_joint;
    (*this)(1,2) = -cos_q_RL_thigh_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_RL_hip_X_fr_RL_thigh::Type_fr_RL_hip_X_fr_RL_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) = 0.0;
    (*this)(1,0) = 0.0;
    (*this)(1,1) = 0.0;
    (*this)(1,2) = 1.0;
    (*this)(1,3) =  ty_RL_thigh_joint;    // Maxima DSL: _k__ty_RL_thigh_joint
    (*this)(2,2) = 0.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_RL_hip_X_fr_RL_thigh& HomogeneousTransforms::Type_fr_RL_hip_X_fr_RL_thigh::update(const state_t& q)
{
    Scalar sin_q_RL_thigh_joint  = ScalarTraits::sin( q(RL_THIGH_JOINT) );
    Scalar cos_q_RL_thigh_joint  = ScalarTraits::cos( q(RL_THIGH_JOINT) );
    (*this)(0,0) = cos_q_RL_thigh_joint;
    (*this)(0,1) = -sin_q_RL_thigh_joint;
    (*this)(2,0) = -sin_q_RL_thigh_joint;
    (*this)(2,1) = -cos_q_RL_thigh_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_RL_calf_X_fr_RL_thigh::Type_fr_RL_calf_X_fr_RL_thigh()
{
    (*this)(0,2) = 0.0;
    (*this)(1,2) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_RL_calf_X_fr_RL_thigh& HomogeneousTransforms::Type_fr_RL_calf_X_fr_RL_thigh::update(const state_t& q)
{
    Scalar sin_q_RL_calf_joint  = ScalarTraits::sin( q(RL_CALF_JOINT) );
    Scalar cos_q_RL_calf_joint  = ScalarTraits::cos( q(RL_CALF_JOINT) );
    (*this)(0,0) = cos_q_RL_calf_joint;
    (*this)(0,1) = sin_q_RL_calf_joint;
    (*this)(0,3) = - tx_RL_calf_joint * cos_q_RL_calf_joint;
    (*this)(1,0) = -sin_q_RL_calf_joint;
    (*this)(1,1) = cos_q_RL_calf_joint;
    (*this)(1,3) =  tx_RL_calf_joint * sin_q_RL_calf_joint;
    return *this;
}
HomogeneousTransforms::Type_fr_RL_thigh_X_fr_RL_calf::Type_fr_RL_thigh_X_fr_RL_calf()
{
    (*this)(0,2) = 0.0;
    (*this)(0,3) =  tx_RL_calf_joint;    // Maxima DSL: _k__tx_RL_calf_joint
    (*this)(1,2) = 0.0;
    (*this)(1,3) = 0.0;
    (*this)(2,0) = 0.0;
    (*this)(2,1) = 0.0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.0;
    (*this)(3,0) = 0.0;
    (*this)(3,1) = 0.0;
    (*this)(3,2) = 0.0;
    (*this)(3,3) = 1.0;
}

const HomogeneousTransforms::Type_fr_RL_thigh_X_fr_RL_calf& HomogeneousTransforms::Type_fr_RL_thigh_X_fr_RL_calf::update(const state_t& q)
{
    Scalar sin_q_RL_calf_joint  = ScalarTraits::sin( q(RL_CALF_JOINT) );
    Scalar cos_q_RL_calf_joint  = ScalarTraits::cos( q(RL_CALF_JOINT) );
    (*this)(0,0) = cos_q_RL_calf_joint;
    (*this)(0,1) = -sin_q_RL_calf_joint;
    (*this)(1,0) = sin_q_RL_calf_joint;
    (*this)(1,1) = cos_q_RL_calf_joint;
    return *this;
}

