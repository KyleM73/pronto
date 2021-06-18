#ifndef RCG_A1_MODEL_CONSTANTS_H_
#define RCG_A1_MODEL_CONSTANTS_H_

#include "rbd_types.h"

/**
 * \file
 * This file contains the definitions of all the non-zero numerical
 * constants of the robot model (i.e. the numbers appearing in the
 * .kindsl file).
 *
 * Varying these values (and recompiling) is a quick & dirty
 * way to vary the kinematics/dynamics model. For a much more
 * flexible way of exploring variations of the model, consider
 * using the parametrization feature of RobCoGen (see the wiki).
 *
 * Beware of inconsistencies when changing any of the inertia
 * properties.
 */

namespace pronto {
namespace a1 {

// Do not use 'constexpr' to allow for non-literal scalar types

const Scalar tx_FR_hip_joint = 0.18050000071525574;
const Scalar ty_FR_hip_joint = -0.04699999839067459;
const Scalar ty_FR_thigh_joint = -0.08380000293254852;
const Scalar tx_FR_calf_joint = 0.20000000298023224;
const Scalar tx_FL_hip_joint = 0.18050000071525574;
const Scalar ty_FL_hip_joint = 0.04699999839067459;
const Scalar ty_FL_thigh_joint = 0.08380000293254852;
const Scalar tx_FL_calf_joint = 0.20000000298023224;
const Scalar tx_RR_hip_joint = -0.18050000071525574;
const Scalar ty_RR_hip_joint = -0.04699999839067459;
const Scalar ty_RR_thigh_joint = -0.08380000293254852;
const Scalar tx_RR_calf_joint = 0.20000000298023224;
const Scalar tx_RL_hip_joint = -0.18050000071525574;
const Scalar ty_RL_hip_joint = 0.04699999839067459;
const Scalar ty_RL_thigh_joint = 0.08380000293254852;
const Scalar tx_RL_calf_joint = 0.20000000298023224;
const Scalar ty_FR_thigh_shoulder = -0.08100000023841858;
const Scalar tx_FR_foot = 0.20000000298023224;
const Scalar ty_FL_thigh_shoulder = 0.08100000023841858;
const Scalar tx_FL_foot = 0.20000000298023224;
const Scalar ty_RR_thigh_shoulder = -0.08100000023841858;
const Scalar tx_RR_foot = 0.20000000298023224;
const Scalar ty_RL_thigh_shoulder = 0.08100000023841858;
const Scalar tx_RL_foot = 0.20000000298023224;
const Scalar m_base = 4.714000225067139;
const Scalar comx_base = 0.012728000059723854;
const Scalar comy_base = 0.0021860001143068075;
const Scalar comz_base = 5.150000215508044E-4;
const Scalar ix_base = 0.016963999718427658;
const Scalar ixy_base = 4.70000013592653E-5;
const Scalar ixz_base = -5.670000100508332E-4;
const Scalar iy_base = 0.057443998754024506;
const Scalar iyz_base = -1.9999999494757503E-5;
const Scalar iz_base = 0.06560000032186508;
const Scalar m_FR_hip = 0.6959999799728394;
const Scalar comx_FR_hip = -3.099999958067201E-5;
const Scalar comy_FR_hip = -6.350000039674342E-4;
const Scalar comz_FR_hip = -0.0033110000658780336;
const Scalar ix_FR_hip = 5.610000225715339E-4;
const Scalar ixz_FR_hip = 9.000000318337698E-6;
const Scalar iy_FR_hip = 8.149999775923789E-4;
const Scalar iyz_FR_hip = -7.999999979801942E-6;
const Scalar iz_FR_hip = 4.6999999904073775E-4;
const Scalar m_FR_thigh = 1.0130000114440918;
const Scalar comx_FR_thigh = 0.027326000854372978;
const Scalar comy_FR_thigh = 0.0032369999680668116;
const Scalar comz_FR_thigh = 0.02232700027525425;
const Scalar ix_FR_thigh = 0.001883000019006431;
const Scalar ixy_FR_thigh = 9.40000027185306E-5;
const Scalar ixz_FR_thigh = 5.959999980404973E-4;
const Scalar iy_FR_thigh = 0.0067900000140070915;
const Scalar iyz_FR_thigh = 6.800000119255856E-5;
const Scalar iz_FR_thigh = 0.005905999802052975;
const Scalar m_FR_calf = 0.22599999606609344;
const Scalar comx_FR_calf = 0.131974995136261;
const Scalar comy_FR_calf = -0.004726999904960394;
const Scalar ix_FR_calf = 4.8999998398358E-5;
const Scalar ixy_FR_calf = -1.1500000255182385E-4;
const Scalar iy_FR_calf = 0.007321999873965979;
const Scalar iz_FR_calf = 0.0073449998162686825;
const Scalar m_FL_hip = 0.6959999799728394;
const Scalar comx_FL_hip = -3.099999958067201E-5;
const Scalar comy_FL_hip = 6.350000039674342E-4;
const Scalar comz_FL_hip = -0.0033110000658780336;
const Scalar ix_FL_hip = 5.610000225715339E-4;
const Scalar ixz_FL_hip = -9.000000318337698E-6;
const Scalar iy_FL_hip = 8.149999775923789E-4;
const Scalar iyz_FL_hip = 7.999999979801942E-6;
const Scalar iz_FL_hip = 4.6999999904073775E-4;
const Scalar m_FL_thigh = 1.0130000114440918;
const Scalar comx_FL_thigh = 0.027326000854372978;
const Scalar comy_FL_thigh = 0.0032369999680668116;
const Scalar comz_FL_thigh = -0.02232700027525425;
const Scalar ix_FL_thigh = 0.001883000019006431;
const Scalar ixy_FL_thigh = 8.499999967170879E-5;
const Scalar ixz_FL_thigh = -5.959999980404973E-4;
const Scalar iy_FL_thigh = 0.0067900000140070915;
const Scalar iyz_FL_thigh = -6.800000119255856E-5;
const Scalar iz_FL_thigh = 0.005905999802052975;
const Scalar m_FL_calf = 0.22599999606609344;
const Scalar comx_FL_calf = 0.131974995136261;
const Scalar comy_FL_calf = -0.004726999904960394;
const Scalar ix_FL_calf = 4.8999998398358E-5;
const Scalar ixy_FL_calf = -1.1500000255182385E-4;
const Scalar iy_FL_calf = 0.007321999873965979;
const Scalar iz_FL_calf = 0.0073449998162686825;
const Scalar m_RR_hip = 0.6959999799728394;
const Scalar comx_RR_hip = -3.099999958067201E-5;
const Scalar comy_RR_hip = -6.350000039674342E-4;
const Scalar comz_RR_hip = 0.0033110000658780336;
const Scalar ix_RR_hip = 5.610000225715339E-4;
const Scalar ixz_RR_hip = -9.000000318337698E-6;
const Scalar iy_RR_hip = 8.149999775923789E-4;
const Scalar iyz_RR_hip = 7.999999979801942E-6;
const Scalar iz_RR_hip = 4.6999999904073775E-4;
const Scalar m_RR_thigh = 1.0130000114440918;
const Scalar comx_RR_thigh = 0.027326000854372978;
const Scalar comy_RR_thigh = 0.0032369999680668116;
const Scalar comz_RR_thigh = 0.02232700027525425;
const Scalar ix_RR_thigh = 0.001883000019006431;
const Scalar ixy_RR_thigh = 9.40000027185306E-5;
const Scalar ixz_RR_thigh = 5.959999980404973E-4;
const Scalar iy_RR_thigh = 0.0067900000140070915;
const Scalar iyz_RR_thigh = 6.800000119255856E-5;
const Scalar iz_RR_thigh = 0.005905999802052975;
const Scalar m_RR_calf = 0.22599999606609344;
const Scalar comx_RR_calf = 0.131974995136261;
const Scalar comy_RR_calf = -0.004726999904960394;
const Scalar ix_RR_calf = 4.8999998398358E-5;
const Scalar ixy_RR_calf = -1.1500000255182385E-4;
const Scalar iy_RR_calf = 0.007321999873965979;
const Scalar iz_RR_calf = 0.0073449998162686825;
const Scalar m_RL_hip = 0.6959999799728394;
const Scalar comx_RL_hip = -3.099999958067201E-5;
const Scalar comy_RL_hip = 6.350000039674342E-4;
const Scalar comz_RL_hip = 0.0033110000658780336;
const Scalar ix_RL_hip = 5.610000225715339E-4;
const Scalar ixz_RL_hip = 9.000000318337698E-6;
const Scalar iy_RL_hip = 8.149999775923789E-4;
const Scalar iyz_RL_hip = -7.999999979801942E-6;
const Scalar iz_RL_hip = 4.6999999904073775E-4;
const Scalar m_RL_thigh = 1.0130000114440918;
const Scalar comx_RL_thigh = 0.027326000854372978;
const Scalar comy_RL_thigh = 0.0032369999680668116;
const Scalar comz_RL_thigh = -0.02232700027525425;
const Scalar ix_RL_thigh = 0.001883000019006431;
const Scalar ixy_RL_thigh = 8.499999967170879E-5;
const Scalar ixz_RL_thigh = -5.959999980404973E-4;
const Scalar iy_RL_thigh = 0.0067900000140070915;
const Scalar iyz_RL_thigh = -6.800000119255856E-5;
const Scalar iz_RL_thigh = 0.005905999802052975;
const Scalar m_RL_calf = 0.22599999606609344;
const Scalar comx_RL_calf = 0.131974995136261;
const Scalar comy_RL_calf = -0.004726999904960394;
const Scalar ix_RL_calf = 4.8999998398358E-5;
const Scalar ixy_RL_calf = -1.1500000255182385E-4;
const Scalar iy_RL_calf = 0.007321999873965979;
const Scalar iz_RL_calf = 0.0073449998162686825;

}
}
#endif
