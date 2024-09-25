#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_memory_allocation_mode_t.start.hpp"
namespace win
{
    // [union _PROCESS_MEMORY_ALLOCATION_MODE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union process_memory_allocation_mode_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t flags;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t  top_down;             //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .TopDown
                                          
        SDK_MAGIC_PROPERTIES( "_PROCESS_MEMORY_ALLOCATION_MODE.$", 0x4, true, 0x109acc703007d64 );         
        SDK_FIXED_SIZE( process_memory_allocation_mode_t, 0x4 );         
    };                                    
};
#include "magic/process_memory_allocation_mode_t.end.hpp"
SDK_VERIFY( union win::process_memory_allocation_mode_t, 0x4 );
