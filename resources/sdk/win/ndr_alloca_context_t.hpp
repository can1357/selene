#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr_alloca_context_t.start.hpp"
namespace win
{
    // [struct _NDR_ALLOCA_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_alloca_context_t                           
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                
        _m00 uint8_t*                 p_block_pointer;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pBlockPointer
        _m01 nt::list_entry_t         memory_list;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MemoryList
        _m02 uint64_t                 bytes_remaining;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BytesRemaining
        _m03 sdk::array<uint8_t, 512> pre_allocated_block;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PreAllocatedBlock
                                                          
        SDK_MAGIC_PROPERTIES( "_NDR_ALLOCA_CONTEXT.$", 0x220, true, 0xb6f84917917c0542 );                    
        SDK_FIXED_SIZE( ndr_alloca_context_t, 0x220 );                    
    };                                                    
};
#include "magic/ndr_alloca_context_t.end.hpp"
SDK_VERIFY( struct win::ndr_alloca_context_t, 0x220 );
