#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_info_t.start.hpp"
namespace win
{
    // [struct _MemoryInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_info_t               
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint16_t memory_size;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MemorySize
        _m01 uint16_t memory_alignment;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .MemoryAlignment
        _m02 uint16_t wire_size;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .WireSize
        _m03 uint16_t wire_alignment;    //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .WireAlignment
                                       
        SDK_MAGIC_PROPERTIES( "_MemoryInfo.$", 0x8, true, 0xcd326738ba6d31a0 );                 
        SDK_FIXED_SIZE( memory_info_t, 0x8 );                 
    };                                 
};
#include "magic/memory_info_t.end.hpp"
SDK_VERIFY( struct win::memory_info_t, 0x8 );
