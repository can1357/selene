#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dot11_privacy_exemption_t.start.hpp"
namespace ndis
{
    // [struct DOT11_PRIVACY_EXEMPTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_privacy_exemption_t           
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint16_t us_ether_type;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .usEtherType
        _m01 uint16_t us_exemption_action_type;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .usExemptionActionType
        _m02 uint16_t us_exemption_packet_type;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .usExemptionPacketType
                                               
        SDK_MAGIC_PROPERTIES( "DOT11_PRIVACY_EXEMPTION.$", 0x6, true, 0xe44bdc199130f74d );                         
        SDK_FIXED_SIZE( dot11_privacy_exemption_t, 0x6 );                         
    };                                         
};
#include "magic/dot11_privacy_exemption_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_privacy_exemption_t, 0x6 );
