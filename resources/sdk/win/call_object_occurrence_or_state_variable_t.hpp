#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CallObjectOccurrenceOrStateVariable]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class call_object_occurrence_or_state_variable_t : int32_t
    {                                                              
        called_i_rpc_free_buffer =               0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        called_i_rpc_negotiate_transfer_syntax = 0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        called_i_rpc_get_buffer_with_object =    0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        called_i_rpc_get_buffer =                0x3,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        called_i_rpc_async_set_handle =          0x4,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        called_i_rpc_send =                      0x5,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        called_i_rpc_receive =                   0x6,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        called_i_rpc_async_abort_call =          0x7,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        called_i_rpc_send_receive =              0x8,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        returning_from_thread_send_receive =     0x9,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        called_signal_the_client =               0xa,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        called_cleanup_on_free_buffer =          0xb,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        asta_post_to_priority =                  0xc,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        asta_post_to_dispatchable =              0xd,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        asta_post_to_queued =                    0xe,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        asta_pre_thread_dispatch_normal =        0xf,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        asta_pre_thread_dispatch_for_timeout =   0x10,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        asta_queued_remove_for_timeout =         0x11,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        asta_queued_to_dispatchable =            0x12,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        asta_dispatchable_to_queued =            0x13,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        occurrence_last =                        0x14,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        c_message_call_i_flags =                 0x15,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        c_async_call_l_flags =                   0x16,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        c_async_call_e_signal_state =            0x17,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        c_client_call_m_dw_flags =               0x18,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                             
};
