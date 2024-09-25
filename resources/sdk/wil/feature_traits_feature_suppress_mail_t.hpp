#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_SuppressMail]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_suppress_mail_t
    {                                            
                                                 
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_SuppressMail.$", 0x1, true, 0x3d34f289b2e322b7 );
        SDK_FIXED_SIZE( feature_traits_feature_suppress_mail_t, 0x1 );
    };                                           
};
SDK_VERIFY( struct wil::feature_traits_feature_suppress_mail_t, 0x1 );
