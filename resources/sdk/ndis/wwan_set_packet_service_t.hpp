#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "../wwan/packet_service_action_t.hpp"

#include "magic/wwan_set_packet_service_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WWAN_SET_PACKET_SERVICE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wwan_set_packet_service_t                                  
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                            
        _m00 struct ndis::object_header_t       header;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 enum wwan::packet_service_action_t packet_service_action;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PacketServiceAction
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_WWAN_SET_PACKET_SERVICE.$", 0x8, true, 0x15afc88eabcf980c );                      
        SDK_FIXED_SIZE( wwan_set_packet_service_t, 0x8 );                      
    };                                                                
};
#include "magic/wwan_set_packet_service_t.end.hpp"
SDK_VERIFY( struct ndis::wwan_set_packet_service_t, 0x8 );
