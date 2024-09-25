#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/caflt_t.start.hpp"
namespace tag
{
    // [struct tagCAFLT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct caflt_t            
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t c_elems;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElems
        _m01 float*   p_elems;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pElems
                              
        SDK_MAGIC_PROPERTIES( "tagCAFLT.$", 0x10, true, 0xa7df36aa5465c7cb );        
        SDK_FIXED_SIZE( caflt_t, 0x10 );        
    };                        
};
#include "magic/caflt_t.end.hpp"
SDK_VERIFY( struct tag::caflt_t, 0x10 );
