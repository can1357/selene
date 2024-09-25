#pragma once
#include <sdkgen/support_library.hpp>

namespace etw
{
    // [enum _ETW_PERFECT_HASH_FUNCTION_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    enum class perfect_hash_function_type_t : int32_t
    {                                                
        event_id =   0x0,                              // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        stack_walk = 0x1,                              // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        max_count =  0x2,                              // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    };                                               
};
