#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_FILE_EXTENT_TYPES]
    //  Windows 11
    //
    enum class file_extent_types_t : int32_t
    {                                       
        image =   0x0,                        // Windows 11
        data =    0x1,                        // Windows 11
        maximum = 0x2,                        // Windows 11
    };                                      
};
