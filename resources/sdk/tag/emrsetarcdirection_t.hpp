#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/emrsetarcdirection_t.start.hpp"
namespace tag
{
    // [struct tagEMRSETARCDIRECTION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrsetarcdirection_t                
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                     
        _m00 struct tag::emr_t emr;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t          i_arc_direction;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .iArcDirection
                                               
        SDK_NONVOL_PROPERTIES( "tagEMRSETARCDIRECTION.$", 0xc, true, 0xf0e4ba11b1979e3f );                
        SDK_FIXED_SIZE( emrsetarcdirection_t, 0xc );                
    };                                         
};
#include "magic/emrsetarcdirection_t.end.hpp"
SDK_VERIFY( struct tag::emrsetarcdirection_t, 0xc );
