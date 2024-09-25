#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reserve_track_rzone_t.start.hpp"
namespace stor::port
{
    // [struct _RESERVE_TRACK_RZONE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reserve_track_rzone_t                     
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                           
        _m00 uint8_t                operation_code;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 sdk::array<uint8_t, 4> reservation_size;  //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .ReservationSize
        _m02 uint8_t                control;           //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                                     
        SDK_NONVOL_PROPERTIES( "_RESERVE_TRACK_RZONE.$", 0xa, true, 0x92a4a3aed1b8372e );                 
        SDK_FIXED_SIZE( reserve_track_rzone_t, 0xa );                 
    };                                               
};
#include "magic/reserve_track_rzone_t.end.hpp"
SDK_VERIFY( struct stor::port::reserve_track_rzone_t, 0xa );
