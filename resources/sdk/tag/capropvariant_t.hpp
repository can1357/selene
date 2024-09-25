#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/capropvariant_t.start.hpp"
namespace tag
{
    struct propvariant_t;

    // [struct tagCAPROPVARIANT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct capropvariant_t                      
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                      
        _m00 uint32_t                   c_elems;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElems
        _m01 struct tag::propvariant_t* p_elems;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pElems
                                                
        SDK_MAGIC_PROPERTIES( "tagCAPROPVARIANT.$", 0x10, true, 0x6122548162ce0152 );        
        SDK_FIXED_SIZE( capropvariant_t, 0x10 );        
    };                                          
};
#include "magic/capropvariant_t.end.hpp"
SDK_VERIFY( struct tag::capropvariant_t, 0x10 );
