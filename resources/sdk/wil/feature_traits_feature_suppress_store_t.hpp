#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_SuppressStore]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_suppress_store_t
    {                                             
                                                  
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_SuppressStore.$", 0x1, true, 0x83c5d9beff43d55b );
        SDK_FIXED_SIZE( feature_traits_feature_suppress_store_t, 0x1 );
    };                                            
};
SDK_VERIFY( struct wil::feature_traits_feature_suppress_store_t, 0x1 );
