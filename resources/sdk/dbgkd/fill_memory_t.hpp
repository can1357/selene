#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fill_memory_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_FILL_MEMORY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fill_memory_t             
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint64_t address;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
        _m01 uint32_t length;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
        _m02 uint16_t flags;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
        _m03 uint16_t pattern_length;  //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .PatternLength
                                     
        SDK_MAGIC_PROPERTIES( "_DBGKD_FILL_MEMORY.$", 0x10, true, 0x11c9c21a2a650602 );               
        SDK_FIXED_SIZE( fill_memory_t, 0x10 );               
    };                               
};
#include "magic/fill_memory_t.end.hpp"
SDK_VERIFY( struct dbgkd::fill_memory_t, 0x10 );
