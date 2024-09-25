#pragma once
#include <sdkgen/support_library.hpp>
#include "point_t.hpp"

namespace win { struct hwnd_t; }

#include "magic/mousehookstructex_t.start.hpp"
namespace tag
{
    // [struct tagMOUSEHOOKSTRUCTEX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mousehookstructex_t                   
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                       
        _m00 struct tag::point_t pt;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pt
        _m01 struct win::hwnd_t* hwnd;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hwnd
        _m02 uint32_t            w_hit_test_code;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .wHitTestCode
        _m03 uint64_t            dw_extra_info;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwExtraInfo
        _m04 uint32_t            mouse_data;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .mouseData
                                                 
        SDK_MAGIC_PROPERTIES( "tagMOUSEHOOKSTRUCTEX.$", 0x28, true, 0x41fcf30875a23806 );                
        SDK_FIXED_SIZE( mousehookstructex_t, 0x28 );                
    };                                           
};
#include "magic/mousehookstructex_t.end.hpp"
SDK_VERIFY( struct tag::mousehookstructex_t, 0x28 );
