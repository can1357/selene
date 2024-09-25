#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hwnd_t; }

#include "magic/windowpos_t.start.hpp"
namespace tag
{
    // [struct tagWINDOWPOS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct windowpos_t                             
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                         
        _m00 struct win::hwnd_t* hwnd;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hwnd
        _m01 struct win::hwnd_t* hwnd_insert_after;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hwndInsertAfter
        _m02 int32_t             x;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .x
        _m03 int32_t             y;                  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .y
        _m04 int32_t             cx;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cx
        _m05 int32_t             cy;                 //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .cy
        _m06 uint32_t            flags;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .flags
                                                   
        SDK_MAGIC_PROPERTIES( "tagWINDOWPOS.$", 0x28, true, 0x23e06b390c681f46 );                  
        SDK_FIXED_SIZE( windowpos_t, 0x28 );                  
    };                                             
};
#include "magic/windowpos_t.end.hpp"
SDK_VERIFY( struct tag::windowpos_t, 0x28 );
