#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorFileMapping]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_file_mapping_t : int32_t
    {                                      
        flat =             0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        executable_image = 0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
