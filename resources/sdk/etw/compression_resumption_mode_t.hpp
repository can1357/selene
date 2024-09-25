#pragma once
#include <sdkgen/support_library.hpp>

namespace etw
{
    // [enum ETW_COMPRESSION_RESUMPTION_MODE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class compression_resumption_mode_t : int32_t
    {                                                 
        restart =    0x0,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_disable = 0x1,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_restart = 0x2,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
