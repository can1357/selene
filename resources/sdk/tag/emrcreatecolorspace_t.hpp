#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "logcolorspacea_t.hpp"

#include "magic/emrcreatecolorspace_t.start.hpp"
namespace tag
{
    // [struct tagEMRCREATECOLORSPACE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrcreatecolorspace_t                
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                      
        _m00 struct tag::emr_t            emr;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t                     ih_cs;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ihCS
        _m02 struct tag::logcolorspacea_t lcs;    //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .lcs
                                                
        SDK_NONVOL_PROPERTIES( "tagEMRCREATECOLORSPACE.$", 0x154, true, 0xbb69e258882da12f );      
        SDK_FIXED_SIZE( emrcreatecolorspace_t, 0x154 );      
    };                                          
};
#include "magic/emrcreatecolorspace_t.end.hpp"
SDK_VERIFY( struct tag::emrcreatecolorspace_t, 0x154 );
