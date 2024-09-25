#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_TaskbarPinMigration]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_taskbar_pin_migration_t
    {                                                    
                                                         
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_TaskbarPinMigration.$", 0x1, true, 0xa793caa11f15f7d1 );
        SDK_FIXED_SIZE( feature_traits_feature_taskbar_pin_migration_t, 0x1 );
    };                                                   
};
SDK_VERIFY( struct wil::feature_traits_feature_taskbar_pin_migration_t, 0x1 );
