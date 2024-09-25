#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "../win/rectl_t.hpp"

#include "magic/emrfillpath_t.start.hpp"
namespace tag
{
    // [struct tagEMRFILLPATH]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrfillpath_t                    
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                  
        _m00 struct tag::emr_t   emr;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::rectl_t rcl_bounds;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .rclBounds
                                            
        SDK_NONVOL_PROPERTIES( "tagEMRFILLPATH.$", 0x18, true, 0x7f0540cca4d6356f );           
        SDK_FIXED_SIZE( emrfillpath_t, 0x18 );           
    };                                      
};
#include "magic/emrfillpath_t.end.hpp"
SDK_VERIFY( struct tag::emrfillpath_t, 0x18 );
