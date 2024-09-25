#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxTagRefType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class tag_ref_type_t : int32_t
    {                                  
        add_ref = 0x0,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        release = 0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
