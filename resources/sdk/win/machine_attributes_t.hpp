#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _MACHINE_ATTRIBUTES]
    //  Windows 11
    //
    enum class machine_attributes_t : int32_t
    {                                        
        user_enabled =    0x1,                 // Windows 11
        kernel_enabled =  0x2,                 // Windows 11
        wow64_container = 0x4,                 // Windows 11
    };                                       
};
