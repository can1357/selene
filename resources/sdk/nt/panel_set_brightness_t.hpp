#pragma once
#include <sdkgen/support_library.hpp>
#include "brightness_interface_version_t.hpp"
#include "panel_brightness_sensor_data_t.hpp"

#include "magic/panel_set_brightness_t.start.hpp"
namespace nt
{
    // [struct _PANEL_SET_BRIGHTNESS]
    // => WDK 10 (NV)
    //
    struct panel_set_brightness_t                                            
    {                                                                        
        // WDK 10                                                            
        //                                                                   
        _m00 enum nt::brightness_interface_version_t   version;                //{ +0x0000    } | .Version
        _m01 uint8_t                                   level;                  //{ +0x0004    } | .Level
        _m02 uint32_t                                  millinits;              //{ +0x0004    } | .Millinits
        _m03 uint32_t                                  transition_time_in_ms;  //{ +0x0008    } | .TransitionTimeInMs
        _m04 struct nt::panel_brightness_sensor_data_t sensor_data;            //{ +0x000c    } | .SensorData
                                                                             
        SDK_NONVOL_PROPERTIES( "_PANEL_SET_BRIGHTNESS.$", 0x0, false, 0x8defb67f0884bce0 );                      
        SDK_FIXED_SIZE( panel_set_brightness_t, 0x20 );                      
    };                                                                       
};
#include "magic/panel_set_brightness_t.end.hpp"
SDK_VERIFY( struct nt::panel_set_brightness_t, 0x20 );
