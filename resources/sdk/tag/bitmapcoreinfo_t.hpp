#pragma once
#include <sdkgen/support_library.hpp>
#include "rgbtriple_t.hpp"
#include "bitmapcoreheader_t.hpp"

#include "magic/bitmapcoreinfo_t.start.hpp"
namespace tag
{
    // [struct tagBITMAPCOREINFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct bitmapcoreinfo_t                                     
    {                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                      
        _m00 struct tag::bitmapcoreheader_t         bmci_header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .bmciHeader
        _m01 sdk::array<struct tag::rgbtriple_t, 1> bmci_colors;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .bmciColors
                                                                
        SDK_NONVOL_PROPERTIES( "tagBITMAPCOREINFO.$", 0x10, true, 0x560d5264bb21c836 );            
        SDK_FIXED_SIZE( bitmapcoreinfo_t, 0x10 );               
    };                                                          
};
#include "magic/bitmapcoreinfo_t.end.hpp"
SDK_VERIFY( struct tag::bitmapcoreinfo_t, 0x10 );
