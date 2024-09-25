#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_memory_node_entry_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_MEMORY_NODE_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_memory_node_entry_t      
    {                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t node_number;             //{ +0x0000    +0x0000    +0x0000    } | .NodeNumber
        _m01 uint64_t total_page_count;        //{ +0x0004    +0x0004    +0x0004    } | .TotalPageCount
        _m02 uint64_t small_free_page_count;   //{ +0x000c    +0x000c    +0x000c    } | .SmallFreePageCount
        _m03 uint64_t small_zero_page_count;   //{ +0x0014    +0x0014    +0x0014    } | .SmallZeroPageCount
        _m04 uint64_t medium_free_page_count;  //{ +0x001c    +0x001c    +0x001c    } | .MediumFreePageCount
        _m05 uint64_t medium_zero_page_count;  //{ +0x0024    +0x0024    +0x0024    } | .MediumZeroPageCount
        _m06 uint64_t large_free_page_count;   //{ +0x002c    +0x002c    +0x002c    } | .LargeFreePageCount
        _m07 uint64_t large_zero_page_count;   //{ +0x0034    +0x0034    +0x0034    } | .LargeZeroPageCount
        _m08 uint64_t huge_free_page_count;    //{ +0x003c    +0x003c    +0x003c    } | .HugeFreePageCount
        _m09 uint64_t huge_zero_page_count;    //{ +0x0044    +0x0044    +0x0044    } | .HugeZeroPageCount
                                             
        SDK_MAGIC_PROPERTIES( "_PERFINFO_MEMORY_NODE_ENTRY.$", 0x4c, true, 0x640d7cffd4984d51 );                       
        SDK_FIXED_SIZE( perfinfo_memory_node_entry_t, 0x4c );                       
    };                                       
};
#include "magic/perfinfo_memory_node_entry_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_memory_node_entry_t, 0x4c );
