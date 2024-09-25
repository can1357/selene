#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum KSPIN_COMMUNICATION]
    //  Windows 10 v1607
    //
    enum class kspin_communication_t : int32_t
    {                                         
        none =   0x0,                           // Windows 10 v1607
        sink =   0x1,                           // Windows 10 v1607
        source = 0x2,                           // Windows 10 v1607
        both =   0x3,                           // Windows 10 v1607
        bridge = 0x4,                           // Windows 10 v1607
    };                                        
};
