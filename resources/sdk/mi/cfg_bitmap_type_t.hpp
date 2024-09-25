#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_CFG_BITMAP_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cfg_bitmap_type_t : int32_t
    {                                     
        native = 0x0,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wow64 =  0x1,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =    0x2,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
