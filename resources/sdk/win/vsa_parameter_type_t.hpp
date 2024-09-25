#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum VSAParameterType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class vsa_parameter_type_t : int32_t
    {                                        
        value_unicode_string = 0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        value_length_mask =    0xffff,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        value_ansi_string =    0x10000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        value_guid =           0x20000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        value_dword =          0x30000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        value_byte_array =     0x40000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        value_type_mask =      0x70000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        value_mask =           0x7ffff,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        key_mask =             0x80000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        key_string =           0x80000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
