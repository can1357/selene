#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct group_affinity_t; }

#include "magic/configuration_data_t.start.hpp"
namespace perf
{
    // [struct _PERF_CONFIGURATION_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct configuration_data_t                                            
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                 
        _m00 uint32_t                     version;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                     size;                              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint32_t                     flags;                             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 uint32_t                     concurrent_channels;               //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ConcurrentChannels
        _m04 uint32_t                     first_redirection_message_number;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FirstRedirectionMessageNumber
        _m05 uint32_t                     last_redirection_message_number;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .LastRedirectionMessageNumber
        _m06 uint32_t                     device_node;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DeviceNode
        _m07 struct nt::group_affinity_t* message_targets;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MessageTargets
                                                                           
        SDK_MAGIC_PROPERTIES( "_PERF_CONFIGURATION_DATA.$", 0x28, true, 0x2fc5ba397695cc14 );                                 
        SDK_FIXED_SIZE( configuration_data_t, 0x28 );                                 
    };                                                                     
};
#include "magic/configuration_data_t.end.hpp"
SDK_VERIFY( struct perf::configuration_data_t, 0x28 );
