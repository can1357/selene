#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hwnd_t; }

#include "magic/cwpstruct_t.start.hpp"
namespace tag
{
    // [struct tagCWPSTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cwpstruct_t                   
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                               
        _m00 int64_t             l_param;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lParam
        _m01 uint64_t            w_param;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .wParam
        _m02 uint32_t            message;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .message
        _m03 struct win::hwnd_t* hwnd;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .hwnd
                                         
        SDK_MAGIC_PROPERTIES( "tagCWPSTRUCT.$", 0x20, true, 0x1042e979a6a8a7e5 );        
        SDK_FIXED_SIZE( cwpstruct_t, 0x20 );        
    };                                   
};
#include "magic/cwpstruct_t.end.hpp"
SDK_VERIFY( struct tag::cwpstruct_t, 0x20 );
