#pragma once
#include <sdkgen/support_library.hpp>
#include "point_t.hpp"

namespace win { struct hwnd_t; }

#include "magic/mousehookstruct_t.start.hpp"
namespace tag
{
    // [struct tagMOUSEHOOKSTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mousehookstruct_t                     
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                       
        _m00 struct tag::point_t pt;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pt
        _m01 struct win::hwnd_t* hwnd;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hwnd
        _m02 uint32_t            w_hit_test_code;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .wHitTestCode
        _m03 uint64_t            dw_extra_info;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwExtraInfo
                                                 
        SDK_MAGIC_PROPERTIES( "tagMOUSEHOOKSTRUCT.$", 0x20, true, 0x693758bd6b7d34c5 );                
        SDK_FIXED_SIZE( mousehookstruct_t, 0x20 );                
    };                                           
};
#include "magic/mousehookstruct_t.end.hpp"
SDK_VERIFY( struct tag::mousehookstruct_t, 0x20 );
