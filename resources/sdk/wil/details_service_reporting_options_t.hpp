#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [enum wil_details_ServiceReportingOptions]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class details_service_reporting_options_t : int32_t
    {                                                       
        none =           0x0,                                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        variant_config = 0x1,                                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                      
};
