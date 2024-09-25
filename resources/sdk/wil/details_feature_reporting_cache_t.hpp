#pragma once
#include <sdkgen/support_library.hpp>
#include "details_recorded_state_t.hpp"
#include "details_reported_state_t.hpp"

#include "magic/details_feature_reporting_cache_t.start.hpp"
namespace wil
{
    // [struct wil_details_FeatureReportingCache]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct details_feature_reporting_cache_t              
    {                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                
        _m00 union wil::details_reported_state_t reported;  //{ +0x0000    +0x0000    +0x0000    } | .reported
        _m01 union wil::details_recorded_state_t recorded;  //{ +0x0004    +0x0004    +0x0004    } | .recorded
                                                          
        SDK_MAGIC_PROPERTIES( "wil_details_FeatureReportingCache.$", 0x8, true, 0xa4d09e3b25b0e658 );         
        SDK_FIXED_SIZE( details_feature_reporting_cache_t, 0x8 );         
    };                                                    
};
#include "magic/details_feature_reporting_cache_t.end.hpp"
SDK_VERIFY( struct wil::details_feature_reporting_cache_t, 0x8 );
