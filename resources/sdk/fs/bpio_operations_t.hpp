#pragma once
#include <sdkgen/support_library.hpp>

namespace fs
{
    // [enum _FS_BPIO_OPERATIONS]
    //  Windows 11
    //
    enum class bpio_operations_t : int32_t
    {                                     
        enable =              0x1,          // Windows 11
        disable =             0x2,          // Windows 11
        query =               0x3,          // Windows 11
        volume_stack_pause =  0x4,          // Windows 11
        volume_stack_resume = 0x5,          // Windows 11
        stream_pause =        0x6,          // Windows 11
        stream_resume =       0x7,          // Windows 11
        get_info =            0x8,          // Windows 11
        max_operation =       0x9,          // Windows 11
    };                                    
};
