#pragma once
#include <sdkgen/support_library.hpp>
#include "file_level_trim_range_t.hpp"

#include "magic/file_level_trim_t.start.hpp"
namespace win
{
    // [struct _FILE_LEVEL_TRIM]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_level_trim_t      
    {                             
        using ranges_t = sdk::array<struct win::file_level_trim_range_t, 1>;           
                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                        
        _m00 uint32_t  key;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Key
        _m01 uint32_t  num_ranges;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NumRanges
        _m02 ranges_t  ranges;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Ranges
                                  
        SDK_NONVOL_PROPERTIES( "_FILE_LEVEL_TRIM.$", 0x18, true, 0xb5e087b92279b384 );           
        SDK_FIXED_SIZE( file_level_trim_t, 0x18 );           
    };                            
};
#include "magic/file_level_trim_t.end.hpp"
SDK_VERIFY( struct win::file_level_trim_t, 0x18 );
