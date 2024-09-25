#pragma once
#include <sdkgen/support_library.hpp>

namespace ldr
{
    // [enum _LDR_HOT_PATCH_STATE]
    //  Windows 11
    //
    enum class hot_patch_state_t : int32_t
    {                                     
        base_image =      0x0,              // Windows 11
        not_applied =     0x1,              // Windows 11
        applied_reverse = 0x2,              // Windows 11
        applied_forward = 0x3,              // Windows 11
        failed_to_patch = 0x4,              // Windows 11
        state_max =       0x5,              // Windows 11
    };                                    
};
