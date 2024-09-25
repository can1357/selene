#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"
#include "../rtl/bitmap_ex_t.hpp"

namespace nt { struct mmpte_t; }

#include "magic/paged_pool_info_t.start.hpp"
namespace mm
{
    // [struct _MM_PAGED_POOL_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct paged_pool_info_t                                   
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                     
        _m00 struct ex::push_lock_t  lock;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 uint64_t                maximum_size;               //{ +0x0020    +0x0008    +0x0008    +0x0008    } | .MaximumSize
        _m02 uint64_t                allocated_paged_pool;       //{ +0x0030    +0x0010    +0x0010    +0x0010    } | .AllocatedPagedPool
                                                               
        // Windows 10 v1607                                    
        //                                                     
        _m03 struct rtl::bitmap_ex_t paged_pool_allocation_map;  //{ +0x0008    } | .PagedPoolAllocationMap
        _m04 struct nt::mmpte_t*     first_pte_for_paged_pool;   //{ +0x0018    } | .FirstPteForPagedPool
        _m05 uint64_t                paged_pool_hint;            //{ +0x0028    } | .PagedPoolHint
                                                               
        SDK_MAGIC_PROPERTIES( "_MM_PAGED_POOL_INFO.$", 0x18, true, 0x25051d4edfdcc82a );                          
        SDK_DYNAMIC_SIZE( paged_pool_info_t );                          
    };                                                         
};
#include "magic/paged_pool_info_t.end.hpp"
