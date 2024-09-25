#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/dot11_incoming_assoc_decision_t.start.hpp"
namespace ndis
{
    // [struct _DOT11_INCOMING_ASSOC_DECISION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_incoming_assoc_decision_t                             
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                             
        _m00 struct ndis::object_header_t header;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 sdk::array<uint8_t, 6>       peer_mac_addr;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PeerMacAddr
        _m02 uint8_t                      b_accept;                      //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .bAccept
        _m03 uint16_t                     us_reason_code;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .usReasonCode
        _m04 uint32_t                     u_assoc_response_i_es_offset;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .uAssocResponseIEsOffset
        _m05 uint32_t                     u_assoc_response_i_es_length;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .uAssocResponseIEsLength
                                                                       
        SDK_MAGIC_PROPERTIES( "_DOT11_INCOMING_ASSOC_DECISION.$", 0x18, true, 0x3f028ea139d53220 );                             
        SDK_FIXED_SIZE( dot11_incoming_assoc_decision_t, 0x18 );                             
    };                                                                 
};
#include "magic/dot11_incoming_assoc_decision_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_incoming_assoc_decision_t, 0x18 );
