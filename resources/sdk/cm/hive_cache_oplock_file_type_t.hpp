#pragma once
#include <sdkgen/support_library.hpp>

namespace cm
{
    // [enum _CM_HIVE_CACHE_OPLOCK_FILE_TYPE]
    //  Windows 11
    //
    enum class hive_cache_oplock_file_type_t : int32_t
    {                                                 
        on_primary =     0x0,                           // Windows 11
        on_log1 =        0x1,                           // Windows 11
        on_log2 =        0x2,                           // Windows 11
        s_on_files_max = 0x3,                           // Windows 11
    };                                                
};
