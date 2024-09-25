#pragma once
#include <sdkgen/support_library.hpp>
#include "pd_buffer_8021q_info_t.hpp"
#include "pd_buffer_virtual_subnet_info_t.hpp"

#include "magic/pd_buffer_t.start.hpp"
namespace ndis
{
    struct pd_buffer_t;

    // [struct _PD_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_buffer_t                                                                                                            
    {                                                                                                                             
        struct u0_meta_data_v0_t                                                                                                  
        {                                                                                                                         
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                   
            //                                                                                                                    
            _m012 uint64_t                                     rx_filter_context;                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RxFilterContext
            _m013 uint64_t                                     gft_flow_entry_id;                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .GftFlowEntryId
            _m014 uint32_t                                     rx_hash_value;                                                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RxHashValue
            _m015 uint1_t                                      rx_ip_header_checksum_succeeded;                                     //{ +0x000c@0  +0x000c@0  +0x000c@0  +0x000c@0  } | .RxIPHeaderChecksumSucceeded
            _m016 uint1_t                                      rx_tcp_checksum_succeeded;                                           //{ +0x000c@1  +0x000c@1  +0x000c@1  +0x000c@1  } | .RxTCPChecksumSucceeded
            _m017 uint1_t                                      rx_udp_checksum_succeeded;                                           //{ +0x000c@2  +0x000c@2  +0x000c@2  +0x000c@2  } | .RxUDPChecksumSucceeded
            _m018 uint1_t                                      rx_ip_header_checksum_failed;                                        //{ +0x000c@3  +0x000c@3  +0x000c@3  +0x000c@3  } | .RxIPHeaderChecksumFailed
            _m019 uint1_t                                      rx_tcp_checksum_failed;                                              //{ +0x000c@4  +0x000c@4  +0x000c@4  +0x000c@4  } | .RxTCPChecksumFailed
            _m020 uint1_t                                      rx_udp_checksum_failed;                                              //{ +0x000c@5  +0x000c@5  +0x000c@5  +0x000c@5  } | .RxUDPChecksumFailed
            _m021 uint1_t                                      rx_hash_computed;                                                    //{ +0x000c@6  +0x000c@6  +0x000c@6  +0x000c@6  } | .RxHashComputed
            _m022 uint1_t                                      rx_hash_with_l4_port_numbers;                                        //{ +0x000c@7  +0x000c@7  +0x000c@7  +0x000c@7  } | .RxHashWithL4PortNumbers
            _m023 uint1_t                                      rx_gft_direction_ingress;                                            //{ +0x000c@8  +0x000c@8  +0x000c@8  +0x000c@8  } | .RxGftDirectionIngress
            _m024 uint1_t                                      rx_gft_exception_packet;                                             //{ +0x000c@9  +0x000c@9  +0x000c@9  +0x000c@9  } | .RxGftExceptionPacket
            _m025 uint1_t                                      rx_gft_copy_packet;                                                  //{ +0x000c@10 +0x000c@10 +0x000c@10 +0x000c@10 } | .RxGftCopyPacket
            _m026 uint1_t                                      rx_gft_sample_packet;                                                //{ +0x000c@11 +0x000c@11 +0x000c@11 +0x000c@11 } | .RxGftSamplePacket
            _m027 uint4_t                                      rx_reserved1;                                                        //{ +0x000c@12 +0x000c@12 +0x000c@12 +0x000c@12 } | .RxReserved1
            _m028 uint16_t                                     rx_coalesced_seg_count;                                              //{ +0x000c@16 +0x000c@16 +0x000c@16 +0x000c@16 } | .RxCoalescedSegCount
            _m029 uint32_t                                     rx_rsc_tcp_timestamp_delta;                                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RxRscTcpTimestampDelta
            _m030 sdk::array<uint32_t, 2>                      rx_offloads;                                                         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .RxOffloads
            _m031 uint1_t                                      tx_is_i_pv4;                                                         //{ +0x0014@0  +0x0014@0  +0x0014@0  +0x0014@0  } | .TxIsIPv4
            _m032 uint1_t                                      tx_is_i_pv6;                                                         //{ +0x0014@1  +0x0014@1  +0x0014@1  +0x0014@1  } | .TxIsIPv6
            _m033 uint10_t                                     tx_transport_header_offset;                                          //{ +0x0014@2  +0x0014@2  +0x0014@2  +0x0014@2  } | .TxTransportHeaderOffset
            _m034 uint20_t                                     tx_mss;                                                              //{ +0x0014@12 +0x0014@12 +0x0014@12 +0x0014@12 } | .TxMSS
            _m035 uint1_t                                      tx_compute_ip_header_checksum;                                       //{ +0x0018@0  +0x0018@0  +0x0018@0  +0x0018@0  } | .TxComputeIPHeaderChecksum
            _m036 uint1_t                                      tx_compute_tcp_checksum;                                             //{ +0x0018@1  +0x0018@1  +0x0018@1  +0x0018@1  } | .TxComputeTCPChecksum
            _m037 uint1_t                                      tx_compute_udp_checksum;                                             //{ +0x0018@2  +0x0018@2  +0x0018@2  +0x0018@2  } | .TxComputeUDPChecksum
            _m038 uint1_t                                      tx_is_encapsulated_packet;                                           //{ +0x0018@3  +0x0018@3  +0x0018@3  +0x0018@3  } | .TxIsEncapsulatedPacket
            _m039 uint1_t                                      tx_inner_packet_offsets_valid;                                       //{ +0x0018@4  +0x0018@4  +0x0018@4  +0x0018@4  } | .TxInnerPacketOffsetsValid
            _m040 uint11_t                                     tx_reserved1;                                                        //{ +0x0018@5  +0x0018@5  +0x0018@5  +0x0018@5  } | .TxReserved1
            _m041 uint8_t                                      tx_inner_frame_offset;                                               //{ +0x0018@16 +0x0018@16 +0x0018@16 +0x0018@16 } | .TxInnerFrameOffset
            _m042 uint6_t                                      tx_inner_ip_header_relative_offset;                                  //{ +0x0018@24 +0x0018@24 +0x0018@24 +0x0018@24 } | .TxInnerIpHeaderRelativeOffset
            _m043 uint1_t                                      tx_inner_is_i_pv6;                                                   //{ +0x0018@30 +0x0018@30 +0x0018@30 +0x0018@30 } | .TxInnerIsIPv6
            _m044 uint1_t                                      tx_inner_tcp_options_present;                                        //{ +0x0018@31 +0x0018@31 +0x0018@31 +0x0018@31 } | .TxInnerTcpOptionsPresent
            _m045 sdk::array<uint32_t, 2>                      tx_offloads;                                                         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .TxOffloads
            _m046 struct ndis::pd_buffer_virtual_subnet_info_t virtual_subnet_info;                                                 //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .VirtualSubnetInfo
            _m047 struct ndis::pd_buffer_8021q_info_t          ieee8021q_info;                                                      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Ieee8021qInfo
            _m048 uint16_t                                     gft_source_v_port_id;                                                //{ +0x0022    +0x0022    +0x0022    +0x0022    } | .GftSourceVPortId
            _m049 uint64_t                                     provider_scratch;                                                    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ProviderScratch
                                                                                                                                  
            SDK_MAGIC_PROPERTIES( "_PD_BUFFER.MetaDataV0.$", 0x30, true, 0xce1c964a0ed9bc67 );                                                                   
            SDK_FIXED_SIZE( u0_meta_data_v0_t, 0x30 );                                                                            
        };                                                                                                                        
                                                                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                       
        //                                                                                                                        
        _m00 struct ndis::pd_buffer_t*                                                            next_pd_buffer;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextPDBuffer
        _m01 struct ndis::pd_buffer_t*                                                            next_partial_pd_buffer;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NextPartialPDBuffer
        _m02 void*                                                                                pd_client_reserved;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PDClientReserved
        _m03 void*                                                                                pd_client_context;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PDClientContext
        _m04 uint8_t*                                                                             data_buffer_virtual_address;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DataBufferVirtualAddress
        _m05 int64_t                                                                              data_buffer_dma_logical_address;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DataBufferDmaLogicalAddress
        _m06 uint32_t                                                                             data_buffer_size;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DataBufferSize
        _m07 uint16_t                                                                             pd_client_context_size;           //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .PDClientContextSize
        _m08 uint16_t                                                                             attributes;                       //{ +0x0036    +0x0036    +0x0036    +0x0036    } | .Attributes
        _m09 uint16_t                                                                             flags;                            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Flags
        _m10 uint16_t                                                                             data_start;                       //{ +0x003a    +0x003a    +0x003a    +0x003a    } | .DataStart
        _m11 uint32_t                                                                             data_length;                      //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .DataLength
        _m50 u0_meta_data_v0_t                                                                    meta_data_v0;                     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .MetaDataV0
                                                                                                                                  
        SDK_MAGIC_PROPERTIES( "_PD_BUFFER.$", 0x70, true, 0xaf5293e50f6aeb47 );                                                   
        SDK_FIXED_SIZE( pd_buffer_t, 0x70 );                                                                                      
    };                                                                                                                            
};
#include "magic/pd_buffer_t.end.hpp"
SDK_VERIFY( struct ndis::pd_buffer_t::u0_meta_data_v0_t, 0x30 );
SDK_VERIFY( struct ndis::pd_buffer_t, 0x70 );
