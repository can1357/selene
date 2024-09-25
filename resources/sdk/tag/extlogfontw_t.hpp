#pragma once
#include <sdkgen/support_library.hpp>
#include "panose_t.hpp"
#include "logfontw_t.hpp"

#include "magic/extlogfontw_t.start.hpp"
namespace tag
{
    // [struct tagEXTLOGFONTW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct extlogfontw_t                            
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                          
        _m00 struct tag::logfontw_t  elf_log_font;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .elfLogFont
        _m01 sdk::array<wchar_t, 64> elf_full_name;   //{ +0x005c    +0x005c    +0x005c    +0x005c    +0x005c    } | .elfFullName
        _m02 sdk::array<wchar_t, 32> elf_style;       //{ +0x00dc    +0x00dc    +0x00dc    +0x00dc    +0x00dc    } | .elfStyle
        _m03 uint32_t                elf_version;     //{ +0x011c    +0x011c    +0x011c    +0x011c    +0x011c    } | .elfVersion
        _m04 uint32_t                elf_style_size;  //{ +0x0120    +0x0120    +0x0120    +0x0120    +0x0120    } | .elfStyleSize
        _m05 uint32_t                elf_match;       //{ +0x0124    +0x0124    +0x0124    +0x0124    +0x0124    } | .elfMatch
        _m06 uint32_t                elf_reserved;    //{ +0x0128    +0x0128    +0x0128    +0x0128    +0x0128    } | .elfReserved
        _m07 sdk::array<uint8_t, 4>  elf_vendor_id;   //{ +0x012c    +0x012c    +0x012c    +0x012c    +0x012c    } | .elfVendorId
        _m08 uint32_t                elf_culture;     //{ +0x0130    +0x0130    +0x0130    +0x0130    +0x0130    } | .elfCulture
        _m09 struct tag::panose_t    elf_panose;      //{ +0x0134    +0x0134    +0x0134    +0x0134    +0x0134    } | .elfPanose
                                                    
        SDK_NONVOL_PROPERTIES( "tagEXTLOGFONTW.$", 0x140, true, 0x895279319dc4439e );               
        SDK_FIXED_SIZE( extlogfontw_t, 0x140 );               
    };                                              
};
#include "magic/extlogfontw_t.end.hpp"
SDK_VERIFY( struct tag::extlogfontw_t, 0x140 );
