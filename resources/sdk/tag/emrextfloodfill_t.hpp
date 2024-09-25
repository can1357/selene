#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "../win/pointl_t.hpp"

#include "magic/emrextfloodfill_t.start.hpp"
namespace tag
{
    // [struct tagEMREXTFLOODFILL]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrextfloodfill_t                
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                  
        _m00 struct tag::emr_t    emr;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::pointl_t ptl_start;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ptlStart
        _m02 uint32_t             cr_color;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .crColor
        _m03 uint32_t             i_mode;     //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .iMode
                                            
        SDK_NONVOL_PROPERTIES( "tagEMREXTFLOODFILL.$", 0x18, true, 0x36c02fd22c5a76cd );          
        SDK_FIXED_SIZE( emrextfloodfill_t, 0x18 );          
    };                                      
};
#include "magic/emrextfloodfill_t.end.hpp"
SDK_VERIFY( struct tag::emrextfloodfill_t, 0x18 );
