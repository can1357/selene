#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_TabIdStability]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_tab_id_stability_t
    {                                               
                                                    
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_TabIdStability.$", 0x1, true, 0xac7d80475b2538dc );
        SDK_FIXED_SIZE( feature_traits_feature_tab_id_stability_t, 0x1 );
    };                                              
};
SDK_VERIFY( struct wil::feature_traits_feature_tab_id_stability_t, 0x1 );
