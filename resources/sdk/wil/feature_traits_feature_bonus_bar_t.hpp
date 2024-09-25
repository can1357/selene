#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_BonusBar]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_bonus_bar_t
    {                                        
                                             
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_BonusBar.$", 0x1, true, 0x58d8e9402176478c );
        SDK_FIXED_SIZE( feature_traits_feature_bonus_bar_t, 0x1 );
    };                                       
};
SDK_VERIFY( struct wil::feature_traits_feature_bonus_bar_t, 0x1 );
