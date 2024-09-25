#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _IPSEC_OFFLOAD_V2_OPERATION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ipsec_offload_v2_operation_t : int32_t
    {                                                
        v2_ah =  0x1,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        v2_esp = 0x2,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        v2_max = 0x3,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
