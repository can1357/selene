#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_PAGELIST_LOCK_TYPES]
    //  Windows 11
    //
    enum class pagelist_lock_types_t : int32_t
    {                                         
        previous_global = 0x0,                  // Windows 11
        next_global =     0x1,                  // Windows 11
        previous_node =   0x2,                  // Windows 11
        next_node =       0x3,                  // Windows 11
        page_maximum =    0x4,                  // Windows 11
    };                                        
};
