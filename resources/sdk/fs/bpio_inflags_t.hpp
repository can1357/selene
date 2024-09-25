#pragma once
#include <sdkgen/support_library.hpp>

namespace fs
{
    // [enum _FS_BPIO_INFLAGS]
    //  Windows 11
    //
    enum class bpio_inflags_t : int32_t   
    {                                     
        none =                     0x0,     // Windows 11
        skip_storage_stack_query = 0x1,     // Windows 11
    };                                    
};
