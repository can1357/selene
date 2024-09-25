#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/emrsetcolorspace_t.start.hpp"
namespace tag
{
    // [struct tagEMRSETCOLORSPACE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrsetcolorspace_t        
    {                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                           
        _m00 struct tag::emr_t emr;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t          ih_cs;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ihCS
                                     
        SDK_NONVOL_PROPERTIES( "tagEMRSETCOLORSPACE.$", 0xc, true, 0x8bf766c7b396fe71 );      
        SDK_FIXED_SIZE( emrsetcolorspace_t, 0xc );      
    };                               
};
#include "magic/emrsetcolorspace_t.end.hpp"
SDK_VERIFY( struct tag::emrsetcolorspace_t, 0xc );
