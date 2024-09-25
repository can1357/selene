#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_partition_node_information_t.start.hpp"
namespace win
{
    struct memory_partition_node_page_information_t;

    // [struct _MEMORY_PARTITION_NODE_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_partition_node_information_t                                
    {                                                                         
        using pmemory_partition_node_page_information_t = struct win::memory_partition_node_page_information_t*;                      
                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                    
        _m00 uint32_t                                   numa_node_count;        //{ +0x0000    +0x0000    +0x0000    } | .NumaNodeCount
        _m01 uint32_t                                   flags;                  //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 pmemory_partition_node_page_information_t  node_page_information;  //{ +0x0008    +0x0008    +0x0008    } | .NodePageInformation
                                                                              
        SDK_MAGIC_PROPERTIES( "_MEMORY_PARTITION_NODE_INFORMATION.$", 0x10, true, 0x97b97eae965e4637 );                      
        SDK_FIXED_SIZE( memory_partition_node_information_t, 0x10 );                      
    };                                                                        
};
#include "magic/memory_partition_node_information_t.end.hpp"
SDK_VERIFY( struct win::memory_partition_node_information_t, 0x10 );
