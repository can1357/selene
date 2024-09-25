#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_mode_information_t.start.hpp"
namespace win
{
    // [struct _FILE_MODE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_mode_information_t
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                 
        _m00 uint32_t mode;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Mode
                                  
        SDK_NONVOL_PROPERTIES( "_FILE_MODE_INFORMATION.$", 0x4, true, 0xb793205adeadcea9 );     
        SDK_FIXED_SIZE( file_mode_information_t, 0x4 );     
    };                            
};
#include "magic/file_mode_information_t.end.hpp"
SDK_VERIFY( struct win::file_mode_information_t, 0x4 );
