#pragma once
#include <sdkgen/support_library.hpp>

namespace wwan
{
    // [enum _WWAN_SMS_FLAG]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sms_flag_t : int32_t
    {                              
        all =   0x0,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        index = 0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _new =  0x2,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        old =   0x3,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sent =  0x4,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        draft = 0x5,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =   0x6,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
