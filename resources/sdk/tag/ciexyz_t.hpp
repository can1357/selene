#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ciexyz_t.start.hpp"
namespace tag
{
    // [struct tagCIEXYZ]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ciexyz_t           
    {                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                    
        _m00 int32_t ciexyz_x;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ciexyzX
        _m01 int32_t ciexyz_y;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ciexyzY
        _m02 int32_t ciexyz_z;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ciexyzZ
                              
        SDK_NONVOL_PROPERTIES( "tagCIEXYZ.$", 0xc, true, 0xa94b0311b078d123 );         
        SDK_FIXED_SIZE( ciexyz_t, 0xc );         
    };                        
};
#include "magic/ciexyz_t.end.hpp"
SDK_VERIFY( struct tag::ciexyz_t, 0xc );
