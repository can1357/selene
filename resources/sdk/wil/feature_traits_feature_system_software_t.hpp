#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_SystemSoftware]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_traits_feature_system_software_t
    {                                              
                                                   
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_SystemSoftware.$", 0x1, true, 0xc609791e613d1df7 );
        SDK_FIXED_SIZE( feature_traits_feature_system_software_t, 0x1 );
    };                                             
};
SDK_VERIFY( struct wil::feature_traits_feature_system_software_t, 0x1 );
