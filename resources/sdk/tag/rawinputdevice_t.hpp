#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hwnd_t; }

#include "magic/rawinputdevice_t.start.hpp"
namespace tag
{
    // [struct tagRAWINPUTDEVICE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rawinputdevice_t                    
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                     
        _m00 uint16_t            us_usage_page;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .usUsagePage
        _m01 uint16_t            us_usage;       //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .usUsage
        _m02 uint32_t            dw_flags;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m03 struct win::hwnd_t* hwnd_target;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hwndTarget
                                               
        SDK_MAGIC_PROPERTIES( "tagRAWINPUTDEVICE.$", 0x10, true, 0x94770b1674af5971 );              
        SDK_FIXED_SIZE( rawinputdevice_t, 0x10 );              
    };                                         
};
#include "magic/rawinputdevice_t.end.hpp"
SDK_VERIFY( struct tag::rawinputdevice_t, 0x10 );
