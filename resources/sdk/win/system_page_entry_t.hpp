#pragma once
#include <sdkgen/support_library.hpp>

namespace tag { struct page_entry_t; }

#include "magic/system_page_entry_t.start.hpp"
namespace win
{
    struct system_block_header_t;

    // [struct SystemPageEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_page_entry_t                               
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                   
        _m00 struct tag::page_entry_t*          p_next;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pNext
        _m01 uint32_t                           dw_flag;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwFlag
        _m02 struct win::system_block_header_t* p_heap_block;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pHeapBlock
                                                             
        SDK_MAGIC_PROPERTIES( "SystemPageEntry.$", 0x18, true, 0x23bce998a89d86e2 );             
        SDK_FIXED_SIZE( system_page_entry_t, 0x18 );             
    };                                                       
};
#include "magic/system_page_entry_t.end.hpp"
SDK_VERIFY( struct win::system_page_entry_t, 0x18 );
