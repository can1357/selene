#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/safearraybound_t.start.hpp"
namespace tag
{
    // [struct tagSAFEARRAYBOUND]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct safearraybound_t      
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t c_elements;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElements
        _m01 int32_t  l_lbound;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .lLbound
                                 
        SDK_MAGIC_PROPERTIES( "tagSAFEARRAYBOUND.$", 0x8, true, 0xebb3eb05cd31111c );           
        SDK_FIXED_SIZE( safearraybound_t, 0x8 );           
    };                           
};
#include "magic/safearraybound_t.end.hpp"
SDK_VERIFY( struct tag::safearraybound_t, 0x8 );
