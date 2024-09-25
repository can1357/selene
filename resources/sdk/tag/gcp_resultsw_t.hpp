#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gcp_resultsw_t.start.hpp"
namespace tag
{
    // [struct tagGCP_RESULTSW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct gcp_resultsw_t            
    {                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                           
        _m00 uint32_t  l_struct_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .lStructSize
        _m01 wchar_t*  lp_out_string;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .lpOutString
        _m02 uint32_t* lp_order;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .lpOrder
        _m03 int32_t*  lp_dx;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .lpDx
        _m04 int32_t*  lp_caret_pos;   //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .lpCaretPos
        _m05 char*     lp_class;       //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .lpClass
        _m06 wchar_t*  lp_glyphs;      //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .lpGlyphs
        _m07 uint32_t  n_glyphs;       //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .nGlyphs
        _m08 int32_t   n_max_fit;      //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .nMaxFit
                                     
        SDK_NONVOL_PROPERTIES( "tagGCP_RESULTSW.$", 0x40, true, 0xa1195048ab01fd56 );              
        SDK_FIXED_SIZE( gcp_resultsw_t, 0x40 );              
    };                               
};
#include "magic/gcp_resultsw_t.end.hpp"
SDK_VERIFY( struct tag::gcp_resultsw_t, 0x40 );
