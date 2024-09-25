#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_ExpandReparsePoints]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_traits_feature_expand_reparse_points_t
    {                                                    
                                                         
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_ExpandReparsePoints.$", 0x1, true, 0x1a58d5f27e887b97 );
        SDK_FIXED_SIZE( feature_traits_feature_expand_reparse_points_t, 0x1 );
    };                                                   
};
SDK_VERIFY( struct wil::feature_traits_feature_expand_reparse_points_t, 0x1 );
