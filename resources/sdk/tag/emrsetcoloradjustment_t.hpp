#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "coloradjustment_t.hpp"

#include "magic/emrsetcoloradjustment_t.start.hpp"
namespace tag
{
    // [struct tagEMRSETCOLORADJUSTMENT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrsetcoloradjustment_t                          
    {                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                  
        _m00 struct tag::emr_t             emr;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct tag::coloradjustment_t color_adjustment;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ColorAdjustment
                                                            
        SDK_NONVOL_PROPERTIES( "tagEMRSETCOLORADJUSTMENT.$", 0x20, true, 0x840b43fb1a393b6c );                 
        SDK_FIXED_SIZE( emrsetcoloradjustment_t, 0x20 );                 
    };                                                      
};
#include "magic/emrsetcoloradjustment_t.end.hpp"
SDK_VERIFY( struct tag::emrsetcoloradjustment_t, 0x20 );
