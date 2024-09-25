#pragma once
#include <sdkgen/support_library.hpp>
#include "rect_t.hpp"

#include "magic/polytextw_t.start.hpp"
namespace tag
{
    // [struct tagPOLYTEXTW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct polytextw_t                   
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                               
        _m00 int32_t            x;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .x
        _m01 int32_t            y;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .y
        _m02 uint32_t           n;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .n
        _m03 const wchar_t*     lpstr;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .lpstr
        _m04 uint32_t           ui_flags;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .uiFlags
        _m05 struct tag::rect_t rcl;       //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .rcl
        _m06 int32_t*           pdx;       //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .pdx
                                         
        SDK_NONVOL_PROPERTIES( "tagPOLYTEXTW.$", 0x38, true, 0xd86f34c0cba39d95 );         
        SDK_FIXED_SIZE( polytextw_t, 0x38 );         
    };                                   
};
#include "magic/polytextw_t.end.hpp"
SDK_VERIFY( struct tag::polytextw_t, 0x38 );
