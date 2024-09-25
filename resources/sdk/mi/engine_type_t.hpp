#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_ENGINE_TYPE]
    //  Windows 11
    //
    enum class engine_type_t : int32_t
    {                                 
        accelerator =    0x0,           // Windows 11
        fast_processor = 0x1,           // Windows 11
        slow_processor = 0x2,           // Windows 11
        maximum_types =  0x3,           // Windows 11
    };                                
};
