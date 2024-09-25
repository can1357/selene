#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/helpwininfow_t.start.hpp"
namespace tag
{
    // [struct tagHELPWININFOW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct helpwininfow_t                         
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                        
        _m00 int32_t                w_struct_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .wStructSize
        _m01 int32_t                x;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .x
        _m02 int32_t                y;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .y
        _m03 int32_t                dx;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dx
        _m04 int32_t                dy;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dy
        _m05 int32_t                w_max;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .wMax
        _m06 sdk::array<wchar_t, 2> rgch_member;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .rgchMember
                                                  
        SDK_MAGIC_PROPERTIES( "tagHELPWININFOW.$", 0x1c, true, 0xe9da927f238ea880 );              
        SDK_FIXED_SIZE( helpwininfow_t, 0x1c );              
    };                                            
};
#include "magic/helpwininfow_t.end.hpp"
SDK_VERIFY( struct tag::helpwininfow_t, 0x1c );
