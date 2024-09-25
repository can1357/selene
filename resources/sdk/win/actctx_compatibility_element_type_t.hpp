#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ACTCTX_COMPATIBILITY_ELEMENT_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class actctx_compatibility_element_type_t : int32_t
    {                                                       
        unknown =          0x0,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        os =               0x1,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mitigation =       0x2,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maxversiontested = 0x3,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                      
};
