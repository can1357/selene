#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "../win/rectl_t.hpp"

#include "magic/emrexcludecliprect_t.start.hpp"
namespace tag
{
    // [struct tagEMREXCLUDECLIPRECT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrexcludecliprect_t           
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                
        _m00 struct tag::emr_t   emr;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::rectl_t rcl_clip;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .rclClip
                                          
        SDK_NONVOL_PROPERTIES( "tagEMREXCLUDECLIPRECT.$", 0x18, true, 0xd2355364b0160836 );         
        SDK_FIXED_SIZE( emrexcludecliprect_t, 0x18 );         
    };                                    
};
#include "magic/emrexcludecliprect_t.end.hpp"
SDK_VERIFY( struct tag::emrexcludecliprect_t, 0x18 );
