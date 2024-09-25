#pragma once
#include <sdkgen/support_library.hpp>
#include "panose_t.hpp"
#include "logfonta_t.hpp"

#include "magic/extlogfonta_t.start.hpp"
namespace tag
{
    // [struct tagEXTLOGFONTA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct extlogfonta_t                            
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                          
        _m00 struct tag::logfonta_t  elf_log_font;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .elfLogFont
        _m01 sdk::array<uint8_t, 64> elf_full_name;   //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .elfFullName
        _m02 sdk::array<uint8_t, 32> elf_style;       //{ +0x007c    +0x007c    +0x007c    +0x007c    +0x007c    } | .elfStyle
        _m03 uint32_t                elf_version;     //{ +0x009c    +0x009c    +0x009c    +0x009c    +0x009c    } | .elfVersion
        _m04 uint32_t                elf_style_size;  //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .elfStyleSize
        _m05 uint32_t                elf_match;       //{ +0x00a4    +0x00a4    +0x00a4    +0x00a4    +0x00a4    } | .elfMatch
        _m06 uint32_t                elf_reserved;    //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .elfReserved
        _m07 sdk::array<uint8_t, 4>  elf_vendor_id;   //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .elfVendorId
        _m08 uint32_t                elf_culture;     //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .elfCulture
        _m09 struct tag::panose_t    elf_panose;      //{ +0x00b4    +0x00b4    +0x00b4    +0x00b4    +0x00b4    } | .elfPanose
                                                    
        SDK_NONVOL_PROPERTIES( "tagEXTLOGFONTA.$", 0xc0, true, 0xfa394b00e1c343a2 );               
        SDK_FIXED_SIZE( extlogfonta_t, 0xc0 );               
    };                                              
};
#include "magic/extlogfonta_t.end.hpp"
SDK_VERIFY( struct tag::extlogfonta_t, 0xc0 );
