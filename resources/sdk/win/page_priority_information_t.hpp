#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/page_priority_information_t.start.hpp"
namespace win
{
    // [struct _PAGE_PRIORITY_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct page_priority_information_t
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t page_priority;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PagePriority
                                      
        SDK_NONVOL_PROPERTIES( "_PAGE_PRIORITY_INFORMATION.$", 0x4, true, 0xc5081bb1c1fa9165 );              
        SDK_FIXED_SIZE( page_priority_information_t, 0x4 );              
    };                                
};
#include "magic/page_priority_information_t.end.hpp"
SDK_VERIFY( struct win::page_priority_information_t, 0x4 );
