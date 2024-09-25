#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_bad_ranges_input_range_t.start.hpp"
namespace win
{
    // [struct _QUERY_BAD_RANGES_INPUT_RANGE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct query_bad_ranges_input_range_t
    {                                    
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t start_offset;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartOffset
        _m01 uint64_t length_in_bytes;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LengthInBytes
                                         
        SDK_NONVOL_PROPERTIES( "_QUERY_BAD_RANGES_INPUT_RANGE.$", 0x10, true, 0xe67ec0c90eb01a66 );                
        SDK_FIXED_SIZE( query_bad_ranges_input_range_t, 0x10 );                
    };                                   
};
#include "magic/query_bad_ranges_input_range_t.end.hpp"
SDK_VERIFY( struct win::query_bad_ranges_input_range_t, 0x10 );
