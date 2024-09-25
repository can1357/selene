#pragma once
#include <sdkgen/support_library.hpp>

namespace po
{
    // [enum PO_INTERNAL_WAKE_SOURCE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class internal_wake_source_type_t : int32_t
    {                                               
        doze_to_hibernate =       0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        predicted_user_presence = 0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_override =          0x2,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
