#pragma once
#include <sdkgen/support_library.hpp>
#include "vs_chunk_header_t.hpp"
#include "../rtl/balanced_node_t.hpp"

#include "magic/vs_chunk_free_header_t.start.hpp"
namespace heap
{
    // [struct _HEAP_VS_CHUNK_FREE_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vs_chunk_free_header_t                           
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                  
        _m00 struct heap::vs_chunk_header_t header;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint64_t                       overlaps_header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OverlapsHeader
        _m02 struct rtl::balanced_node_t    node;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Node
                                                            
        SDK_MAGIC_PROPERTIES( "_HEAP_VS_CHUNK_FREE_HEADER.$", 0x20, true, 0x8fb334855eed7b0b );                
        SDK_FIXED_SIZE( vs_chunk_free_header_t, 0x20 );                
    };                                                      
};
#include "magic/vs_chunk_free_header_t.end.hpp"
SDK_VERIFY( struct heap::vs_chunk_free_header_t, 0x20 );
