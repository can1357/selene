#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/refs_deallocate_ranges_range_t.start.hpp"
namespace win
{
    // [struct _REFS_DEALLOCATE_RANGES_RANGE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct refs_deallocate_ranges_range_t
    {                                    
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint64_t start_of_range;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartOfRange
        _m01 uint64_t count_of_range;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CountOfRange
                                         
        SDK_NONVOL_PROPERTIES( "_REFS_DEALLOCATE_RANGES_RANGE.$", 0x10, true, 0x63dd8ad94b3ecfe6 );               
        SDK_FIXED_SIZE( refs_deallocate_ranges_range_t, 0x10 );               
    };                                   
};
#include "magic/refs_deallocate_ranges_range_t.end.hpp"
SDK_VERIFY( struct win::refs_deallocate_ranges_range_t, 0x10 );
