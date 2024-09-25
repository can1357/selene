#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/physical_memory_range_t.start.hpp"
namespace nt
{
    // [struct _PHYSICAL_MEMORY_RANGE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct physical_memory_range_t   
    {                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                           
        _m00 int64_t base_address;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BaseAddress
        _m01 int64_t number_of_bytes;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfBytes
                                     
        SDK_NONVOL_PROPERTIES( "_PHYSICAL_MEMORY_RANGE.$", 0x10, true, 0x7db9bb579f7602aa );                
        SDK_FIXED_SIZE( physical_memory_range_t, 0x10 );                
    };                               
};
#include "magic/physical_memory_range_t.end.hpp"
SDK_VERIFY( struct nt::physical_memory_range_t, 0x10 );
