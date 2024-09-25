#pragma once
#include <sdkgen/support_library.hpp>

namespace wheap
{
    // [enum _WHEAP_PFA_OFFLINE_DECISION_TYPE]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pfa_offline_decision_type_t : int32_t
    {                                               
        predictive_failure = 0x1,                     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uncorrected_error =  0x2,                     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
