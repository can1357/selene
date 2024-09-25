#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_AppDefaultsSMode]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_app_defaults_s_mode_t
    {                                                  
                                                       
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_AppDefaultsSMode.$", 0x1, true, 0xda09eeebc21a4d6d );
        SDK_FIXED_SIZE( feature_traits_feature_app_defaults_s_mode_t, 0x1 );
    };                                                 
};
SDK_VERIFY( struct wil::feature_traits_feature_app_defaults_s_mode_t, 0x1 );
