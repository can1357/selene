#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _PKTMON_PACKET_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pktmon_packet_type_t : int32_t
    {                                        
        unknown =    0x0,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ethernet =   0x1,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wi_fi =      0x2,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ip =         0x3,                      // Windows 11
        mbb =        0x3,                      // Windows 10 v2004, Windows 10 v20H2
        http =       0x4,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        tcp =        0x5,                      // Windows 11
        udp =        0x6,                      // Windows 11
        arp =        0x7,                      // Windows 11
        icmp =       0x8,                      // Windows 11
        esp =        0x9,                      // Windows 11
        ah =         0xa,                      // Windows 11
        l4_payload = 0xb,                      // Windows 11
    };                                       
};
