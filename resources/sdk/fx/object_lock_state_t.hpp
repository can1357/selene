#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxObjectLockState]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class object_lock_state_t : int32_t
    {                                       
        do_not_lock = 0x0,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lock =        0x1,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
