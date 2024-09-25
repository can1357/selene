#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/emrrestoredc_t.start.hpp"
namespace tag
{
    // [struct tagEMRRESTOREDC]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrrestoredc_t                 
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                
        _m00 struct tag::emr_t emr;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 int32_t           i_relative;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .iRelative
                                          
        SDK_NONVOL_PROPERTIES( "tagEMRRESTOREDC.$", 0xc, true, 0xdf268b1ed2c222a6 );           
        SDK_FIXED_SIZE( emrrestoredc_t, 0xc );           
    };                                    
};
#include "magic/emrrestoredc_t.end.hpp"
SDK_VERIFY( struct tag::emrrestoredc_t, 0xc );
