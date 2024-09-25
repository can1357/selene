#pragma once
#include <sdkgen/support_library.hpp>
#include "pktmon_packet_type_t.hpp"

#include "magic/pktmon_component_context_t.start.hpp"
namespace ndis
{
    // [struct _PKTMON_COMPONENT_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pktmon_component_context_t                     
    {                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                
        _m00 void*                           comp_handle;   //{ +0x0000    +0x0000    +0x0000    } | .CompHandle
        _m01 enum ndis::pktmon_packet_type_t packet_type;   //{ +0x0008    +0x0008    +0x0008    } | .PacketType
        _m02 int1_t                          flow_enabled;  //{ +0x000c@0  +0x000c@0  +0x000c@0  } | .FlowEnabled
        _m03 int1_t                          drop_enabled;  //{ +0x000c@1  +0x000c@1  +0x000c@1  } | .DropEnabled
                                                          
        SDK_MAGIC_PROPERTIES( "_PKTMON_COMPONENT_CONTEXT.$", 0x10, true, 0x59275e890c17864a );             
        SDK_FIXED_SIZE( pktmon_component_context_t, 0x10 );             
    };                                                    
};
#include "magic/pktmon_component_context_t.end.hpp"
SDK_VERIFY( struct ndis::pktmon_component_context_t, 0x10 );
