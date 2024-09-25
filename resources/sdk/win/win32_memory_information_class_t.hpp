#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum WIN32_MEMORY_INFORMATION_CLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class win32_memory_information_class_t : int32_t
    {                                                    
        memory_region_info = 0x0,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                   
};
