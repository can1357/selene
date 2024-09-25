#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_position_t.start.hpp"
namespace stor::port
{
    // [struct _READ_POSITION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct read_position_t      
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                      
        _m00 uint8_t operation;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Operation
        _m01 uint1_t block_type;  //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .BlockType
        _m02 uint3_t lun;         //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .Lun
        _m03 uint8_t control;     //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                
        SDK_NONVOL_PROPERTIES( "_READ_POSITION.$", 0xa, true, 0x1c18232d8563170a );           
        SDK_FIXED_SIZE( read_position_t, 0xa );           
    };                          
};
#include "magic/read_position_t.end.hpp"
SDK_VERIFY( struct stor::port::read_position_t, 0xa );
