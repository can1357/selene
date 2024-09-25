#pragma once
#include <sdkgen/support_library.hpp>
#include "axeslista_t.hpp"
#include "newtextmetricexa_t.hpp"

#include "magic/enumtextmetrica_t.start.hpp"
namespace tag
{
    // [struct tagENUMTEXTMETRICA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct enumtextmetrica_t                                       
    {                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                         
        _m00 struct tag::newtextmetricexa_t etm_new_text_metric_ex;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .etmNewTextMetricEx
        _m01 struct tag::axeslista_t        etm_axes_list;           //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .etmAxesList
                                                                   
        SDK_NONVOL_PROPERTIES( "tagENUMTEXTMETRICA.$", 0x1e8, true, 0xc6e3ae2b73a628cb );                       
        SDK_FIXED_SIZE( enumtextmetrica_t, 0x1e8 );                       
    };                                                             
};
#include "magic/enumtextmetrica_t.end.hpp"
SDK_VERIFY( struct tag::enumtextmetrica_t, 0x1e8 );
