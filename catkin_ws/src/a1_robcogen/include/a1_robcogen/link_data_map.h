#ifndef RCG_A1_LINK_DATA_MAP_H_
#define RCG_A1_LINK_DATA_MAP_H_

#include "declarations.h"

namespace pronto {
namespace a1 {

/**
 * A very simple container to associate a generic data item to each link
 */
template<typename T> class LinkDataMap {
private:
    T data[linksCount];
public:
    LinkDataMap() {};
    LinkDataMap(const T& defaultValue);
    LinkDataMap(const LinkDataMap& rhs);
    LinkDataMap& operator=(const LinkDataMap& rhs);
    LinkDataMap& operator=(const T& rhs);
          T& operator[](LinkIdentifiers which);
    const T& operator[](LinkIdentifiers which) const;
private:
    void copydata(const LinkDataMap& rhs);
    void assigndata(const T& commonValue);
};

template<typename T> inline
LinkDataMap<T>::LinkDataMap(const T& value) {
    assigndata(value);
}

template<typename T> inline
LinkDataMap<T>::LinkDataMap(const LinkDataMap& rhs)
{
    copydata(rhs);
}

template<typename T> inline
LinkDataMap<T>& LinkDataMap<T>::operator=(const LinkDataMap& rhs)
{
    if(&rhs != this) {
        copydata(rhs);
    }
    return *this;
}

template<typename T> inline
LinkDataMap<T>& LinkDataMap<T>::operator=(const T& value)
{
    assigndata(value);
    return *this;
}

template<typename T> inline
T& LinkDataMap<T>::operator[](LinkIdentifiers l) {
    return data[l];
}

template<typename T> inline
const T& LinkDataMap<T>::operator[](LinkIdentifiers l) const {
    return data[l];
}

template<typename T> inline
void LinkDataMap<T>::copydata(const LinkDataMap& rhs) {
    data[BASE] = rhs[BASE];
    data[FR_HIP] = rhs[FR_HIP];
    data[FR_THIGH] = rhs[FR_THIGH];
    data[FR_CALF] = rhs[FR_CALF];
    data[FL_HIP] = rhs[FL_HIP];
    data[FL_THIGH] = rhs[FL_THIGH];
    data[FL_CALF] = rhs[FL_CALF];
    data[RR_HIP] = rhs[RR_HIP];
    data[RR_THIGH] = rhs[RR_THIGH];
    data[RR_CALF] = rhs[RR_CALF];
    data[RL_HIP] = rhs[RL_HIP];
    data[RL_THIGH] = rhs[RL_THIGH];
    data[RL_CALF] = rhs[RL_CALF];
}

template<typename T> inline
void LinkDataMap<T>::assigndata(const T& value) {
    data[BASE] = value;
    data[FR_HIP] = value;
    data[FR_THIGH] = value;
    data[FR_CALF] = value;
    data[FL_HIP] = value;
    data[FL_THIGH] = value;
    data[FL_CALF] = value;
    data[RR_HIP] = value;
    data[RR_THIGH] = value;
    data[RR_CALF] = value;
    data[RL_HIP] = value;
    data[RL_THIGH] = value;
    data[RL_CALF] = value;
}

template<typename T> inline
std::ostream& operator<<(std::ostream& out, const LinkDataMap<T>& map) {
    out
    << "   base = "
    << map[BASE]
    << "   FR_hip = "
    << map[FR_HIP]
    << "   FR_thigh = "
    << map[FR_THIGH]
    << "   FR_calf = "
    << map[FR_CALF]
    << "   FL_hip = "
    << map[FL_HIP]
    << "   FL_thigh = "
    << map[FL_THIGH]
    << "   FL_calf = "
    << map[FL_CALF]
    << "   RR_hip = "
    << map[RR_HIP]
    << "   RR_thigh = "
    << map[RR_THIGH]
    << "   RR_calf = "
    << map[RR_CALF]
    << "   RL_hip = "
    << map[RL_HIP]
    << "   RL_thigh = "
    << map[RL_THIGH]
    << "   RL_calf = "
    << map[RL_CALF]
    ;
    return out;
}

}
}
#endif
