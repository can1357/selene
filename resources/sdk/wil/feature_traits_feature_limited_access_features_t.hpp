#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_LimitedAccessFeatures]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_traits_feature_limited_access_features_t
    {                                                      
                                                           
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_LimitedAccessFeatures.$", 0x1, true, 0x70c1515713fd3983 );
        SDK_FIXED_SIZE( feature_traits_feature_limited_access_features_t, 0x1 );
    };                                                     
};
SDK_VERIFY( struct wil::feature_traits_feature_limited_access_features_t, 0x1 );
