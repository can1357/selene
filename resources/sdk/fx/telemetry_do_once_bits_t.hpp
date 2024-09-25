#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum _FX_TELEMETRY_DO_ONCE_BITS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class telemetry_do_once_bits_t : int32_t
    {                                            
        device_start_event_bit = 0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
