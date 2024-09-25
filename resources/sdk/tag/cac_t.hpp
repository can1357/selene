#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cac_t.start.hpp"
namespace tag
{
    // [struct tagCAC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cac_t              
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t c_elems;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElems
        _m01 char*    p_elems;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pElems
                              
        SDK_MAGIC_PROPERTIES( "tagCAC.$", 0x10, true, 0x8dd8ac9c3d40bf7f );        
        SDK_FIXED_SIZE( cac_t, 0x10 );        
    };                        
};
#include "magic/cac_t.end.hpp"
SDK_VERIFY( struct tag::cac_t, 0x10 );
