#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hwnd_t; }

#include "magic/cwpretstruct_t.start.hpp"
namespace tag
{
    // [struct tagCWPRETSTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cwpretstruct_t                 
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                
        _m00 int64_t             l_result;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lResult
        _m01 int64_t             l_param;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lParam
        _m02 uint64_t            w_param;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .wParam
        _m03 uint32_t            message;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .message
        _m04 struct win::hwnd_t* hwnd;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .hwnd
                                          
        SDK_MAGIC_PROPERTIES( "tagCWPRETSTRUCT.$", 0x28, true, 0x99abe77d01d4729d );         
        SDK_FIXED_SIZE( cwpretstruct_t, 0x28 );         
    };                                    
};
#include "magic/cwpretstruct_t.end.hpp"
SDK_VERIFY( struct tag::cwpretstruct_t, 0x28 );
