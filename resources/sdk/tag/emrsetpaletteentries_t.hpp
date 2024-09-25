#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "paletteentry_t.hpp"

#include "magic/emrsetpaletteentries_t.start.hpp"
namespace tag
{
    // [struct tagEMRSETPALETTEENTRIES]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrsetpaletteentries_t                                    
    {                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                           
        _m00 struct tag::emr_t                         emr;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t                                  ih_pal;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ihPal
        _m02 uint32_t                                  i_start;        //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .iStart
        _m03 uint32_t                                  c_entries;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .cEntries
        _m04 sdk::array<struct tag::paletteentry_t, 1> a_pal_entries;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .aPalEntries
                                                                     
        SDK_NONVOL_PROPERTIES( "tagEMRSETPALETTEENTRIES.$", 0x18, true, 0xa033380eccb54b30 );              
        SDK_FIXED_SIZE( emrsetpaletteentries_t, 0x18 );              
    };                                                               
};
#include "magic/emrsetpaletteentries_t.end.hpp"
SDK_VERIFY( struct tag::emrsetpaletteentries_t, 0x18 );
