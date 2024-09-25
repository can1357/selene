#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/avrf_memory_range_t.start.hpp"
namespace win
{
    // [struct _AVRF_MEMORY_RANGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct avrf_memory_range_t     
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 void*    base_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BaseAddress
        _m01 uint64_t size;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
                                   
        SDK_MAGIC_PROPERTIES( "_AVRF_MEMORY_RANGE.$", 0x10, true, 0xef09e00f3ed09b8d );             
        SDK_FIXED_SIZE( avrf_memory_range_t, 0x10 );             
    };                             
};
#include "magic/avrf_memory_range_t.end.hpp"
SDK_VERIFY( struct win::avrf_memory_range_t, 0x10 );
