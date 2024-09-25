#pragma once
#include <sdkgen/support_library.hpp>
#include "feature_usage_subscription_details_t.hpp"

#include "magic/feature_usage_subscription_table_t.start.hpp"
namespace rtl
{
    // [struct _RTL_FEATURE_USAGE_SUBSCRIPTION_TABLE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_usage_subscription_table_t    
    {                                            
        using subscriptions_t = sdk::array<struct rtl::feature_usage_subscription_details_t, 1>;                   
                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                       
        _m00 uint32_t         subscription_count;  //{ +0x0000    +0x0000    +0x0000    } | .SubscriptionCount
        _m01 subscriptions_t  subscriptions;       //{ +0x0004    +0x0004    +0x0004    } | .Subscriptions
                                                 
        SDK_MAGIC_PROPERTIES( "_RTL_FEATURE_USAGE_SUBSCRIPTION_TABLE.$", 0x14, true, 0x752eda045f34016 );                   
        SDK_FIXED_SIZE( feature_usage_subscription_table_t, 0x14 );                   
    };                                           
};
#include "magic/feature_usage_subscription_table_t.end.hpp"
SDK_VERIFY( struct rtl::feature_usage_subscription_table_t, 0x14 );
