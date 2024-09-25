#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/typedesc_t.start.hpp"
namespace tag
{
    struct typedesc_t;
    struct arraydesc_t;

    // [struct tagTYPEDESC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct typedesc_t                          
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                     
        _m00 struct tag::typedesc_t*  lptdesc;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lptdesc
        _m01 struct tag::arraydesc_t* lpadesc;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpadesc
        _m02 uint32_t                 hreftype;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hreftype
        _m03 uint16_t                 vt;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .vt
                                               
        SDK_MAGIC_PROPERTIES( "tagTYPEDESC.$", 0x10, true, 0x4fb113fcab42943 );         
        SDK_FIXED_SIZE( typedesc_t, 0x10 );         
    };                                         
};
#include "magic/typedesc_t.end.hpp"
SDK_VERIFY( struct tag::typedesc_t, 0x10 );
