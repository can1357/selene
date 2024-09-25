#pragma once
#include <sdkgen/support_library.hpp>
#include "c_internal_page_allocator_t.hpp"

#include "magic/c_page_allocator_t.start.hpp"
namespace win
{
    // [class CPageAllocator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_page_allocator_t                                      
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                        
        _m00 class win::c_internal_page_allocator_t pgalloc;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._pgalloc
        _m01 void*                                  h_heap;         //{ +0x0050    +0x0050    +0x0050    +0x0050    } | ._hHeap
        _m02 uint64_t                               cb_per_entry;   //{ +0x0058    +0x0058    +0x0058    +0x0058    } | ._cbPerEntry
        _m03 int32_t                                l_num_entries;  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | ._lNumEntries
                                                                  
        SDK_MAGIC_PROPERTIES( "CPageAllocator.$", 0x68, true, 0x64b702e01c5f6f94 );              
        SDK_FIXED_SIZE( c_page_allocator_t, 0x68 );               
    };                                                            
};
#include "magic/c_page_allocator_t.end.hpp"
SDK_VERIFY( class win::c_page_allocator_t, 0x68 );
