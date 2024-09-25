#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cacy_t.start.hpp"
namespace tag
{
    union cy_t;

    // [struct tagCACY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cacy_t                     
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                            
        _m00 uint32_t         c_elems;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElems
        _m01 union tag::cy_t* p_elems;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pElems
                                      
        SDK_MAGIC_PROPERTIES( "tagCACY.$", 0x10, true, 0x425b0011e1ab7494 );        
        SDK_FIXED_SIZE( cacy_t, 0x10 );        
    };                                
};
#include "magic/cacy_t.end.hpp"
SDK_VERIFY( struct tag::cacy_t, 0x10 );
