#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "xform_t.hpp"

#include "magic/emrmodifyworldtransform_t.start.hpp"
namespace tag
{
    // [struct tagEMRMODIFYWORLDTRANSFORM]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrmodifyworldtransform_t    
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                              
        _m00 struct tag::emr_t   emr;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct tag::xform_t xform;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .xform
        _m02 uint32_t            i_mode;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .iMode
                                        
        SDK_NONVOL_PROPERTIES( "tagEMRMODIFYWORLDTRANSFORM.$", 0x24, true, 0xc7e00a16072222cb );       
        SDK_FIXED_SIZE( emrmodifyworldtransform_t, 0x24 );       
    };                                  
};
#include "magic/emrmodifyworldtransform_t.end.hpp"
SDK_VERIFY( struct tag::emrmodifyworldtransform_t, 0x24 );
