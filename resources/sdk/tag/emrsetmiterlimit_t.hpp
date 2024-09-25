#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/emrsetmiterlimit_t.start.hpp"
namespace tag
{
    // [struct tagEMRSETMITERLIMIT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrsetmiterlimit_t                
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                   
        _m00 struct tag::emr_t emr;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 float             e_miter_limit;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .eMiterLimit
                                             
        SDK_NONVOL_PROPERTIES( "tagEMRSETMITERLIMIT.$", 0xc, true, 0x96843c7ac59d13df );              
        SDK_FIXED_SIZE( emrsetmiterlimit_t, 0xc );              
    };                                       
};
#include "magic/emrsetmiterlimit_t.end.hpp"
SDK_VERIFY( struct tag::emrsetmiterlimit_t, 0xc );
