#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/dot11_disassociate_peer_request_t.start.hpp"
namespace ndis
{
    // [struct _DOT11_DISASSOCIATE_PEER_REQUEST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_disassociate_peer_request_t            
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                              
        _m00 struct ndis::object_header_t header;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 sdk::array<uint8_t, 6>       peer_mac_addr;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PeerMacAddr
        _m02 uint16_t                     us_reason;      //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .usReason
                                                        
        SDK_MAGIC_PROPERTIES( "_DOT11_DISASSOCIATE_PEER_REQUEST.$", 0xc, true, 0xa09927d51c12ef67 );              
        SDK_FIXED_SIZE( dot11_disassociate_peer_request_t, 0xc );              
    };                                                  
};
#include "magic/dot11_disassociate_peer_request_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_disassociate_peer_request_t, 0xc );
