#pragma once
#include <sdkgen/support_library.hpp>
#include "rect_t.hpp"
#include "point_t.hpp"

#include "magic/compositionform_t.start.hpp"
namespace tag
{
    // [struct tagCOMPOSITIONFORM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct compositionform_t                    
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                      
        _m00 uint32_t            dw_style;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwStyle
        _m01 struct tag::point_t pt_current_pos;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ptCurrentPos
        _m02 struct tag::rect_t  rc_area;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .rcArea
                                                
        SDK_MAGIC_PROPERTIES( "tagCOMPOSITIONFORM.$", 0x1c, true, 0x283f39e5de626f22 );               
        SDK_FIXED_SIZE( compositionform_t, 0x1c );               
    };                                          
};
#include "magic/compositionform_t.end.hpp"
SDK_VERIFY( struct tag::compositionform_t, 0x1c );
