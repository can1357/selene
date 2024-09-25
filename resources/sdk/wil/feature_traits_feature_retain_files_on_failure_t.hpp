#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_RetainFilesOnFailure]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_traits_feature_retain_files_on_failure_t
    {                                                      
                                                           
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_RetainFilesOnFailure.$", 0x1, true, 0x8cf33b5517d6fbdf );
        SDK_FIXED_SIZE( feature_traits_feature_retain_files_on_failure_t, 0x1 );
    };                                                     
};
SDK_VERIFY( struct wil::feature_traits_feature_retain_files_on_failure_t, 0x1 );
