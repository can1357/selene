#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/caub_t.start.hpp"
namespace tag
{
    // [struct tagCAUB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct caub_t             
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t c_elems;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElems
        _m01 uint8_t* p_elems;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pElems
                              
        SDK_MAGIC_PROPERTIES( "tagCAUB.$", 0x10, true, 0xee95654bbe8c479e );        
        SDK_FIXED_SIZE( caub_t, 0x10 );        
    };                        
};
#include "magic/caub_t.end.hpp"
SDK_VERIFY( struct tag::caub_t, 0x10 );
