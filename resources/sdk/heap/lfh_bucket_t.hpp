#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/srwlock_t.hpp"
#include "lfh_subsegment_owner_t.hpp"

#include "magic/lfh_bucket_t.start.hpp"
namespace heap
{
    struct lfh_affinity_slot_t;

    // [struct _HEAP_LFH_BUCKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lfh_bucket_t                                                           
    {                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                        
        _m00 struct heap::lfh_subsegment_owner_t           state;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .State
        _m01 uint64_t                                      total_block_count;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .TotalBlockCount
        _m02 uint64_t                                      total_subsegment_count;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .TotalSubsegmentCount
        _m03 uint32_t                                      reciprocal_block_size;   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ReciprocalBlockSize
        _m04 uint8_t                                       shift;                   //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .Shift
        _m05 varuint_t                                     contention_count;        //{ +0x0058    +0x004d    +0x004d    +0x004d    } | .ContentionCount
        _m06 sdk::variant<struct rtl::srwlock_t, uint64_t> affinity_mapping_lock;   //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .AffinityMappingLock
        _m07 uint8_t*                                      proc_affinity_mapping;   //{ +0x0060    +0x0058    +0x0058    +0x0058    } | .ProcAffinityMapping
        _m08 struct heap::lfh_affinity_slot_t**            affinity_slots;          //{ +0x0068    +0x0060    +0x0060    +0x0060    } | .AffinitySlots
                                                                                  
        SDK_MAGIC_PROPERTIES( "_HEAP_LFH_BUCKET.$", 0x68, true, 0x1c46bcbd717483a7 );                       
        SDK_DYNAMIC_SIZE( lfh_bucket_t );                                         
    };                                                                            
};
#include "magic/lfh_bucket_t.end.hpp"
