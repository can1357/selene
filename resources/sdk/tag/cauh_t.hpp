#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cauh_t.start.hpp"
namespace tag
{
    // [struct tagCAUH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cauh_t              
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                     
        _m00 uint32_t  c_elems;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElems
        _m01 uint64_t* p_elems;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pElems
                               
        SDK_MAGIC_PROPERTIES( "tagCAUH.$", 0x10, true, 0x205f11e4afb7c720 );        
        SDK_FIXED_SIZE( cauh_t, 0x10 );        
    };                         
};
#include "magic/cauh_t.end.hpp"
SDK_VERIFY( struct tag::cauh_t, 0x10 );
