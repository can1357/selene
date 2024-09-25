#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hwnd_t; }

#include "magic/eventmsg_t.start.hpp"
namespace tag
{
    // [struct tagEVENTMSG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct eventmsg_t                    
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                               
        _m00 uint32_t            message;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .message
        _m01 uint32_t            param_l;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .paramL
        _m02 uint32_t            param_h;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .paramH
        _m03 uint32_t            time;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .time
        _m04 struct win::hwnd_t* hwnd;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hwnd
                                         
        SDK_MAGIC_PROPERTIES( "tagEVENTMSG.$", 0x18, true, 0xceba8d28d0de6b85 );        
        SDK_FIXED_SIZE( eventmsg_t, 0x18 );        
    };                                   
};
#include "magic/eventmsg_t.end.hpp"
SDK_VERIFY( struct tag::eventmsg_t, 0x18 );
