#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resource_performance_data_t.start.hpp"
namespace wdf
{
    // [struct _RESOURCE_PERFORMANCE_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct resource_performance_data_t                              
    {                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                          
        _m00 uint32_t                         active_resource_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ActiveResourceCount
        _m01 uint32_t                         total_resource_count;   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .TotalResourceCount
        _m02 uint32_t                         exclusive_acquire;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ExclusiveAcquire
        _m03 uint32_t                         shared_first_level;     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .SharedFirstLevel
        _m04 uint32_t                         shared_second_level;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SharedSecondLevel
        _m05 uint32_t                         starve_first_level;     //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .StarveFirstLevel
        _m06 uint32_t                         starve_second_level;    //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .StarveSecondLevel
        _m07 uint32_t                         wait_for_exclusive;     //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .WaitForExclusive
        _m08 uint32_t                         owner_table_expands;    //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .OwnerTableExpands
        _m09 uint32_t                         maximum_table_expand;   //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .MaximumTableExpand
        _m10 sdk::array<nt::list_entry_t, 64> hash_table;             //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .HashTable
                                                                    
        SDK_NONVOL_PROPERTIES( "_RESOURCE_PERFORMANCE_DATA.$", 0x428, true, 0x746daf7efb34b850 );                      
        SDK_FIXED_SIZE( resource_performance_data_t, 0x428 );                      
    };                                                              
};
#include "magic/resource_performance_data_t.end.hpp"
SDK_VERIFY( struct wdf::resource_performance_data_t, 0x428 );
