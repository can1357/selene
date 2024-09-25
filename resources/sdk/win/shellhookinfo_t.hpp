#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"

#include "magic/shellhookinfo_t.start.hpp"
namespace win
{
    struct hwnd_t;

    // [struct SHELLHOOKINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct shellhookinfo_t            
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                            
        _m00 struct win::hwnd_t* hwnd;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hwnd
        _m01 struct tag::rect_t  rc;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rc
                                      
        SDK_MAGIC_PROPERTIES( "SHELLHOOKINFO.$", 0x18, true, 0xcddf8d0781116308 );     
        SDK_FIXED_SIZE( shellhookinfo_t, 0x18 );     
    };                                
};
#include "magic/shellhookinfo_t.end.hpp"
SDK_VERIFY( struct win::shellhookinfo_t, 0x18 );
