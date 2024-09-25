#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _ZDB_COMPRESSION_ALGORITHM]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class zdb_compression_algorithm_t : int32_t
    {                                               
        none =      0x0,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        zlib125 =   0x1,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_value = 0x2,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
