#pragma once
#include <sdkgen/support_library.hpp>
#include "net_pnp_event_t.hpp"
#include "object_header_t.hpp"

#include "magic/net_pnp_event_notification_t.start.hpp"
namespace ndis
{
    // [struct _NET_PNP_EVENT_NOTIFICATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct net_pnp_event_notification_t                  
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                               
        _m00 struct ndis::object_header_t header;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     port_number;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PortNumber
        _m02 struct ndis::net_pnp_event_t net_pn_p_event;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NetPnPEvent
        _m03 uint32_t                     flags;           //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .Flags
        _m04 uint32_t                     switch_id;       //{ +0x00a4    +0x00a4    +0x00a4    +0x00a4    } | .SwitchId
        _m05 uint32_t                     v_port_id;       //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .VPortId
                                                         
        SDK_MAGIC_PROPERTIES( "_NET_PNP_EVENT_NOTIFICATION.$", 0xb0, true, 0x2505f74b911162b0 );               
        SDK_FIXED_SIZE( net_pnp_event_notification_t, 0xb0 );               
    };                                                   
};
#include "magic/net_pnp_event_notification_t.end.hpp"
SDK_VERIFY( struct ndis::net_pnp_event_notification_t, 0xb0 );
