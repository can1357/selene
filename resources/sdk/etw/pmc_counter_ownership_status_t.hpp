#pragma once
#include <sdkgen/support_library.hpp>
#include "pmc_counter_owner_t.hpp"

#include "magic/pmc_counter_ownership_status_t.start.hpp"
namespace etw
{
    // [struct _ETW_PMC_COUNTER_OWNERSHIP_STATUS]
    // => Windows 11
    //
    struct pmc_counter_ownership_status_t                                      
    {                                                                          
        // Windows 11                                                          
        //                                                                     
        _m00 uint32_t                                       processor_number;    //{ +0x0000    } | .ProcessorNumber
        _m01 uint32_t                                       number_of_counters;  //{ +0x0004    } | .NumberOfCounters
        _m02 sdk::array<struct etw::pmc_counter_owner_t, 1> counter_owners;      //{ +0x0008    } | .CounterOwners
                                                                               
        SDK_MAGIC_PROPERTIES( "_ETW_PMC_COUNTER_OWNERSHIP_STATUS.$", 0x0, false, 0xa0903acd36489d20 );                   
        SDK_FIXED_SIZE( pmc_counter_ownership_status_t, 0x14 );                   
    };                                                                         
};
#include "magic/pmc_counter_ownership_status_t.end.hpp"
SDK_VERIFY( struct etw::pmc_counter_ownership_status_t, 0x14 );
