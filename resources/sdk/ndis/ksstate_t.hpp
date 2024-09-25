#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum KSSTATE]
    //  Windows 10 v1607
    //
    enum class ksstate_t : int32_t
    {                             
        stop =    0x0,              // Windows 10 v1607
        acquire = 0x1,              // Windows 10 v1607
        pause =   0x2,              // Windows 10 v1607
        run =     0x3,              // Windows 10 v1607
    };                            
};
