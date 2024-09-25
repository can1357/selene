#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fsctl_query_ghosted_file_extents_input_range_t.start.hpp"
namespace win
{
    // [struct _FSCTL_QUERY_GHOSTED_FILE_EXTENTS_INPUT_RANGE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fsctl_query_ghosted_file_extents_input_range_t
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                       
        _m00 int64_t file_offset;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileOffset
        _m01 int64_t byte_count;                           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ByteCount
                                                         
        SDK_NONVOL_PROPERTIES( "_FSCTL_QUERY_GHOSTED_FILE_EXTENTS_INPUT_RANGE.$", 0x10, true, 0x58d65b2bb740013b );            
        SDK_FIXED_SIZE( fsctl_query_ghosted_file_extents_input_range_t, 0x10 );            
    };                                                   
};
#include "magic/fsctl_query_ghosted_file_extents_input_range_t.end.hpp"
SDK_VERIFY( struct win::fsctl_query_ghosted_file_extents_input_range_t, 0x10 );
