#pragma once
#include <sdkgen/support_library.hpp>
#include "system_feature_usage_subscription_update_entry_t.hpp"

#include "magic/system_feature_usage_subscription_update_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_FEATURE_USAGE_SUBSCRIPTION_UPDATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_feature_usage_subscription_update_t
    {                                                
        using updates_t = sdk::array<struct win::system_feature_usage_subscription_update_entry_t, 1>;             
                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                           
        _m00 uint32_t   update_count;                  //{ +0x0000    +0x0000    +0x0000    } | .UpdateCount
        _m01 updates_t  updates;                       //{ +0x0004    +0x0004    +0x0004    } | .Updates
                                                     
        SDK_MAGIC_PROPERTIES( "_SYSTEM_FEATURE_USAGE_SUBSCRIPTION_UPDATE.$", 0x18, true, 0x9cb4a0cc93a744d6 );             
        SDK_FIXED_SIZE( system_feature_usage_subscription_update_t, 0x18 );             
    };                                               
};
#include "magic/system_feature_usage_subscription_update_t.end.hpp"
SDK_VERIFY( struct win::system_feature_usage_subscription_update_t, 0x18 );
