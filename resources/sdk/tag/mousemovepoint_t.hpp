#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mousemovepoint_t.start.hpp"
namespace tag
{
    // [struct tagMOUSEMOVEPOINT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mousemovepoint_t         
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 int32_t  x;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .x
        _m01 int32_t  y;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .y
        _m02 uint32_t time;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .time
        _m03 uint64_t dw_extra_info;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwExtraInfo
                                    
        SDK_MAGIC_PROPERTIES( "tagMOUSEMOVEPOINT.$", 0x18, true, 0xb511ca41d7d537dd );              
        SDK_FIXED_SIZE( mousemovepoint_t, 0x18 );              
    };                              
};
#include "magic/mousemovepoint_t.end.hpp"
SDK_VERIFY( struct tag::mousemovepoint_t, 0x18 );
