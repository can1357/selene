#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/battery_reporting_scale_t.start.hpp"
namespace nt
{
    // [struct BATTERY_REPORTING_SCALE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct battery_reporting_scale_t
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t granularity;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Granularity
        _m01 uint32_t capacity;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Capacity
                                    
        SDK_MAGIC_PROPERTIES( "BATTERY_REPORTING_SCALE.$", 0x8, true, 0x5c42b4d2af2a41ea );            
        SDK_FIXED_SIZE( battery_reporting_scale_t, 0x8 );            
    };                              
};
#include "magic/battery_reporting_scale_t.end.hpp"
SDK_VERIFY( struct nt::battery_reporting_scale_t, 0x8 );
