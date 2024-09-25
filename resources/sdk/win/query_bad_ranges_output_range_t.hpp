#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_bad_ranges_output_range_t.start.hpp"
namespace win
{
    // [struct _QUERY_BAD_RANGES_OUTPUT_RANGE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct query_bad_ranges_output_range_t
    {                                     
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t flags;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint64_t start_offset;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StartOffset
        _m02 uint64_t length_in_bytes;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .LengthInBytes
                                          
        SDK_NONVOL_PROPERTIES( "_QUERY_BAD_RANGES_OUTPUT_RANGE.$", 0x18, true, 0x1a555743301d9473 );                
        SDK_FIXED_SIZE( query_bad_ranges_output_range_t, 0x18 );                
    };                                    
};
#include "magic/query_bad_ranges_output_range_t.end.hpp"
SDK_VERIFY( struct win::query_bad_ranges_output_range_t, 0x18 );
