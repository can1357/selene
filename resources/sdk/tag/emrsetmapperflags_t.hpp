#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/emrsetmapperflags_t.start.hpp"
namespace tag
{
    // [struct tagEMRSETMAPPERFLAGS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrsetmapperflags_t          
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                              
        _m00 struct tag::emr_t emr;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t          dw_flags;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .dwFlags
                                        
        SDK_NONVOL_PROPERTIES( "tagEMRSETMAPPERFLAGS.$", 0xc, true, 0x4b235eee207068d8 );         
        SDK_FIXED_SIZE( emrsetmapperflags_t, 0xc );         
    };                                  
};
#include "magic/emrsetmapperflags_t.end.hpp"
SDK_VERIFY( struct tag::emrsetmapperflags_t, 0xc );
