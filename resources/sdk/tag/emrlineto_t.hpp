#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "../win/pointl_t.hpp"

#include "magic/emrlineto_t.start.hpp"
namespace tag
{
    // [struct tagEMRLINETO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrlineto_t                
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //                            
        _m00 struct tag::emr_t    emr;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::pointl_t ptl;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ptl
                                      
        SDK_NONVOL_PROPERTIES( "tagEMRLINETO.$", 0x10, true, 0x36b3ec8551eeba1e );    
        SDK_FIXED_SIZE( emrlineto_t, 0x10 );    
    };                                
};
#include "magic/emrlineto_t.end.hpp"
SDK_VERIFY( struct tag::emrlineto_t, 0x10 );
