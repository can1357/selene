#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum NDIS_CHIMNEY_OFFLOAD_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class chimney_offload_type_t : int32_t
    {                                          
        tcp_chimney_offload =   0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ipsec_chimney_offload = 0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rdma_chimney_offload =  0x3,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_chimney_offload =   0x4,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
