#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "logpen_t.hpp"

#include "magic/emrcreatepen_t.start.hpp"
namespace tag
{
    // [struct tagEMRCREATEPEN]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrcreatepen_t                
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                               
        _m00 struct tag::emr_t    emr;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t             ih_pen;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ihPen
        _m02 struct tag::logpen_t lopn;    //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .lopn
                                         
        SDK_NONVOL_PROPERTIES( "tagEMRCREATEPEN.$", 0x1c, true, 0x20730a8e875e8c19 );       
        SDK_FIXED_SIZE( emrcreatepen_t, 0x1c );       
    };                                   
};
#include "magic/emrcreatepen_t.end.hpp"
SDK_VERIFY( struct tag::emrcreatepen_t, 0x1c );
