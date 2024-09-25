#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "../win/rectl_t.hpp"

#include "magic/emrstretchdibits_t.start.hpp"
namespace tag
{
    // [struct tagEMRSTRETCHDIBITS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrstretchdibits_t                 
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                    
        _m00 struct tag::emr_t   emr;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::rectl_t rcl_bounds;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .rclBounds
        _m02 int32_t             x_dest;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .xDest
        _m03 int32_t             y_dest;        //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .yDest
        _m04 int32_t             x_src;         //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .xSrc
        _m05 int32_t             y_src;         //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .ySrc
        _m06 int32_t             cx_src;        //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .cxSrc
        _m07 int32_t             cy_src;        //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .cySrc
        _m08 uint32_t            off_bmi_src;   //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .offBmiSrc
        _m09 uint32_t            cb_bmi_src;    //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .cbBmiSrc
        _m10 uint32_t            off_bits_src;  //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .offBitsSrc
        _m11 uint32_t            cb_bits_src;   //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .cbBitsSrc
        _m12 uint32_t            i_usage_src;   //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .iUsageSrc
        _m13 uint32_t            dw_rop;        //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .dwRop
        _m14 int32_t             cx_dest;       //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .cxDest
        _m15 int32_t             cy_dest;       //{ +0x004c    +0x004c    +0x004c    +0x004c    +0x004c    } | .cyDest
                                              
        SDK_NONVOL_PROPERTIES( "tagEMRSTRETCHDIBITS.$", 0x50, true, 0x2c17c3fda96536bb );             
        SDK_FIXED_SIZE( emrstretchdibits_t, 0x50 );             
    };                                        
};
#include "magic/emrstretchdibits_t.end.hpp"
SDK_VERIFY( struct tag::emrstretchdibits_t, 0x50 );
