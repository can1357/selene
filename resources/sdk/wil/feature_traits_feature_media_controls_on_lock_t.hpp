#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_MediaControlsOnLock]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_media_controls_on_lock_t
    {                                                     
                                                          
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_MediaControlsOnLock.$", 0x1, true, 0x117b41678a795e06 );
        SDK_FIXED_SIZE( feature_traits_feature_media_controls_on_lock_t, 0x1 );
    };                                                    
};
SDK_VERIFY( struct wil::feature_traits_feature_media_controls_on_lock_t, 0x1 );
