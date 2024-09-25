#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rem_formatetc_t.start.hpp"
namespace tag
{
    // [struct tagRemFORMATETC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rem_formatetc_t      
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t cf_format;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cfFormat
        _m01 uint32_t ptd;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ptd
        _m02 uint32_t dw_aspect;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwAspect
        _m03 int32_t  lindex;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .lindex
        _m04 uint32_t tymed;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .tymed
                                
        SDK_MAGIC_PROPERTIES( "tagRemFORMATETC.$", 0x14, true, 0xe534bf84d483c10e );          
        SDK_FIXED_SIZE( rem_formatetc_t, 0x14 );          
    };                          
};
#include "magic/rem_formatetc_t.end.hpp"
SDK_VERIFY( struct tag::rem_formatetc_t, 0x14 );
