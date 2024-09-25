#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_counter_t.hpp"

#include "magic/storage_counters_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_COUNTERS]
    // => WDK 10 (NV)
    //
    struct storage_counters_t                                               
    {                                                                       
        // WDK 10                                                           
        //                                                                  
        _m00 uint32_t                                    version;             //{ +0x0000    } | .Version
        _m01 uint32_t                                    size;                //{ +0x0004    } | .Size
        _m02 uint32_t                                    number_of_counters;  //{ +0x0008    } | .NumberOfCounters
        _m03 sdk::array<struct nt::storage_counter_t, 1> counters;            //{ +0x0010    } | .Counters
                                                                            
        SDK_NONVOL_PROPERTIES( "_STORAGE_COUNTERS.$", 0x0, false, 0x1f1be1ec08dcddb0 );                   
        SDK_FIXED_SIZE( storage_counters_t, 0x20 );                         
    };                                                                      
};
#include "magic/storage_counters_t.end.hpp"
SDK_VERIFY( struct nt::storage_counters_t, 0x20 );
