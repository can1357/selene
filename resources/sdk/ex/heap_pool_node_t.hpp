#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/dynamic_lookaside_t.hpp"

namespace ntdll { struct segment_heap_t; }

#include "magic/heap_pool_node_t.start.hpp"
namespace ex
{
    // [struct _EX_HEAP_POOL_NODE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct heap_pool_node_t                                            
    {                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                             
        _m00 sdk::array<struct ntdll::segment_heap_t*, 4>   heaps;       //{ +0x0000    +0x0000    +0x0000    } | .Heaps
        _m01 sdk::array<struct rtl::dynamic_lookaside_t, 2> lookasides;  //{ +0x0040    +0x0040    +0x0040    } | .Lookasides
                                                                       
        SDK_MAGIC_PROPERTIES( "_EX_HEAP_POOL_NODE.$", 0x20c0, true, 0xc631b955db645d3e );           
        SDK_FIXED_SIZE( heap_pool_node_t, 0x20c0 );                    
    };                                                                 
};
#include "magic/heap_pool_node_t.end.hpp"
SDK_VERIFY( struct ex::heap_pool_node_t, 0x20c0 );
