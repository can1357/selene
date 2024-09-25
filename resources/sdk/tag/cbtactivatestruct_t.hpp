#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hwnd_t; }

#include "magic/cbtactivatestruct_t.start.hpp"
namespace tag
{
    // [struct tagCBTACTIVATESTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cbtactivatestruct_t                
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                    
        _m00 int32_t             f_mouse;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fMouse
        _m01 struct win::hwnd_t* h_wnd_active;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hWndActive
                                              
        SDK_MAGIC_PROPERTIES( "tagCBTACTIVATESTRUCT.$", 0x10, true, 0x7800a2bbd0f66628 );             
        SDK_FIXED_SIZE( cbtactivatestruct_t, 0x10 );             
    };                                        
};
#include "magic/cbtactivatestruct_t.end.hpp"
SDK_VERIFY( struct tag::cbtactivatestruct_t, 0x10 );
