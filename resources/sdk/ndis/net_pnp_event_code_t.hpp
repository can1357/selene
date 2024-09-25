#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NET_PNP_EVENT_CODE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class net_pnp_event_code_t : int32_t
    {                                        
        set_power =               0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_power =             0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_remove_device =     0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cancel_remove_device =    0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reconfigure =             0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bind_list =               0x5,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        binds_complete =          0x6,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pn_p_capabilities =       0x7,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pause =                   0x8,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        restart =                 0x9,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        port_activation =         0xa,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        port_deactivation =       0xb,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        im_re_enable_device =     0xc,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndk_enable =              0xd,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndk_disable =             0xe,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        filter_pre_detach =       0xf,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bind_failed =             0x10,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        switch_activate =         0x11,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        allow_binds_above =       0x12,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        inhibit_binds_above =     0x13,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        allow_start =             0x14,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        require_pause =           0x15,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        upload_gft_flow_entries = 0x16,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =                 0x17,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
