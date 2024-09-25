#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pseudo_tag_entry_t.start.hpp"
namespace heap
{
    // [struct _HEAP_PSEUDO_TAG_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pseudo_tag_entry_t
    {                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint32_t allocs;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Allocs
        _m01 uint32_t frees;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Frees
        _m02 uint64_t size;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
                             
        SDK_MAGIC_PROPERTIES( "_HEAP_PSEUDO_TAG_ENTRY.$", 0x10, true, 0xaed51bfd77efd973 );       
        SDK_FIXED_SIZE( pseudo_tag_entry_t, 0x10 );       
    };                       
};
#include "magic/pseudo_tag_entry_t.end.hpp"
SDK_VERIFY( struct heap::pseudo_tag_entry_t, 0x10 );
