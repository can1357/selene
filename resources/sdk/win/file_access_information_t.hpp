#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_access_information_t.start.hpp"
namespace win
{
    // [struct _FILE_ACCESS_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_access_information_t
    {                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t access_flags;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AccessFlags
                                    
        SDK_NONVOL_PROPERTIES( "_FILE_ACCESS_INFORMATION.$", 0x4, true, 0xbe28033694f14b33 );             
        SDK_FIXED_SIZE( file_access_information_t, 0x4 );             
    };                              
};
#include "magic/file_access_information_t.end.hpp"
SDK_VERIFY( struct win::file_access_information_t, 0x4 );
