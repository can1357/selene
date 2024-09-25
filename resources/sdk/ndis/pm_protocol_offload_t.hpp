#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "pm_counted_string_t.hpp"
#include "pm_protocol_offload_type_t.hpp"

#include "magic/pm_protocol_offload_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PM_PROTOCOL_OFFLOAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pm_protocol_offload_t                                                
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                      
        _m00 struct ndis::object_header_t          header;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                              flags;                         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                              priority;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Priority
        _m03 enum ndis::pm_protocol_offload_type_t protocol_offload_type;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ProtocolOffloadType
        _m04 struct ndis::pm_counted_string_t      friendly_name;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FriendlyName
        _m05 uint32_t                              protocol_offload_id;           //{ +0x0094    +0x0094    +0x0094    +0x0094    } | .ProtocolOffloadId
        _m06 uint32_t                              next_protocol_offload_offset;  //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .NextProtocolOffloadOffset
                                                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_PM_PROTOCOL_OFFLOAD.$", 0x100, true, 0xcce77016a50453d8 );                             
        SDK_DYNAMIC_SIZE( pm_protocol_offload_t );                              
    };                                                                          
};
#include "magic/pm_protocol_offload_t.end.hpp"
