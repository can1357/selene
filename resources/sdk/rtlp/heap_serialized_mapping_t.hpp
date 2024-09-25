#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/heap_serialized_mapping_t.start.hpp"
namespace rtlp
{
    // [struct _RTLP_HEAP_SERIALIZED_MAPPING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct heap_serialized_mapping_t  
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t allocation;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Allocation
        _m01 void*    stack_reference;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StackReference
                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m02 uint64_t size;             //{ +0x0010    +0x0010    +0x0010    } | .Size
                                      
        SDK_MAGIC_PROPERTIES( "_RTLP_HEAP_SERIALIZED_MAPPING.$", 0x18, true, 0xd0b980bf7a7fb5b1 );                
        SDK_DYNAMIC_SIZE( heap_serialized_mapping_t );                
    };                                
};
#include "magic/heap_serialized_mapping_t.end.hpp"
