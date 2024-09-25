#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/details_recorded_state_t.start.hpp"
namespace wil
{
    // [union wil_details_RecordedState]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union details_recorded_state_t                          
    {                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                  
        _m00 uint32_t exchange;                               //{ +0x0000    +0x0000    +0x0000    } | .exchange
        _m01 uint1_t  recorded_device_usage;                  //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .recordedDeviceUsage
        _m02 uint1_t  recorded_device_potential;              //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .recordedDevicePotential
        _m03 uint1_t  recorded_device_opportunity;            //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .recordedDeviceOpportunity
        _m04 uint1_t  recorded_device_potential_opportunity;  //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .recordedDevicePotentialOpportunity
        _m05 uint1_t  recorded_variant_device_usage;          //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .recordedVariantDeviceUsage
        _m06 uint6_t  recorded_variant;                       //{ +0x0000@5  +0x0000@5  +0x0000@5  } | .recordedVariant
                                                            
        SDK_MAGIC_PROPERTIES( "wil_details_RecordedState.$", 0x4, true, 0x4997dd5e47927adc );                                      
        SDK_FIXED_SIZE( details_recorded_state_t, 0x4 );                                      
    };                                                      
};
#include "magic/details_recorded_state_t.end.hpp"
SDK_VERIFY( union wil::details_recorded_state_t, 0x4 );
