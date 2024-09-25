#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_PAGE_HASH_ERROR_BEHAVIOR]
    //  Windows 11
    //
    enum class page_hash_error_behavior_t : int32_t
    {                                              
        bugcheck =     0x0,                          // Windows 11
        return_error = 0x1,                          // Windows 11
        ignore =       0x2,                          // Windows 11
    };                                             
};
