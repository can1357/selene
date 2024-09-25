#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/touchinput_t.start.hpp"
namespace tag
{
    // [struct tagTOUCHINPUT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct touchinput_t             
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 int32_t  x;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .x
        _m01 int32_t  y;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .y
        _m02 void*    h_source;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hSource
        _m03 uint32_t dw_id;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwID
        _m04 uint32_t dw_flags;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwFlags
        _m05 uint32_t dw_mask;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwMask
        _m06 uint32_t dw_time;        //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwTime
        _m07 uint64_t dw_extra_info;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwExtraInfo
        _m08 uint32_t cx_contact;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .cxContact
        _m09 uint32_t cy_contact;     //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .cyContact
                                    
        SDK_MAGIC_PROPERTIES( "tagTOUCHINPUT.$", 0x30, true, 0xc0ed1e432e901df4 );              
        SDK_FIXED_SIZE( touchinput_t, 0x30 );              
    };                              
};
#include "magic/touchinput_t.end.hpp"
SDK_VERIFY( struct tag::touchinput_t, 0x30 );
