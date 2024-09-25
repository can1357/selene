#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_DefaultAppUpdates]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_default_app_updates_t
    {                                                  
                                                       
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_DefaultAppUpdates.$", 0x1, true, 0x7d1057899072bc82 );
        SDK_FIXED_SIZE( feature_traits_feature_default_app_updates_t, 0x1 );
    };                                                 
};
SDK_VERIFY( struct wil::feature_traits_feature_default_app_updates_t, 0x1 );
