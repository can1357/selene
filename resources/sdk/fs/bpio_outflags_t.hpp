#pragma once
#include <sdkgen/support_library.hpp>

namespace fs
{
    // [enum _FS_BPIO_OUTFLAGS]
    //  Windows 11
    //
    enum class bpio_outflags_t : int32_t    
    {                                       
        none =                       0x0,     // Windows 11
        volume_stack_bypass_paused = 0x1,     // Windows 11
        stream_bypass_paused =       0x2,     // Windows 11
        filter_attach_blocked =      0x4,     // Windows 11
        compatible_storage_driver =  0x8,     // Windows 11
    };                                      
};
