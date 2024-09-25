#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagMSIPATCHSTATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class msipatchstate_t : int32_t
    {                                   
        invalid =    0x0,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        applied =    0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        superseded = 0x2,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        obsoleted =  0x4,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        registered = 0x8,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all =        0xf,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
