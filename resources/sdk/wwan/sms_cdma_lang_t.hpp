#pragma once
#include <sdkgen/support_library.hpp>

namespace wwan
{
    // [enum _WWAN_SMS_CDMA_LANG]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sms_cdma_lang_t : int32_t
    {                                   
        unknown =  0x0,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        english =  0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        french =   0x2,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        spanish =  0x3,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        japanese = 0x4,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        korean =   0x5,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        chinese =  0x6,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hebrew =   0x7,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =      0x8,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
