#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/encapsulated_packet_task_offload_v2_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct encapsulated_packet_task_offload_v2_t          
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                
        _m00 uint4_t  transmit_checksum_offload_supported;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .TransmitChecksumOffloadSupported
        _m01 uint4_t  receive_checksum_offload_supported;   //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .ReceiveChecksumOffloadSupported
        _m02 uint4_t  lso_v2_supported;                     //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .LsoV2Supported
        _m03 uint4_t  rss_supported;                        //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .RssSupported
        _m04 uint4_t  vmq_supported;                        //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .VmqSupported
        _m05 uint32_t max_header_size_supported;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaxHeaderSizeSupported
                                                          
        // Windows 11                                     
        //                                                
        _m06 uint4_t  uso_supported;                        //{ +0x0000@20 } | .UsoSupported
                                                          
        SDK_MAGIC_PROPERTIES( "_NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2.$", 0x14, true, 0xfac3f0667b5e53f8 );                                    
        SDK_FIXED_SIZE( encapsulated_packet_task_offload_v2_t, 0x14 );                                    
    };                                                    
};
#include "magic/encapsulated_packet_task_offload_v2_t.end.hpp"
SDK_VERIFY( struct ndis::encapsulated_packet_task_offload_v2_t, 0x14 );
