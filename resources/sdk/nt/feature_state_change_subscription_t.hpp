#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct FEATURE_STATE_CHANGE_SUBSCRIPTION__]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_state_change_subscription_t
    {                                         
                                              
        SDK_MAGIC_PROPERTIES( "FEATURE_STATE_CHANGE_SUBSCRIPTION__.$", 0x4, true, 0x2d8339cf43d78ed4 );
        SDK_FIXED_SIZE( feature_state_change_subscription_t, 0x4 );
    };                                        
};
SDK_VERIFY( struct nt::feature_state_change_subscription_t, 0x4 );
