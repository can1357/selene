#pragma once
#include <sdkgen/support_library.hpp>
#include "logfontw_t.hpp"

#include "magic/enumlogfontexw_t.start.hpp"
namespace tag
{
    // [struct tagENUMLOGFONTEXW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct enumlogfontexw_t                        
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                         
        _m00 struct tag::logfontw_t  elf_log_font;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .elfLogFont
        _m01 sdk::array<wchar_t, 64> elf_full_name;  //{ +0x005c    +0x005c    +0x005c    +0x005c    +0x005c    } | .elfFullName
        _m02 sdk::array<wchar_t, 32> elf_style;      //{ +0x00dc    +0x00dc    +0x00dc    +0x00dc    +0x00dc    } | .elfStyle
        _m03 sdk::array<wchar_t, 32> elf_script;     //{ +0x011c    +0x011c    +0x011c    +0x011c    +0x011c    } | .elfScript
                                                   
        SDK_NONVOL_PROPERTIES( "tagENUMLOGFONTEXW.$", 0x15c, true, 0xf833c0e09c474271 );              
        SDK_FIXED_SIZE( enumlogfontexw_t, 0x15c );              
    };                                             
};
#include "magic/enumlogfontexw_t.end.hpp"
SDK_VERIFY( struct tag::enumlogfontexw_t, 0x15c );
