#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cadbl_t.start.hpp"
namespace tag
{
    // [struct tagCADBL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cadbl_t            
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t c_elems;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElems
        _m01 double*  p_elems;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pElems
                              
        SDK_MAGIC_PROPERTIES( "tagCADBL.$", 0x10, true, 0xdaaf64b486d8d0b1 );        
        SDK_FIXED_SIZE( cadbl_t, 0x10 );        
    };                        
};
#include "magic/cadbl_t.end.hpp"
SDK_VERIFY( struct tag::cadbl_t, 0x10 );
