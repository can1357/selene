#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _CSV_DOWN_LEVEL_FILE_TYPE]
    //  WDK 10
    //
    enum class csv_down_level_file_type_t : int32_t
    {                                              
        down_level_file_object =      0x0,           // WDK 10
        csv_fs_internal_file_object = 0x1,           // WDK 10
    };                                             
};
