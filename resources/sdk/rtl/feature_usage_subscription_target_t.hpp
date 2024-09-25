#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/feature_usage_subscription_target_t.start.hpp"
namespace rtl
{
    // [struct _RTL_FEATURE_USAGE_SUBSCRIPTION_TARGET]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_usage_subscription_target_t
    {                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                
        _m00 sdk::array<uint32_t, 2> data;      //{ +0x0000    +0x0000    +0x0000    } | .Data
                                              
        SDK_MAGIC_PROPERTIES( "_RTL_FEATURE_USAGE_SUBSCRIPTION_TARGET.$", 0x8, true, 0x7d7d256a3b83a125 );     
        SDK_FIXED_SIZE( feature_usage_subscription_target_t, 0x8 );     
    };                                        
};
#include "magic/feature_usage_subscription_target_t.end.hpp"
SDK_VERIFY( struct rtl::feature_usage_subscription_target_t, 0x8 );
