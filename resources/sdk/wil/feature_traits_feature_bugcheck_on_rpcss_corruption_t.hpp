#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_BugcheckOnRpcssCorruption]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_traits_feature_bugcheck_on_rpcss_corruption_t
    {                                                           
                                                                
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_BugcheckOnRpcssCorruption.$", 0x1, true, 0xcfa0f3d62e181c9f );
        SDK_FIXED_SIZE( feature_traits_feature_bugcheck_on_rpcss_corruption_t, 0x1 );
    };                                                          
};
SDK_VERIFY( struct wil::feature_traits_feature_bugcheck_on_rpcss_corruption_t, 0x1 );
