#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hinstance_t; }
namespace win { struct hmenu_t;     }
namespace win { struct hwnd_t;      }

#include "magic/createstructa_t.start.hpp"
namespace tag
{
    // [struct tagCREATESTRUCTA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct createstructa_t                             
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                             
        _m00 void*                    lp_create_params;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpCreateParams
        _m01 struct win::hinstance_t* h_instance;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hInstance
        _m02 struct win::hmenu_t*     h_menu;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hMenu
        _m03 struct win::hwnd_t*      hwnd_parent;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .hwndParent
        _m04 int32_t                  cy;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cy
        _m05 int32_t                  cx;                //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .cx
        _m06 int32_t                  y;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .y
        _m07 int32_t                  x;                 //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .x
        _m08 int32_t                  style;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .style
        _m09 const char*              lpsz_name;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .lpszName
        _m10 const char*              lpsz_class;        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .lpszClass
        _m11 uint32_t                 dw_ex_style;       //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .dwExStyle
                                                       
        SDK_MAGIC_PROPERTIES( "tagCREATESTRUCTA.$", 0x50, true, 0x284f667bcd953a36 );                 
        SDK_FIXED_SIZE( createstructa_t, 0x50 );                 
    };                                                 
};
#include "magic/createstructa_t.end.hpp"
SDK_VERIFY( struct tag::createstructa_t, 0x50 );
