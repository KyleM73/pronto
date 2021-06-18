#ifndef RCG_A1_JOINT_DATA_MAP_H_
#define RCG_A1_JOINT_DATA_MAP_H_

#include "declarations.h"

namespace pronto {
namespace a1 {

/**
 * A very simple container to associate a generic data item to each joint
 */
template<typename T> class JointDataMap {
private:
    T data[jointsCount];
public:
    JointDataMap() {};
    JointDataMap(const T& defaultValue);
    JointDataMap(const JointDataMap& rhs);
    JointDataMap& operator=(const JointDataMap& rhs);
    JointDataMap& operator=(const T& rhs);
          T& operator[](JointIdentifiers which);
    const T& operator[](JointIdentifiers which) const;
private:
    void copydata(const JointDataMap& rhs);
    void assigndata(const T& rhs);
};

template<typename T> inline
JointDataMap<T>::JointDataMap(const T& value) {
    assigndata(value);
}

template<typename T> inline
JointDataMap<T>::JointDataMap(const JointDataMap& rhs)
{
    copydata(rhs);
}

template<typename T> inline
JointDataMap<T>& JointDataMap<T>::operator=(const JointDataMap& rhs)
{
    if(&rhs != this) {
        copydata(rhs);
    }
    return *this;
}

template<typename T> inline
JointDataMap<T>& JointDataMap<T>::operator=(const T& value)
{
    assigndata(value);
    return *this;
}

template<typename T> inline
T& JointDataMap<T>::operator[](JointIdentifiers j) {
    return data[j];
}

template<typename T> inline
const T& JointDataMap<T>::operator[](JointIdentifiers j) const {
    return data[j];
}

template<typename T> inline
void JointDataMap<T>::copydata(const JointDataMap& rhs) {
    data[FR_HIP_JOINT] = rhs[FR_HIP_JOINT];
    data[FR_THIGH_JOINT] = rhs[FR_THIGH_JOINT];
    data[FR_CALF_JOINT] = rhs[FR_CALF_JOINT];
    data[FL_HIP_JOINT] = rhs[FL_HIP_JOINT];
    data[FL_THIGH_JOINT] = rhs[FL_THIGH_JOINT];
    data[FL_CALF_JOINT] = rhs[FL_CALF_JOINT];
    data[RR_HIP_JOINT] = rhs[RR_HIP_JOINT];
    data[RR_THIGH_JOINT] = rhs[RR_THIGH_JOINT];
    data[RR_CALF_JOINT] = rhs[RR_CALF_JOINT];
    data[RL_HIP_JOINT] = rhs[RL_HIP_JOINT];
    data[RL_THIGH_JOINT] = rhs[RL_THIGH_JOINT];
    data[RL_CALF_JOINT] = rhs[RL_CALF_JOINT];
}

template<typename T> inline
void JointDataMap<T>::assigndata(const T& value) {
    data[FR_HIP_JOINT] = value;
    data[FR_THIGH_JOINT] = value;
    data[FR_CALF_JOINT] = value;
    data[FL_HIP_JOINT] = value;
    data[FL_THIGH_JOINT] = value;
    data[FL_CALF_JOINT] = value;
    data[RR_HIP_JOINT] = value;
    data[RR_THIGH_JOINT] = value;
    data[RR_CALF_JOINT] = value;
    data[RL_HIP_JOINT] = value;
    data[RL_THIGH_JOINT] = value;
    data[RL_CALF_JOINT] = value;
}

template<typename T> inline
std::ostream& operator<<(std::ostream& out, const JointDataMap<T>& map) {
    out
    << "   FR_hip_joint = "
    << map[FR_HIP_JOINT]
    << "   FR_thigh_joint = "
    << map[FR_THIGH_JOINT]
    << "   FR_calf_joint = "
    << map[FR_CALF_JOINT]
    << "   FL_hip_joint = "
    << map[FL_HIP_JOINT]
    << "   FL_thigh_joint = "
    << map[FL_THIGH_JOINT]
    << "   FL_calf_joint = "
    << map[FL_CALF_JOINT]
    << "   RR_hip_joint = "
    << map[RR_HIP_JOINT]
    << "   RR_thigh_joint = "
    << map[RR_THIGH_JOINT]
    << "   RR_calf_joint = "
    << map[RR_CALF_JOINT]
    << "   RL_hip_joint = "
    << map[RL_HIP_JOINT]
    << "   RL_thigh_joint = "
    << map[RL_THIGH_JOINT]
    << "   RL_calf_joint = "
    << map[RL_CALF_JOINT]
    ;
    return out;
}

}
}
#endif
