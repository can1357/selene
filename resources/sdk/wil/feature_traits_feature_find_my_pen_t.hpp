#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_FindMyPen]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_find_my_pen_t
    {                                          
                                               
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_FindMyPen.$", 0x1, true, 0xbe1c4c34efca9eaa );
        SDK_FIXED_SIZE( feature_traits_feature_find_my_pen_t, 0x1 );
    };                                         
};
SDK_VERIFY( struct wil::feature_traits_feature_find_my_pen_t, 0x1 );
