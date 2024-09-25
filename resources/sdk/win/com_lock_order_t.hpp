#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ComLockOrder]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class com_lock_order_t : uint8_t                 
    {                                                     
        c_drag_drop_broker_s_registration_lock =  0x0,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        c_dll_host_mxs =                          0x1,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        g_mta_init_lock =                         0x2,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        g_mxs_single_thread_ole =                 0x3,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        g_obj_server_lock =                       0x4,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        g_channel_init_lock =                     0x5,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        g_ipid_lock =                             0x6,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        g_com_lock =                              0x7,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        g_oxid_lock =                             0x8,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        g_context_lock =                          0x9,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        g_call_lock =                             0xa,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        g_chnl_call_lock =                        0xb,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cgip_table_mxs =                          0xc,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        crif_table_mxs =                          0xd,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        c_rpc_resolver_mxs_resolver =             0xe,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        c_apartment_hash_table_mxs_apt_tbl_lock = 0xf,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        g_ole_init_lock =                         0x10,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        g_rot_sem =                               0x11,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        g_spy_sem =                               0x12,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        highest =                                 0x13,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                    
};
