#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "size_t.hpp"

#include "magic/emrsetviewportextex_t.start.hpp"
namespace tag
{
    // [struct tagEMRSETVIEWPORTEXTEX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrsetviewportextex_t           
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                 
        _m00 struct tag::emr_t  emr;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct tag::size_t szl_extent;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .szlExtent
                                           
        SDK_NONVOL_PROPERTIES( "tagEMRSETVIEWPORTEXTEX.$", 0x10, true, 0x5b9533d2fcc32d85 );           
        SDK_FIXED_SIZE( emrsetviewportextex_t, 0x10 );           
    };                                     
};
#include "magic/emrsetviewportextex_t.end.hpp"
SDK_VERIFY( struct tag::emrsetviewportextex_t, 0x10 );
