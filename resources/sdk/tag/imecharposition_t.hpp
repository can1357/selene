#pragma once
#include <sdkgen/support_library.hpp>
#include "rect_t.hpp"
#include "point_t.hpp"

#include "magic/imecharposition_t.start.hpp"
namespace tag
{
    // [struct tagIMECHARPOSITION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct imecharposition_t                   
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                     
        _m00 uint32_t            dw_size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 uint32_t            dw_char_pos;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwCharPos
        _m02 struct tag::point_t pt;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pt
        _m03 uint32_t            c_line_height;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cLineHeight
        _m04 struct tag::rect_t  rc_document;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .rcDocument
                                               
        SDK_MAGIC_PROPERTIES( "tagIMECHARPOSITION.$", 0x24, true, 0xeabd4c515129602a );              
        SDK_FIXED_SIZE( imecharposition_t, 0x24 );              
    };                                         
};
#include "magic/imecharposition_t.end.hpp"
SDK_VERIFY( struct tag::imecharposition_t, 0x24 );
