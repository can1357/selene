#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_partition_transfer_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_PARTITION_TRANSFER_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_partition_transfer_information_t
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t number_of_pages;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfPages
        _m01 uint32_t numa_node;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumaNode
        _m02 uint32_t flags;                        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
                                                  
        SDK_MAGIC_PROPERTIES( "_MEMORY_PARTITION_TRANSFER_INFORMATION.$", 0x10, true, 0x191a449373b4d960 );                
        SDK_FIXED_SIZE( memory_partition_transfer_information_t, 0x10 );                
    };                                            
};
#include "magic/memory_partition_transfer_information_t.end.hpp"
SDK_VERIFY( struct win::memory_partition_transfer_information_t, 0x10 );
