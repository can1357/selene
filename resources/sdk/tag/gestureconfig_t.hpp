#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gestureconfig_t.start.hpp"
namespace tag
{
    // [struct tagGESTURECONFIG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gestureconfig_t     
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t dw_id;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwID
        _m01 uint32_t dw_want;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwWant
        _m02 uint32_t dw_block;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwBlock
                               
        SDK_MAGIC_PROPERTIES( "tagGESTURECONFIG.$", 0xc, true, 0x2736f50ab84cbcb1 );         
        SDK_FIXED_SIZE( gestureconfig_t, 0xc );         
    };                         
};
#include "magic/gestureconfig_t.end.hpp"
SDK_VERIFY( struct tag::gestureconfig_t, 0xc );
