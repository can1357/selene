#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fake_heap_entry_t.start.hpp"
namespace nt
{
    // [struct _FAKE_HEAP_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fake_heap_entry_t        
    {                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint64_t size;           //{ +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint64_t previous_size;  //{ +0x0008    +0x0008    +0x0008    } | .PreviousSize
                                    
        SDK_MAGIC_PROPERTIES( "_FAKE_HEAP_ENTRY.$", 0x10, true, 0x7a9fb4b84c6a1150 );              
        SDK_FIXED_SIZE( fake_heap_entry_t, 0x10 );              
    };                              
};
#include "magic/fake_heap_entry_t.end.hpp"
SDK_VERIFY( struct nt::fake_heap_entry_t, 0x10 );
