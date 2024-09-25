#pragma once
#include <sdkgen/support_library.hpp>
#include "feature_usage_subscription_target_t.hpp"

#include "magic/feature_usage_subscription_details_t.start.hpp"
namespace rtl
{
    // [struct _RTL_FEATURE_USAGE_SUBSCRIPTION_DETAILS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_usage_subscription_details_t                                
    {                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                     
        _m00 uint32_t                                        feature_id;         //{ +0x0000    +0x0000    +0x0000    } | .FeatureId
        _m01 uint16_t                                        reporting_kind;     //{ +0x0004    +0x0004    +0x0004    } | .ReportingKind
        _m02 uint16_t                                        reporting_options;  //{ +0x0006    +0x0006    +0x0006    } | .ReportingOptions
        _m03 struct rtl::feature_usage_subscription_target_t reporting_target;   //{ +0x0008    +0x0008    +0x0008    } | .ReportingTarget
                                                                               
        SDK_MAGIC_PROPERTIES( "_RTL_FEATURE_USAGE_SUBSCRIPTION_DETAILS.$", 0x10, true, 0xad9710da900d7d1c );                  
        SDK_FIXED_SIZE( feature_usage_subscription_details_t, 0x10 );                  
    };                                                                         
};
#include "magic/feature_usage_subscription_details_t.end.hpp"
SDK_VERIFY( struct rtl::feature_usage_subscription_details_t, 0x10 );
