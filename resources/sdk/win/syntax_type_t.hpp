#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum SYNTAX_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class syntax_type_t : int32_t
    {                                 
        ndr64 =      0x71710533,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dce =        0x8a885d04,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        test_ndr64 = 0xb4537da9,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
