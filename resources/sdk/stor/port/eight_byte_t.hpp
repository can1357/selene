#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/eight_byte_t.start.hpp"
namespace stor::port
{
    // [union _EIGHT_BYTE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union eight_byte_t               
    {                                
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint8_t  byte0;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Byte0
        _m01 uint8_t  byte1;           //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Byte1
        _m02 uint8_t  byte2;           //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Byte2
        _m03 uint8_t  byte3;           //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .Byte3
        _m04 uint8_t  byte4;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Byte4
        _m05 uint8_t  byte5;           //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .Byte5
        _m06 uint8_t  byte6;           //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Byte6
        _m07 uint8_t  byte7;           //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .Byte7
        _m08 uint64_t as_u_long_long;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULongLong
                                     
        SDK_NONVOL_PROPERTIES( "_EIGHT_BYTE.$", 0x8, true, 0x1ea7cdea082956d9 );               
        SDK_FIXED_SIZE( eight_byte_t, 0x8 );               
    };                               
};
#include "magic/eight_byte_t.end.hpp"
SDK_VERIFY( union stor::port::eight_byte_t, 0x8 );
