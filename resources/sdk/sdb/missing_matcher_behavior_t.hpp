#pragma once
#include <sdkgen/support_library.hpp>

namespace sdb
{
    // [enum _SDB_MISSING_MATCHER_BEHAVIOR]
    //  Windows 11
    //
    enum class missing_matcher_behavior_t : int32_t
    {                                              
        undefined =     0x0,                         // Windows 11
        ignore =        0x1,                         // Windows 11
        succeed_match = 0x2,                         // Windows 11
        fail_match =    0x3,                         // Windows 11
        max_value =     0x4,                         // Windows 11
    };                                             
};
