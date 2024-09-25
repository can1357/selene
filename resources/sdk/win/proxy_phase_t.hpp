#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum PROXY_PHASE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class proxy_phase_t : int32_t
    {                                 
        calcsize =    0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        getbuffer =   0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        marshal =     0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sendreceive = 0x3,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unmarshal =   0x4,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
