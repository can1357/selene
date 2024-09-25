#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _IDL_CS_CONVERT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class idl_cs_convert_t : int32_t
    {                                    
        no_convert =         0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_place_convert =   0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        new_buffer_convert = 0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
