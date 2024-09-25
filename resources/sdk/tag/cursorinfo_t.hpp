#pragma once
#include <sdkgen/support_library.hpp>
#include "point_t.hpp"

namespace win { struct hicon_t; }

#include "magic/cursorinfo_t.start.hpp"
namespace tag
{
    // [struct tagCURSORINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cursorinfo_t                         
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                      
        _m00 uint32_t             cb_size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t             flags;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .flags
        _m02 struct win::hicon_t* h_cursor;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hCursor
        _m03 struct tag::point_t  pt_screen_pos;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ptScreenPos
                                                
        SDK_MAGIC_PROPERTIES( "tagCURSORINFO.$", 0x18, true, 0x376c1a307e0987df );              
        SDK_FIXED_SIZE( cursorinfo_t, 0x18 );              
    };                                          
};
#include "magic/cursorinfo_t.end.hpp"
SDK_VERIFY( struct tag::cursorinfo_t, 0x18 );
