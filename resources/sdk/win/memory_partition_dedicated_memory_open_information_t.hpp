#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_partition_dedicated_memory_open_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_PARTITION_DEDICATED_MEMORY_OPEN_INFORMATION]
    // => Windows 11
    //
    struct memory_partition_dedicated_memory_open_information_t
    {                                                          
        // Windows 11                                   
        //                                              
        _m00 uint64_t dedicated_memory_type_id;                  //{ +0x0000    } | .DedicatedMemoryTypeId
        _m01 uint32_t handle_attributes;                         //{ +0x0008    } | .HandleAttributes
        _m02 uint32_t desired_access;                            //{ +0x000c    } | .DesiredAccess
        _m03 void*    dedicated_memory_partition_handle;         //{ +0x0010    } | .DedicatedMemoryPartitionHandle
                                                               
        SDK_MAGIC_PROPERTIES( "_MEMORY_PARTITION_DEDICATED_MEMORY_OPEN_INFORMATION.$", 0x0, false, 0x3d6875ae936d4bed );                                  
        SDK_FIXED_SIZE( memory_partition_dedicated_memory_open_information_t, 0x18 );                                  
    };                                                         
};
#include "magic/memory_partition_dedicated_memory_open_information_t.end.hpp"
SDK_VERIFY( struct win::memory_partition_dedicated_memory_open_information_t, 0x18 );
