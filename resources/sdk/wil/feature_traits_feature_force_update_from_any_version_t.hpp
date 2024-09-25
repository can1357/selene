#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_ForceUpdateFromAnyVersion]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_traits_feature_force_update_from_any_version_t
    {                                                            
                                                                 
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_ForceUpdateFromAnyVersion.$", 0x1, true, 0xb9f10e4275058e19 );
        SDK_FIXED_SIZE( feature_traits_feature_force_update_from_any_version_t, 0x1 );
    };                                                           
};
SDK_VERIFY( struct wil::feature_traits_feature_force_update_from_any_version_t, 0x1 );
