#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/thermal_policy_event_t.start.hpp"
namespace ppm
{
    // [struct PPM_THERMAL_POLICY_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thermal_policy_event_t
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint8_t  mode;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Mode
        _m01 uint64_t processors;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Processors
                                 
        SDK_MAGIC_PROPERTIES( "PPM_THERMAL_POLICY_EVENT.$", 0x10, true, 0xef67e8e4f1c28280 );           
        SDK_FIXED_SIZE( thermal_policy_event_t, 0x10 );           
    };                           
};
#include "magic/thermal_policy_event_t.end.hpp"
SDK_VERIFY( struct ppm::thermal_policy_event_t, 0x10 );
