#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KERNEL_SHADOW_STACK_TYPE]
    //  Windows 11
    //
    enum class kernel_shadow_stack_type_t : int32_t
    {                                              
        user_thread =                 0x0,           // Windows 11
        kernel_thread =               0x1,           // Windows 11
        rstorssp =                    0x2,           // Windows 11
        setssbsy =                    0x3,           // Windows 11
        setssbsy_for_system_startup = 0x4,           // Windows 11
        max =                         0x5,           // Windows 11
    };                                             
};
