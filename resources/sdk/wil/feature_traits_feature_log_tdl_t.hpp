#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_LogTDL]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_traits_feature_log_tdl_t
    {                                      
                                           
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_LogTDL.$", 0x1, true, 0x7d09144bb02a4943 );
        SDK_FIXED_SIZE( feature_traits_feature_log_tdl_t, 0x1 );
    };                                     
};
SDK_VERIFY( struct wil::feature_traits_feature_log_tdl_t, 0x1 );
