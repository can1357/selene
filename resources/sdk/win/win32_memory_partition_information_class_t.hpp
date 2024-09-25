#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum WIN32_MEMORY_PARTITION_INFORMATION_CLASS]
    //  Windows 11
    //
    enum class win32_memory_partition_information_class_t : int32_t
    {                                                              
        info =                  0x0,                                 // Windows 11
        dedicated_memory_info = 0x1,                                 // Windows 11
    };                                                             
};
