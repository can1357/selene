#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_level_trim_output_t.start.hpp"
namespace win
{
    // [struct _FILE_LEVEL_TRIM_OUTPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_level_trim_output_t        
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t num_ranges_processed;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NumRangesProcessed
                                           
        SDK_NONVOL_PROPERTIES( "_FILE_LEVEL_TRIM_OUTPUT.$", 0x4, true, 0x85327a7b0cd60f6a );                     
        SDK_FIXED_SIZE( file_level_trim_output_t, 0x4 );                     
    };                                     
};
#include "magic/file_level_trim_output_t.end.hpp"
SDK_VERIFY( struct win::file_level_trim_output_t, 0x4 );
