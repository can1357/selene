#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/heap_stack_trace_serialization_header_t.start.hpp"
namespace rtlp
{
    // [struct _RTLP_HEAP_STACK_TRACE_SERIALIZATION_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct heap_stack_trace_serialization_header_t
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint16_t version;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t pointer_size;                 //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .PointerSize
        _m02 uint64_t heap;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Heap
                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m03 uint64_t total_commit;                 //{ +0x0010    +0x0010    +0x0010    } | .TotalCommit
        _m04 uint64_t total_reserve;                //{ +0x0018    +0x0018    +0x0018    } | .TotalReserve
                                                  
        // Windows 10 v1607              
        //                          
        _m05 uint32_t mapping_count;                //{ +0x0004    } | .MappingCount
                                                  
        SDK_MAGIC_PROPERTIES( "_RTLP_HEAP_STACK_TRACE_SERIALIZATION_HEADER.$", 0x20, true, 0xbb34fd2a3e01b9d9 );              
        SDK_DYNAMIC_SIZE( heap_stack_trace_serialization_header_t );              
    };                                            
};
#include "magic/heap_stack_trace_serialization_header_t.end.hpp"
