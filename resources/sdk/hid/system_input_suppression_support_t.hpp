#pragma once
#include <sdkgen/support_library.hpp>

namespace hid
{
    // [enum _SYSTEM_INPUT_SUPPRESSION_SUPPORT]
    //  Windows 11
    //
    enum class system_input_suppression_support_t : int32_t
    {                                                      
        none =                           0x0,                // Windows 11
        enabled =                        0x1,                // Windows 11
        disabled_not_in_inclusion_list = 0x2,                // Windows 11
        disabled_in_exclusion_list =     0x3,                // Windows 11
    };                                                     
};
