#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_NBL_TRACKER_LIFETIME_EVENT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class nbl_tracker_lifetime_event_t : int32_t
    {                                                
        queued_by_ndis =            0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nbl_allocated =             0x2,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nbl_allocated_with_nb =     0x3,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nbl_freed =                 0x4,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nbl_allocated_clone =       0x5,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nbl_freed_clone =           0x6,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nbl_allocated_fragment =    0x7,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nbl_freed_fragment =        0x8,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nbl_allocated_reassembled = 0x9,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        netio_allocated_clone =     0xa,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        netio_freed_clone =         0xb,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_allocated_child =    0xc,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_freed_child =        0xd,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_allocated_nbl =      0xe,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_freed_nbl =          0xf,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        other_not_datapath =        0x10,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        packet_translation_cached = 0x11,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        packet_translation_reused = 0x12,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        translate6_to5_tx_out =     0x13,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        translate6_to5_tx_return =  0x14,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        translate5_to6_tx_out =     0x15,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        translate5_to6_tx_return =  0x16,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        translate5_to5_tx_out =     0x17,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        translate5_to5_tx_return =  0x18,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        translate6_to5_rx_out =     0x19,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        translate6_to5_rx_return =  0x1a,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        translate5_to6_rx_out =     0x1b,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        translate5_to6_rx_return =  0x1c,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        translate5_to5_rx_out =     0x1d,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        translate5_to5_rx_return =  0x1e,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lifetime_max =              0x1f,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
