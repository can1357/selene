#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_MeetNow]
    // => Windows 10 v20H2
    //
    struct feature_traits_feature_meet_now_t
    {                                       
                                            
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_MeetNow.$", 0x1, true, 0x8621d140184f2e9f );
        SDK_FIXED_SIZE( feature_traits_feature_meet_now_t, 0x1 );
    };                                      
};
SDK_VERIFY( struct wil::feature_traits_feature_meet_now_t, 0x1 );
