#pragma once
#include <sdkgen/support_library.hpp>
#include "paletteentry_t.hpp"

#include "magic/logpalette_t.start.hpp"
namespace tag
{
    // [struct tagLOGPALETTE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct logpalette_t                                                
    {                                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                             
        _m00 uint16_t                                  pal_version;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .palVersion
        _m01 uint16_t                                  pal_num_entries;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .palNumEntries
        _m02 sdk::array<struct tag::paletteentry_t, 1> pal_pal_entry;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .palPalEntry
                                                                       
        SDK_NONVOL_PROPERTIES( "tagLOGPALETTE.$", 0x8, true, 0x5d048d188df8a507 );                
        SDK_FIXED_SIZE( logpalette_t, 0x8 );                           
    };                                                                 
};
#include "magic/logpalette_t.end.hpp"
SDK_VERIFY( struct tag::logpalette_t, 0x8 );
