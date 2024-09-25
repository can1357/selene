#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/four_byte_t.start.hpp"
namespace stor::port
{
    // [union _FOUR_BYTE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union four_byte_t           
    {                           
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint8_t  byte0;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Byte0
        _m01 uint8_t  byte1;      //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Byte1
        _m02 uint8_t  byte2;      //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Byte2
        _m03 uint8_t  byte3;      //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .Byte3
        _m04 uint32_t as_u_long;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULong
                                
        SDK_NONVOL_PROPERTIES( "_FOUR_BYTE.$", 0x4, true, 0xf865ec2b1d0d5bb6 );          
        SDK_FIXED_SIZE( four_byte_t, 0x4 );          
    };                          
};
#include "magic/four_byte_t.end.hpp"
SDK_VERIFY( union stor::port::four_byte_t, 0x4 );
