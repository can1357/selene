#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_ShoulderTap]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_shoulder_tap_t
    {                                           
                                                
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_ShoulderTap.$", 0x1, true, 0xa1e81d5e61cbba3e );
        SDK_FIXED_SIZE( feature_traits_feature_shoulder_tap_t, 0x1 );
    };                                          
};
SDK_VERIFY( struct wil::feature_traits_feature_shoulder_tap_t, 0x1 );
