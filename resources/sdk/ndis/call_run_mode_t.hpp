#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum CallRunMode]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class call_run_mode_t : int32_t        
    {                                           
        synchronous =                    0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        asynchronous =                   0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        asynchronous_but_okay_to_block = 0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
