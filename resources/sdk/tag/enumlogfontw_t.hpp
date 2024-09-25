#pragma once
#include <sdkgen/support_library.hpp>
#include "logfontw_t.hpp"

#include "magic/enumlogfontw_t.start.hpp"
namespace tag
{
    // [struct tagENUMLOGFONTW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct enumlogfontw_t                          
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                         
        _m00 struct tag::logfontw_t  elf_log_font;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .elfLogFont
        _m01 sdk::array<wchar_t, 64> elf_full_name;  //{ +0x005c    +0x005c    +0x005c    +0x005c    +0x005c    } | .elfFullName
        _m02 sdk::array<wchar_t, 32> elf_style;      //{ +0x00dc    +0x00dc    +0x00dc    +0x00dc    +0x00dc    } | .elfStyle
                                                   
        SDK_NONVOL_PROPERTIES( "tagENUMLOGFONTW.$", 0x11c, true, 0x293dfcf015b1261a );              
        SDK_FIXED_SIZE( enumlogfontw_t, 0x11c );              
    };                                             
};
#include "magic/enumlogfontw_t.end.hpp"
SDK_VERIFY( struct tag::enumlogfontw_t, 0x11c );
