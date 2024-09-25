#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _WER_SUBMIT_RESULT]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wer_submit_result_t : int32_t
    {                                       
        report_queued =              0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        report_uploaded =            0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        report_debug =               0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        report_failed =              0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled =                   0x5,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        report_cancelled =           0x6,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled_queue =             0x7,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        report_async =               0x8,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_action =              0x9,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        throttled =                  0xa,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        report_uploaded_cab =        0xb,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        storage_location_not_found = 0xc,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        submit_result_max =          0xd,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
