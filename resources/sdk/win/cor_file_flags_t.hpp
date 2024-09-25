#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorFileFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_file_flags_t : int32_t
    {                                    
        meta_data =    0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_meta_data = 0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
