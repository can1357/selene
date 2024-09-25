#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dec_t.start.hpp"
namespace tag
{
    // [struct tagDEC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dec_t                 
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint16_t w_reserved;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .wReserved
        _m01 uint8_t  scale;       //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .scale
        _m02 uint8_t  sign;        //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .sign
        _m03 uint16_t signscale;   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .signscale
        _m04 uint32_t hi32;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Hi32
        _m05 uint32_t lo32;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Lo32
        _m06 uint32_t mid32;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Mid32
        _m07 uint64_t lo64;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Lo64
                                 
        SDK_MAGIC_PROPERTIES( "tagDEC.$", 0x10, true, 0xb13fa264d533045f );           
        SDK_FIXED_SIZE( dec_t, 0x10 );           
    };                           
};
#include "magic/dec_t.end.hpp"
SDK_VERIFY( struct tag::dec_t, 0x10 );
