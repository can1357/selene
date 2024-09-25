#pragma once
#include <sdkgen/support_library.hpp>
#include "point_t.hpp"

namespace win { struct hwnd_t; }

#include "magic/msg_t.start.hpp"
namespace tag
{
    // [struct tagMSG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct msg_t                         
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                               
        _m00 struct win::hwnd_t* hwnd;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hwnd
        _m01 uint32_t            message;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .message
        _m02 uint64_t            w_param;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .wParam
        _m03 int64_t             l_param;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .lParam
        _m04 uint32_t            time;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .time
        _m05 struct tag::point_t pt;       //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .pt
                                         
        SDK_MAGIC_PROPERTIES( "tagMSG.$", 0x30, true, 0x180f3da1dff9c2e6 );        
        SDK_FIXED_SIZE( msg_t, 0x30 );        
    };                                   
};
#include "magic/msg_t.end.hpp"
SDK_VERIFY( struct tag::msg_t, 0x30 );
