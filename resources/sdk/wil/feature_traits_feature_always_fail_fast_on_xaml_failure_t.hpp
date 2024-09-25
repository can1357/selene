#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_AlwaysFailFastOnXamlFailure]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_always_fail_fast_on_xaml_failure_t
    {                                                               
                                                                    
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_AlwaysFailFastOnXamlFailure.$", 0x1, true, 0xf5be8454edfa4beb );
        SDK_FIXED_SIZE( feature_traits_feature_always_fail_fast_on_xaml_failure_t, 0x1 );
    };                                                              
};
SDK_VERIFY( struct wil::feature_traits_feature_always_fail_fast_on_xaml_failure_t, 0x1 );
