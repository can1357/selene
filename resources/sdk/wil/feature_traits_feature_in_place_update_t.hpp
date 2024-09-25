#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_InPlaceUpdate]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_traits_feature_in_place_update_t
    {                                              
                                                   
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_InPlaceUpdate.$", 0x1, true, 0xa53707892173fb7b );
        SDK_FIXED_SIZE( feature_traits_feature_in_place_update_t, 0x1 );
    };                                             
};
SDK_VERIFY( struct wil::feature_traits_feature_in_place_update_t, 0x1 );
