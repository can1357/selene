#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cah_t.start.hpp"
namespace tag
{
    // [struct tagCAH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cah_t              
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t c_elems;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElems
        _m01 int64_t* p_elems;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pElems
                              
        SDK_MAGIC_PROPERTIES( "tagCAH.$", 0x10, true, 0xb47d813a122bb05f );        
        SDK_FIXED_SIZE( cah_t, 0x10 );        
    };                        
};
#include "magic/cah_t.end.hpp"
SDK_VERIFY( struct tag::cah_t, 0x10 );
