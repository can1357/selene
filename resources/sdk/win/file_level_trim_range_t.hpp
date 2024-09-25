#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_level_trim_range_t.start.hpp"
namespace win
{
    // [struct _FILE_LEVEL_TRIM_RANGE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_level_trim_range_t
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint64_t offset;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Offset
        _m01 uint64_t length;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                                  
        SDK_NONVOL_PROPERTIES( "_FILE_LEVEL_TRIM_RANGE.$", 0x10, true, 0x389cd67c0a5f3e4 );       
        SDK_FIXED_SIZE( file_level_trim_range_t, 0x10 );       
    };                            
};
#include "magic/file_level_trim_range_t.end.hpp"
SDK_VERIFY( struct win::file_level_trim_range_t, 0x10 );
