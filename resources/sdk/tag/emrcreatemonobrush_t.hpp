#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/emrcreatemonobrush_t.start.hpp"
namespace tag
{
    // [struct tagEMRCREATEMONOBRUSH]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrcreatemonobrush_t         
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                              
        _m00 struct tag::emr_t emr;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t          ih_brush;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ihBrush
        _m02 uint32_t          i_usage;   //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .iUsage
        _m03 uint32_t          off_bmi;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .offBmi
        _m04 uint32_t          cb_bmi;    //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .cbBmi
        _m05 uint32_t          off_bits;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .offBits
        _m06 uint32_t          cb_bits;   //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .cbBits
                                        
        SDK_NONVOL_PROPERTIES( "tagEMRCREATEMONOBRUSH.$", 0x20, true, 0x33cc887cd1cee505 );         
        SDK_FIXED_SIZE( emrcreatemonobrush_t, 0x20 );         
    };                                  
};
#include "magic/emrcreatemonobrush_t.end.hpp"
SDK_VERIFY( struct tag::emrcreatemonobrush_t, 0x20 );
