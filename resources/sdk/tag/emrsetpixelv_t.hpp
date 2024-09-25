#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "../win/pointl_t.hpp"

#include "magic/emrsetpixelv_t.start.hpp"
namespace tag
{
    // [struct tagEMRSETPIXELV]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrsetpixelv_t                   
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                  
        _m00 struct tag::emr_t    emr;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::pointl_t ptl_pixel;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ptlPixel
        _m02 uint32_t             cr_color;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .crColor
                                            
        SDK_NONVOL_PROPERTIES( "tagEMRSETPIXELV.$", 0x14, true, 0x9bf0802388c40bfd );          
        SDK_FIXED_SIZE( emrsetpixelv_t, 0x14 );          
    };                                      
};
#include "magic/emrsetpixelv_t.end.hpp"
SDK_VERIFY( struct tag::emrsetpixelv_t, 0x14 );
