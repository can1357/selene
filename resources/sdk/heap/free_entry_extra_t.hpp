#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/free_entry_extra_t.start.hpp"
namespace heap
{
    // [struct _HEAP_FREE_ENTRY_EXTRA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct free_entry_extra_t               
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint16_t tag_index;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TagIndex
        _m01 uint16_t free_back_trace_index;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .FreeBackTraceIndex
                                            
        SDK_MAGIC_PROPERTIES( "_HEAP_FREE_ENTRY_EXTRA.$", 0x4, true, 0xf8226fb881f3a99c );                      
        SDK_FIXED_SIZE( free_entry_extra_t, 0x4 );                      
    };                                      
};
#include "magic/free_entry_extra_t.end.hpp"
SDK_VERIFY( struct heap::free_entry_extra_t, 0x4 );
