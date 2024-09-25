#pragma once
#include <sdkgen/support_library.hpp>
#include "rect_t.hpp"
#include "point_t.hpp"

#include "magic/candidateform_t.start.hpp"
namespace tag
{
    // [struct tagCANDIDATEFORM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct candidateform_t                      
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                      
        _m00 uint32_t            dw_index;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwIndex
        _m01 uint32_t            dw_style;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwStyle
        _m02 struct tag::point_t pt_current_pos;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ptCurrentPos
        _m03 struct tag::rect_t  rc_area;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .rcArea
                                                
        SDK_MAGIC_PROPERTIES( "tagCANDIDATEFORM.$", 0x20, true, 0x4585bee34a63ed4d );               
        SDK_FIXED_SIZE( candidateform_t, 0x20 );               
    };                                          
};
#include "magic/candidateform_t.end.hpp"
SDK_VERIFY( struct tag::candidateform_t, 0x20 );
