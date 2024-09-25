#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "dot11_mac_frame_statistics_t.hpp"
#include "dot11_phy_frame_statistics_t.hpp"

#include "magic/dot11_statistics_t.start.hpp"
namespace ndis
{
    // [struct DOT11_STATISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_statistics_t                                                            
    {                                                                                    
        using phy_counters_t = sdk::array<struct ndis::dot11_phy_frame_statistics_t, 1>;                                  
                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                               
        _m00 struct ndis::object_header_t              header;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint64_t                                  ull_four_way_handshake_failures;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ullFourWayHandshakeFailures
        _m02 uint64_t                                  ull_tkip_counter_measures_invoked;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ullTKIPCounterMeasuresInvoked
        _m03 uint64_t                                  ull_reserved;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ullReserved
        _m04 struct ndis::dot11_mac_frame_statistics_t mac_ucast_counters;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MacUcastCounters
        _m05 struct ndis::dot11_mac_frame_statistics_t mac_mcast_counters;                 //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .MacMcastCounters
        _m06 phy_counters_t                            phy_counters;                       //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .PhyCounters
                                                                                         
        SDK_MAGIC_PROPERTIES( "DOT11_STATISTICS.$", 0x190, true, 0xee16fa7b4bd7eac9 );                                  
        SDK_FIXED_SIZE( dot11_statistics_t, 0x190 );                                     
    };                                                                                   
};
#include "magic/dot11_statistics_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_statistics_t, 0x190 );
