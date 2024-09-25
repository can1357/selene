#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_console_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_CONSOLE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_console_information_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                         
        _m00 uint1_t driver_loaded;      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DriverLoaded
                                       
        SDK_MAGIC_PROPERTIES( "_SYSTEM_CONSOLE_INFORMATION.$", 0x4, true, 0xccc497aa11b65868 );              
        SDK_FIXED_SIZE( system_console_information_t, 0x4 );              
    };                                 
};
#include "magic/system_console_information_t.end.hpp"
SDK_VERIFY( struct win::system_console_information_t, 0x4 );
