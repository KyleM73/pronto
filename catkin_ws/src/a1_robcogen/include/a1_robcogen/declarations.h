#ifndef RCG_A1_DECLARATIONS_H_
#define RCG_A1_DECLARATIONS_H_

#include "rbd_types.h"

namespace pronto {
namespace a1 {

static constexpr int JointSpaceDimension = 12;
static constexpr int jointsCount = 12;
/** The total number of rigid bodies of this robot, including the base */
static constexpr int linksCount  = 13;

typedef Matrix<12, 1> Column12d;
typedef Column12d JointState;

enum JointIdentifiers {
    FR_HIP_JOINT = 0
    , FR_THIGH_JOINT
    , FR_CALF_JOINT
    , FL_HIP_JOINT
    , FL_THIGH_JOINT
    , FL_CALF_JOINT
    , RR_HIP_JOINT
    , RR_THIGH_JOINT
    , RR_CALF_JOINT
    , RL_HIP_JOINT
    , RL_THIGH_JOINT
    , RL_CALF_JOINT
};

enum LinkIdentifiers {
    BASE = 0
    , FR_HIP
    , FR_THIGH
    , FR_CALF
    , FL_HIP
    , FL_THIGH
    , FL_CALF
    , RR_HIP
    , RR_THIGH
    , RR_CALF
    , RL_HIP
    , RL_THIGH
    , RL_CALF
};

static const JointIdentifiers orderedJointIDs[jointsCount] =
    {FR_HIP_JOINT,FR_THIGH_JOINT,FR_CALF_JOINT,FL_HIP_JOINT,FL_THIGH_JOINT,FL_CALF_JOINT,RR_HIP_JOINT,RR_THIGH_JOINT,RR_CALF_JOINT,RL_HIP_JOINT,RL_THIGH_JOINT,RL_CALF_JOINT};

static const LinkIdentifiers orderedLinkIDs[linksCount] =
    {BASE,FR_HIP,FR_THIGH,FR_CALF,FL_HIP,FL_THIGH,FL_CALF,RR_HIP,RR_THIGH,RR_CALF,RL_HIP,RL_THIGH,RL_CALF};

}
}
#endif
