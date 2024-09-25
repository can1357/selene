#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [enum wil_details_StagingConfigFeatureFields]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class details_staging_config_feature_fields_t : int32_t
    {                                                           
        none =          0x0,                                      // Windows 10 v2004, Windows 10 v20H2
        service_state = 0x1,                                      // Windows 10 v2004, Windows 10 v20H2
        user_state =    0x2,                                      // Windows 10 v2004, Windows 10 v20H2
        test_state =    0x4,                                      // Windows 10 v2004, Windows 10 v20H2
        variant =       0x8,                                      // Windows 10 v2004, Windows 10 v20H2
    };                                                          
};
