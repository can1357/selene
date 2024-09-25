#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stylebufw_t.start.hpp"
namespace tag
{
    // [struct tagSTYLEBUFW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stylebufw_t                              
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                          
        _m00 uint32_t                dw_style;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwStyle
        _m01 sdk::array<wchar_t, 32> sz_description;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .szDescription
                                                    
        SDK_MAGIC_PROPERTIES( "tagSTYLEBUFW.$", 0x44, true, 0x41be68c62ab2202b );               
        SDK_FIXED_SIZE( stylebufw_t, 0x44 );               
    };                                              
};
#include "magic/stylebufw_t.end.hpp"
SDK_VERIFY( struct tag::stylebufw_t, 0x44 );
