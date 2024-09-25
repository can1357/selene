#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "ipsec_offload_v1_t.hpp"
#include "ipsec_offload_v2_t.hpp"
#include "rfc6877_464xlat_offload_t.hpp"
#include "tcp_ip_checksum_offload_t.hpp"
#include "udp_segmentation_offload_t.hpp"
#include "tcp_large_send_offload_v1_t.hpp"
#include "tcp_large_send_offload_v2_t.hpp"
#include "tcp_recv_seg_coalesce_offload_t.hpp"
#include "encapsulated_packet_task_offload_t.hpp"
#include "encapsulated_packet_task_offload_v2_t.hpp"

#include "magic/offload_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_OFFLOAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct offload_t                                                                                
    {                                                                                               
        using encapsulated_packet_task_offload_vxlan_t = struct ndis::encapsulated_packet_task_offload_v2_t;                                       
                                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                                          
        _m00 struct ndis::object_header_t                    header;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct ndis::tcp_ip_checksum_offload_t          checksum;                                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Checksum
        _m02 struct ndis::tcp_large_send_offload_v1_t        lso_v1;                                  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .LsoV1
        _m03 struct ndis::ipsec_offload_v1_t                 i_psec_v1;                               //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .IPsecV1
        _m04 struct ndis::tcp_large_send_offload_v2_t        lso_v2;                                  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .LsoV2
        _m05 uint32_t                                        flags;                                   //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .Flags
        _m06 struct ndis::ipsec_offload_v2_t                 i_psec_v2;                               //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .IPsecV2
        _m07 struct ndis::tcp_recv_seg_coalesce_offload_t    rsc;                                     //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .Rsc
        _m08 struct ndis::encapsulated_packet_task_offload_t encapsulated_packet_task_offload_gre;    //{ +0x0094    +0x0094    +0x0094    +0x0094    } | .EncapsulatedPacketTaskOffloadGre
        _m09 encapsulated_packet_task_offload_vxlan_t        encapsulated_packet_task_offload_vxlan;  //{ +0x009c    +0x009c    +0x009c    +0x009c    } | .EncapsulatedPacketTaskOffloadVxlan
        _m10 uint8_t                                         encapsulation_types;                     //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .EncapsulationTypes
                                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                                          
        _m11 struct ndis::rfc6877_464xlat_offload_t          rfc6877_xlat;                            //{ +0x00b4    +0x00b4    +0x00b4    } | .Rfc6877Xlat
        _m12 struct ndis::udp_segmentation_offload_t         udp_segmentation;                        //{ +0x00bc    +0x00bc    +0x00bc    } | .UdpSegmentation
                                                                                                    
        SDK_MAGIC_PROPERTIES( "_NDIS_OFFLOAD.$", 0xd8, true, 0x2c0ea8b73ebd67f9 );                                       
        SDK_DYNAMIC_SIZE( offload_t );                                                              
    };                                                                                              
};
#include "magic/offload_t.end.hpp"
