#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/power_management_t.start.hpp"
namespace video
{
    // [struct _VIDEO_POWER_MANAGEMENT]
    // => WDK 10 (NV)
    //
    struct power_management_t      
    {                              
        // WDK 10                  
        //                         
        _m00 uint32_t length;        //{ +0x0000    } | .Length
        _m01 uint32_t dpms_version;  //{ +0x0004    } | .DPMSVersion
        _m02 uint32_t power_state;   //{ +0x0008    } | .PowerState
                                   
        SDK_NONVOL_PROPERTIES( "_VIDEO_POWER_MANAGEMENT.$", 0x0, false, 0x47059632b49ae6e3 );             
        SDK_FIXED_SIZE( power_management_t, 0xc );             
    };                             
};
#include "magic/power_management_t.end.hpp"
SDK_VERIFY( struct video::power_management_t, 0xc );
