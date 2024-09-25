#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum EHandleState]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class e_handle_state_t : int32_t
    {                                    
        default_hs =          0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        static_cloaking_hs =  0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dynamic_cloaking_hs = 0x8,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        any_cloaking_hs =     0xc,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_local_hs =    0x10,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        machine_local_hs =    0x20,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cross_container_hs =  0x40,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
