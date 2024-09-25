#pragma once
#include <sdkgen/support_library.hpp>
#include "heap_pool_node_t.hpp"
#include "../rtlp/hp_heap_manager_t.hpp"

namespace ntdll { struct segment_heap_t; }

#include "magic/pool_heap_manager_state_t.start.hpp"
namespace ex
{
    // [struct _EX_POOL_HEAP_MANAGER_STATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pool_heap_manager_state_t                                      
    {                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                
        _m00 struct rtlp::hp_heap_manager_t               heap_manager;     //{ +0x0000    +0x0000    +0x0000    } | .HeapManager
        _m01 uint32_t                                     number_of_pools;  //{ +0x38d0    +0x38e0    +0x38d0    } | .NumberOfPools
        _m02 sdk::array<struct ex::heap_pool_node_t, 64>  pool_node;        //{ +0x3900    +0x3900    +0x3900    } | .PoolNode
        _m03 sdk::array<struct ntdll::segment_heap_t*, 4> special_heaps;    //{ +0x86900    +0x86900    +0x86900    } | .SpecialHeaps
                                                                          
        SDK_MAGIC_PROPERTIES( "_EX_POOL_HEAP_MANAGER_STATE.$", 0x86940, true, 0x9d904465b6bf5007 );                
        SDK_FIXED_SIZE( pool_heap_manager_state_t, 0x86940 );                
    };                                                                    
};
#include "magic/pool_heap_manager_state_t.end.hpp"
SDK_VERIFY( struct ex::pool_heap_manager_state_t, 0x86940 );
