#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/partition_flags_t.start.hpp"
namespace mi
{
    // [struct _MI_PARTITION_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct partition_flags_t                          
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                            
        _m00 uint1_t being_deleted;                     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .BeingDeleted
        _m01 uint1_t page_lists_initialized;            //{ +0x0000@2  +0x0000@1  +0x0000@1  +0x0000@1  } | .PageListsInitialized
        _m02 uint1_t store_reserved_pages_charged;      //{ +0x0000@3  +0x0000@2  +0x0000@2  +0x0000@2  } | .StoreReservedPagesCharged
        _m03 uint1_t pure_holding_partition;            //{ +0x0000@4  +0x0000@5  +0x0000@4  +0x0000@5  } | .PureHoldingPartition
                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                            
        _m04 uint1_t use_protected_slab_allocators;     //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .UseProtectedSlabAllocators
        _m05 uint1_t zero_pages_optional;               //{ +0x0000@6  +0x0000@5  +0x0000@6  } | .ZeroPagesOptional
        _m06 uint1_t background_zeroing_disabled;       //{ +0x0000@7  +0x0000@6  +0x0000@7  } | .BackgroundZeroingDisabled
                                                      
        // Windows 10 v2004, Windows 10 v20H2                                 
        //                                            
        _m07 uint1_t use_unprotected_slab_allocators;   //{ +0x0000@4  +0x0000@4  } | .UseUnprotectedSlabAllocators
                                                      
        // Windows 11                                 
        //                                            
        _m08 uint1_t special_purpose_memory_partition;  //{ +0x0000@7  } | .SpecialPurposeMemoryPartition
                                                      
        // Windows 10 v1607                                 
        //                                            
        _m09 uint1_t object_initialized;                //{ +0x0000@1  } | .ObjectInitialized
                                                      
        SDK_MAGIC_PROPERTIES( "_MI_PARTITION_FLAGS.$", 0x4, true, 0x4d7cc71dc7bca884 );                                 
        SDK_FIXED_SIZE( partition_flags_t, 0x4 );                                 
    };                                                
};
#include "magic/partition_flags_t.end.hpp"
SDK_VERIFY( struct mi::partition_flags_t, 0x4 );
