#pragma once
#include <sdkgen/support_library.hpp>
#include "rect_t.hpp"
#include "point_t.hpp"

#include "magic/windowplacement_t.start.hpp"
namespace tag
{
    // [struct tagWINDOWPLACEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct windowplacement_t                        
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                          
        _m00 uint32_t            length;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .length
        _m01 uint32_t            flags;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .flags
        _m02 uint32_t            show_cmd;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .showCmd
        _m03 struct tag::point_t pt_min_position;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ptMinPosition
        _m04 struct tag::point_t pt_max_position;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ptMaxPosition
        _m05 struct tag::rect_t  rc_normal_position;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .rcNormalPosition
                                                    
        SDK_MAGIC_PROPERTIES( "tagWINDOWPLACEMENT.$", 0x2c, true, 0x450b93f21699c3a5 );                   
        SDK_FIXED_SIZE( windowplacement_t, 0x2c );                   
    };                                              
};
#include "magic/windowplacement_t.end.hpp"
SDK_VERIFY( struct tag::windowplacement_t, 0x2c );
