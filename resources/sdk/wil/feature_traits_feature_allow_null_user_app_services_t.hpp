#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_AllowNullUserAppServices]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_traits_feature_allow_null_user_app_services_t
    {                                                           
                                                                
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_AllowNullUserAppServices.$", 0x1, true, 0x54eea08a45fc496d );
        SDK_FIXED_SIZE( feature_traits_feature_allow_null_user_app_services_t, 0x1 );
    };                                                          
};
SDK_VERIFY( struct wil::feature_traits_feature_allow_null_user_app_services_t, 0x1 );
