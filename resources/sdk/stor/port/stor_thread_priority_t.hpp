#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STOR_THREAD_PRIORITY]
    //  Windows 11
    //
    enum class stor_thread_priority_t : int32_t
    {                                          
        background =     0x7,                    // Windows 11
        normal =         0x8,                    // Windows 11
        delayed =        0xc,                    // Windows 11
        critical =       0xd,                    // Windows 11
        super_critical = 0xe,                    // Windows 11
        hyper_critical = 0xf,                    // Windows 11
        real_time =      0x12,                   // Windows 11
    };                                         
};
