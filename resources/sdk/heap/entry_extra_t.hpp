#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/entry_extra_t.start.hpp"
namespace heap
{
    // [struct _HEAP_ENTRY_EXTRA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct entry_extra_t                         
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint16_t allocator_back_trace_index;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AllocatorBackTraceIndex
        _m01 uint16_t tag_index;                   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .TagIndex
        _m02 uint64_t settable;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Settable
        _m03 uint64_t zero_init;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ZeroInit
        _m04 uint64_t zero_init1;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ZeroInit1
                                                 
        SDK_MAGIC_PROPERTIES( "_HEAP_ENTRY_EXTRA.$", 0x10, true, 0xb0aede2cc45cc137 );                           
        SDK_FIXED_SIZE( entry_extra_t, 0x10 );                           
    };                                           
};
#include "magic/entry_extra_t.end.hpp"
SDK_VERIFY( struct heap::entry_extra_t, 0x10 );
