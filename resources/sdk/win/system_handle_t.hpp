#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _system_handle_t]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class system_handle_t : int32_t
    {                                   
        file =               0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        semaphore =          0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event =              0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mutex =              0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process =            0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        token =              0x5,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        section =            0x6,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reg_key =            0x7,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread =             0x8,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        composition_object = 0x9,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        socket =             0xa,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        job =                0xb,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                0xc,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pipe =               0xc,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid =            0xff,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
