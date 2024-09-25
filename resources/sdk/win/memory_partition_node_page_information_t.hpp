#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_partition_node_page_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_PARTITION_NODE_PAGE_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_partition_node_page_information_t
    {                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint64_t total_page_count;              //{ +0x0000    +0x0000    +0x0000    } | .TotalPageCount
        _m01 uint64_t small_free_page_count;         //{ +0x0008    +0x0008    +0x0008    } | .SmallFreePageCount
        _m02 uint64_t small_zero_page_count;         //{ +0x0010    +0x0010    +0x0010    } | .SmallZeroPageCount
        _m03 uint64_t medium_free_page_count;        //{ +0x0018    +0x0018    +0x0018    } | .MediumFreePageCount
        _m04 uint64_t medium_zero_page_count;        //{ +0x0020    +0x0020    +0x0020    } | .MediumZeroPageCount
        _m05 uint64_t large_free_page_count;         //{ +0x0028    +0x0028    +0x0028    } | .LargeFreePageCount
        _m06 uint64_t large_zero_page_count;         //{ +0x0030    +0x0030    +0x0030    } | .LargeZeroPageCount
        _m07 uint64_t huge_free_page_count;          //{ +0x0038    +0x0038    +0x0038    } | .HugeFreePageCount
        _m08 uint64_t huge_zero_page_count;          //{ +0x0040    +0x0040    +0x0040    } | .HugeZeroPageCount
                                                   
        SDK_MAGIC_PROPERTIES( "_MEMORY_PARTITION_NODE_PAGE_INFORMATION.$", 0x48, true, 0x1b4faf0b94afb40e );                       
        SDK_FIXED_SIZE( memory_partition_node_page_information_t, 0x48 );                       
    };                                             
};
#include "magic/memory_partition_node_page_information_t.end.hpp"
SDK_VERIFY( struct win::memory_partition_node_page_information_t, 0x48 );
