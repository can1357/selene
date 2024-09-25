#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "logpalette_t.hpp"

#include "magic/emrcreatepalette_t.start.hpp"
namespace tag
{
    // [struct tagEMRCREATEPALETTE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrcreatepalette_t                
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                   
        _m00 struct tag::emr_t        emr;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t                 ih_pal;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ihPal
        _m02 struct tag::logpalette_t lgpl;    //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .lgpl
                                             
        SDK_NONVOL_PROPERTIES( "tagEMRCREATEPALETTE.$", 0x14, true, 0x9c1be7e252c71404 );       
        SDK_FIXED_SIZE( emrcreatepalette_t, 0x14 );       
    };                                       
};
#include "magic/emrcreatepalette_t.end.hpp"
SDK_VERIFY( struct tag::emrcreatepalette_t, 0x14 );
