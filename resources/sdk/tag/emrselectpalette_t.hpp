#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/emrselectpalette_t.start.hpp"
namespace tag
{
    // [struct tagEMRSELECTPALETTE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrselectpalette_t         
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                            
        _m00 struct tag::emr_t emr;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t          ih_pal;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ihPal
                                      
        SDK_NONVOL_PROPERTIES( "tagEMRSELECTPALETTE.$", 0xc, true, 0xa89aaea4c5ce83b3 );       
        SDK_FIXED_SIZE( emrselectpalette_t, 0xc );       
    };                                
};
#include "magic/emrselectpalette_t.end.hpp"
SDK_VERIFY( struct tag::emrselectpalette_t, 0xc );
