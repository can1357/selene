#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "extlogpen32_t.hpp"

#include "magic/emrextcreatepen_t.start.hpp"
namespace tag
{
    // [struct tagEMREXTCREATEPEN]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrextcreatepen_t                    
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                      
        _m00 struct tag::emr_t         emr;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t                  ih_pen;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ihPen
        _m02 uint32_t                  off_bmi;   //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .offBmi
        _m03 uint32_t                  cb_bmi;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .cbBmi
        _m04 uint32_t                  off_bits;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .offBits
        _m05 uint32_t                  cb_bits;   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .cbBits
        _m06 struct tag::extlogpen32_t elp;       //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .elp
                                                
        SDK_NONVOL_PROPERTIES( "tagEMREXTCREATEPEN.$", 0x38, true, 0xcb9e1293b1e0a334 );         
        SDK_FIXED_SIZE( emrextcreatepen_t, 0x38 );         
    };                                          
};
#include "magic/emrextcreatepen_t.end.hpp"
SDK_VERIFY( struct tag::emrextcreatepen_t, 0x38 );
