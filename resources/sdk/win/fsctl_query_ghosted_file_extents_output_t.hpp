#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fsctl_query_ghosted_file_extents_output_t.start.hpp"
namespace win
{
    // [struct _FSCTL_QUERY_GHOSTED_FILE_EXTENTS_OUTPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fsctl_query_ghosted_file_extents_output_t   
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                             
        _m00 uint32_t               extent_count;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ExtentCount
        _m01 uint32_t               total_extent_count;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .TotalExtentCount
        _m02 sdk::array<uint8_t, 1> extents;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Extents
                                                       
        SDK_NONVOL_PROPERTIES( "_FSCTL_QUERY_GHOSTED_FILE_EXTENTS_OUTPUT.$", 0xc, true, 0x4154697a966b6913 );                   
        SDK_FIXED_SIZE( fsctl_query_ghosted_file_extents_output_t, 0xc );                   
    };                                                 
};
#include "magic/fsctl_query_ghosted_file_extents_output_t.end.hpp"
SDK_VERIFY( struct win::fsctl_query_ghosted_file_extents_output_t, 0xc );
