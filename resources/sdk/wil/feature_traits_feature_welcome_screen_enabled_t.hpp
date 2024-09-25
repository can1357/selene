#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_WelcomeScreenEnabled]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_welcome_screen_enabled_t
    {                                                     
                                                          
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_WelcomeScreenEnabled.$", 0x1, true, 0x7bb2c32d20e88c79 );
        SDK_FIXED_SIZE( feature_traits_feature_welcome_screen_enabled_t, 0x1 );
    };                                                    
};
SDK_VERIFY( struct wil::feature_traits_feature_welcome_screen_enabled_t, 0x1 );
