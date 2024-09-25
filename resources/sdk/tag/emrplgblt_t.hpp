#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "xform_t.hpp"
#include "../win/rectl_t.hpp"
#include "../win/pointl_t.hpp"

#include "magic/emrplgblt_t.start.hpp"
namespace tag
{
    // [struct tagEMRPLGBLT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrplgblt_t                                           
    {                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                       
        _m00 struct tag::emr_t                   emr;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::rectl_t                 rcl_bounds;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .rclBounds
        _m02 sdk::array<struct win::pointl_t, 3> aptl_dest;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .aptlDest
        _m03 int32_t                             x_src;            //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .xSrc
        _m04 int32_t                             y_src;            //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .ySrc
        _m05 int32_t                             cx_src;           //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .cxSrc
        _m06 int32_t                             cy_src;           //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .cySrc
        _m07 struct tag::xform_t                 xform_src;        //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .xformSrc
        _m08 uint32_t                            cr_bk_color_src;  //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .crBkColorSrc
        _m09 uint32_t                            i_usage_src;      //{ +0x005c    +0x005c    +0x005c    +0x005c    +0x005c    } | .iUsageSrc
        _m10 uint32_t                            off_bmi_src;      //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .offBmiSrc
        _m11 uint32_t                            cb_bmi_src;       //{ +0x0064    +0x0064    +0x0064    +0x0064    +0x0064    } | .cbBmiSrc
        _m12 uint32_t                            off_bits_src;     //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .offBitsSrc
        _m13 uint32_t                            cb_bits_src;      //{ +0x006c    +0x006c    +0x006c    +0x006c    +0x006c    } | .cbBitsSrc
        _m14 int32_t                             x_mask;           //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .xMask
        _m15 int32_t                             y_mask;           //{ +0x0074    +0x0074    +0x0074    +0x0074    +0x0074    } | .yMask
        _m16 uint32_t                            i_usage_mask;     //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .iUsageMask
        _m17 uint32_t                            off_bmi_mask;     //{ +0x007c    +0x007c    +0x007c    +0x007c    +0x007c    } | .offBmiMask
        _m18 uint32_t                            cb_bmi_mask;      //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .cbBmiMask
        _m19 uint32_t                            off_bits_mask;    //{ +0x0084    +0x0084    +0x0084    +0x0084    +0x0084    } | .offBitsMask
        _m20 uint32_t                            cb_bits_mask;     //{ +0x0088    +0x0088    +0x0088    +0x0088    +0x0088    } | .cbBitsMask
                                                                 
        SDK_NONVOL_PROPERTIES( "tagEMRPLGBLT.$", 0x8c, true, 0x5c439673e5f45d72 );                
        SDK_FIXED_SIZE( emrplgblt_t, 0x8c );                     
    };                                                           
};
#include "magic/emrplgblt_t.end.hpp"
SDK_VERIFY( struct tag::emrplgblt_t, 0x8c );
