#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "../win/rectl_t.hpp"
#include "../win/trivertex_t.hpp"

#include "magic/emrgradientfill_t.start.hpp"
namespace tag
{
    // [struct tagEMRGRADIENTFILL]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrgradientfill_t                                   
    {                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                     
        _m00 struct tag::emr_t                      emr;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::rectl_t                    rcl_bounds;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .rclBounds
        _m02 uint32_t                               n_ver;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .nVer
        _m03 uint32_t                               n_tri;       //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .nTri
        _m04 uint32_t                               ul_mode;     //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ulMode
        _m05 sdk::array<struct win::trivertex_t, 1> ver;         //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .Ver
                                                               
        SDK_NONVOL_PROPERTIES( "tagEMRGRADIENTFILL.$", 0x34, true, 0x635ca19ee8f92467 );           
        SDK_FIXED_SIZE( emrgradientfill_t, 0x34 );             
    };                                                         
};
#include "magic/emrgradientfill_t.end.hpp"
SDK_VERIFY( struct tag::emrgradientfill_t, 0x34 );
