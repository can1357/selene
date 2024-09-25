#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "xform_t.hpp"
#include "../win/rectl_t.hpp"

#include "magic/emrmaskblt_t.start.hpp"
namespace tag
{
    // [struct tagEMRMASKBLT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrmaskblt_t                          
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                       
        _m00 struct tag::emr_t   emr;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::rectl_t rcl_bounds;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .rclBounds
        _m02 int32_t             x_dest;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .xDest
        _m03 int32_t             y_dest;           //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .yDest
        _m04 int32_t             cx_dest;          //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .cxDest
        _m05 int32_t             cy_dest;          //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .cyDest
        _m06 uint32_t            dw_rop;           //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .dwRop
        _m07 int32_t             x_src;            //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .xSrc
        _m08 int32_t             y_src;            //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .ySrc
        _m09 struct tag::xform_t xform_src;        //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .xformSrc
        _m10 uint32_t            cr_bk_color_src;  //{ +0x004c    +0x004c    +0x004c    +0x004c    +0x004c    } | .crBkColorSrc
        _m11 uint32_t            i_usage_src;      //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .iUsageSrc
        _m12 uint32_t            off_bmi_src;      //{ +0x0054    +0x0054    +0x0054    +0x0054    +0x0054    } | .offBmiSrc
        _m13 uint32_t            cb_bmi_src;       //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .cbBmiSrc
        _m14 uint32_t            off_bits_src;     //{ +0x005c    +0x005c    +0x005c    +0x005c    +0x005c    } | .offBitsSrc
        _m15 uint32_t            cb_bits_src;      //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .cbBitsSrc
        _m16 int32_t             x_mask;           //{ +0x0064    +0x0064    +0x0064    +0x0064    +0x0064    } | .xMask
        _m17 int32_t             y_mask;           //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .yMask
        _m18 uint32_t            i_usage_mask;     //{ +0x006c    +0x006c    +0x006c    +0x006c    +0x006c    } | .iUsageMask
        _m19 uint32_t            off_bmi_mask;     //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .offBmiMask
        _m20 uint32_t            cb_bmi_mask;      //{ +0x0074    +0x0074    +0x0074    +0x0074    +0x0074    } | .cbBmiMask
        _m21 uint32_t            off_bits_mask;    //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .offBitsMask
        _m22 uint32_t            cb_bits_mask;     //{ +0x007c    +0x007c    +0x007c    +0x007c    +0x007c    } | .cbBitsMask
                                                 
        SDK_NONVOL_PROPERTIES( "tagEMRMASKBLT.$", 0x80, true, 0xf13fa1f373bbde2f );                
        SDK_FIXED_SIZE( emrmaskblt_t, 0x80 );                
    };                                           
};
#include "magic/emrmaskblt_t.end.hpp"
SDK_VERIFY( struct tag::emrmaskblt_t, 0x80 );
