#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/microsoft_telemetry_assert_triggered_node_t.start.hpp"
namespace win
{
    struct microsoft_telemetry_assert_triggered_node_t;

    // [struct MicrosoftTelemetryAssertTriggeredNode]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct microsoft_telemetry_assert_triggered_node_t
    {                                                 
        using next_t = struct win::microsoft_telemetry_assert_triggered_node_t*;            
                                                      
        // Windows 10 v2004, Windows 10 v20H2            
        //                        
        _m00 uint64_t hash;                             //{ +0x0000    +0x0000    } | .Hash
        _m01 uint32_t last_upload;                      //{ +0x0008    +0x0008    } | .LastUpload
        _m02 uint32_t count;                            //{ +0x000c    +0x000c    } | .Count
        _m03 uint32_t total_hits;                       //{ +0x0010    +0x0010    } | .TotalHits
        _m04 next_t   next;                             //{ +0x0018    +0x0018    } | .Next
                                                      
        SDK_MAGIC_PROPERTIES( "MicrosoftTelemetryAssertTriggeredNode.$", 0x20, true, 0x49b3fa31ed737142 );            
        SDK_FIXED_SIZE( microsoft_telemetry_assert_triggered_node_t, 0x20 );            
    };                                                
};
#include "magic/microsoft_telemetry_assert_triggered_node_t.end.hpp"
SDK_VERIFY( struct win::microsoft_telemetry_assert_triggered_node_t, 0x20 );
