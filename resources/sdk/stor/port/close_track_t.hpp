#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/close_track_t.start.hpp"
namespace stor::port
{
    // [struct _CLOSE_TRACK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct close_track_t                           
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                         
        _m00 uint8_t                operation_code;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                immediate;       //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Immediate
        _m02 uint1_t                track;           //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .Track
        _m03 uint1_t                session;         //{ +0x0002@1  +0x0002@1  +0x0002@1  +0x0002@1  +0x0002@1  } | .Session
        _m04 sdk::array<uint8_t, 2> track_number;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .TrackNumber
        _m05 uint8_t                control;         //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                   
        SDK_NONVOL_PROPERTIES( "_CLOSE_TRACK.$", 0xa, true, 0xd829c29e53c084cb );               
        SDK_FIXED_SIZE( close_track_t, 0xa );               
    };                                             
};
#include "magic/close_track_t.end.hpp"
SDK_VERIFY( struct stor::port::close_track_t, 0xa );
