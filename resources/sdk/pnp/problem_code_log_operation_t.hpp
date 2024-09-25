#pragma once
#include <sdkgen/support_library.hpp>

namespace pnp
{
    // [enum _PNP_PROBLEM_CODE_LOG_OPERATION]
    //  Windows 11
    //
    enum class problem_code_log_operation_t : int32_t
    {                                                
        invalid = 0x0,                                 // Windows 11
        set =     0x1,                                 // Windows 11
        clear =   0x2,                                 // Windows 11
        max =     0x3,                                 // Windows 11
    };                                               
};
