#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_region_input_t.start.hpp"
namespace win
{
    // [struct _FILE_REGION_INPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_region_input_t      
    {                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 int64_t  file_offset;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileOffset
        _m01 int64_t  length;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
        _m02 uint32_t desired_usage;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DesiredUsage
                                    
        SDK_NONVOL_PROPERTIES( "_FILE_REGION_INPUT.$", 0x18, true, 0x6f5f3e10e778943 );              
        SDK_FIXED_SIZE( file_region_input_t, 0x18 );              
    };                              
};
#include "magic/file_region_input_t.end.hpp"
SDK_VERIFY( struct win::file_region_input_t, 0x18 );
