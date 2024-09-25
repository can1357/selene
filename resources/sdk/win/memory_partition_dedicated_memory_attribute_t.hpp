#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/mem_dedicated_attribute_type_t.hpp"

#include "magic/memory_partition_dedicated_memory_attribute_t.start.hpp"
namespace win
{
    // [struct _MEMORY_PARTITION_DEDICATED_MEMORY_ATTRIBUTE]
    // => Windows 11
    //
    struct memory_partition_dedicated_memory_attribute_t   
    {                                                      
        // Windows 11                                      
        //                                                 
        _m00 enum nt::mem_dedicated_attribute_type_t type;   //{ +0x0000    } | .Type
        _m01 uint64_t                                value;  //{ +0x0008    } | .Value
                                                           
        SDK_MAGIC_PROPERTIES( "_MEMORY_PARTITION_DEDICATED_MEMORY_ATTRIBUTE.$", 0x0, false, 0x66a1d3c8cd5a92d8 );      
        SDK_FIXED_SIZE( memory_partition_dedicated_memory_attribute_t, 0x10 );      
    };                                                     
};
#include "magic/memory_partition_dedicated_memory_attribute_t.end.hpp"
SDK_VERIFY( struct win::memory_partition_dedicated_memory_attribute_t, 0x10 );
