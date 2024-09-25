#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_partition_create_large_pages_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_PARTITION_CREATE_LARGE_PAGES_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_partition_create_large_pages_information_t
    {                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint32_t flags;                                  //{ +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t numa_node;                              //{ +0x0004    +0x0004    +0x0004    } | .NumaNode
        _m02 uint64_t large_page_size;                        //{ +0x0008    +0x0008    +0x0008    } | .LargePageSize
        _m03 uint64_t number_of_large_pages_to_create;        //{ +0x0010    +0x0010    +0x0010    } | .NumberOfLargePagesToCreate
        _m04 uint64_t number_of_large_pages_created;          //{ +0x0018    +0x0018    +0x0018    } | .NumberOfLargePagesCreated
                                                            
        SDK_MAGIC_PROPERTIES( "_MEMORY_PARTITION_CREATE_LARGE_PAGES_INFORMATION.$", 0x20, true, 0x9aa85dc9fc5bcee4 );                                
        SDK_FIXED_SIZE( memory_partition_create_large_pages_information_t, 0x20 );                                
    };                                                      
};
#include "magic/memory_partition_create_large_pages_information_t.end.hpp"
SDK_VERIFY( struct win::memory_partition_create_large_pages_information_t, 0x20 );
