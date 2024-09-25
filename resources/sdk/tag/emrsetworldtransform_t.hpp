#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "xform_t.hpp"

#include "magic/emrsetworldtransform_t.start.hpp"
namespace tag
{
    // [struct tagEMRSETWORLDTRANSFORM]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrsetworldtransform_t      
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                             
        _m00 struct tag::emr_t   emr;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct tag::xform_t xform;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .xform
                                       
        SDK_NONVOL_PROPERTIES( "tagEMRSETWORLDTRANSFORM.$", 0x20, true, 0x933330f53de446aa );      
        SDK_FIXED_SIZE( emrsetworldtransform_t, 0x20 );      
    };                                 
};
#include "magic/emrsetworldtransform_t.end.hpp"
SDK_VERIFY( struct tag::emrsetworldtransform_t, 0x20 );
