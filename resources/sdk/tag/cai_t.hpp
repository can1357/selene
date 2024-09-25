#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cai_t.start.hpp"
namespace tag
{
    // [struct tagCAI]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cai_t              
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t c_elems;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElems
        _m01 int16_t* p_elems;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pElems
                              
        SDK_MAGIC_PROPERTIES( "tagCAI.$", 0x10, true, 0xf095fe60177e5a59 );        
        SDK_FIXED_SIZE( cai_t, 0x10 );        
    };                        
};
#include "magic/cai_t.end.hpp"
SDK_VERIFY( struct tag::cai_t, 0x10 );
