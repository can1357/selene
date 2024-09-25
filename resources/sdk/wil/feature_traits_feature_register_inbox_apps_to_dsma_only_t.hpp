#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_RegisterInboxAppsToDSMAOnly]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_traits_feature_register_inbox_apps_to_dsma_only_t
    {                                                               
                                                                    
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_RegisterInboxAppsToDSMAOnly.$", 0x1, true, 0xa67aebeb0b3d363e );
        SDK_FIXED_SIZE( feature_traits_feature_register_inbox_apps_to_dsma_only_t, 0x1 );
    };                                                              
};
SDK_VERIFY( struct wil::feature_traits_feature_register_inbox_apps_to_dsma_only_t, 0x1 );
