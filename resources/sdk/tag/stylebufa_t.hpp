#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stylebufa_t.start.hpp"
namespace tag
{
    // [struct tagSTYLEBUFA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stylebufa_t                           
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                       
        _m00 uint32_t             dw_style;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwStyle
        _m01 sdk::array<char, 32> sz_description;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .szDescription
                                                 
        SDK_MAGIC_PROPERTIES( "tagSTYLEBUFA.$", 0x24, true, 0x7459f7daff4204e );               
        SDK_FIXED_SIZE( stylebufa_t, 0x24 );               
    };                                           
};
#include "magic/stylebufa_t.end.hpp"
SDK_VERIFY( struct tag::stylebufa_t, 0x24 );
