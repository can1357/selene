#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hwnd_t; }

#include "magic/nmhdr_t.start.hpp"
namespace tag
{
    // [struct tagNMHDR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nmhdr_t                         
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                 
        _m00 struct win::hwnd_t* hwnd_from;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hwndFrom
        _m01 uint64_t            id_from;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .idFrom
        _m02 uint32_t            code;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .code
                                           
        SDK_MAGIC_PROPERTIES( "tagNMHDR.$", 0x18, true, 0x26698437c5764487 );          
        SDK_FIXED_SIZE( nmhdr_t, 0x18 );          
    };                                     
};
#include "magic/nmhdr_t.end.hpp"
SDK_VERIFY( struct tag::nmhdr_t, 0x18 );
