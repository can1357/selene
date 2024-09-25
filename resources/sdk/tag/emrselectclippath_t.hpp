#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/emrselectclippath_t.start.hpp"
namespace tag
{
    // [struct tagEMRSELECTCLIPPATH]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrselectclippath_t        
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                            
        _m00 struct tag::emr_t emr;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t          i_mode;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .iMode
                                      
        SDK_NONVOL_PROPERTIES( "tagEMRSELECTCLIPPATH.$", 0xc, true, 0xc281874570ddbec1 );       
        SDK_FIXED_SIZE( emrselectclippath_t, 0xc );       
    };                                
};
#include "magic/emrselectclippath_t.end.hpp"
SDK_VERIFY( struct tag::emrselectclippath_t, 0xc );
