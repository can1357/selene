#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cascode_t.start.hpp"
namespace tag
{
    // [struct tagCASCODE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cascode_t          
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t c_elems;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElems
        _m01 int32_t* p_elems;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pElems
                              
        SDK_MAGIC_PROPERTIES( "tagCASCODE.$", 0x10, true, 0x23a448f953dd7d8a );        
        SDK_FIXED_SIZE( cascode_t, 0x10 );        
    };                        
};
#include "magic/cascode_t.end.hpp"
SDK_VERIFY( struct tag::cascode_t, 0x10 );
