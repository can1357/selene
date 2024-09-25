#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_NODE_NONPAGED_POOL_BITMAP]
    //  Windows 10 v1607
    //
    enum class node_nonpaged_pool_bitmap_t : int32_t
    {                                               
        large_pde_nx = 0x0,                           // Windows 10 v1607
        small_pde =    0x1,                           // Windows 10 v1607
        per_page =     0x2,                           // Windows 10 v1607
    };                                              
};
