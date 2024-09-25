#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mdicreatestructa_t.start.hpp"
namespace tag
{
    // [struct tagMDICREATESTRUCTA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mdicreatestructa_t     
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                        
        _m00 const char* sz_class;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .szClass
        _m01 const char* sz_title;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .szTitle
        _m02 void*       h_owner;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hOwner
        _m03 int32_t     x;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .x
        _m04 int32_t     y;         //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .y
        _m05 int32_t     cx;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cx
        _m06 int32_t     cy;        //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .cy
        _m07 uint32_t    style;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .style
        _m08 int64_t     l_param;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .lParam
                                  
        SDK_MAGIC_PROPERTIES( "tagMDICREATESTRUCTA.$", 0x38, true, 0xec182a5aadfdfec5 );         
        SDK_FIXED_SIZE( mdicreatestructa_t, 0x38 );         
    };                            
};
#include "magic/mdicreatestructa_t.end.hpp"
SDK_VERIFY( struct tag::mdicreatestructa_t, 0x38 );
