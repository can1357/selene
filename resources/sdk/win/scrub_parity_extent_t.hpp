#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scrub_parity_extent_t.start.hpp"
namespace win
{
    // [struct _SCRUB_PARITY_EXTENT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct scrub_parity_extent_t
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 int64_t  offset;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Offset
        _m01 uint64_t length;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                                
        SDK_NONVOL_PROPERTIES( "_SCRUB_PARITY_EXTENT.$", 0x10, true, 0x625a8d71bee45d3e );       
        SDK_FIXED_SIZE( scrub_parity_extent_t, 0x10 );       
    };                          
};
#include "magic/scrub_parity_extent_t.end.hpp"
SDK_VERIFY( struct win::scrub_parity_extent_t, 0x10 );
