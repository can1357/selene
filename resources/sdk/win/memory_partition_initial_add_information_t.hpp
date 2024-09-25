#pragma once
#include <sdkgen/support_library.hpp>
#include "memory_partition_page_range_t.hpp"

#include "magic/memory_partition_initial_add_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_PARTITION_INITIAL_ADD_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_partition_initial_add_information_t            
    {                                                            
        using partition_ranges_t = sdk::array<struct win::memory_partition_page_range_t, 1>;                            
                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                       
        _m00 uint32_t                flags;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t                number_of_ranges;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfRanges
        _m02 uint64_t                number_of_pages_added;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfPagesAdded
        _m03 partition_ranges_t      partition_ranges;             //{ +0x0010    +0x0010    +0x0030    +0x0010    } | .PartitionRanges
                                                                 
        // Windows 11                                            
        //                                                       
        _m04 sdk::array<uint64_t, 4> dedicated_memory_attributes;  //{ +0x0010    } | .DedicatedMemoryAttributes
                                                                 
        SDK_MAGIC_PROPERTIES( "_MEMORY_PARTITION_INITIAL_ADD_INFORMATION.$", 0x20, true, 0x90b344bacd301d50 );                            
        SDK_DYNAMIC_SIZE( memory_partition_initial_add_information_t );                            
    };                                                           
};
#include "magic/memory_partition_initial_add_information_t.end.hpp"
