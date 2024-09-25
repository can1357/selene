#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_YourPhoneTaskbarIcon]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_your_phone_taskbar_icon_t
    {                                                      
                                                           
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_YourPhoneTaskbarIcon.$", 0x1, true, 0x8600e1810b7d9703 );
        SDK_FIXED_SIZE( feature_traits_feature_your_phone_taskbar_icon_t, 0x1 );
    };                                                     
};
SDK_VERIFY( struct wil::feature_traits_feature_your_phone_taskbar_icon_t, 0x1 );
