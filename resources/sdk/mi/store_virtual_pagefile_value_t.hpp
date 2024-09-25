#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_STORE_VIRTUAL_PAGEFILE_VALUE]
    //  Windows 11
    //
    enum class store_virtual_pagefile_value_t : int32_t
    {                                                  
        value_invalid = 0x0,                             // Windows 11
        swap =          0x2,                             // Windows 11
        value_start =   0x2,                             // Windows 11
        compress =      0x3,                             // Windows 11
        no_compress =   0x4,                             // Windows 11
        max =           0x5,                             // Windows 11
    };                                                 
};
