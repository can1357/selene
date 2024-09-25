#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_write_time_information_t.start.hpp"
namespace win
{
    // [struct _KEY_WRITE_TIME_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct key_write_time_information_t
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                           
        _m00 int64_t last_write_time;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LastWriteTime
                                       
        SDK_NONVOL_PROPERTIES( "_KEY_WRITE_TIME_INFORMATION.$", 0x8, true, 0xa8266da57d7b02f9 );                
        SDK_FIXED_SIZE( key_write_time_information_t, 0x8 );                
    };                                 
};
#include "magic/key_write_time_information_t.end.hpp"
SDK_VERIFY( struct win::key_write_time_information_t, 0x8 );
