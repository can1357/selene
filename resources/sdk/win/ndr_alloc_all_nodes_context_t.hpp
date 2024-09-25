#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr_alloc_all_nodes_context_t.start.hpp"
namespace win
{
    // [struct NDR_ALLOC_ALL_NODES_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_alloc_all_nodes_context_t           
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m00 uint8_t* alloc_all_nodes_memory;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AllocAllNodesMemory
        _m01 uint8_t* alloc_all_nodes_memory_begin;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocAllNodesMemoryBegin
        _m02 uint8_t* alloc_all_nodes_memory_end;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AllocAllNodesMemoryEnd
        _m03 int32_t  is_byte_count;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IsByteCount
                                                   
        SDK_MAGIC_PROPERTIES( "NDR_ALLOC_ALL_NODES_CONTEXT.$", 0x20, true, 0xa21391d2ed4df45 );                             
        SDK_FIXED_SIZE( ndr_alloc_all_nodes_context_t, 0x20 );                             
    };                                             
};
#include "magic/ndr_alloc_all_nodes_context_t.end.hpp"
SDK_VERIFY( struct win::ndr_alloc_all_nodes_context_t, 0x20 );
