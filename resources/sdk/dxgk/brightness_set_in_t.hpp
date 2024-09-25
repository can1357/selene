#pragma once
#include <sdkgen/support_library.hpp>
#include "brightness_sensor_data_t.hpp"

#include "magic/brightness_set_in_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_BRIGHTNESS_SET_IN]
    // => WDK 10 (NV)
    //
    struct brightness_set_in_t                                          
    {                                                                   
        // WDK 10                                                       
        //                                                              
        _m00 uint32_t                              brightness_millinits;  //{ +0x0000    } | .BrightnessMillinits
        _m01 uint32_t                              transition_time_ms;    //{ +0x0004    } | .TransitionTimeMs
        _m02 struct dxgk::brightness_sensor_data_t sensor_readings;       //{ +0x0008    } | .SensorReadings
                                                                        
        SDK_NONVOL_PROPERTIES( "_DXGK_BRIGHTNESS_SET_IN.$", 0x0, false, 0x9fe052d33beaaf66 );                     
        SDK_FIXED_SIZE( brightness_set_in_t, 0x20 );                     
    };                                                                  
};
#include "magic/brightness_set_in_t.end.hpp"
SDK_VERIFY( struct dxgk::brightness_set_in_t, 0x20 );
