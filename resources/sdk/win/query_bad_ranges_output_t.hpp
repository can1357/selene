#pragma once
#include <sdkgen/support_library.hpp>
#include "query_bad_ranges_output_range_t.hpp"

#include "magic/query_bad_ranges_output_t.start.hpp"
namespace win
{
    // [struct _QUERY_BAD_RANGES_OUTPUT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct query_bad_ranges_output_t              
    {                                             
        using bad_ranges_t = sdk::array<struct win::query_bad_ranges_output_range_t, 1>;                       
                                                  
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                        
        _m00 uint32_t      flags;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t      num_bad_ranges;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumBadRanges
        _m02 uint64_t      next_offset_to_look_up;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NextOffsetToLookUp
        _m03 bad_ranges_t  bad_ranges;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BadRanges
                                                  
        SDK_NONVOL_PROPERTIES( "_QUERY_BAD_RANGES_OUTPUT.$", 0x28, true, 0x24b302de307d2acb );                       
        SDK_FIXED_SIZE( query_bad_ranges_output_t, 0x28 );                       
    };                                            
};
#include "magic/query_bad_ranges_output_t.end.hpp"
SDK_VERIFY( struct win::query_bad_ranges_output_t, 0x28 );
