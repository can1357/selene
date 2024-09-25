#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cadate_t.start.hpp"
namespace tag
{
    // [struct tagCADATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cadate_t           
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t c_elems;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElems
        _m01 double*  p_elems;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pElems
                              
        SDK_MAGIC_PROPERTIES( "tagCADATE.$", 0x10, true, 0xc4c0f346d90b8a28 );        
        SDK_FIXED_SIZE( cadate_t, 0x10 );        
    };                        
};
#include "magic/cadate_t.end.hpp"
SDK_VERIFY( struct tag::cadate_t, 0x10 );
