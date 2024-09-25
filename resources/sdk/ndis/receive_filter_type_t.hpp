#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_RECEIVE_FILTER_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class receive_filter_type_t : int32_t
    {                                         
        undefined =         0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vm_queue =          0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        packet_coalescing = 0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =           0x3,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
