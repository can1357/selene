#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stop_play_scan_t.start.hpp"
namespace stor::port
{
    // [struct _STOP_PLAY_SCAN]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct stop_play_scan_t         
    {                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                          
        _m00 uint8_t operation_code;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t lun;             //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .Lun
        _m02 uint8_t control;         //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                    
        SDK_NONVOL_PROPERTIES( "_STOP_PLAY_SCAN.$", 0xa, true, 0x29d78ea49e24a52e );               
        SDK_FIXED_SIZE( stop_play_scan_t, 0xa );               
    };                              
};
#include "magic/stop_play_scan_t.end.hpp"
SDK_VERIFY( struct stor::port::stop_play_scan_t, 0xa );
