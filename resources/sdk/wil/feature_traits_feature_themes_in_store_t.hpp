#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_ThemesInStore]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_themes_in_store_t
    {                                              
                                                   
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_ThemesInStore.$", 0x1, true, 0x2258b137eefefdf2 );
        SDK_FIXED_SIZE( feature_traits_feature_themes_in_store_t, 0x1 );
    };                                             
};
SDK_VERIFY( struct wil::feature_traits_feature_themes_in_store_t, 0x1 );
