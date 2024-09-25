#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/_802_11_statistics_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_STATISTICS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_statistics_t                         
    {                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                              
        _m00 uint32_t length;                             //{ +0x0000    +0x0000    +0x0000    } | .Length
        _m01 int64_t  transmitted_fragment_count;         //{ +0x0008    +0x0008    +0x0008    } | .TransmittedFragmentCount
        _m02 int64_t  multicast_transmitted_frame_count;  //{ +0x0010    +0x0010    +0x0010    } | .MulticastTransmittedFrameCount
        _m03 int64_t  failed_count;                       //{ +0x0018    +0x0018    +0x0018    } | .FailedCount
        _m04 int64_t  retry_count;                        //{ +0x0020    +0x0020    +0x0020    } | .RetryCount
        _m05 int64_t  multiple_retry_count;               //{ +0x0028    +0x0028    +0x0028    } | .MultipleRetryCount
        _m06 int64_t  rts_success_count;                  //{ +0x0030    +0x0030    +0x0030    } | .RTSSuccessCount
        _m07 int64_t  rts_failure_count;                  //{ +0x0038    +0x0038    +0x0038    } | .RTSFailureCount
        _m08 int64_t  ack_failure_count;                  //{ +0x0040    +0x0040    +0x0040    } | .ACKFailureCount
        _m09 int64_t  frame_duplicate_count;              //{ +0x0048    +0x0048    +0x0048    } | .FrameDuplicateCount
        _m10 int64_t  received_fragment_count;            //{ +0x0050    +0x0050    +0x0050    } | .ReceivedFragmentCount
        _m11 int64_t  multicast_received_frame_count;     //{ +0x0058    +0x0058    +0x0058    } | .MulticastReceivedFrameCount
        _m12 int64_t  fcs_error_count;                    //{ +0x0060    +0x0060    +0x0060    } | .FCSErrorCount
        _m13 int64_t  tkip_local_mic_failures;            //{ +0x0068    +0x0068    +0x0068    } | .TKIPLocalMICFailures
        _m14 int64_t  tkipicv_error_count;                //{ +0x0070    +0x0070    +0x0070    } | .TKIPICVErrorCount
        _m15 int64_t  tkip_counter_measures_invoked;      //{ +0x0078    +0x0078    +0x0078    } | .TKIPCounterMeasuresInvoked
        _m16 int64_t  tkip_replays;                       //{ +0x0080    +0x0080    +0x0080    } | .TKIPReplays
        _m17 int64_t  ccmp_format_errors;                 //{ +0x0088    +0x0088    +0x0088    } | .CCMPFormatErrors
        _m18 int64_t  ccmp_replays;                       //{ +0x0090    +0x0090    +0x0090    } | .CCMPReplays
        _m19 int64_t  ccmp_decrypt_errors;                //{ +0x0098    +0x0098    +0x0098    } | .CCMPDecryptErrors
        _m20 int64_t  four_way_handshake_failures;        //{ +0x00a0    +0x00a0    +0x00a0    } | .FourWayHandshakeFailures
        _m21 int64_t  wep_undecryptable_count;            //{ +0x00a8    +0x00a8    +0x00a8    } | .WEPUndecryptableCount
        _m22 int64_t  wepicv_error_count;                 //{ +0x00b0    +0x00b0    +0x00b0    } | .WEPICVErrorCount
        _m23 int64_t  decrypt_success_count;              //{ +0x00b8    +0x00b8    +0x00b8    } | .DecryptSuccessCount
        _m24 int64_t  decrypt_failure_count;              //{ +0x00c0    +0x00c0    +0x00c0    } | .DecryptFailureCount
                                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_STATISTICS.$", 0xc8, true, 0x50211074eee613f7 );                                  
        SDK_FIXED_SIZE( _802_11_statistics_t, 0xc8 );                                  
    };                                                  
};
#include "magic/_802_11_statistics_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_statistics_t, 0xc8 );
