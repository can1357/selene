#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mouseinput_t.start.hpp"
namespace tag
{
    // [struct tagMOUSEINPUT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mouseinput_t             
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 int32_t  dx;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dx
        _m01 int32_t  dy;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dy
        _m02 uint32_t mouse_data;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .mouseData
        _m03 uint32_t dw_flags;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwFlags
        _m04 uint32_t time;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .time
        _m05 uint64_t dw_extra_info;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwExtraInfo
                                    
        SDK_MAGIC_PROPERTIES( "tagMOUSEINPUT.$", 0x20, true, 0xd05ca5a8d2967ee4 );              
        SDK_FIXED_SIZE( mouseinput_t, 0x20 );              
    };                              
};
#include "magic/mouseinput_t.end.hpp"
SDK_VERIFY( struct tag::mouseinput_t, 0x20 );
