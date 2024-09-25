#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wan_co_get_stats_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WAN_CO_GET_STATS_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wan_co_get_stats_info_t                      
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                              
        _m000 uint32_t bytes_sent;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BytesSent
        _m001 uint32_t bytes_rcvd;                        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BytesRcvd
        _m002 uint32_t frames_sent;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FramesSent
        _m003 uint32_t frames_rcvd;                       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .FramesRcvd
        _m004 uint32_t crc_errors;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CRCErrors
        _m005 uint32_t timeout_errors;                    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .TimeoutErrors
        _m006 uint32_t alignment_errors;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AlignmentErrors
        _m007 uint32_t serial_overrun_errors;             //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .SerialOverrunErrors
        _m008 uint32_t framing_errors;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FramingErrors
        _m009 uint32_t buffer_overrun_errors;             //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .BufferOverrunErrors
        _m010 uint32_t bytes_transmitted_uncompressed;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .BytesTransmittedUncompressed
        _m011 uint32_t bytes_received_uncompressed;       //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .BytesReceivedUncompressed
        _m012 uint32_t bytes_transmitted_compressed;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .BytesTransmittedCompressed
        _m013 uint32_t bytes_received_compressed;         //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .BytesReceivedCompressed
        _m014 uint32_t tunnel_packets_recieved;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .TunnelPacketsRecieved
        _m015 uint32_t tunnel_recieve_packets_pending;    //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .TunnelRecievePacketsPending
        _m016 uint32_t tunnel_packets_indicated_up;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .TunnelPacketsIndicatedUp
        _m017 uint32_t tunnel_recieve_packets_rejected;   //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .TunnelRecievePacketsRejected
        _m018 uint32_t tunnel_packets_sent;               //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .TunnelPacketsSent
        _m019 uint32_t tunnel_packets_sent_complete;      //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .TunnelPacketsSentComplete
        _m020 uint32_t tunnel_transmit_packets_pending;   //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .TunnelTransmitPacketsPending
        _m021 uint32_t tunnel_packets_transmit_error;     //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .TunnelPacketsTransmitError
        _m022 uint32_t tunnel_packets_sent_error;         //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .TunnelPacketsSentError
        _m023 uint32_t tunnel_transmit_packets_rejected;  //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .TunnelTransmitPacketsRejected
        _m024 uint32_t tunnel_acks_sent;                  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .TunnelAcksSent
        _m025 uint32_t tunnel_acks_sent_complete;         //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .TunnelAcksSentComplete
        _m026 uint32_t tunnel_generic1;                   //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .TunnelGeneric1
        _m027 uint32_t tunnel_generic2;                   //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .TunnelGeneric2
        _m028 uint32_t tunnel_generic3;                   //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .TunnelGeneric3
                                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_WAN_CO_GET_STATS_INFO.$", 0x74, true, 0x918e586585e5bf33 );                                 
        SDK_FIXED_SIZE( wan_co_get_stats_info_t, 0x74 );                                 
    };                                                  
};
#include "magic/wan_co_get_stats_info_t.end.hpp"
SDK_VERIFY( struct ndis::wan_co_get_stats_info_t, 0x74 );
