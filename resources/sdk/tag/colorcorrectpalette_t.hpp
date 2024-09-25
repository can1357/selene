#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/colorcorrectpalette_t.start.hpp"
namespace tag
{
    // [struct tagCOLORCORRECTPALETTE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct colorcorrectpalette_t             
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                   
        _m00 struct tag::emr_t emr;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t          ih_palette;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ihPalette
        _m02 uint32_t          n_first_entry;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .nFirstEntry
        _m03 uint32_t          n_pal_entries;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .nPalEntries
        _m04 uint32_t          n_reserved;     //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .nReserved
                                             
        SDK_NONVOL_PROPERTIES( "tagCOLORCORRECTPALETTE.$", 0x18, true, 0x7c1f541bd64ecf4 );              
        SDK_FIXED_SIZE( colorcorrectpalette_t, 0x18 );              
    };                                       
};
#include "magic/colorcorrectpalette_t.end.hpp"
SDK_VERIFY( struct tag::colorcorrectpalette_t, 0x18 );
