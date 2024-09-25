#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _WORKER_FUNCTION]
    //  Windows 11
    //
    enum class worker_function_t : int32_t   
    {                                        
        noop_function =               0x0,     // Windows 11
        read_ahead =                  0x1,     // Windows 11
        write_behind =                0x2,     // Windows 11
        lazy_write_scan =             0x3,     // Windows 11
        event_set =                   0x4,     // Windows 11
        async_read =                  0x5,     // Windows 11
        complete_async_read =         0x6,     // Windows 11
        async_write_behind =          0x7,     // Windows 11
        complete_async_write_behind = 0x8,     // Windows 11
    };                                       
};
