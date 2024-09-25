#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/qos_capabilities_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_QOS_CAPABILITIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct qos_capabilities_t                                                 
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                    
        _m00 struct ndis::object_header_t header;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     max_num_traffic_classes;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MaxNumTrafficClasses
        _m03 uint32_t                     max_num_ets_capable_traffic_classes;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MaxNumEtsCapableTrafficClasses
        _m04 uint32_t                     max_num_pfc_enabled_traffic_classes;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MaxNumPfcEnabledTrafficClasses
                                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_QOS_CAPABILITIES.$", 0x14, true, 0x8da15d12c48ef2d4 );                                    
        SDK_FIXED_SIZE( qos_capabilities_t, 0x14 );                                    
    };                                                                        
};
#include "magic/qos_capabilities_t.end.hpp"
SDK_VERIFY( struct ndis::qos_capabilities_t, 0x14 );
