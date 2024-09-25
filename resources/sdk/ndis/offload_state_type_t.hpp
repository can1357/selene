#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum OFFLOAD_STATE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class offload_state_type_t : int32_t      
    {                                              
        neighbor_offload_const_state =     0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        neighbor_offload_cached_state =    0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        neighbor_offload_delegated_state = 0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        neighbor_offload_state =           0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ip4_offload_const_state =          0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ip4_offload_cached_state =         0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ip4_offload_delegated_state =      0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ip4_offload_state =                0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ip6_offload_const_state =          0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ip6_offload_cached_state =         0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ip6_offload_delegated_state =      0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ip6_offload_state =                0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tcp_offload_const_state =          0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tcp_offload_cached_state =         0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tcp_offload_delegated_state =      0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tcp_offload_resource_state =       0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tcp_offload_state =                0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        filter_reserved_offload_state =    0xfe,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum_offload_state =            0xff,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
