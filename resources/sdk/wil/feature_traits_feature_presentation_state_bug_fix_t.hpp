#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_PresentationStateBugFix]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_presentation_state_bug_fix_t
    {                                                         
                                                              
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_PresentationStateBugFix.$", 0x1, true, 0x40771e9a180d849e );
        SDK_FIXED_SIZE( feature_traits_feature_presentation_state_bug_fix_t, 0x1 );
    };                                                        
};
SDK_VERIFY( struct wil::feature_traits_feature_presentation_state_bug_fix_t, 0x1 );
