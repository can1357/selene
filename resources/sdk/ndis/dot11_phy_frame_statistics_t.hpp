#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dot11_phy_frame_statistics_t.start.hpp"
namespace ndis
{
    // [struct DOT11_PHY_FRAME_STATISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_phy_frame_statistics_t                       
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                    
        _m00 uint64_t ull_transmitted_frame_count;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ullTransmittedFrameCount
        _m01 uint64_t ull_multicast_transmitted_frame_count;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ullMulticastTransmittedFrameCount
        _m02 uint64_t ull_failed_count;                         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ullFailedCount
        _m03 uint64_t ull_retry_count;                          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ullRetryCount
        _m04 uint64_t ull_multiple_retry_count;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ullMultipleRetryCount
        _m05 uint64_t ull_max_tx_lifetime_exceeded_count;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ullMaxTXLifetimeExceededCount
        _m06 uint64_t ull_transmitted_fragment_count;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ullTransmittedFragmentCount
        _m07 uint64_t ull_rts_success_count;                    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ullRTSSuccessCount
        _m08 uint64_t ull_rts_failure_count;                    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ullRTSFailureCount
        _m09 uint64_t ull_ack_failure_count;                    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ullACKFailureCount
        _m10 uint64_t ull_received_frame_count;                 //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ullReceivedFrameCount
        _m11 uint64_t ull_multicast_received_frame_count;       //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ullMulticastReceivedFrameCount
        _m12 uint64_t ull_promiscuous_received_frame_count;     //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ullPromiscuousReceivedFrameCount
        _m13 uint64_t ull_max_rx_lifetime_exceeded_count;       //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .ullMaxRXLifetimeExceededCount
        _m14 uint64_t ull_frame_duplicate_count;                //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .ullFrameDuplicateCount
        _m15 uint64_t ull_received_fragment_count;              //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .ullReceivedFragmentCount
        _m16 uint64_t ull_promiscuous_received_fragment_count;  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .ullPromiscuousReceivedFragmentCount
        _m17 uint64_t ull_fcs_error_count;                      //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .ullFCSErrorCount
                                                              
        SDK_MAGIC_PROPERTIES( "DOT11_PHY_FRAME_STATISTICS.$", 0x90, true, 0xd186e6a89587979f );                                        
        SDK_FIXED_SIZE( dot11_phy_frame_statistics_t, 0x90 );                                        
    };                                                        
};
#include "magic/dot11_phy_frame_statistics_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_phy_frame_statistics_t, 0x90 );
