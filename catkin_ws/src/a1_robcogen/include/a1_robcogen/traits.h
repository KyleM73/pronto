#ifndef RCG__A1_TRAITS_H_
#define RCG__A1_TRAITS_H_

#include "declarations.h"
#include "transforms.h"
#include "inverse_dynamics.h"
#include "forward_dynamics.h"
#include "jsim.h"
#include "inertia_properties.h"

namespace pronto {
namespace a1 {
struct Traits {
    typedef typename pronto::a1::ScalarTraits ScalarTraits;

    typedef typename pronto::a1::JointState JointState;

    typedef typename pronto::a1::JointIdentifiers JointID;
    typedef typename pronto::a1::LinkIdentifiers  LinkID;

    typedef typename pronto::a1::HomogeneousTransforms HomogeneousTransforms;
    typedef typename pronto::a1::MotionTransforms MotionTransforms;
    typedef typename pronto::a1::ForceTransforms ForceTransforms;

    typedef typename pronto::a1::dyn::InertiaProperties InertiaProperties;
    typedef typename pronto::a1::dyn::ForwardDynamics FwdDynEngine;
    typedef typename pronto::a1::dyn::InverseDynamics InvDynEngine;
    typedef typename pronto::a1::dyn::JSIM JSIM;

    static const int joints_count = pronto::a1::jointsCount;
    static const int links_count  = pronto::a1::linksCount;
    static const bool floating_base = true;

    static inline const JointID* orderedJointIDs();
    static inline const LinkID*  orderedLinkIDs();
};


inline const Traits::JointID*  Traits::orderedJointIDs() {
    return pronto::a1::orderedJointIDs;
}
inline const Traits::LinkID*  Traits::orderedLinkIDs() {
    return pronto::a1::orderedLinkIDs;
}

}
}

#endif
