#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/page_entry_t.start.hpp"
namespace tag
{
    struct page_entry_t;

    // [struct tagPageEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct page_entry_t                        
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                     
        _m00 struct tag::page_entry_t* p_next;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pNext
        _m01 uint32_t                  dw_flag;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwFlag
                                               
        SDK_MAGIC_PROPERTIES( "tagPageEntry.$", 0x10, true, 0xa47474f2961e28a8 );        
        SDK_FIXED_SIZE( page_entry_t, 0x10 );        
    };                                         
};
#include "magic/page_entry_t.end.hpp"
SDK_VERIFY( struct tag::page_entry_t, 0x10 );
