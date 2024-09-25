#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wan_get_stats_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WAN_GET_STATS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wan_get_stats_t                                         
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                         
        _m00 sdk::array<uint8_t, 6> local_address;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LocalAddress
        _m01 uint32_t               bytes_sent;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BytesSent
        _m02 uint32_t               bytes_rcvd;                      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .BytesRcvd
        _m03 uint32_t               frames_sent;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FramesSent
        _m04 uint32_t               frames_rcvd;                     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .FramesRcvd
        _m05 uint32_t               crc_errors;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CRCErrors
        _m06 uint32_t               timeout_errors;                  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .TimeoutErrors
        _m07 uint32_t               alignment_errors;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .AlignmentErrors
        _m08 uint32_t               serial_overrun_errors;           //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .SerialOverrunErrors
        _m09 uint32_t               framing_errors;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FramingErrors
        _m10 uint32_t               buffer_overrun_errors;           //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .BufferOverrunErrors
        _m11 uint32_t               bytes_transmitted_uncompressed;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .BytesTransmittedUncompressed
        _m12 uint32_t               bytes_received_uncompressed;     //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .BytesReceivedUncompressed
        _m13 uint32_t               bytes_transmitted_compressed;    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .BytesTransmittedCompressed
        _m14 uint32_t               bytes_received_compressed;       //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .BytesReceivedCompressed
                                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_WAN_GET_STATS.$", 0x40, true, 0x1ba83760b09b2bae );                               
        SDK_FIXED_SIZE( wan_get_stats_t, 0x40 );                               
    };                                                             
};
#include "magic/wan_get_stats_t.end.hpp"
SDK_VERIFY( struct ndis::wan_get_stats_t, 0x40 );
