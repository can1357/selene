#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum HivePathEnum]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class hive_path_enum_t : int32_t
    {                                    
        base_dir =  0x0,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_dir =  0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_path = 0x2,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
