#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/emrresizepalette_t.start.hpp"
namespace tag
{
    // [struct tagEMRRESIZEPALETTE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrresizepalette_t            
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                               
        _m00 struct tag::emr_t emr;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t          ih_pal;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ihPal
        _m02 uint32_t          c_entries;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .cEntries
                                         
        SDK_NONVOL_PROPERTIES( "tagEMRRESIZEPALETTE.$", 0x10, true, 0xea16c088ee59c1a2 );          
        SDK_FIXED_SIZE( emrresizepalette_t, 0x10 );          
    };                                   
};
#include "magic/emrresizepalette_t.end.hpp"
SDK_VERIFY( struct tag::emrresizepalette_t, 0x10 );
