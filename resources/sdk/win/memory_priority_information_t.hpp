#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_priority_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_PRIORITY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_priority_information_t
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t memory_priority;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MemoryPriority
                                        
        SDK_MAGIC_PROPERTIES( "_MEMORY_PRIORITY_INFORMATION.$", 0x4, true, 0x8cd6a705879a02fb );                
        SDK_FIXED_SIZE( memory_priority_information_t, 0x4 );                
    };                                  
};
#include "magic/memory_priority_information_t.end.hpp"
SDK_VERIFY( struct win::memory_priority_information_t, 0x4 );
