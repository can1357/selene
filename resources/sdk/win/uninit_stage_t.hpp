#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum UninitStage]
    //  Windows 11
    //
    enum class uninit_stage_t : int32_t
    {                                  
        none =             0x0,          // Windows 11
        calls_stopped =    0x1,          // Windows 11
        state_teardown =   0x2,          // Windows 11
        channel_teardown = 0x3,          // Windows 11
    };                                 
};
