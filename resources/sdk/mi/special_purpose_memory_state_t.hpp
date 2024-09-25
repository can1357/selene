#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"

namespace nt { struct epartition_t; }

#include "magic/special_purpose_memory_state_t.start.hpp"
namespace mi
{
    // [struct _MI_SPECIAL_PURPOSE_MEMORY_STATE]
    // => Windows 11
    //
    struct special_purpose_memory_state_t                                    
    {                                                                        
        // Windows 11                                                        
        //                                                                   
        _m00 nt::list_entry_t         types_list;                              //{ +0x0000    } | .TypesList
        _m01 nt::list_entry_t         cache_eligible_list;                     //{ +0x0010    } | .CacheEligibleList
        _m02 struct nt::epartition_t* regular_memory_parent_partition_object;  //{ +0x0000    } | .RegularMemoryParentPartitionObject
        _m03 void*                    special_purpose_memory_parent_handle;    //{ +0x0008    } | .SpecialPurposeMemoryParentHandle
        _m04 sdk::array<uint64_t, 4>  attributes;                              //{ +0x0010    } | .Attributes
        _m05 struct ex::push_lock_t   lock;                                    //{ +0x0030    } | .Lock
                                                                             
        SDK_MAGIC_PROPERTIES( "_MI_SPECIAL_PURPOSE_MEMORY_STATE.$", 0x0, false, 0x604cb1e7b6514a4f );                                       
        SDK_FIXED_SIZE( special_purpose_memory_state_t, 0x38 );                                       
    };                                                                       
};
#include "magic/special_purpose_memory_state_t.end.hpp"
SDK_VERIFY( struct mi::special_purpose_memory_state_t, 0x38 );
