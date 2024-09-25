#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_NET_BUFFER_LIST_INFO]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class net_buffer_list_info_t : int32_t                       
    {                                                                 
        tcp_ip_checksum_net_buffer_list_info =                0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tcp_offload_bytes_transferred =                       0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i_psec_offload_v1_net_buffer_list_info =              0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i_psec_offload_v2_net_buffer_list_info =              0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tcp_large_send_net_buffer_list_info =                 0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tcp_receive_no_push =                                 0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        classification_handle_net_buffer_list_info =          0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ieee8021q_net_buffer_list_info =                      0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        net_buffer_list_cancel_id =                           0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        media_specific_information =                          0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        net_buffer_list_frame_type =                          0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        net_buffer_list_protocol_id =                         0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        net_buffer_list_hash_value =                          0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        net_buffer_list_hash_info =                           0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wfp_net_buffer_list_info =                            0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i_psec_offload_v2_tunnel_net_buffer_list_info =       0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i_psec_offload_v2_header_net_buffer_list_info =       0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        net_buffer_list_correlation_id =                      0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        net_buffer_list_filtering_info =                      0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        media_specific_information_ex =                       0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nbl_original_interface_if_index =                     0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nbl_re_auth_wfp_flow_context =                        0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nrt_name_resolution_id =                              0x11,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        tcp_receive_bytes_transferred =                       0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        udp_recv_seg_coalesce_offload_info =                  0x11,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        switch_forwarding_reserved =                          0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        switch_forwarding_detail =                            0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        virtual_subnet_info =                                 0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        im_reserved =                                         0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tcp_recv_seg_coalesce_info =                          0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        udp_segmentation_offload_info =                       0x16,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        rsc_tcp_timestamp_delta =                             0x17,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tcp_send_offloads_supplemental_net_buffer_list_info = 0x17,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        gft_offload_information =                             0x18,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        gft_flow_entry_id =                                   0x19,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //net_buffer_list_info_reserved1 =                    0x1a,     // Windows 10 v1607
        net_buffer_list_info_reserved3 =                      0x1a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        net_buffer_list_info_reserved1 =                      0x1b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //net_buffer_list_info_reserved2 =                    0x1b,     // Windows 10 v1607
        //max_net_buffer_list_info =                          0x1c,     // Windows 10 v1607
        net_buffer_list_info_reserved2 =                      0x1c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_net_buffer_list_info =                            0x1d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                
};
