#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_LocalUsersAndGroups]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_local_users_and_groups_t
    {                                                     
                                                          
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_LocalUsersAndGroups.$", 0x1, true, 0x1d925d79bffb1b03 );
        SDK_FIXED_SIZE( feature_traits_feature_local_users_and_groups_t, 0x1 );
    };                                                    
};
SDK_VERIFY( struct wil::feature_traits_feature_local_users_and_groups_t, 0x1 );
