#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pcixbus_command_t.start.hpp"
namespace whea
{
    // [union _WHEA_PCIXBUS_COMMAND]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union pcixbus_command_t        
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint56_t command;       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Command
        _m01 uint1_t  pcix_command;  //{ +0x0000@56 +0x0000@56 +0x0000@56 +0x0000@56 +0x0000@56 } | .PCIXCommand
        _m02 uint64_t as_ulonglong;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONGLONG
                                   
        SDK_NONVOL_PROPERTIES( "_WHEA_PCIXBUS_COMMAND.$", 0x8, true, 0x1e2c68508a12dd7d );             
        SDK_FIXED_SIZE( pcixbus_command_t, 0x8 );             
    };                             
};
#include "magic/pcixbus_command_t.end.hpp"
SDK_VERIFY( union whea::pcixbus_command_t, 0x8 );
