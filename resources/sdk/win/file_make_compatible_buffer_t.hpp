#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_make_compatible_buffer_t.start.hpp"
namespace win
{
    // [struct _FILE_MAKE_COMPATIBLE_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_make_compatible_buffer_t
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                      
        _m00 uint8_t close_disc;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CloseDisc
                                        
        SDK_NONVOL_PROPERTIES( "_FILE_MAKE_COMPATIBLE_BUFFER.$", 0x1, true, 0x44068c872be38da7 );           
        SDK_FIXED_SIZE( file_make_compatible_buffer_t, 0x1 );           
    };                                  
};
#include "magic/file_make_compatible_buffer_t.end.hpp"
SDK_VERIFY( struct win::file_make_compatible_buffer_t, 0x1 );
