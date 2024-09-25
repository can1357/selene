#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_page_counts_t.start.hpp"
namespace mm
{
    // [struct _MM_SYSTEM_PAGE_COUNTS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_page_counts_t                          
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                               
        _m00 volatile uint32_t system_code_page;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SystemCodePage
        _m01 volatile uint32_t system_driver_page;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SystemDriverPage
        _m02 volatile int32_t  total_system_code_pages;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TotalSystemCodePages
        _m03 volatile int32_t  total_system_driver_pages;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TotalSystemDriverPages
                                                         
        SDK_MAGIC_PROPERTIES( "_MM_SYSTEM_PAGE_COUNTS.$", 0x10, true, 0x7042aa47e1de05fd );                          
        SDK_FIXED_SIZE( system_page_counts_t, 0x10 );                          
    };                                                   
};
#include "magic/system_page_counts_t.end.hpp"
SDK_VERIFY( struct mm::system_page_counts_t, 0x10 );
