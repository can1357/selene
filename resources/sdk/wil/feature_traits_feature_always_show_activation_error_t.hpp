#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_AlwaysShowActivationError]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_traits_feature_always_show_activation_error_t
    {                                                           
                                                                
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_AlwaysShowActivationError.$", 0x1, true, 0x4317b61361dfbda4 );
        SDK_FIXED_SIZE( feature_traits_feature_always_show_activation_error_t, 0x1 );
    };                                                          
};
SDK_VERIFY( struct wil::feature_traits_feature_always_show_activation_error_t, 0x1 );
