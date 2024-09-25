#pragma once
#include <sdkgen/support_library.hpp>
#include "query_bad_ranges_input_range_t.hpp"

#include "magic/query_bad_ranges_input_t.start.hpp"
namespace win
{
    // [struct _QUERY_BAD_RANGES_INPUT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct query_bad_ranges_input_t
    {                              
        using ranges_t = sdk::array<struct win::query_bad_ranges_input_range_t, 1>;           
                                   
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                        
        _m00 uint32_t  flags;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t  num_ranges;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumRanges
        _m02 ranges_t  ranges;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Ranges
                                   
        SDK_NONVOL_PROPERTIES( "_QUERY_BAD_RANGES_INPUT.$", 0x18, true, 0x2df2c6c901e2fe2c );           
        SDK_FIXED_SIZE( query_bad_ranges_input_t, 0x18 );           
    };                             
};
#include "magic/query_bad_ranges_input_t.end.hpp"
SDK_VERIFY( struct win::query_bad_ranges_input_t, 0x18 );
