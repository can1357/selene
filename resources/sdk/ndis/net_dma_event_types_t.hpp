#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum NetDmaEventTypes]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class net_dma_event_types_t : int32_t        
    {                                                 
        ndis_m_indicate_recv_event =          0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis_p_indicate_recv_event =          0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis_p_indicate_recv_complete_event = 0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis_p_return_packets_ex_event =      0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis_m_return_packets_ex_event =      0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis_p_return_packet_event =          0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis_m_return_packet_event =          0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis_m_return_packet_in_recv_event =  0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dma_copy_v2v_event =                  0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dma_chain_v2v_no_copy_event =         0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dma_chain_v2v_copy_event =            0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dma_copy_p2v_event =                  0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dma_chain_p2v_no_copy_event =         0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dma_chain_p2v_copy_event =            0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dma_copy_flush_event =                0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dma_copy_append_event =               0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dma_chain_copy_append_event =         0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dma_copy_flush_append_event =         0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dma_copy_check_for_completion_event = 0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dma_copy_get_physical_address_event = 0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dma_copy_null_xfer_event =            0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dma_copy_dummy_event =                0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        total_event_types =                   0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
