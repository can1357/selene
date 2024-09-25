#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_partition_page_range_t.start.hpp"
namespace win
{
    // [struct _MEMORY_PARTITION_PAGE_RANGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_partition_page_range_t
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t start_page;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartPage
        _m01 uint64_t number_of_pages;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfPages
                                        
        SDK_MAGIC_PROPERTIES( "_MEMORY_PARTITION_PAGE_RANGE.$", 0x10, true, 0x63aaaf2b65688c44 );                
        SDK_FIXED_SIZE( memory_partition_page_range_t, 0x10 );                
    };                                  
};
#include "magic/memory_partition_page_range_t.end.hpp"
SDK_VERIFY( struct win::memory_partition_page_range_t, 0x10 );
