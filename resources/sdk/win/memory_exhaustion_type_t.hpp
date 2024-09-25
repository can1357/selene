#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _MEMORY_EXHAUSTION_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class memory_exhaustion_type_t : int32_t
    {                                            
        fail_fast_on_commit_failure = 0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                         0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
