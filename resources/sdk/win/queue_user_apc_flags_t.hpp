#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _QUEUE_USER_APC_FLAGS]
    //  Windows 11
    //
    enum class queue_user_apc_flags_t : int32_t
    {                                          
        none =             0x0,                  // Windows 11
        special_user_apc = 0x1,                  // Windows 11
    };                                         
};
