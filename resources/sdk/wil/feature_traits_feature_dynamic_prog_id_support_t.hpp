#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_DynamicProgIdSupport]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_dynamic_prog_id_support_t
    {                                                      
                                                           
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_DynamicProgIdSupport.$", 0x1, true, 0x5754f49a16a8baca );
        SDK_FIXED_SIZE( feature_traits_feature_dynamic_prog_id_support_t, 0x1 );
    };                                                     
};
SDK_VERIFY( struct wil::feature_traits_feature_dynamic_prog_id_support_t, 0x1 );
