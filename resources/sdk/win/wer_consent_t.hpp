#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _WER_CONSENT]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wer_consent_t : int32_t
    {                                 
        not_asked =     0x1,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        approved =      0x2,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        denied =        0x3,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        always_prompt = 0x4,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =           0x5,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
