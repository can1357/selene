#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/free_large_page_list_t.start.hpp"
namespace mi
{
    // [struct _MI_FREE_LARGE_PAGE_LIST]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct free_large_page_list_t         
    {                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                
        _m00 nt::list_entry_t list_head;    //{ +0x0000    +0x0000    +0x0000    } | .ListHead
        _m01 uint64_t         entry_count;  //{ +0x0010    +0x0010    +0x0010    } | .EntryCount
                                          
        SDK_MAGIC_PROPERTIES( "_MI_FREE_LARGE_PAGE_LIST.$", 0x18, true, 0xcc1b2d95be995660 );            
        SDK_FIXED_SIZE( free_large_page_list_t, 0x18 );            
    };                                    
};
#include "magic/free_large_page_list_t.end.hpp"
SDK_VERIFY( struct mi::free_large_page_list_t, 0x18 );
