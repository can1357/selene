#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dot11_mac_frame_statistics_t.start.hpp"
namespace ndis
{
    // [struct DOT11_MAC_FRAME_STATISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_mac_frame_statistics_t                   
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                
        _m00 uint64_t ull_transmitted_frame_count;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ullTransmittedFrameCount
        _m01 uint64_t ull_received_frame_count;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ullReceivedFrameCount
        _m02 uint64_t ull_transmitted_failure_frame_count;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ullTransmittedFailureFrameCount
        _m03 uint64_t ull_received_failure_frame_count;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ullReceivedFailureFrameCount
        _m04 uint64_t ull_wep_excluded_count;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ullWEPExcludedCount
        _m05 uint64_t ull_tkip_local_mic_failures;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ullTKIPLocalMICFailures
        _m06 uint64_t ull_tkip_replays;                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ullTKIPReplays
        _m07 uint64_t ull_tkipicv_error_count;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ullTKIPICVErrorCount
        _m08 uint64_t ull_ccmp_replays;                     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ullCCMPReplays
        _m09 uint64_t ull_ccmp_decrypt_errors;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ullCCMPDecryptErrors
        _m10 uint64_t ull_wep_undecryptable_count;          //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ullWEPUndecryptableCount
        _m11 uint64_t ull_wepicv_error_count;               //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ullWEPICVErrorCount
        _m12 uint64_t ull_decrypt_success_count;            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ullDecryptSuccessCount
        _m13 uint64_t ull_decrypt_failure_count;            //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .ullDecryptFailureCount
                                                          
        SDK_MAGIC_PROPERTIES( "DOT11_MAC_FRAME_STATISTICS.$", 0x70, true, 0xd475faa9540914a2 );                                    
        SDK_FIXED_SIZE( dot11_mac_frame_statistics_t, 0x70 );                                    
    };                                                    
};
#include "magic/dot11_mac_frame_statistics_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_mac_frame_statistics_t, 0x70 );
