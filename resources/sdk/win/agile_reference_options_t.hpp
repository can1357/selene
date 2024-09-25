#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum AgileReferenceOptions]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class agile_reference_options_t : int32_t
    {                                             
        _default =       0x0,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        delayedmarshal = 0x1,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
