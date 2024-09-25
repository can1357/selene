#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorOpenFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_open_flags_t : int32_t
    {                                    
        read =            0x0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        read_write_mask = 0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        write =           0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        copy_memory =     0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        read_only =       0x10,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        take_ownership =  0x20,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_type_lib =     0x80,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved1 =       0x100,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved2 =       0x200,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved3 =       0x400,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        check_integrity = 0x800,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_transform =    0x1000,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved =        0xe740,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //reserved =      0xef40,          // Windows 10 v1607
    };                                   
};
