#pragma once
#include <sdkgen/support_library.hpp>
#include "logfontw_t.hpp"

#include "magic/iconmetricsw_t.start.hpp"
namespace tag
{
    // [struct tagICONMETRICSW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct iconmetricsw_t                          
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                         
        _m00 uint32_t               cb_size;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 int32_t                i_horz_spacing;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .iHorzSpacing
        _m02 int32_t                i_vert_spacing;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .iVertSpacing
        _m03 int32_t                i_title_wrap;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .iTitleWrap
        _m04 struct tag::logfontw_t lf_font;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lfFont
                                                   
        SDK_MAGIC_PROPERTIES( "tagICONMETRICSW.$", 0x6c, true, 0xa281ed0c244686a0 );               
        SDK_FIXED_SIZE( iconmetricsw_t, 0x6c );               
    };                                             
};
#include "magic/iconmetricsw_t.end.hpp"
SDK_VERIFY( struct tag::iconmetricsw_t, 0x6c );
