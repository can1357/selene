#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct haccel_t; }
namespace win { struct hwnd_t;   }

#include "magic/oifi_t.start.hpp"
namespace tag
{
    // [struct tagOIFI]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct oifi_t                                  
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                         
        _m00 uint32_t              cb;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cb
        _m01 int32_t               f_mdi_app;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .fMDIApp
        _m02 struct win::hwnd_t*   hwnd_frame;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hwndFrame
        _m03 struct win::haccel_t* haccel;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .haccel
        _m04 uint32_t              c_accel_entries;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cAccelEntries
                                                   
        SDK_MAGIC_PROPERTIES( "tagOIFI.$", 0x20, true, 0x75cec09111d9a154 );                
        SDK_FIXED_SIZE( oifi_t, 0x20 );                
    };                                             
};
#include "magic/oifi_t.end.hpp"
SDK_VERIFY( struct tag::oifi_t, 0x20 );
