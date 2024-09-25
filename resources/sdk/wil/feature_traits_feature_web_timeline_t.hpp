#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_WebTimeline]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_web_timeline_t
    {                                           
                                                
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_WebTimeline.$", 0x1, true, 0x64be76e425cc4f2a );
        SDK_FIXED_SIZE( feature_traits_feature_web_timeline_t, 0x1 );
    };                                          
};
SDK_VERIFY( struct wil::feature_traits_feature_web_timeline_t, 0x1 );
