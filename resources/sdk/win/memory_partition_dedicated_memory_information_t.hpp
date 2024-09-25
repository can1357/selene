#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_partition_dedicated_memory_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_PARTITION_DEDICATED_MEMORY_INFORMATION]
    // => Windows 11
    //
    struct memory_partition_dedicated_memory_information_t
    {                                                     
        // Windows 11                     
        //                                
        _m00 uint32_t next_entry_offset;                    //{ +0x0000    } | .NextEntryOffset
        _m01 uint32_t size_of_information;                  //{ +0x0004    } | .SizeOfInformation
        _m02 uint32_t flags;                                //{ +0x0008    } | .Flags
        _m03 uint32_t attributes_offset;                    //{ +0x000c    } | .AttributesOffset
        _m04 uint32_t attribute_count;                      //{ +0x0010    } | .AttributeCount
        _m05 uint64_t type_id;                              //{ +0x0018    } | .TypeId
                                                          
        SDK_MAGIC_PROPERTIES( "_MEMORY_PARTITION_DEDICATED_MEMORY_INFORMATION.$", 0x0, false, 0x1ddde6c0438fcf4f );                    
        SDK_FIXED_SIZE( memory_partition_dedicated_memory_information_t, 0x20 );                    
    };                                                    
};
#include "magic/memory_partition_dedicated_memory_information_t.end.hpp"
SDK_VERIFY( struct win::memory_partition_dedicated_memory_information_t, 0x20 );
