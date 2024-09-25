#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cabstr_t.start.hpp"
namespace tag
{
    // [struct tagCABSTR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cabstr_t            
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                     
        _m00 uint32_t  c_elems;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElems
        _m01 wchar_t** p_elems;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pElems
                               
        SDK_MAGIC_PROPERTIES( "tagCABSTR.$", 0x10, true, 0x84c3edb43b6356ec );        
        SDK_FIXED_SIZE( cabstr_t, 0x10 );        
    };                         
};
#include "magic/cabstr_t.end.hpp"
SDK_VERIFY( struct tag::cabstr_t, 0x10 );
