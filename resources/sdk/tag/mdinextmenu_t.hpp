#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hmenu_t; }
namespace win { struct hwnd_t;  }

#include "magic/mdinextmenu_t.start.hpp"
namespace tag
{
    // [struct tagMDINEXTMENU]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mdinextmenu_t                     
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                   
        _m00 struct win::hmenu_t* hmenu_in;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hmenuIn
        _m01 struct win::hmenu_t* hmenu_next;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hmenuNext
        _m02 struct win::hwnd_t*  hwnd_next;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hwndNext
                                             
        SDK_MAGIC_PROPERTIES( "tagMDINEXTMENU.$", 0x18, true, 0x4e2dcaf687424fd4 );           
        SDK_FIXED_SIZE( mdinextmenu_t, 0x18 );           
    };                                       
};
#include "magic/mdinextmenu_t.end.hpp"
SDK_VERIFY( struct tag::mdinextmenu_t, 0x18 );
