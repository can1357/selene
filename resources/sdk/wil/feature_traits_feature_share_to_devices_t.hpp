#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_ShareToDevices]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_share_to_devices_t
    {                                               
                                                    
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_ShareToDevices.$", 0x1, true, 0x965eca1251eceda3 );
        SDK_FIXED_SIZE( feature_traits_feature_share_to_devices_t, 0x1 );
    };                                              
};
SDK_VERIFY( struct wil::feature_traits_feature_share_to_devices_t, 0x1 );
