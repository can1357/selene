#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/details_usage_subscription_data_t.start.hpp"
namespace wil
{
    // [struct _wil_details_UsageSubscriptionData]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct details_usage_subscription_data_t 
    {                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t feature_id;              //{ +0x0000    +0x0000    +0x0000    } | .featureId
        _m01 uint16_t service_reporting_kind;  //{ +0x0004    +0x0004    +0x0004    } | .serviceReportingKind
                                             
        SDK_MAGIC_PROPERTIES( "_wil_details_UsageSubscriptionData.$", 0x8, true, 0x60581bb0a592c429 );                       
        SDK_FIXED_SIZE( details_usage_subscription_data_t, 0x8 );                       
    };                                       
};
#include "magic/details_usage_subscription_data_t.end.hpp"
SDK_VERIFY( struct wil::details_usage_subscription_data_t, 0x8 );
