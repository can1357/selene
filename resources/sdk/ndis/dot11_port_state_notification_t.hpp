#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/dot11_port_state_notification_t.start.hpp"
namespace ndis
{
    // [struct DOT11_PORT_STATE_NOTIFICATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_port_state_notification_t         
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                         
        _m00 struct ndis::object_header_t header;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 sdk::array<uint8_t, 6>       peer_mac;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PeerMac
        _m02 uint8_t                      b_open;    //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .bOpen
                                                   
        SDK_MAGIC_PROPERTIES( "DOT11_PORT_STATE_NOTIFICATION.$", 0xc, true, 0x93d707d2e765c8a2 );         
        SDK_FIXED_SIZE( dot11_port_state_notification_t, 0xc );         
    };                                             
};
#include "magic/dot11_port_state_notification_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_port_state_notification_t, 0xc );
