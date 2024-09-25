#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/timestamp_capability_flags_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_TIMESTAMP_CAPABILITY_FLAGS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct timestamp_capability_flags_t                          
    {                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
        //                                                       
        _m00 uint8_t ptp_v2_over_udp_i_pv4_event_msg_receive_hw;   //{ +0x0000    +0x0000    +0x0000    } | .PtpV2OverUdpIPv4EventMsgReceiveHw
        _m01 uint8_t ptp_v2_over_udp_i_pv4_all_msg_receive_hw;     //{ +0x0001    +0x0001    +0x0001    } | .PtpV2OverUdpIPv4AllMsgReceiveHw
        _m02 uint8_t ptp_v2_over_udp_i_pv4_event_msg_transmit_hw;  //{ +0x0002    +0x0002    +0x0002    } | .PtpV2OverUdpIPv4EventMsgTransmitHw
        _m03 uint8_t ptp_v2_over_udp_i_pv4_all_msg_transmit_hw;    //{ +0x0003    +0x0003    +0x0003    } | .PtpV2OverUdpIPv4AllMsgTransmitHw
        _m04 uint8_t ptp_v2_over_udp_i_pv6_event_msg_receive_hw;   //{ +0x0004    +0x0004    +0x0004    } | .PtpV2OverUdpIPv6EventMsgReceiveHw
        _m05 uint8_t ptp_v2_over_udp_i_pv6_all_msg_receive_hw;     //{ +0x0005    +0x0005    +0x0005    } | .PtpV2OverUdpIPv6AllMsgReceiveHw
        _m06 uint8_t ptp_v2_over_udp_i_pv6_event_msg_transmit_hw;  //{ +0x0006    +0x0006    +0x0006    } | .PtpV2OverUdpIPv6EventMsgTransmitHw
        _m07 uint8_t ptp_v2_over_udp_i_pv6_all_msg_transmit_hw;    //{ +0x0007    +0x0007    +0x0007    } | .PtpV2OverUdpIPv6AllMsgTransmitHw
        _m08 uint8_t all_receive_hw;                               //{ +0x0008    +0x0008    +0x0008    } | .AllReceiveHw
        _m09 uint8_t all_transmit_hw;                              //{ +0x0009    +0x0009    +0x0009    } | .AllTransmitHw
        _m10 uint8_t tagged_transmit_hw;                           //{ +0x000a    +0x000a    +0x000a    } | .TaggedTransmitHw
        _m11 uint8_t all_receive_sw;                               //{ +0x000b    +0x000b    +0x000b    } | .AllReceiveSw
        _m12 uint8_t all_transmit_sw;                              //{ +0x000c    +0x000c    +0x000c    } | .AllTransmitSw
        _m13 uint8_t tagged_transmit_sw;                           //{ +0x000d    +0x000d    +0x000d    } | .TaggedTransmitSw
                                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_TIMESTAMP_CAPABILITY_FLAGS.$", 0xe, true, 0x1ec2c9e47ae20e55 );                                            
        SDK_FIXED_SIZE( timestamp_capability_flags_t, 0xe );                                            
    };                                                           
};
#include "magic/timestamp_capability_flags_t.end.hpp"
SDK_VERIFY( struct ndis::timestamp_capability_flags_t, 0xe );
