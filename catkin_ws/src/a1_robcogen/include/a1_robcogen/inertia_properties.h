#ifndef RCG_A1_INERTIA_PROPERTIES_H_
#define RCG_A1_INERTIA_PROPERTIES_H_

#include <iit/rbd/rbd.h>
#include <iit/rbd/InertiaMatrix.h>
#include <iit/rbd/utils.h>

#include "declarations.h"
#include "model_constants.h"
#include "dynamics_parameters.h"

namespace pronto {
namespace a1 {
/**
 * This namespace encloses classes and functions related to the Dynamics
 * of the robot a1.
 */
namespace dyn {

class InertiaProperties {
    public:
        InertiaProperties();
        ~InertiaProperties();
        const InertiaMatrix& getTensor_base() const;
        const InertiaMatrix& getTensor_FR_hip() const;
        const InertiaMatrix& getTensor_FR_thigh() const;
        const InertiaMatrix& getTensor_FR_calf() const;
        const InertiaMatrix& getTensor_FL_hip() const;
        const InertiaMatrix& getTensor_FL_thigh() const;
        const InertiaMatrix& getTensor_FL_calf() const;
        const InertiaMatrix& getTensor_RR_hip() const;
        const InertiaMatrix& getTensor_RR_thigh() const;
        const InertiaMatrix& getTensor_RR_calf() const;
        const InertiaMatrix& getTensor_RL_hip() const;
        const InertiaMatrix& getTensor_RL_thigh() const;
        const InertiaMatrix& getTensor_RL_calf() const;
        Scalar getMass_base() const;
        Scalar getMass_FR_hip() const;
        Scalar getMass_FR_thigh() const;
        Scalar getMass_FR_calf() const;
        Scalar getMass_FL_hip() const;
        Scalar getMass_FL_thigh() const;
        Scalar getMass_FL_calf() const;
        Scalar getMass_RR_hip() const;
        Scalar getMass_RR_thigh() const;
        Scalar getMass_RR_calf() const;
        Scalar getMass_RL_hip() const;
        Scalar getMass_RL_thigh() const;
        Scalar getMass_RL_calf() const;
        const Vector3& getCOM_base() const;
        const Vector3& getCOM_FR_hip() const;
        const Vector3& getCOM_FR_thigh() const;
        const Vector3& getCOM_FR_calf() const;
        const Vector3& getCOM_FL_hip() const;
        const Vector3& getCOM_FL_thigh() const;
        const Vector3& getCOM_FL_calf() const;
        const Vector3& getCOM_RR_hip() const;
        const Vector3& getCOM_RR_thigh() const;
        const Vector3& getCOM_RR_calf() const;
        const Vector3& getCOM_RL_hip() const;
        const Vector3& getCOM_RL_thigh() const;
        const Vector3& getCOM_RL_calf() const;
        Scalar getTotalMass() const;


        /*!
         * Fresh values for the runtime parameters of the robot a1,
         * causing the update of the inertia properties modeled by this
         * instance.
         */
        void updateParameters(const RuntimeInertiaParams&);

    private:
        RuntimeInertiaParams params;

