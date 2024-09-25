#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_PinMigration]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_pin_migration_t
    {                                            
                                                 
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_PinMigration.$", 0x1, true, 0x53c1b982c332aa84 );
        SDK_FIXED_SIZE( feature_traits_feature_pin_migration_t, 0x1 );
    };                                           
};
SDK_VERIFY( struct wil::feature_traits_feature_pin_migration_t, 0x1 );
