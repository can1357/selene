#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/dynamic_hash_table_t.hpp"
#include "k_spin_lock_manual_construct_t.hpp"

#include "magic/stack_trace_table_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_STACK_TRACE_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stack_trace_table_t                                    
    {                                                             
        using lock_t = sdk::variant<uint64_t, class ndis::k_spin_lock_manual_construct_t>;                    
                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                        
        _m00 lock_t                           lock;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 uint8_t                          allocated;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Allocated
        _m02 uint8_t                          collisions;           //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .Collisions
        _m03 uint8_t                          dropped_stacks;       //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .DroppedStacks
        _m04 uint8_t                          num_stack_frames;     //{ +0x000b    +0x000b    +0x000b    +0x000b    } | .NumStackFrames
        _m05 struct rtl::dynamic_hash_table_t hash_table;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HashTable
        _m06 uint32_t                         allocation_failures;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .AllocationFailures
                                                                  
        SDK_MAGIC_PROPERTIES( "_NDIS_STACK_TRACE_TABLE.$", 0x40, true, 0x99ba0b0c49303235 );                    
        SDK_FIXED_SIZE( stack_trace_table_t, 0x40 );                    
    };                                                            
};
#include "magic/stack_trace_table_t.end.hpp"
SDK_VERIFY( struct ndis::stack_trace_table_t, 0x40 );
