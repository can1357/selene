#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum PreventRundownBiasType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class prevent_rundown_bias_type_t : uint32_t
    {                                                
        stub_manager = 0x0,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ref_cache =    0x1,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
