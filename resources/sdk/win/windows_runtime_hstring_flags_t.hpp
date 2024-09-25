#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum WINDOWS_RUNTIME_HSTRING_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class windows_runtime_hstring_flags_t : int32_t        
    {                                                           
        none =                                    0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        string_reference =                        0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        valid_unicode_format_info =               0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        well_formed_unicode =                     0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        has_embedded_nulls =                      0x8,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        embedded_nulls_computed =                 0x10,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_for_preallocated_string_buffer = 0x80000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                          
};
