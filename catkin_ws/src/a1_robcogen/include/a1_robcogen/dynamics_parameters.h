#ifndef _A1_RUNTIME_INERTIA_PARAMETERS_
#define _A1_RUNTIME_INERTIA_PARAMETERS_

namespace pronto {
namespace a1 {

/**
 * A container for the set of runtime inertia parameters of the robot
 * a1.
 *
 * Inertia parameters are non-constant inertia-properties, symbolically
 * defined in the robot model.
 * As the value of the parameters must be resolved at runtime, we might refer
 * to them as "runtime parameters", "runtime dynamics parameters",
 * "runtime inertia parameters", etc.
 *
 * Unfortunately, the literature commonly refers to the inertia-properties
 * as "inertia parameters". Do not confuse them. In RobCoGen, the parameters
 * are the non-constant values of the properties.
 */
struct RuntimeInertiaParams {
    RuntimeInertiaParams() {
        defaults();
    }
    void defaults() {
    }
};

}
}
#endif
