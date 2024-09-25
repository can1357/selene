#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_SuspendPerAppBroker]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_traits_feature_suspend_per_app_broker_t
    {                                                     
                                                          
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_SuspendPerAppBroker.$", 0x1, true, 0xad91d51f5b718061 );
        SDK_FIXED_SIZE( feature_traits_feature_suspend_per_app_broker_t, 0x1 );
    };                                                    
};
SDK_VERIFY( struct wil::feature_traits_feature_suspend_per_app_broker_t, 0x1 );
