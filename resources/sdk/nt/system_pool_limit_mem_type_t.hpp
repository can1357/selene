#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _SYSTEM_POOL_LIMIT_MEM_TYPE]
    //  Windows 11
    //
    enum class system_pool_limit_mem_type_t : int32_t
    {                                                
        paged =     0x0,                               // Windows 11
        non_paged = 0x1,                               // Windows 11
        type_max =  0x2,                               // Windows 11
    };                                               
};
