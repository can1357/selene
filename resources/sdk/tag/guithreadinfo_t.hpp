#pragma once
#include <sdkgen/support_library.hpp>
#include "rect_t.hpp"

namespace win { struct hwnd_t; }

#include "magic/guithreadinfo_t.start.hpp"
namespace tag
{
    // [struct tagGUITHREADINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct guithreadinfo_t                       
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                       
        _m00 uint32_t            cb_size;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t            flags;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .flags
        _m02 struct win::hwnd_t* hwnd_active;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hwndActive
        _m03 struct win::hwnd_t* hwnd_focus;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hwndFocus
        _m04 struct win::hwnd_t* hwnd_capture;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .hwndCapture
        _m05 struct win::hwnd_t* hwnd_menu_owner;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .hwndMenuOwner
        _m06 struct win::hwnd_t* hwnd_move_size;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .hwndMoveSize
        _m07 struct win::hwnd_t* hwnd_caret;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .hwndCaret
        _m08 struct tag::rect_t  rc_caret;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .rcCaret
                                                 
        SDK_MAGIC_PROPERTIES( "tagGUITHREADINFO.$", 0x48, true, 0x5d72b5dac052e170 );                
        SDK_FIXED_SIZE( guithreadinfo_t, 0x48 );                
    };                                           
};
#include "magic/guithreadinfo_t.end.hpp"
SDK_VERIFY( struct tag::guithreadinfo_t, 0x48 );
