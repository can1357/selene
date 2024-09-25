#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/details_feature_usage_srum_t.start.hpp"
namespace wil
{
    // [struct wil_details_FeatureUsageSRUM]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct details_feature_usage_srum_t      
    {                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t feature_id;              //{ +0x0000    +0x0000    +0x0000    } | .featureId
        _m01 uint16_t service_reporting_kind;  //{ +0x0004    +0x0004    +0x0004    } | .serviceReportingKind
        _m02 uint32_t usage_count;             //{ +0x0008    +0x0008    +0x0008    } | .usageCount
                                             
        SDK_MAGIC_PROPERTIES( "wil_details_FeatureUsageSRUM.$", 0xc, true, 0x6a3f8d844455163b );                       
        SDK_FIXED_SIZE( details_feature_usage_srum_t, 0xc );                       
    };                                       
};
#include "magic/details_feature_usage_srum_t.end.hpp"
SDK_VERIFY( struct wil::details_feature_usage_srum_t, 0xc );
