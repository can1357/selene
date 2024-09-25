#pragma once
#include <sdkgen/support_library.hpp>
#include "ciexyz_t.hpp"

#include "magic/icexyztriple_t.start.hpp"
namespace tag
{
    // [struct tagICEXYZTRIPLE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct icexyztriple_t                      
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                     
        _m00 struct tag::ciexyz_t ciexyz_red;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ciexyzRed
        _m01 struct tag::ciexyz_t ciexyz_green;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .ciexyzGreen
        _m02 struct tag::ciexyz_t ciexyz_blue;   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ciexyzBlue
                                               
        SDK_NONVOL_PROPERTIES( "tagICEXYZTRIPLE.$", 0x24, true, 0xdd5c3d50b826f85 );             
        SDK_FIXED_SIZE( icexyztriple_t, 0x24 );             
    };                                         
};
#include "magic/icexyztriple_t.end.hpp"
SDK_VERIFY( struct tag::icexyztriple_t, 0x24 );
