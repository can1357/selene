#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_heap_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_HEAP_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_heap_information_t               
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint64_t reserve_size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReserveSize
        _m01 uint64_t commit_size;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CommitSize
        _m02 uint32_t number_of_heaps;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberOfHeaps
        _m03 uint64_t first_heap_information_offset;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FirstHeapInformationOffset
                                                    
        SDK_MAGIC_PROPERTIES( "_PROCESS_HEAP_INFORMATION.$", 0x20, true, 0xb9ab46d9fb9ff006 );                              
        SDK_FIXED_SIZE( process_heap_information_t, 0x20 );                              
    };                                              
};
#include "magic/process_heap_information_t.end.hpp"
SDK_VERIFY( struct win::process_heap_information_t, 0x20 );
