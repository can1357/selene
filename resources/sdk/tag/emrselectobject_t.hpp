#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/emrselectobject_t.start.hpp"
namespace tag
{
    // [struct tagEMRSELECTOBJECT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrselectobject_t             
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                               
        _m00 struct tag::emr_t emr;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t          ih_object;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ihObject
                                         
        SDK_NONVOL_PROPERTIES( "tagEMRSELECTOBJECT.$", 0xc, true, 0x12a436541d058b7c );          
        SDK_FIXED_SIZE( emrselectobject_t, 0xc );          
    };                                   
};
#include "magic/emrselectobject_t.end.hpp"
SDK_VERIFY( struct tag::emrselectobject_t, 0xc );
