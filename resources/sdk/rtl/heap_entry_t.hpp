#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/heap_entry_t.start.hpp"
namespace rtl
{
    // [struct _RTL_HEAP_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct heap_entry_t                          
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint64_t size;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t flags;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m02 uint16_t allocator_back_trace_index;  //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .AllocatorBackTraceIndex
        _m03 uint64_t settable;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Settable
        _m04 uint32_t tag;                         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Tag
        _m05 uint64_t committed_size;              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CommittedSize
        _m06 void*    first_block;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .FirstBlock
                                                 
        SDK_NONVOL_PROPERTIES( "_RTL_HEAP_ENTRY.$", 0x20, true, 0x767236893a5c5b30 );                           
        SDK_FIXED_SIZE( heap_entry_t, 0x20 );                           
    };                                           
};
#include "magic/heap_entry_t.end.hpp"
SDK_VERIFY( struct rtl::heap_entry_t, 0x20 );
