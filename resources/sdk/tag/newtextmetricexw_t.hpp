#pragma once
#include <sdkgen/support_library.hpp>
#include "fontsignature_t.hpp"
#include "newtextmetricw_t.hpp"

#include "magic/newtextmetricexw_t.start.hpp"
namespace tag
{
    // [struct tagNEWTEXTMETRICEXW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct newtextmetricexw_t                          
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                             
        _m00 struct tag::newtextmetricw_t ntm_tm;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ntmTm
        _m01 struct tag::fontsignature_t  ntm_font_sig;  //{ +0x004c    +0x004c    +0x004c    +0x004c    +0x004c    } | .ntmFontSig
                                                       
        SDK_NONVOL_PROPERTIES( "tagNEWTEXTMETRICEXW.$", 0x64, true, 0x17c5d828d2e30123 );             
        SDK_FIXED_SIZE( newtextmetricexw_t, 0x64 );             
    };                                                 
};
#include "magic/newtextmetricexw_t.end.hpp"
SDK_VERIFY( struct tag::newtextmetricexw_t, 0x64 );
