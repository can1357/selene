#pragma once
#include <sdkgen/support_library.hpp>
#include "point_t.hpp"

#include "magic/msllhookstruct_t.start.hpp"
namespace tag
{
    // [struct tagMSLLHOOKSTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct msllhookstruct_t                    
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                     
        _m00 struct tag::point_t pt;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pt
        _m01 uint32_t            mouse_data;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .mouseData
        _m02 uint32_t            flags;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .flags
        _m03 uint32_t            time;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .time
        _m04 uint64_t            dw_extra_info;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwExtraInfo
                                               
        SDK_MAGIC_PROPERTIES( "tagMSLLHOOKSTRUCT.$", 0x20, true, 0xecff1b7c4980f923 );              
        SDK_FIXED_SIZE( msllhookstruct_t, 0x20 );              
    };                                         
};
#include "magic/msllhookstruct_t.end.hpp"
SDK_VERIFY( struct tag::msllhookstruct_t, 0x20 );
