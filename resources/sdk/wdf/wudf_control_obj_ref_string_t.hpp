#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WUDF_CONTROL_OBJ_REF_STRING]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wudf_control_obj_ref_string_t : int32_t
    {                                                 
        elevations = 0x0,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        min =        0x0,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        null_file =  0x1,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =        0x2,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unknown =    0x2,                               // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
