#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_SHARED_MEMORY_USAGE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class shared_memory_usage_t : int32_t
    {                                         
        undefined =              0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        xmit =                   0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        xmit_header =            0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        xmit_data =              0x3,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        receive =                0x4,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        receive_lookahead =      0x5,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        receive_post_lookahead = 0x6,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        receive_header =         0x7,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        receive_data =           0x8,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        other =                  0x9,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                    0xa,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
