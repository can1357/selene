#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/set_cd_speed_t.start.hpp"
namespace stor::port
{
    // [struct _SET_CD_SPEED]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct set_cd_speed_t                            
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                           
        _m00 uint8_t                operation_code;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint2_t                rotation_control;  //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .RotationControl
        _m02 sdk::array<uint8_t, 2> read_speed;        //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .ReadSpeed
        _m03 sdk::array<uint8_t, 2> write_speed;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .WriteSpeed
        _m04 uint8_t                control;           //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                     
        SDK_NONVOL_PROPERTIES( "_SET_CD_SPEED.$", 0xc, true, 0x858fddacdab04dc );                 
        SDK_FIXED_SIZE( set_cd_speed_t, 0xc );                 
    };                                               
};
#include "magic/set_cd_speed_t.end.hpp"
SDK_VERIFY( struct stor::port::set_cd_speed_t, 0xc );
