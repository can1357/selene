#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_region_info_t.start.hpp"
namespace win
{
    // [struct _FILE_REGION_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_region_info_t     
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 int64_t  file_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileOffset
        _m01 int64_t  length;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
        _m02 uint32_t usage;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Usage
                                  
        SDK_NONVOL_PROPERTIES( "_FILE_REGION_INFO.$", 0x18, true, 0x360f792fe909e266 );            
        SDK_FIXED_SIZE( file_region_info_t, 0x18 );            
    };                            
};
#include "magic/file_region_info_t.end.hpp"
SDK_VERIFY( struct win::file_region_info_t, 0x18 );
