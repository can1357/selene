#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_UpdatePinnedTaskbarIcons]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_update_pinned_taskbar_icons_t
    {                                                          
                                                               
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_UpdatePinnedTaskbarIcons.$", 0x1, true, 0xf3499d1807a39b3c );
        SDK_FIXED_SIZE( feature_traits_feature_update_pinned_taskbar_icons_t, 0x1 );
    };                                                         
};
SDK_VERIFY( struct wil::feature_traits_feature_update_pinned_taskbar_icons_t, 0x1 );
