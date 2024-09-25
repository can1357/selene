#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _RTC_ErrorNumber]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rtc_error_number_t : int32_t
    {                                      
        chkstk =           0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cvrt_loss_info =   0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        corrupt_stack =    0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uninit_local_use = 0x3,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        corrupted_alloca = 0x4,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        illegal =          0x5,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
