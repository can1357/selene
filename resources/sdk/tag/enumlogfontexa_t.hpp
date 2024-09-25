#pragma once
#include <sdkgen/support_library.hpp>
#include "logfonta_t.hpp"

#include "magic/enumlogfontexa_t.start.hpp"
namespace tag
{
    // [struct tagENUMLOGFONTEXA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct enumlogfontexa_t                        
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                         
        _m00 struct tag::logfonta_t  elf_log_font;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .elfLogFont
        _m01 sdk::array<uint8_t, 64> elf_full_name;  //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .elfFullName
        _m02 sdk::array<uint8_t, 32> elf_style;      //{ +0x007c    +0x007c    +0x007c    +0x007c    +0x007c    } | .elfStyle
        _m03 sdk::array<uint8_t, 32> elf_script;     //{ +0x009c    +0x009c    +0x009c    +0x009c    +0x009c    } | .elfScript
                                                   
        SDK_NONVOL_PROPERTIES( "tagENUMLOGFONTEXA.$", 0xbc, true, 0x4f685f92df19d5df );              
        SDK_FIXED_SIZE( enumlogfontexa_t, 0xbc );              
    };                                             
};
#include "magic/enumlogfontexa_t.end.hpp"
SDK_VERIFY( struct tag::enumlogfontexa_t, 0xbc );
