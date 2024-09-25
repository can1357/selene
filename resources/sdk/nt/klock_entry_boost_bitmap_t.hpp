#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/klock_entry_boost_bitmap_t.start.hpp"
namespace nt
{
    // [union _KLOCK_ENTRY_BOOST_BITMAP]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union klock_entry_boost_bitmap_t                   
    {                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                             
        _m00 varuint_t all_fields;                       //{ +0x0000    +0x0000    +0x0000    } | .AllFields
        _m01 varuint_t all_boosts;                       //{ +0x0000@0  +0x0000    +0x0000@0  } | .AllBoosts
        _m02 varuint_t cpu_boosts_bitmap;                //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .CpuBoostsBitmap
        _m03 uint1_t   io_boost;                         //{ +0x0000@15 +0x0000@30 +0x0000@15 } | .IoBoost
        _m04 uint1_t   io_qo_s_boost;                    //{ +0x0002@0  +0x0000@31 +0x0002@0  } | .IoQoSBoost
        _m05 uint8_t   io_normal_priority_waiter_count;  //{ +0x0002@1  +0x0004@0  +0x0002@1  } | .IoNormalPriorityWaiterCount
        _m06 uint7_t   io_qo_s_waiter_count;             //{ +0x0002@9  +0x0004@8  +0x0002@9  } | .IoQoSWaiterCount
                                                       
        // Windows 11                                  
        //                                             
        _m07 uint32_t  waiter_counts;                    //{ +0x0004    } | .WaiterCounts
                                                       
        SDK_MAGIC_PROPERTIES( "_KLOCK_ENTRY_BOOST_BITMAP.$", 0x4, true, 0xc265e445d123aff2 );                                
        SDK_DYNAMIC_SIZE( klock_entry_boost_bitmap_t );                                
    };                                                 
};
#include "magic/klock_entry_boost_bitmap_t.end.hpp"
