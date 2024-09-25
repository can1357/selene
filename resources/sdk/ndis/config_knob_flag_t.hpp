#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum ConfigKnobFlag]
    //  Windows 11
    //
    enum class config_knob_flag_t : int32_t
    {                                      
        only_update_once_at_boot = 0x0,      // Windows 11
        uint32_datatype =          0x0,      // Windows 11
        boolean_datatype =         0x2,      // Windows 11
        uint64_datatype =          0x4,      // Windows 11
        allow_dynamic_update =     0x20,     // Windows 11
        must_be_power_of_two =     0x40,     // Windows 11
    };                                     
};
