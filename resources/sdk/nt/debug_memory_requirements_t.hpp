#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/debug_memory_requirements_t.start.hpp"
namespace nt
{
    // [struct DEBUG_MEMORY_REQUIREMENTS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct debug_memory_requirements_t
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 int64_t  start;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Start
        _m01 int64_t  max_end;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MaxEnd
        _m02 void*    virtual_address;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .VirtualAddress
        _m03 uint32_t length;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Length
        _m04 uint8_t  cached;           //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .Cached
        _m05 uint8_t  aligned;          //{ +0x001d    +0x001d    +0x001d    +0x001d    +0x001d    } | .Aligned
                                      
        SDK_NONVOL_PROPERTIES( "DEBUG_MEMORY_REQUIREMENTS.$", 0x20, true, 0x3b2cd6c7dbf4e905 );                
        SDK_FIXED_SIZE( debug_memory_requirements_t, 0x20 );                
    };                                
};
#include "magic/debug_memory_requirements_t.end.hpp"
SDK_VERIFY( struct nt::debug_memory_requirements_t, 0x20 );
