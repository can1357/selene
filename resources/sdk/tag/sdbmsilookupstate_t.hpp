#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagSDBMSILOOKUPSTATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sdbmsilookupstate_t : int32_t
    {                                       
        none =   0x0,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        local =  0x1,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom = 0x2,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        main =   0x3,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        done =   0x4,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
