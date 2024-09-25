#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "device_pnp_event_t.hpp"

#include "magic/net_device_pnp_event_t.start.hpp"
namespace ndis
{
    // [struct _NET_DEVICE_PNP_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct net_device_pnp_event_t                                    
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                           
        _m00 struct ndis::object_header_t  header;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                      port_number;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PortNumber
        _m02 enum ndis::device_pnp_event_t device_pn_p_event;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DevicePnPEvent
        _m03 void*                         information_buffer;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InformationBuffer
        _m04 uint32_t                      information_buffer_length;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InformationBufferLength
        _m05 sdk::array<uint8_t, 16>       ndis_reserved;              //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .NdisReserved
                                                                     
        SDK_MAGIC_PROPERTIES( "_NET_DEVICE_PNP_EVENT.$", 0x30, true, 0xa2d26c451589f08f );                          
        SDK_FIXED_SIZE( net_device_pnp_event_t, 0x30 );                          
    };                                                               
};
#include "magic/net_device_pnp_event_t.end.hpp"
SDK_VERIFY( struct ndis::net_device_pnp_event_t, 0x30 );
