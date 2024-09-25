#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_PerAppRuntimeBroker]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_traits_feature_per_app_runtime_broker_t
    {                                                     
                                                          
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_PerAppRuntimeBroker.$", 0x1, true, 0xfded3f55e35a592b );
        SDK_FIXED_SIZE( feature_traits_feature_per_app_runtime_broker_t, 0x1 );
    };                                                    
};
SDK_VERIFY( struct wil::feature_traits_feature_per_app_runtime_broker_t, 0x1 );
