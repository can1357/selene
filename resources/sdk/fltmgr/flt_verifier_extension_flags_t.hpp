#pragma once
#include <sdkgen/support_library.hpp>

namespace fltmgr
{
    // [enum _FLT_VERIFIER_EXTENSION_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class flt_verifier_extension_flags_t : int32_t
    {                                                  
        allocation_failure =    0x1,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        register_filter_thunk = 0x80000000,              // Windows 11
    };                                                 
};
