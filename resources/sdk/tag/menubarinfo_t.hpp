#pragma once
#include <sdkgen/support_library.hpp>
#include "rect_t.hpp"

namespace win { struct hmenu_t; }
namespace win { struct hwnd_t;  }

#include "magic/menubarinfo_t.start.hpp"
namespace tag
{
    // [struct tagMENUBARINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct menubarinfo_t                        
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                      
        _m00 uint32_t             cb_size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct tag::rect_t   rc_bar;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .rcBar
        _m02 struct win::hmenu_t* h_menu;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .hMenu
        _m03 struct win::hwnd_t*  hwnd_menu;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .hwndMenu
        _m04 int1_t               f_bar_focused;  //{ +0x0028@0  +0x0028@0  +0x0028@0  +0x0028@0  } | .fBarFocused
        _m05 int1_t               f_focused;      //{ +0x0028@1  +0x0028@1  +0x0028@1  +0x0028@1  } | .fFocused
                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                      
        _m06 int30_t              f_unused;       //{ +0x0028@2  +0x0028@2  +0x0028@2  } | .fUnused
                                                
        SDK_MAGIC_PROPERTIES( "tagMENUBARINFO.$", 0x30, true, 0xd00b2b3dc78c77ae );              
        SDK_FIXED_SIZE( menubarinfo_t, 0x30 );              
    };                                          
};
#include "magic/menubarinfo_t.end.hpp"
SDK_VERIFY( struct tag::menubarinfo_t, 0x30 );
