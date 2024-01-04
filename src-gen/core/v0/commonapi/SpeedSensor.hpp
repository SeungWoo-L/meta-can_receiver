/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.2.14.v202310241605.
* Used org.franca.core 0.13.1.201807231814.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V0_COMMONAPI_SPEED_SENSOR_HPP_
#define V0_COMMONAPI_SPEED_SENSOR_HPP_




#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/Types.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v0 {
namespace commonapi {

class SpeedSensor {
public:
    virtual ~SpeedSensor() { }

    static inline const char* getInterface();
    static inline CommonAPI::Version getInterfaceVersion();
};

const char* SpeedSensor::getInterface() {
    return ("commonapi.SpeedSensor:v0_1");
}

CommonAPI::Version SpeedSensor::getInterfaceVersion() {
    return CommonAPI::Version(0, 1);
}


} // namespace commonapi
} // namespace v0

namespace CommonAPI {
}


// Compatibility
namespace v0_1 = v0;

#endif // V0_COMMONAPI_SPEED_SENSOR_HPP_