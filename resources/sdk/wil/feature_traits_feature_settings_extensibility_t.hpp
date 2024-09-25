#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_SettingsExtensibility]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_settings_extensibility_t
    {                                                     
                                                          
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_SettingsExtensibility.$", 0x1, true, 0x27932c07b5ef70bc );
        SDK_FIXED_SIZE( feature_traits_feature_settings_extensibility_t, 0x1 );
    };                                                    
};
SDK_VERIFY( struct wil::feature_traits_feature_settings_extensibility_t, 0x1 );
