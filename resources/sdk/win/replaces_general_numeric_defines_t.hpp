#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ReplacesGeneralNumericDefines]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class replaces_general_numeric_defines_t : int32_t
    {                                                      
        image_directory_entry_comheader = 0xe,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
