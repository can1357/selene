#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_DoNotActivateLockAppWithScreenOff]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_do_not_activate_lock_app_with_screen_off_t
    {                                                                       
                                                                            
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_DoNotActivateLockAppWithScreenOff.$", 0x1, true, 0xa0b632a52179535a );
        SDK_FIXED_SIZE( feature_traits_feature_do_not_activate_lock_app_with_screen_off_t, 0x1 );
    };                                                                      
};
SDK_VERIFY( struct wil::feature_traits_feature_do_not_activate_lock_app_with_screen_off_t, 0x1 );
