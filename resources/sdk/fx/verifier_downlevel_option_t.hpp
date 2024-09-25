#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxVerifierDownlevelOption]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class verifier_downlevel_option_t : int32_t
    {                                               
        not_ok_for_down_level = 0x0,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ok_for_down_level =     0x1,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
