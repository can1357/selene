#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/two_byte_t.start.hpp"
namespace stor::port
{
    // [union _TWO_BYTE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union two_byte_t             
    {                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint8_t  byte0;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Byte0
        _m01 uint8_t  byte1;       //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Byte1
        _m02 uint16_t as_u_short;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUShort
                                 
        SDK_NONVOL_PROPERTIES( "_TWO_BYTE.$", 0x2, true, 0x2284cbfd1dd7464a );           
        SDK_FIXED_SIZE( two_byte_t, 0x2 );           
    };                           
};
#include "magic/two_byte_t.end.hpp"
SDK_VERIFY( union stor::port::two_byte_t, 0x2 );
