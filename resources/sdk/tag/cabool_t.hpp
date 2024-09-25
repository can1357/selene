#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cabool_t.start.hpp"
namespace tag
{
    // [struct tagCABOOL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cabool_t           
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t c_elems;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElems
        _m01 int16_t* p_elems;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pElems
                              
        SDK_MAGIC_PROPERTIES( "tagCABOOL.$", 0x10, true, 0x27b9c4784593038e );        
        SDK_FIXED_SIZE( cabool_t, 0x10 );        
    };                        
};
#include "magic/cabool_t.end.hpp"
SDK_VERIFY( struct tag::cabool_t, 0x10 );
