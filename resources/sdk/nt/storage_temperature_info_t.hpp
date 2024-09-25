#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_temperature_info_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_TEMPERATURE_INFO]
    // => WDK 10 (NV)
    //
    struct storage_temperature_info_t           
    {                                           
        // WDK 10                               
        //                                      
        _m00 uint16_t index;                      //{ +0x0000    } | .Index
        _m01 int16_t  temperature;                //{ +0x0002    } | .Temperature
        _m02 int16_t  over_threshold;             //{ +0x0004    } | .OverThreshold
        _m03 int16_t  under_threshold;            //{ +0x0006    } | .UnderThreshold
        _m04 uint8_t  over_threshold_changable;   //{ +0x0008    } | .OverThresholdChangable
        _m05 uint8_t  under_threshold_changable;  //{ +0x0009    } | .UnderThresholdChangable
        _m06 uint8_t  event_generated;            //{ +0x000a    } | .EventGenerated
                                                
        SDK_NONVOL_PROPERTIES( "_STORAGE_TEMPERATURE_INFO.$", 0x0, false, 0xca53df848448a107 );                          
        SDK_FIXED_SIZE( storage_temperature_info_t, 0x10 );                          
    };                                          
};
#include "magic/storage_temperature_info_t.end.hpp"
SDK_VERIFY( struct nt::storage_temperature_info_t, 0x10 );
