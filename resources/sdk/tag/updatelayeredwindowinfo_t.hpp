#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct blendfunction_t; }
namespace win { struct hdc_t;           }

#include "magic/updatelayeredwindowinfo_t.start.hpp"
namespace tag
{
    struct rect_t;
    struct size_t;
    struct point_t;

    // [struct tagUPDATELAYEREDWINDOWINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct updatelayeredwindowinfo_t                      
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                
        _m00 uint32_t                           cb_size;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::hdc_t*                 hdc_dst;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hdcDst
        _m02 const struct tag::point_t*         ppt_dst;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pptDst
        _m03 const struct tag::size_t*          psize;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .psize
        _m04 struct win::hdc_t*                 hdc_src;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .hdcSrc
        _m05 const struct tag::point_t*         ppt_src;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pptSrc
        _m06 uint32_t                           cr_key;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .crKey
        _m07 const struct win::blendfunction_t* pblend;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pblend
        _m08 uint32_t                           dw_flags;   //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .dwFlags
        _m09 const struct tag::rect_t*          prc_dirty;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .prcDirty
                                                          
        SDK_MAGIC_PROPERTIES( "tagUPDATELAYEREDWINDOWINFO.$", 0x50, true, 0x45f1cc565064d3b3 );          
        SDK_FIXED_SIZE( updatelayeredwindowinfo_t, 0x50 );          
    };                                                    
};
#include "magic/updatelayeredwindowinfo_t.end.hpp"
SDK_VERIFY( struct tag::updatelayeredwindowinfo_t, 0x50 );
