#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kgate_t.hpp"

#include "magic/large_page_lists_changing_t.start.hpp"
namespace mi
{
    struct large_page_lists_changing_t;

    // [struct _MI_LARGE_PAGE_LISTS_CHANGING]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct large_page_lists_changing_t                    
    {                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                                
        _m00 struct mi::large_page_lists_changing_t* next;  //{ +0x0000    +0x0000    +0x0000    } | .Next
        _m01 struct nt::kgate_t                      gate;  //{ +0x0008    +0x0008    +0x0008    } | .Gate
                                                          
        SDK_MAGIC_PROPERTIES( "_MI_LARGE_PAGE_LISTS_CHANGING.$", 0x20, true, 0x8ed1cf142dd20aac );     
        SDK_FIXED_SIZE( large_page_lists_changing_t, 0x20 );     
    };                                                    
};
#include "magic/large_page_lists_changing_t.end.hpp"
SDK_VERIFY( struct mi::large_page_lists_changing_t, 0x20 );
