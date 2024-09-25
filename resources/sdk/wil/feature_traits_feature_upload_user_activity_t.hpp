#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_UploadUserActivity]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_upload_user_activity_t
    {                                                   
                                                        
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_UploadUserActivity.$", 0x1, true, 0x252e1122893b6d9f );
        SDK_FIXED_SIZE( feature_traits_feature_upload_user_activity_t, 0x1 );
    };                                                  
};
SDK_VERIFY( struct wil::feature_traits_feature_upload_user_activity_t, 0x1 );
