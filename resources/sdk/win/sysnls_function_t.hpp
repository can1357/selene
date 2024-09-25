#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum SYSNLS_FUNCTION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sysnls_function_t : int32_t
    {                                     
        compare_string = 0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
