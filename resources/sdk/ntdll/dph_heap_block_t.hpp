#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/balanced_links_t.hpp"

namespace rtl { struct trace_block_t; }

#include "magic/dph_heap_block_t.start.hpp"
namespace ntdll
{
    struct dph_heap_block_t;

    // [struct _DPH_HEAP_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dph_heap_block_t                                        
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                         
        _m00 struct ntdll::dph_heap_block_t* p_next_alloc;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pNextAlloc
        _m01 nt::list_entry_t                available_entry;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AvailableEntry
        _m02 struct rtl::balanced_links_t    table_links;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TableLinks
        _m03 uint8_t*                        p_user_allocation;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pUserAllocation
        _m04 uint8_t*                        p_virtual_block;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pVirtualBlock
        _m05 uint64_t                        n_virtual_block_size;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .nVirtualBlockSize
        _m06 uint64_t                        n_virtual_access_size;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .nVirtualAccessSize
        _m07 uint64_t                        n_user_requested_size;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .nUserRequestedSize
        _m08 uint64_t                        n_user_actual_size;     //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .nUserActualSize
        _m09 void*                           user_value;             //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .UserValue
        _m10 uint32_t                        user_flags;             //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .UserFlags
        _m11 struct rtl::trace_block_t*      stack_trace;            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .StackTrace
        _m12 nt::list_entry_t                adjacency_entry;        //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .AdjacencyEntry
        _m13 uint8_t*                        p_virtual_region;       //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .pVirtualRegion
                                                                   
        SDK_MAGIC_PROPERTIES( "_DPH_HEAP_BLOCK.$", 0x80, true, 0xb9bbd82c4257864d );                      
        SDK_FIXED_SIZE( dph_heap_block_t, 0x80 );                      
    };                                                             
};
#include "magic/dph_heap_block_t.end.hpp"
SDK_VERIFY( struct ntdll::dph_heap_block_t, 0x80 );
