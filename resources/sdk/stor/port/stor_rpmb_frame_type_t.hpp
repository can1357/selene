#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STOR_RPMB_FRAME_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class stor_rpmb_frame_type_t : int32_t
    {                                          
        unknown =  0x0,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        standard = 0x1,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =      0x2,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
