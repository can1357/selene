#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/calpstr_t.start.hpp"
namespace tag
{
    // [struct tagCALPSTR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct calpstr_t          
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t c_elems;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElems
        _m01 char**   p_elems;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pElems
                              
        SDK_MAGIC_PROPERTIES( "tagCALPSTR.$", 0x10, true, 0xe269de8b7285191b );        
        SDK_FIXED_SIZE( calpstr_t, 0x10 );        
    };                        
};
#include "magic/calpstr_t.end.hpp"
SDK_VERIFY( struct tag::calpstr_t, 0x10 );
