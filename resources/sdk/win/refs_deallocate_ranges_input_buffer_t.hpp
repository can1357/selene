#pragma once
#include <sdkgen/support_library.hpp>
#include "refs_deallocate_ranges_range_t.hpp"

#include "magic/refs_deallocate_ranges_input_buffer_t.start.hpp"
namespace win
{
    // [struct _REFS_DEALLOCATE_RANGES_INPUT_BUFFER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct refs_deallocate_ranges_input_buffer_t
    {                                           
        using ranges_t = sdk::array<struct win::refs_deallocate_ranges_range_t, 1>;            
                                                
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                         
        _m00 uint32_t  range_count;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RangeCount
        _m01 ranges_t  ranges;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Ranges
                                                
        SDK_NONVOL_PROPERTIES( "_REFS_DEALLOCATE_RANGES_INPUT_BUFFER.$", 0x18, true, 0x283c44455ab536d5 );            
        SDK_FIXED_SIZE( refs_deallocate_ranges_input_buffer_t, 0x18 );            
    };                                          
};
#include "magic/refs_deallocate_ranges_input_buffer_t.end.hpp"
SDK_VERIFY( struct win::refs_deallocate_ranges_input_buffer_t, 0x18 );
