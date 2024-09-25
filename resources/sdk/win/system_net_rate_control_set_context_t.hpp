#pragma once
#include <sdkgen/support_library.hpp>
#include "system_net_rate_control_context_header_t.hpp"

namespace nt { struct guid_t; }

#include "magic/system_net_rate_control_set_context_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_NET_RATE_CONTROL_SET_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_net_rate_control_set_context_t                             
    {                                                                        
        using system_net_rate_control_context_header_t = struct win::system_net_rate_control_context_header_t;                      
                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                   
        _m00 system_net_rate_control_context_header_t  header;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint64_t                                  max_bandwidth;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MaxBandwidth
        _m02 struct nt::guid_t*                        container_id;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ContainerId
        _m03 uint32_t                                  flags;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Flags
        _m04 uint1_t                                   set;                    //{ +0x0020@0  +0x0020@0  +0x0020@0  +0x0020@0  } | .Set
        _m05 uint1_t                                   update;                 //{ +0x0020@1  +0x0020@1  +0x0020@1  +0x0020@1  } | .Update
        _m06 uint1_t                                   clear;                  //{ +0x0020@2  +0x0020@2  +0x0020@2  +0x0020@2  } | .Clear
        _m07 uint1_t                                   dscp_tag_enabled;       //{ +0x0020@3  +0x0020@3  +0x0020@3  +0x0020@3  } | .DscpTagEnabled
        _m08 uint1_t                                   max_bandwidth_enabled;  //{ +0x0020@4  +0x0020@4  +0x0020@4  +0x0020@4  } | .MaxBandwidthEnabled
        _m09 uint8_t                                   dscp_tag;               //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .DscpTag
                                                                             
        SDK_MAGIC_PROPERTIES( "_SYSTEM_NET_RATE_CONTROL_SET_CONTEXT.$", 0x28, true, 0xa4e47070ef83c145 );                      
        SDK_FIXED_SIZE( system_net_rate_control_set_context_t, 0x28 );                      
    };                                                                       
};
#include "magic/system_net_rate_control_set_context_t.end.hpp"
SDK_VERIFY( struct win::system_net_rate_control_set_context_t, 0x28 );
