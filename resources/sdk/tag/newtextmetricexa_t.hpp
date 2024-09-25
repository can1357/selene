#pragma once
#include <sdkgen/support_library.hpp>
#include "fontsignature_t.hpp"
#include "newtextmetrica_t.hpp"

#include "magic/newtextmetricexa_t.start.hpp"
namespace tag
{
    // [struct tagNEWTEXTMETRICEXA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct newtextmetricexa_t                          
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                             
        _m00 struct tag::newtextmetrica_t ntm_tm;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ntmTm
        _m01 struct tag::fontsignature_t  ntm_font_sig;  //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .ntmFontSig
                                                       
        SDK_NONVOL_PROPERTIES( "tagNEWTEXTMETRICEXA.$", 0x60, true, 0x94db5010c20f4325 );             
        SDK_FIXED_SIZE( newtextmetricexa_t, 0x60 );             
    };                                                 
};
#include "magic/newtextmetricexa_t.end.hpp"
SDK_VERIFY( struct tag::newtextmetricexa_t, 0x60 );
