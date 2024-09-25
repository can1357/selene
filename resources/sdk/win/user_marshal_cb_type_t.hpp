#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _USER_MARSHAL_CB_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class user_marshal_cb_type_t : int32_t
    {                                          
        buffer_size = 0x0,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        marshall =    0x1,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unmarshall =  0x2,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        free =        0x3,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
