#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_extended_item_pmc_counters_t.start.hpp"
namespace win
{
    // [struct _EVENT_EXTENDED_ITEM_PMC_COUNTERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_extended_item_pmc_counters_t
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                   
        _m00 sdk::array<uint64_t, 1> counter;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Counter
                                             
        SDK_MAGIC_PROPERTIES( "_EVENT_EXTENDED_ITEM_PMC_COUNTERS.$", 0x8, true, 0xfc8e5b22d17b6c05 );        
        SDK_FIXED_SIZE( event_extended_item_pmc_counters_t, 0x8 );        
    };                                       
};
#include "magic/event_extended_item_pmc_counters_t.end.hpp"
SDK_VERIFY( struct win::event_extended_item_pmc_counters_t, 0x8 );
