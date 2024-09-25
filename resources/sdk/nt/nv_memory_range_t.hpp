#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nv_memory_range_t.start.hpp"
namespace nt
{
    // [struct _NV_MEMORY_RANGE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct nv_memory_range_t       
    {                              
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 void*    base_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BaseAddress
        _m01 uint64_t length;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                                   
        SDK_NONVOL_PROPERTIES( "_NV_MEMORY_RANGE.$", 0x10, true, 0xb9b02cf24a79599a );             
        SDK_FIXED_SIZE( nv_memory_range_t, 0x10 );             
    };                             
};
#include "magic/nv_memory_range_t.end.hpp"
SDK_VERIFY( struct nt::nv_memory_range_t, 0x10 );