        InertiaMatrix tensor_base;
        InertiaMatrix tensor_FR_hip;
        InertiaMatrix tensor_FR_thigh;
        InertiaMatrix tensor_FR_calf;
        InertiaMatrix tensor_FL_hip;
        InertiaMatrix tensor_FL_thigh;
        InertiaMatrix tensor_FL_calf;
        InertiaMatrix tensor_RR_hip;
        InertiaMatrix tensor_RR_thigh;
        InertiaMatrix tensor_RR_calf;
        InertiaMatrix tensor_RL_hip;
        InertiaMatrix tensor_RL_thigh;
        InertiaMatrix tensor_RL_calf;
        Vector3 com_base;
        Vector3 com_FR_hip;
        Vector3 com_FR_thigh;
        Vector3 com_FR_calf;
        Vector3 com_FL_hip;
        Vector3 com_FL_thigh;
        Vector3 com_FL_calf;
        Vector3 com_RR_hip;
        Vector3 com_RR_thigh;
        Vector3 com_RR_calf;
        Vector3 com_RL_hip;
        Vector3 com_RL_thigh;
        Vector3 com_RL_calf;
};


inline InertiaProperties::~InertiaProperties() {}

inline const InertiaMatrix& InertiaProperties::getTensor_base() const {
    return this->tensor_base;
}
inline const InertiaMatrix& InertiaProperties::getTensor_FR_hip() const {
    return this->tensor_FR_hip;
}
inline const InertiaMatrix& InertiaProperties::getTensor_FR_thigh() const {
    return this->tensor_FR_thigh;
}
inline const InertiaMatrix& InertiaProperties::getTensor_FR_calf() const {
    return this->tensor_FR_calf;
}
inline const InertiaMatrix& InertiaProperties::getTensor_FL_hip() const {
    return this->tensor_FL_hip;
}
inline const InertiaMatrix& InertiaProperties::getTensor_FL_thigh() const {
    return this->tensor_FL_thigh;
}
inline const InertiaMatrix& InertiaProperties::getTensor_FL_calf() const {
    return this->tensor_FL_calf;
}
inline const InertiaMatrix& InertiaProperties::getTensor_RR_hip() const {
    return this->tensor_RR_hip;
}
inline const InertiaMatrix& InertiaProperties::getTensor_RR_thigh() const {
    return this->tensor_RR_thigh;
}
inline const InertiaMatrix& InertiaProperties::getTensor_RR_calf() const {
    return this->tensor_RR_calf;
}
inline const InertiaMatrix& InertiaProperties::getTensor_RL_hip() const {
    return this->tensor_RL_hip;
}
inline const InertiaMatrix& InertiaProperties::getTensor_RL_thigh() const {
    return this->tensor_RL_thigh;
}
inline const InertiaMatrix& InertiaProperties::getTensor_RL_calf() const {
    return this->tensor_RL_calf;
}
inline Scalar InertiaProperties::getMass_base() const {
    return this->tensor_base.getMass();
}
inline Scalar InertiaProperties::getMass_FR_hip() const {
    return this->tensor_FR_hip.getMass();
}
inline Scalar InertiaProperties::getMass_FR_thigh() const {
    return this->tensor_FR_thigh.getMass();
}
inline Scalar InertiaProperties::getMass_FR_calf() const {
    return this->tensor_FR_calf.getMass();
}
inline Scalar InertiaProperties::getMass_FL_hip() const {
    return this->tensor_FL_hip.getMass();
}
inline Scalar InertiaProperties::getMass_FL_thigh() const {
    return this->tensor_FL_thigh.getMass();
}
inline Scalar InertiaProperties::getMass_FL_calf() const {
    return this->tensor_FL_calf.getMass();
}
inline Scalar InertiaProperties::getMass_RR_hip() const {
    return this->tensor_RR_hip.getMass();
}
inline Scalar InertiaProperties::getMass_RR_thigh() const {
    return this->tensor_RR_thigh.getMass();
}
inline Scalar InertiaProperties::getMass_RR_calf() const {
    return this->tensor_RR_calf.getMass();
}
inline Scalar InertiaProperties::getMass_RL_hip() const {
    return this->tensor_RL_hip.getMass();
}
inline Scalar InertiaProperties::getMass_RL_thigh() const {
    return this->tensor_RL_thigh.getMass();
}
inline Scalar InertiaProperties::getMass_RL_calf() const {
    return this->tensor_RL_calf.getMass();
}
inline const Vector3& InertiaProperties::getCOM_base() const {
    return this->com_base;
}
inline const Vector3& InertiaProperties::getCOM_FR_hip() const {
    return this->com_FR_hip;
}
inline const Vector3& InertiaProperties::getCOM_FR_thigh() const {
    return this->com_FR_thigh;
}
inline const Vector3& InertiaProperties::getCOM_FR_calf() const {
    return this->com_FR_calf;
}
inline const Vector3& InertiaProperties::getCOM_FL_hip() const {
    return this->com_FL_hip;
}
inline const Vector3& InertiaProperties::getCOM_FL_thigh() const {
    return this->com_FL_thigh;
}
inline const Vector3& InertiaProperties::getCOM_FL_calf() const {
    return this->com_FL_calf;
}
inline const Vector3& InertiaProperties::getCOM_RR_hip() const {
    return this->com_RR_hip;
}
inline const Vector3& InertiaProperties::getCOM_RR_thigh() const {
    return this->com_RR_thigh;
}
inline const Vector3& InertiaProperties::getCOM_RR_calf() const {
    return this->com_RR_calf;
}
inline const Vector3& InertiaProperties::getCOM_RL_hip() const {
    return this->com_RL_hip;
}
inline const Vector3& InertiaProperties::getCOM_RL_thigh() const {
    return this->com_RL_thigh;
}
inline const Vector3& InertiaProperties::getCOM_RL_calf() const {
    return this->com_RL_calf;
}

inline Scalar InertiaProperties::getTotalMass() const {
    return m_base + m_FR_hip + m_FR_thigh + m_FR_calf + m_FL_hip + m_FL_thigh + m_FL_calf + m_RR_hip + m_RR_thigh + m_RR_calf + m_RL_hip + m_RL_thigh + m_RL_calf;
}

}
}
}

#endif
