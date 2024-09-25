#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_ActivitiesInShell]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_activities_in_shell_t
    {                                                  
                                                       
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_ActivitiesInShell.$", 0x1, true, 0x1d0ad0fa7a695550 );
        SDK_FIXED_SIZE( feature_traits_feature_activities_in_shell_t, 0x1 );
    };                                                 
};
SDK_VERIFY( struct wil::feature_traits_feature_activities_in_shell_t, 0x1 );
