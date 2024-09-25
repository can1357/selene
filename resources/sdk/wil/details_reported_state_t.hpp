#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/details_reported_state_t.start.hpp"
namespace wil
{
    // [union wil_details_ReportedState]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union details_reported_state_t                           
    {                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                   
        _m00 uint32_t exchange;                                //{ +0x0000    +0x0000    +0x0000    } | .exchange
        _m01 uint1_t  queued_for_reporting;                    //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .queuedForReporting
        _m02 uint1_t  reported_device_usage;                   //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .reportedDeviceUsage
        _m03 uint1_t  reported_device_potential;               //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .reportedDevicePotential
        _m04 uint1_t  reported_device_opportunity;             //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .reportedDeviceOpportunity
        _m05 uint1_t  reported_device_potential_opportunity;   //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .reportedDevicePotentialOpportunity
        _m06 uint9_t  usage_count;                             //{ +0x0000@5  +0x0000@5  +0x0000@5  } | .usageCount
        _m07 uint1_t  usage_count_represents_potential;        //{ +0x0000@14 +0x0000@14 +0x0000@14 } | .usageCountRepresentsPotential
        _m08 uint7_t  opportunity_count;                       //{ +0x0000@15 +0x0000@15 +0x0000@15 } | .opportunityCount
        _m09 uint1_t  opportunity_count_represents_potential;  //{ +0x0000@22 +0x0000@22 +0x0000@22 } | .opportunityCountRepresentsPotential
                                                             
        SDK_MAGIC_PROPERTIES( "wil_details_ReportedState.$", 0x4, true, 0x7ce16b35d8bd2693 );                                       
        SDK_FIXED_SIZE( details_reported_state_t, 0x4 );                                       
    };                                                       
};
#include "magic/details_reported_state_t.end.hpp"
SDK_VERIFY( union wil::details_reported_state_t, 0x4 );
