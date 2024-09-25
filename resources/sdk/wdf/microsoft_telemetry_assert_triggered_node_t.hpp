#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/microsoft_telemetry_assert_triggered_node_t.start.hpp"
namespace wdf
{
    // [struct _MicrosoftTelemetryAssertTriggeredNode]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct microsoft_telemetry_assert_triggered_node_t
    {                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                       
        _m00 uint64_t         hash;                     //{ +0x0000    +0x0000    +0x0000    } | .Hash
        _m01 uint64_t         last_upload;              //{ +0x0008    +0x0008    +0x0008    } | .LastUpload
        _m02 uint32_t         count;                    //{ +0x0010    +0x0010    +0x0010    } | .Count
        _m03 uint32_t         total_hits;               //{ +0x0014    +0x0014    +0x0014    } | .TotalHits
        _m04 uint32_t         successful_watsons;       //{ +0x0018    +0x0018    +0x0018    } | .SuccessfulWatsons
        _m05 nt::list_entry_t list_node;                //{ +0x0020    +0x0020    +0x0020    } | .ListNode
                                                      
        SDK_MAGIC_PROPERTIES( "_MicrosoftTelemetryAssertTriggeredNode.$", 0x30, true, 0x92278bd298c8b39d );                   
        SDK_FIXED_SIZE( microsoft_telemetry_assert_triggered_node_t, 0x30 );                   
    };                                                
};
#include "magic/microsoft_telemetry_assert_triggered_node_t.end.hpp"
SDK_VERIFY( struct wdf::microsoft_telemetry_assert_triggered_node_t, 0x30 );
