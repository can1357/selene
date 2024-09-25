#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_RedirectSystemControlPanel]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_redirect_system_control_panel_t
    {                                                            
                                                                 
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_RedirectSystemControlPanel.$", 0x1, true, 0x609a29f2d5c4d2b9 );
        SDK_FIXED_SIZE( feature_traits_feature_redirect_system_control_panel_t, 0x1 );
    };                                                           
};
SDK_VERIFY( struct wil::feature_traits_feature_redirect_system_control_panel_t, 0x1 );
