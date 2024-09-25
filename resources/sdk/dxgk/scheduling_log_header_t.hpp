#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scheduling_log_header_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_SCHEDULING_LOG_HEADER]
    // => WDK 10 (NV)
    //
    struct scheduling_log_header_t                      
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 uint32_t first_free_entry_index;             //{ +0x0000    } | .FirstFreeEntryIndex
        _m01 uint32_t wraparound_count;                   //{ +0x0004    } | .WraparoundCount
        _m02 uint64_t atomic_wraparound_and_entry_index;  //{ +0x0000    } | .AtomicWraparoundAndEntryIndex
        _m03 uint64_t number_of_entries;                  //{ +0x0008    } | .NumberOfEntries
                                                        
        SDK_NONVOL_PROPERTIES( "_DXGK_SCHEDULING_LOG_HEADER.$", 0x0, false, 0x63bde7b49cb65976 );                                  
        SDK_FIXED_SIZE( scheduling_log_header_t, 0x20 );                                  
    };                                                  
};
#include "magic/scheduling_log_header_t.end.hpp"
SDK_VERIFY( struct dxgk::scheduling_log_header_t, 0x20 );
