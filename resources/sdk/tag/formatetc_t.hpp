#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/formatetc_t.start.hpp"
namespace tag
{
    struct dvtargetdevice_t;

    // [struct tagFORMATETC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct formatetc_t                               
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                           
        _m00 uint16_t                      cf_format;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cfFormat
        _m01 struct tag::dvtargetdevice_t* ptd;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ptd
        _m02 uint32_t                      dw_aspect;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwAspect
        _m03 int32_t                       lindex;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .lindex
        _m04 uint32_t                      tymed;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .tymed
                                                     
        SDK_MAGIC_PROPERTIES( "tagFORMATETC.$", 0x20, true, 0xbff3add8510a5870 );          
        SDK_FIXED_SIZE( formatetc_t, 0x20 );          
    };                                               
};
#include "magic/formatetc_t.end.hpp"
SDK_VERIFY( struct tag::formatetc_t, 0x20 );
