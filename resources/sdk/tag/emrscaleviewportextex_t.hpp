#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/emrscaleviewportextex_t.start.hpp"
namespace tag
{
    // [struct tagEMRSCALEVIEWPORTEXTEX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrscaleviewportextex_t     
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                             
        _m00 struct tag::emr_t emr;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 int32_t           x_num;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .xNum
        _m02 int32_t           x_denom;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .xDenom
        _m03 int32_t           y_num;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .yNum
        _m04 int32_t           y_denom;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .yDenom
                                       
        SDK_NONVOL_PROPERTIES( "tagEMRSCALEVIEWPORTEXTEX.$", 0x18, true, 0x52351afbc512f36b );        
        SDK_FIXED_SIZE( emrscaleviewportextex_t, 0x18 );        
    };                                 
};
#include "magic/emrscaleviewportextex_t.end.hpp"
SDK_VERIFY( struct tag::emrscaleviewportextex_t, 0x18 );
