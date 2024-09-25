#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_AutoRecoverEdgeAfterCrash]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_auto_recover_edge_after_crash_t
    {                                                            
                                                                 
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_AutoRecoverEdgeAfterCrash.$", 0x1, true, 0x62a877d19f70d4e1 );
        SDK_FIXED_SIZE( feature_traits_feature_auto_recover_edge_after_crash_t, 0x1 );
    };                                                           
};
SDK_VERIFY( struct wil::feature_traits_feature_auto_recover_edge_after_crash_t, 0x1 );
