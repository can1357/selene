#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dot11_peer_statistics_t.start.hpp"
namespace ndis
{
    // [struct _DOT11_PEER_STATISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_peer_statistics_t                
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint64_t ull_decrypt_success_count;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ullDecryptSuccessCount
        _m01 uint64_t ull_decrypt_failure_count;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ullDecryptFailureCount
        _m02 uint64_t ull_tx_packet_success_count;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ullTxPacketSuccessCount
        _m03 uint64_t ull_tx_packet_failure_count;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ullTxPacketFailureCount
        _m04 uint64_t ull_rx_packet_success_count;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ullRxPacketSuccessCount
        _m05 uint64_t ull_rx_packet_failure_count;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ullRxPacketFailureCount
                                                  
        SDK_MAGIC_PROPERTIES( "_DOT11_PEER_STATISTICS.$", 0x30, true, 0x2a08230fd4e66e5a );                            
        SDK_FIXED_SIZE( dot11_peer_statistics_t, 0x30 );                            
    };                                            
};
#include "magic/dot11_peer_statistics_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_peer_statistics_t, 0x30 );
