#pragma once
#include <sdkgen/support_library.hpp>

namespace fltmgr
{
    // [enum _FLT_OBJECT_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class flt_object_flags_t : int32_t
    {                                      
        draining =      0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        zombied =       0x2,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_instance = 0x1000000,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_filter =   0x2000000,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_volume =   0x4000000,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
