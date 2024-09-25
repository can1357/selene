#pragma once
#include <sdkgen/support_library.hpp>
#include "dynamic_bitmap_t.hpp"
#include "zero_cost_counts_t.hpp"
#include "pfn_cache_attribute_t.hpp"

namespace nt { struct mmpfn_t; }

#include "magic/system_node_nonpaged_pool_t.start.hpp"
namespace mi
{
    struct system_node_information_t;

    // [struct _MI_SYSTEM_NODE_NONPAGED_POOL]
    // => Windows 11
    //
    struct system_node_nonpaged_pool_t                                            
    {                                                                             
        using optimal_zeroing_attribute_t = sdk::array<sdk::array<enum mi::pfn_cache_attribute_t, 4>, 4>;                               
        using zero_cost_counts_t =          sdk::array<sdk::array<sdk::array<struct mi::zero_cost_counts_t, 2>, 2>, 3>;                               
                                                                                  
        // Windows 11                                                             
        //                                                                        
        _m00 struct mi::dynamic_bitmap_t           dynamic_bit_map_non_paged_pool;  //{ +0x0000    } | .DynamicBitMapNonPagedPool
        _m01 uint64_t                              cached_non_paged_pool_count;     //{ +0x0048    } | .CachedNonPagedPoolCount
        _m02 uint64_t                              non_paged_pool_spin_lock;        //{ +0x0050    } | .NonPagedPoolSpinLock
        _m03 struct nt::mmpfn_t*                   cached_non_paged_pool;           //{ +0x0058    } | .CachedNonPagedPool
        _m04 void*                                 non_paged_pool_first_va;         //{ +0x0060    } | .NonPagedPoolFirstVa
        _m05 void*                                 non_paged_pool_last_va;          //{ +0x0068    } | .NonPagedPoolLastVa
        _m06 optimal_zeroing_attribute_t           optimal_zeroing_attribute;       //{ +0x0070    } | .OptimalZeroingAttribute
        _m07 zero_cost_counts_t                    zero_cost_counts;                //{ +0x00b0    } | .ZeroCostCounts
        _m08 struct mi::system_node_information_t* system_node_information;         //{ +0x0170    } | .SystemNodeInformation
                                                                                  
        SDK_MAGIC_PROPERTIES( "_MI_SYSTEM_NODE_NONPAGED_POOL.$", 0x0, false, 0x8d0c9277e9b78ff7 );                               
        SDK_FIXED_SIZE( system_node_nonpaged_pool_t, 0x178 );                               
    };                                                                            
};
#include "magic/system_node_nonpaged_pool_t.end.hpp"
SDK_VERIFY( struct mi::system_node_nonpaged_pool_t, 0x178 );
