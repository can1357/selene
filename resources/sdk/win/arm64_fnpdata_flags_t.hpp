#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ARM64_FNPDATA_FLAGS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class arm64_fnpdata_flags_t : int32_t
    {                                         
        ref_to_full_xdata =      0x0,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        packed_unwind_function = 0x1,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        packed_unwind_fragment = 0x2,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
