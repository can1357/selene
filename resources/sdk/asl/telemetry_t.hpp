#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/telemetry_t.start.hpp"
namespace asl
{
    // [class AslTelemetry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class telemetry_t                  
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint64_t telemetry_handle;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TelemetryHandle
                                       
        SDK_MAGIC_PROPERTIES( "AslTelemetry.$", 0x8, true, 0x6951d09604d05cc0 );                 
        SDK_FIXED_SIZE( telemetry_t, 0x8 );                 
    };                                 
};
#include "magic/telemetry_t.end.hpp"
SDK_VERIFY( class asl::telemetry_t, 0x8 );
