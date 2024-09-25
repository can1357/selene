#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_SetDefaultsByApp]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_set_defaults_by_app_t
    {                                                  
                                                       
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_SetDefaultsByApp.$", 0x1, true, 0xbacf474735eeb0ac );
        SDK_FIXED_SIZE( feature_traits_feature_set_defaults_by_app_t, 0x1 );
    };                                                 
};
SDK_VERIFY( struct wil::feature_traits_feature_set_defaults_by_app_t, 0x1 );
