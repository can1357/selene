#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_partition_page_combine_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_PARTITION_PAGE_COMBINE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_partition_page_combine_information_t
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 void*    stop_handle;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StopHandle
        _m01 uint32_t flags;                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m02 uint64_t total_number_of_pages;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TotalNumberOfPages
                                                      
        SDK_MAGIC_PROPERTIES( "_MEMORY_PARTITION_PAGE_COMBINE_INFORMATION.$", 0x18, true, 0xa062fab3ae540dd0 );                      
        SDK_FIXED_SIZE( memory_partition_page_combine_information_t, 0x18 );                      
    };                                                
};
#include "magic/memory_partition_page_combine_information_t.end.hpp"
SDK_VERIFY( struct win::memory_partition_page_combine_information_t, 0x18 );
