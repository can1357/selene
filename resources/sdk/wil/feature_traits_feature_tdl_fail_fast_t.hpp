#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_TDLFailFast]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_traits_feature_tdl_fail_fast_t
    {                                            
                                                 
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_TDLFailFast.$", 0x1, true, 0xc09e65f42398c5f8 );
        SDK_FIXED_SIZE( feature_traits_feature_tdl_fail_fast_t, 0x1 );
    };                                           
};
SDK_VERIFY( struct wil::feature_traits_feature_tdl_fail_fast_t, 0x1 );
