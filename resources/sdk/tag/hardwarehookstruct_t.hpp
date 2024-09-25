#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hwnd_t; }

#include "magic/hardwarehookstruct_t.start.hpp"
namespace tag
{
    // [struct tagHARDWAREHOOKSTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hardwarehookstruct_t          
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                               
        _m00 struct win::hwnd_t* hwnd;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hwnd
        _m01 uint32_t            message;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .message
        _m02 uint64_t            w_param;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .wParam
        _m03 int64_t             l_param;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .lParam
                                         
        SDK_MAGIC_PROPERTIES( "tagHARDWAREHOOKSTRUCT.$", 0x20, true, 0x664ee0efff97e010 );        
        SDK_FIXED_SIZE( hardwarehookstruct_t, 0x20 );        
    };                                   
};
#include "magic/hardwarehookstruct_t.end.hpp"
SDK_VERIFY( struct tag::hardwarehookstruct_t, 0x20 );
