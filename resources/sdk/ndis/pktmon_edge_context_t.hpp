#pragma once
#include <sdkgen/support_library.hpp>
#include "pktmon_packet_type_t.hpp"

#include "magic/pktmon_edge_context_t.start.hpp"
namespace ndis
{
    struct pktmon_component_context_t;

    // [struct _PKTMON_EDGE_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pktmon_edge_context_t                                   
    {                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                         
        _m00 void*                                    edge_handle;   //{ +0x0000    +0x0000    +0x0000    } | .EdgeHandle
        _m01 struct ndis::pktmon_component_context_t* comp_context;  //{ +0x0008    +0x0008    +0x0008    } | .CompContext
        _m02 enum ndis::pktmon_packet_type_t          packet_type;   //{ +0x0010    +0x0010    +0x0010    } | .PacketType
                                                                   
        SDK_MAGIC_PROPERTIES( "_PKTMON_EDGE_CONTEXT.$", 0x18, true, 0x816042f9b677e0c3 );             
        SDK_FIXED_SIZE( pktmon_edge_context_t, 0x18 );             
    };                                                             
};
#include "magic/pktmon_edge_context_t.end.hpp"
SDK_VERIFY( struct ndis::pktmon_edge_context_t, 0x18 );
