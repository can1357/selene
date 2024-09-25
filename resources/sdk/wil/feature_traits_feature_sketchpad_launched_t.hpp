#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_SketchpadLaunched]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_sketchpad_launched_t
    {                                                 
                                                      
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_SketchpadLaunched.$", 0x1, true, 0x4ac721417281c040 );
        SDK_FIXED_SIZE( feature_traits_feature_sketchpad_launched_t, 0x1 );
    };                                                
};
SDK_VERIFY( struct wil::feature_traits_feature_sketchpad_launched_t, 0x1 );
