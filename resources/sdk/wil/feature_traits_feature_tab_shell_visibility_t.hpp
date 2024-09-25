#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_TabShellVisibility]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_tab_shell_visibility_t
    {                                                   
                                                        
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_TabShellVisibility.$", 0x1, true, 0x74e23c964957f109 );
        SDK_FIXED_SIZE( feature_traits_feature_tab_shell_visibility_t, 0x1 );
    };                                                  
};
SDK_VERIFY( struct wil::feature_traits_feature_tab_shell_visibility_t, 0x1 );
