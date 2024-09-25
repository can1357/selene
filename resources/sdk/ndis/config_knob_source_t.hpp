#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum ConfigKnobSource]
    //  Windows 11
    //
    enum class config_knob_source_t : int32_t
    {                                        
        unknown =            0x0,              // Windows 11
        default_value =      0x1,              // Windows 11
        default_store =      0x2,              // Windows 11
        override_store =     0x3,              // Windows 11
        ephemeral_override = 0x4,              // Windows 11
    };                                       
};
