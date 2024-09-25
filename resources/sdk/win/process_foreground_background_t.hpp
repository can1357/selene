#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_foreground_background_t.start.hpp"
namespace win
{
    // [struct _PROCESS_FOREGROUND_BACKGROUND]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_foreground_background_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                      
        _m00 uint8_t foreground;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Foreground
                                          
        SDK_MAGIC_PROPERTIES( "_PROCESS_FOREGROUND_BACKGROUND.$", 0x1, true, 0x280321974fe4ba64 );           
        SDK_FIXED_SIZE( process_foreground_background_t, 0x1 );           
    };                                    
};
#include "magic/process_foreground_background_t.end.hpp"
SDK_VERIFY( struct win::process_foreground_background_t, 0x1 );
