#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/clone_block_flags_t.start.hpp"
namespace mi
{
    // [struct _MI_CLONE_BLOCK_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct clone_block_flags_t                          
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                              
        _m00 uint5_t  clone_protection;                   //{ +0x0000@59 +0x0000@59 +0x0000@55 +0x0000@59 } | .CloneProtection
                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                  
        //                                              
        _m01 uint59_t actual_clone_commit;                //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .ActualCloneCommit
                                                        
        // Windows 11                                   
        //                                              
        _m02 uint55_t reduced_commit_count;               //{ +0x0000@0  } | .ReducedCommitCount
        _m03 uint1_t  owning_partition_resident_charged;  //{ +0x0000@60 } | .OwningPartitionResidentCharged
        _m04 uint1_t  owning_partition_commit_charged;    //{ +0x0000@61 } | .OwningPartitionCommitCharged
        _m05 uint1_t  owning_partition_commit_floating;   //{ +0x0000@62 } | .OwningPartitionCommitFloating
        _m06 uint1_t  lock_bit;                           //{ +0x0000@63 } | .LockBit
                                                        
        SDK_MAGIC_PROPERTIES( "_MI_CLONE_BLOCK_FLAGS.$", 0x8, true, 0x147e9e1bca7db397 );                                  
        SDK_FIXED_SIZE( clone_block_flags_t, 0x8 );                                  
    };                                                  
};
#include "magic/clone_block_flags_t.end.hpp"
SDK_VERIFY( struct mi::clone_block_flags_t, 0x8 );
