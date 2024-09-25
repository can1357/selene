#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _WER_REPORT_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wer_report_type_t : int32_t
    {                                     
        non_critical =      0x0,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        critical =          0x1,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        application_crash = 0x2,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        application_hang =  0x3,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        kernel =            0x4,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid =           0x5,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
