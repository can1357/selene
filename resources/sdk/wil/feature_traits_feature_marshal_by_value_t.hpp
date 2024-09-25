#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_MarshalByValue]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_traits_feature_marshal_by_value_t
    {                                               
                                                    
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_MarshalByValue.$", 0x1, true, 0xf206d3b643500fa8 );
        SDK_FIXED_SIZE( feature_traits_feature_marshal_by_value_t, 0x1 );
    };                                              
};
SDK_VERIFY( struct wil::feature_traits_feature_marshal_by_value_t, 0x1 );
