#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_SkipMsixManifestValidation]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_skip_msix_manifest_validation_t
    {                                                            
                                                                 
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_SkipMsixManifestValidation.$", 0x1, true, 0xbd00e1a8fe912963 );
        SDK_FIXED_SIZE( feature_traits_feature_skip_msix_manifest_validation_t, 0x1 );
    };                                                           
};
SDK_VERIFY( struct wil::feature_traits_feature_skip_msix_manifest_validation_t, 0x1 );
