#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [enum wil_VariantReportingKind]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class variant_reporting_kind_t : int32_t
    {                                            
        none =         0x0,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unique_usage = 0x1,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_usage = 0x2,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
