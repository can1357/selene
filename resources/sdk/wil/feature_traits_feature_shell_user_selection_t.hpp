#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_ShellUserSelection]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_traits_feature_shell_user_selection_t
    {                                                   
                                                        
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_ShellUserSelection.$", 0x1, true, 0x14e185b3a672d30f );
        SDK_FIXED_SIZE( feature_traits_feature_shell_user_selection_t, 0x1 );
    };                                                  
};
SDK_VERIFY( struct wil::feature_traits_feature_shell_user_selection_t, 0x1 );
