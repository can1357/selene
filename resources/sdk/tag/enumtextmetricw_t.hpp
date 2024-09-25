#pragma once
#include <sdkgen/support_library.hpp>
#include "axeslistw_t.hpp"
#include "newtextmetricexw_t.hpp"

#include "magic/enumtextmetricw_t.start.hpp"
namespace tag
{
    // [struct tagENUMTEXTMETRICW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct enumtextmetricw_t                                       
    {                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                         
        _m00 struct tag::newtextmetricexw_t etm_new_text_metric_ex;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .etmNewTextMetricEx
        _m01 struct tag::axeslistw_t        etm_axes_list;           //{ +0x0064    +0x0064    +0x0064    +0x0064    +0x0064    } | .etmAxesList
                                                                   
        SDK_NONVOL_PROPERTIES( "tagENUMTEXTMETRICW.$", 0x2ec, true, 0xfae9ef801db15fae );                       
        SDK_FIXED_SIZE( enumtextmetricw_t, 0x2ec );                       
    };                                                             
};
#include "magic/enumtextmetricw_t.end.hpp"
SDK_VERIFY( struct tag::enumtextmetricw_t, 0x2ec );
