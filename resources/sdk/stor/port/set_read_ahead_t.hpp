#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/set_read_ahead_t.start.hpp"
namespace stor::port
{
    // [struct _SET_READ_AHEAD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct set_read_ahead_t                        
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                         
        _m00 uint8_t                operation_code;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t                lun;             //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .Lun
        _m02 sdk::array<uint8_t, 4> trigger_lba;     //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .TriggerLBA
        _m03 sdk::array<uint8_t, 4> read_ahead_lba;  //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .ReadAheadLBA
        _m04 uint8_t                control;         //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                   
        SDK_NONVOL_PROPERTIES( "_SET_READ_AHEAD.$", 0xc, true, 0x9af8d552349e13c );               
        SDK_FIXED_SIZE( set_read_ahead_t, 0xc );               
    };                                             
};
#include "magic/set_read_ahead_t.end.hpp"
SDK_VERIFY( struct stor::port::set_read_ahead_t, 0xc );
