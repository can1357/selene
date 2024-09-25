#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorParamAttr]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_param_attr_t : int32_t
    {                                    
        in =                0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        out =               0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        optional =          0x10,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        has_default =       0x1000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        has_field_marshal = 0x2000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unused =            0xcfe0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_mask =     0xf000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
