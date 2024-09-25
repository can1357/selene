#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ipsec_offload_v2_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_IPSEC_OFFLOAD_V2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ipsec_offload_v2_t                            
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                               
        _m00 uint32_t encapsulation;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Encapsulation
        _m01 uint8_t  i_pv6_supported;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .IPv6Supported
        _m02 uint8_t  i_pv4_options;                       //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .IPv4Options
        _m03 uint8_t  i_pv6_non_i_psec_extension_headers;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .IPv6NonIPsecExtensionHeaders
        _m04 uint8_t  ah;                                  //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .Ah
        _m05 uint8_t  esp;                                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Esp
        _m06 uint8_t  ah_esp_combined;                     //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .AhEspCombined
        _m07 uint8_t  transport;                           //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .Transport
        _m08 uint8_t  tunnel;                              //{ +0x000b    +0x000b    +0x000b    +0x000b    } | .Tunnel
        _m09 uint8_t  transport_tunnel_combined;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TransportTunnelCombined
        _m10 uint8_t  lso_supported;                       //{ +0x000d    +0x000d    +0x000d    +0x000d    } | .LsoSupported
        _m11 uint8_t  extended_sequence_numbers;           //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .ExtendedSequenceNumbers
        _m12 uint32_t udp_esp;                             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .UdpEsp
        _m13 uint32_t authentication_algorithms;           //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .AuthenticationAlgorithms
        _m14 uint32_t encryption_algorithms;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EncryptionAlgorithms
        _m15 uint32_t sa_offload_capacity;                 //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .SaOffloadCapacity
                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_IPSEC_OFFLOAD_V2.$", 0x20, true, 0xaa907b4bb04f3791 );                                   
        SDK_FIXED_SIZE( ipsec_offload_v2_t, 0x20 );                                   
    };                                                   
};
#include "magic/ipsec_offload_v2_t.end.hpp"
SDK_VERIFY( struct ndis::ipsec_offload_v2_t, 0x20 );
