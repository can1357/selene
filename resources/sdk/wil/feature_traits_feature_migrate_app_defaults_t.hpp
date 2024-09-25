#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_MigrateAppDefaults]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_migrate_app_defaults_t
    {                                                   
                                                        
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_MigrateAppDefaults.$", 0x1, true, 0xb1ad26e3318f2827 );
        SDK_FIXED_SIZE( feature_traits_feature_migrate_app_defaults_t, 0x1 );
    };                                                  
};
SDK_VERIFY( struct wil::feature_traits_feature_migrate_app_defaults_t, 0x1 );
