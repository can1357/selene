#pragma once
#include <sdkgen/support_library.hpp>
#include "net_pnp_event_code_t.hpp"

#include "magic/net_pnp_event_t.start.hpp"
namespace ndis
{
    // [struct _NET_PNP_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct net_pnp_event_t                                       
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                       
        _m00 enum ndis::net_pnp_event_code_t net_event;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NetEvent
        _m01 void*                           buffer;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
        _m02 uint32_t                        buffer_length;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BufferLength
        _m03 sdk::array<uint64_t, 4>         ndis_reserved;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NdisReserved
        _m04 sdk::array<uint64_t, 4>         transport_reserved;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .TransportReserved
        _m05 sdk::array<uint64_t, 4>         tdi_reserved;         //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .TdiReserved
        _m06 sdk::array<uint64_t, 4>         tdi_client_reserved;  //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .TdiClientReserved
                                                                 
        SDK_MAGIC_PROPERTIES( "_NET_PNP_EVENT.$", 0x98, true, 0x5ee824db99673fcf );                    
        SDK_FIXED_SIZE( net_pnp_event_t, 0x98 );                    
    };                                                           
};
#include "magic/net_pnp_event_t.end.hpp"
SDK_VERIFY( struct ndis::net_pnp_event_t, 0x98 );
