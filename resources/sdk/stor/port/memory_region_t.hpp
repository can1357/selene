#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_region_t.start.hpp"
namespace stor::port
{
    // [struct _MEMORY_REGION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_region_t          
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint8_t* virtual_base;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VirtualBase
        _m01 int64_t  physical_base;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PhysicalBase
        _m02 uint32_t length;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Length
                                    
        SDK_MAGIC_PROPERTIES( "_MEMORY_REGION.$", 0x18, true, 0xb7dd13e10b2e03ad );              
        SDK_FIXED_SIZE( memory_region_t, 0x18 );              
    };                              
};
#include "magic/memory_region_t.end.hpp"
SDK_VERIFY( struct stor::port::memory_region_t, 0x18 );
