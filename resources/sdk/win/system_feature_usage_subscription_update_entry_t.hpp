#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/feature_usage_subscription_details_t.hpp"

#include "magic/system_feature_usage_subscription_update_entry_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_FEATURE_USAGE_SUBSCRIPTION_UPDATE_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_feature_usage_subscription_update_entry_t           
    {                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                            
        _m00 uint32_t                                         remove;   //{ +0x0000    +0x0000    +0x0000    } | .Remove
        _m01 struct rtl::feature_usage_subscription_details_t details;  //{ +0x0004    +0x0004    +0x0004    } | .Details
                                                                      
        SDK_MAGIC_PROPERTIES( "_SYSTEM_FEATURE_USAGE_SUBSCRIPTION_UPDATE_ENTRY.$", 0x14, true, 0x2ab17c058cf0c4fa );        
        SDK_FIXED_SIZE( system_feature_usage_subscription_update_entry_t, 0x14 );        
    };                                                                
};
#include "magic/system_feature_usage_subscription_update_entry_t.end.hpp"
SDK_VERIFY( struct win::system_feature_usage_subscription_update_entry_t, 0x14 );
