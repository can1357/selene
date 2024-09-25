#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_DesktopScreenClipping]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_desktop_screen_clipping_t
    {                                                      
                                                           
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_DesktopScreenClipping.$", 0x1, true, 0x47244bf93dffd4f6 );
        SDK_FIXED_SIZE( feature_traits_feature_desktop_screen_clipping_t, 0x1 );
    };                                                     
};
SDK_VERIFY( struct wil::feature_traits_feature_desktop_screen_clipping_t, 0x1 );
