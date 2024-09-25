#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_AllowSingleViewAppsForAssignedAccess]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_allow_single_view_apps_for_assigned_access_t
    {                                                                         
                                                                              
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_AllowSingleViewAppsForAssignedAccess.$", 0x1, true, 0xc5bf07be1c60484b );
        SDK_FIXED_SIZE( feature_traits_feature_allow_single_view_apps_for_assigned_access_t, 0x1 );
    };                                                                        
};
SDK_VERIFY( struct wil::feature_traits_feature_allow_single_view_apps_for_assigned_access_t, 0x1 );
