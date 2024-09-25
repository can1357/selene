#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kbdllhookstruct_t.start.hpp"
namespace tag
{
    // [struct tagKBDLLHOOKSTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kbdllhookstruct_t        
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t vk_code;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .vkCode
        _m01 uint32_t scan_code;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .scanCode
        _m02 uint32_t flags;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .flags
        _m03 uint32_t time;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .time
        _m04 uint64_t dw_extra_info;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwExtraInfo
                                    
        SDK_MAGIC_PROPERTIES( "tagKBDLLHOOKSTRUCT.$", 0x18, true, 0x24d931b40333abac );              
        SDK_FIXED_SIZE( kbdllhookstruct_t, 0x18 );              
    };                              
};
#include "magic/kbdllhookstruct_t.end.hpp"
SDK_VERIFY( struct tag::kbdllhookstruct_t, 0x18 );
