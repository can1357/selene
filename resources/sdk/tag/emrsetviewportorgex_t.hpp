#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "../win/pointl_t.hpp"

#include "magic/emrsetviewportorgex_t.start.hpp"
namespace tag
{
    // [struct tagEMRSETVIEWPORTORGEX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrsetviewportorgex_t             
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                   
        _m00 struct tag::emr_t    emr;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::pointl_t ptl_origin;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ptlOrigin
                                             
        SDK_NONVOL_PROPERTIES( "tagEMRSETVIEWPORTORGEX.$", 0x10, true, 0x51e224da22ab08d6 );           
        SDK_FIXED_SIZE( emrsetviewportorgex_t, 0x10 );           
    };                                       
};
#include "magic/emrsetviewportorgex_t.end.hpp"
SDK_VERIFY( struct tag::emrsetviewportorgex_t, 0x10 );
