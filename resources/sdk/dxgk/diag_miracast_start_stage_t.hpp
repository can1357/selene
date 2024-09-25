#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_DIAG_MIRACAST_START_STAGE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class diag_miracast_start_stage_t : int32_t                     
    {                                                                    
        km_sync_success =                                       0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        km_sync_fail_event_handle_invalid =                     0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        km_sync_fail_miracast_device_not_found =                0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        km_sync_fail_adapter_not_started =                      0x3,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        km_sync_fail_adapter_stopped_or_powered_down =          0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        km_sync_fail_adapter_no_miracast_support =              0x5,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        km_sync_fail_session_in_progress =                      0x6,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        km_sync_fail_createcontext_ddi_gpu_resource_in_use =    0x7,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        km_sync_fail_createcontext_ddi_call =                   0x8,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        km_sync_fail_createcontext_ddi_invalid_target_id =      0x9,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        km_sync_fail_allocate_chunk_list =                      0xa,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        km_sync_fail_allocate_chunks =                          0xb,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        km_sync_fail_allocate_start_session_context =           0xc,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        km_sync_fail_start_ioctl =                              0xd,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        km_sync_fail_create_guid =                              0xe,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        km_sync_fail_launch_start_adapter_thread =              0xf,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        km_sync_fail_start_adapter_thread_timeout =             0x10,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        km_sync_fail_wait_start_adapter_thread =                0x11,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        km_sync_uninitalized =                                  0xff,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_success =                                      0x100,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_invalid_umd_dll_name =                    0x101,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_session_in_progress =                     0x102,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_create_rtsp_event =                       0x103,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_load_umd =                                0x104,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_find_umd_entry_point =                    0x105,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_queryinterface_ddi_call =                 0x106,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_queryinterface_ddi_invalid_interface =    0x107,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_createcontext_ddi_call =                  0x108,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_find_system_ip_address =                  0x109,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_find_af_inet_system_ip_address =          0x10a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_open_miracast_session_call =              0x10b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_create_rtsp_listen_socket =               0x10c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_create_rtsp_socket =                      0x10d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_bind_rtsp_socket =                        0x10e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_listen_on_rtsp_socket =                   0x10f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_accept_rtsp_socket =                      0x110,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_receive_rtsp_connection_from_sink =       0x111,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_set_socket_options =                      0x112,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_startsession_ddi_call =                   0x113,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_startsession_ddi_insufficient_bandwidth = 0x114,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_start_watchdog =                          0x115,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_open_dxgk_adapter =                       0x116,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_create_dxgk_device =                      0x117,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_cancelled =                               0x118,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        um_async_fail_connect_rtsp_socket =                     0x119,     // Windows 11
    };                                                                   
};
