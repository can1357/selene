#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/srwlock_t.hpp"

#include "magic/lfh_subsegment_owner_t.start.hpp"
namespace heap
{
    // [struct _HEAP_LFH_SUBSEGMENT_OWNER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lfh_subsegment_owner_t                                                     
    {                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                            
        _m00 uint1_t                                       is_bucket;                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .IsBucket
        _m01 uint8_t                                       bucket_index;                //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .BucketIndex
        _m02 uint8_t                                       slot_count;                  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .SlotCount
        _m03 uint8_t                                       slot_index;                  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .SlotIndex
        _m04 uint64_t                                      available_subsegment_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AvailableSubsegmentCount
        _m05 sdk::variant<struct rtl::srwlock_t, uint64_t> lock;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Lock
        _m06 nt::list_entry_t                              available_subsegment_list;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AvailableSubsegmentList
        _m07 nt::list_entry_t                              full_subsegment_list;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FullSubsegmentList
                                                                                      
        SDK_MAGIC_PROPERTIES( "_HEAP_LFH_SUBSEGMENT_OWNER.$", 0x38, true, 0xe04c0ab0c8f98151 );                           
        SDK_FIXED_SIZE( lfh_subsegment_owner_t, 0x38 );                               
    };                                                                                
};
#include "magic/lfh_subsegment_owner_t.end.hpp"
SDK_VERIFY( struct heap::lfh_subsegment_owner_t, 0x38 );
