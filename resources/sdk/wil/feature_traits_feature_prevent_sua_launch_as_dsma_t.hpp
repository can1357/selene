#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_PreventSUALaunchAsDSMA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_traits_feature_prevent_sua_launch_as_dsma_t
    {                                                         
                                                              
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_PreventSUALaunchAsDSMA.$", 0x1, true, 0xcfef25469c849152 );
        SDK_FIXED_SIZE( feature_traits_feature_prevent_sua_launch_as_dsma_t, 0x1 );
    };                                                        
};
SDK_VERIFY( struct wil::feature_traits_feature_prevent_sua_launch_as_dsma_t, 0x1 );
