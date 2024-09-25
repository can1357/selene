#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_PackagedServices]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_packaged_services_t
    {                                                
                                                     
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_PackagedServices.$", 0x1, true, 0xfe310408f306c47 );
        SDK_FIXED_SIZE( feature_traits_feature_packaged_services_t, 0x1 );
    };                                               
};
SDK_VERIFY( struct wil::feature_traits_feature_packaged_services_t, 0x1 );
