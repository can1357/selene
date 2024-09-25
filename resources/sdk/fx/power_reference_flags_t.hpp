#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxPowerReferenceFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class power_reference_flags_t : int32_t
    {                                           
        _default =                0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        send_pnp_power_up_event = 0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
