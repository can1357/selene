#pragma once
#include <sdkgen/support_library.hpp>
#include "perfinfo_memory_node_entry_t.hpp"

#include "magic/perfinfo_memory_node_information_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_MEMORY_NODE_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_memory_node_information_t
    {                                        
        using node_entry_t = sdk::array<struct win::perfinfo_memory_node_entry_t, 1>;             
                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                              
        _m00 uint32_t      partition_id;       //{ +0x0000    +0x0000    +0x0000    } | .PartitionId
        _m01 uint32_t      count;              //{ +0x0004    +0x0004    +0x0004    } | .Count
        _m02 node_entry_t  node_entry;         //{ +0x0008    +0x0008    +0x0008    } | .NodeEntry
                                             
        SDK_MAGIC_PROPERTIES( "_PERFINFO_MEMORY_NODE_INFORMATION.$", 0x54, true, 0xd3a9ab9c93156784 );             
        SDK_FIXED_SIZE( perfinfo_memory_node_information_t, 0x54 );             
    };                                       
};
#include "magic/perfinfo_memory_node_information_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_memory_node_information_t, 0x54 );
