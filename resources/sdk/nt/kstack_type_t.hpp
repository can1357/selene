#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KSTACK_TYPE]
    //  WDK 10
    //
    enum class kstack_type_t : int32_t  
    {                                   
        reserve_stack_normal =   0x0,     // WDK 10
        reserve_stack_large =    0x1,     // WDK 10
        maximum_reserve_stacks = 0x2,     // WDK 10
    };                                  
};
