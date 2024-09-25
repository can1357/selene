#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_ReportOnRpcssCorruption]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_traits_feature_report_on_rpcss_corruption_t
    {                                                         
                                                              
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_ReportOnRpcssCorruption.$", 0x1, true, 0x1b844ff8632ff90d );
        SDK_FIXED_SIZE( feature_traits_feature_report_on_rpcss_corruption_t, 0x1 );
    };                                                        
};
SDK_VERIFY( struct wil::feature_traits_feature_report_on_rpcss_corruption_t, 0x1 );
