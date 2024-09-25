#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_AutomaticSignOnLockSetting]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_automatic_sign_on_lock_setting_t
    {                                                             
                                                                  
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_AutomaticSignOnLockSetting.$", 0x1, true, 0x427d6f4d821feb0 );
        SDK_FIXED_SIZE( feature_traits_feature_automatic_sign_on_lock_setting_t, 0x1 );
    };                                                            
};
SDK_VERIFY( struct wil::feature_traits_feature_automatic_sign_on_lock_setting_t, 0x1 );
