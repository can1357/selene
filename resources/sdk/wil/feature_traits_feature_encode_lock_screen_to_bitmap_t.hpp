#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_EncodeLockScreenToBitmap]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_encode_lock_screen_to_bitmap_t
    {                                                           
                                                                
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_EncodeLockScreenToBitmap.$", 0x1, true, 0xef60be38f809571c );
        SDK_FIXED_SIZE( feature_traits_feature_encode_lock_screen_to_bitmap_t, 0x1 );
    };                                                          
};
SDK_VERIFY( struct wil::feature_traits_feature_encode_lock_screen_to_bitmap_t, 0x1 );
