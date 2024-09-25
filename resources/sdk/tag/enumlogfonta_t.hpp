#pragma once
#include <sdkgen/support_library.hpp>
#include "logfonta_t.hpp"

#include "magic/enumlogfonta_t.start.hpp"
namespace tag
{
    // [struct tagENUMLOGFONTA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct enumlogfonta_t                          
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                         
        _m00 struct tag::logfonta_t  elf_log_font;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .elfLogFont
        _m01 sdk::array<uint8_t, 64> elf_full_name;  //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .elfFullName
        _m02 sdk::array<uint8_t, 32> elf_style;      //{ +0x007c    +0x007c    +0x007c    +0x007c    +0x007c    } | .elfStyle
                                                   
        SDK_NONVOL_PROPERTIES( "tagENUMLOGFONTA.$", 0x9c, true, 0xc6fb8112c837d294 );              
        SDK_FIXED_SIZE( enumlogfonta_t, 0x9c );              
    };                                             
};
#include "magic/enumlogfonta_t.end.hpp"
SDK_VERIFY( struct tag::enumlogfonta_t, 0x9c );
