#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/block_settable_information_t.start.hpp"
namespace heap
{
    // [struct _HEAP_BLOCK_SETTABLE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct block_settable_information_t          
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint64_t settable;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Settable
        _m01 uint16_t tag_index;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TagIndex
        _m02 uint16_t allocator_back_trace_index;  //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .AllocatorBackTraceIndex
                                                 
        SDK_MAGIC_PROPERTIES( "_HEAP_BLOCK_SETTABLE_INFORMATION.$", 0x10, true, 0xb20f22979fc82628 );                           
        SDK_FIXED_SIZE( block_settable_information_t, 0x10 );                           
    };                                           
};
#include "magic/block_settable_information_t.end.hpp"
SDK_VERIFY( struct heap::block_settable_information_t, 0x10 );
