#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_RefreshRateSetting]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_refresh_rate_setting_t
    {                                                   
                                                        
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_RefreshRateSetting.$", 0x1, true, 0xe224ab88a71bf612 );
        SDK_FIXED_SIZE( feature_traits_feature_refresh_rate_setting_t, 0x1 );
    };                                                  
};
SDK_VERIFY( struct wil::feature_traits_feature_refresh_rate_setting_t, 0x1 );
