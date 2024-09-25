#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_TurnOnNumLockDuringPinEntry]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_turn_on_num_lock_during_pin_entry_t
    {                                                                
                                                                     
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_TurnOnNumLockDuringPinEntry.$", 0x1, true, 0x29f7bfd363d67a24 );
        SDK_FIXED_SIZE( feature_traits_feature_turn_on_num_lock_during_pin_entry_t, 0x1 );
    };                                                               
};
SDK_VERIFY( struct wil::feature_traits_feature_turn_on_num_lock_during_pin_entry_t, 0x1 );
