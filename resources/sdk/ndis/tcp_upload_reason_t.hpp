#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum TCP_UPLOAD_REASON]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class tcp_upload_reason_t : int32_t
    {                                       
        low_activity =              0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        high_drop_rate =            0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        small_io =                  0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_buffer_preposting =      0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_buffer_proposting =      0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        received_urgent_data =      0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        high_fragmentation =        0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        high_out_of_order_packets = 0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timeout_expiration =        0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid_state =             0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        upload_requested =          0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hardware_failure =          0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_upload_reason =         0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
