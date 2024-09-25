#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_DismissWhenNotInForegroundDuringRegister]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_dismiss_when_not_in_foreground_during_register_t
    {                                                                             
                                                                                  
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_DismissWhenNotInForegroundDuringRegister.$", 0x1, true, 0x5c7b59a25b58dc13 );
        SDK_FIXED_SIZE( feature_traits_feature_dismiss_when_not_in_foreground_during_register_t, 0x1 );
    };                                                                            
};
SDK_VERIFY( struct wil::feature_traits_feature_dismiss_when_not_in_foreground_during_register_t, 0x1 );
