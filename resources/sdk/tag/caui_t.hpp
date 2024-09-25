#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/caui_t.start.hpp"
namespace tag
{
    // [struct tagCAUI]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct caui_t              
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                     
        _m00 uint32_t  c_elems;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElems
        _m01 uint16_t* p_elems;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pElems
                               
        SDK_MAGIC_PROPERTIES( "tagCAUI.$", 0x10, true, 0xa9a29d825bca6211 );        
        SDK_FIXED_SIZE( caui_t, 0x10 );        
    };                         
};
#include "magic/caui_t.end.hpp"
SDK_VERIFY( struct tag::caui_t, 0x10 );
