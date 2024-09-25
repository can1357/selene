#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum __scrt_module_type]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class scrt_module_type_t : int32_t
    {                                      
        dll = 0x0,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        exe = 0x1,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
