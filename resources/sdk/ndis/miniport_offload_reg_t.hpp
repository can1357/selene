#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/miniport_offload_reg_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_MINIPORT_OFFLOAD_REG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_offload_reg_t                                      
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
        //                                                             
        _m000 uint1_t  i_pv4x_sum_tx_disabled;                           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .IPv4XSumTxDisabled
        _m001 uint1_t  i_pv4x_sum_rx_disabled;                           //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .IPv4XSumRxDisabled
        _m002 uint1_t  tc_pv4x_sum_tx_disabled;                          //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .TCPv4XSumTxDisabled
        _m003 uint1_t  tc_pv4x_sum_rx_disabled;                          //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .TCPv4XSumRxDisabled
        _m004 uint1_t  ud_pv4x_sum_tx_disabled;                          //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .UDPv4XSumTxDisabled
        _m005 uint1_t  ud_pv4x_sum_rx_disabled;                          //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .UDPv4XSumRxDisabled
        _m006 uint1_t  tc_pv6x_sum_tx_disabled;                          //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .TCPv6XSumTxDisabled
        _m007 uint1_t  tc_pv6x_sum_rx_disabled;                          //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .TCPv6XSumRxDisabled
        _m008 uint1_t  ud_pv6x_sum_tx_disabled;                          //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .UDPv6XSumTxDisabled
        _m009 uint1_t  ud_pv6x_sum_rx_disabled;                          //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .UDPv6XSumRxDisabled
        _m010 uint1_t  lso_v1i_pv4_disabled;                             //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .LsoV1IPv4Disabled
        _m011 uint1_t  lso_v2i_pv4_disabled;                             //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .LsoV2IPv4Disabled
        _m012 uint1_t  lso_v2i_pv6_disabled;                             //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .LsoV2IPv6Disabled
        _m013 uint1_t  i_psec_ah_disabled;                               //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .IPsecAHDisabled
        _m014 uint1_t  i_psec_esp_disabled;                              //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .IPsecESPDisabled
        _m015 uint1_t  tc_pv4_connection_offload_disabled;               //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .TCPv4ConnectionOffloadDisabled
        _m016 uint1_t  tc_pv6_connection_offload_disabled;               //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .TCPv6ConnectionOffloadDisabled
        _m017 uint1_t  read_registry;                                    //{ +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 } | .ReadRegistry
        _m018 uint1_t  i_psec_v2ah_disabled;                             //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .IPsecV2AHDisabled
        _m019 uint1_t  i_psec_v2esp_disabled;                            //{ +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 } | .IPsecV2ESPDisabled
        _m020 uint1_t  i_psec_v2i_pv4ah_disabled;                        //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .IPsecV2IPv4AHDisabled
        _m021 uint1_t  i_psec_v2i_pv4esp_disabled;                       //{ +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 } | .IPsecV2IPv4ESPDisabled
        _m022 uint1_t  ip_sec_v2i_pv6_disabled;                          //{ +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 } | .IPSecV2IPv6Disabled
        _m023 uint1_t  rsc_i_pv4_disabled;                               //{ +0x0000@23 +0x0000@23 +0x0000@23 +0x0000@23 } | .RscIPv4Disabled
        _m024 uint1_t  rsc_i_pv6_disabled;                               //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .RscIPv6Disabled
        _m025 uint1_t  encapsulated_packet_task_offload_disabled;        //{ +0x0000@25 +0x0000@25 +0x0000@25 +0x0000@25 } | .EncapsulatedPacketTaskOffloadDisabled
        _m026 uint1_t  encapsulated_packet_task_offload_nvgre_disabled;  //{ +0x0000@26 +0x0000@26 +0x0000@26 +0x0000@26 } | .EncapsulatedPacketTaskOffloadNvgreDisabled
        _m027 uint1_t  encapsulated_packet_task_offload_vxlan_disabled;  //{ +0x0000@27 +0x0000@27 +0x0000@27 +0x0000@27 } | .EncapsulatedPacketTaskOffloadVxlanDisabled
        _m028 uint32_t value;                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
        //                                                             
        _m029 uint1_t  uso_i_pv4_disabled;                               //{ +0x0000@28 +0x0000@28 +0x0000@28 } | .UsoIPv4Disabled
        _m030 uint1_t  uso_i_pv6_disabled;                               //{ +0x0000@29 +0x0000@29 +0x0000@29 } | .UsoIPv6Disabled
                                                                       
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_OFFLOAD_REG.$", 0x4, true, 0x19bb578e6e3e4720 );                                                
        SDK_FIXED_SIZE( miniport_offload_reg_t, 0x4 );                                                
    };                                                                 
};
#include "magic/miniport_offload_reg_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_offload_reg_t, 0x4 );
