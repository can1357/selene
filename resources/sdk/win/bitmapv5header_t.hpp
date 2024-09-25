#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/icexyztriple_t.hpp"

#include "magic/bitmapv5header_t.start.hpp"
namespace win
{
    // [struct BITMAPV5HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bitmapv5header_t                                  
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                   
        _m00 uint32_t                   b_v5_size;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bV5Size
        _m01 int32_t                    b_v5_width;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bV5Width
        _m02 int32_t                    b_v5_height;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .bV5Height
        _m03 uint16_t                   b_v5_planes;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .bV5Planes
        _m04 uint16_t                   b_v5_bit_count;        //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .bV5BitCount
        _m05 uint32_t                   b_v5_compression;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .bV5Compression
        _m06 uint32_t                   b_v5_size_image;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .bV5SizeImage
        _m07 int32_t                    b_v5x_pels_per_meter;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .bV5XPelsPerMeter
        _m08 int32_t                    b_v5y_pels_per_meter;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .bV5YPelsPerMeter
        _m09 uint32_t                   b_v5_clr_used;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .bV5ClrUsed
        _m10 uint32_t                   b_v5_clr_important;    //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .bV5ClrImportant
        _m11 uint32_t                   b_v5_red_mask;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .bV5RedMask
        _m12 uint32_t                   b_v5_green_mask;       //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .bV5GreenMask
        _m13 uint32_t                   b_v5_blue_mask;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .bV5BlueMask
        _m14 uint32_t                   b_v5_alpha_mask;       //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .bV5AlphaMask
        _m15 uint32_t                   b_v5cs_type;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .bV5CSType
        _m16 struct tag::icexyztriple_t b_v5_endpoints;        //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .bV5Endpoints
        _m17 uint32_t                   b_v5_gamma_red;        //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .bV5GammaRed
        _m18 uint32_t                   b_v5_gamma_green;      //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .bV5GammaGreen
        _m19 uint32_t                   b_v5_gamma_blue;       //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .bV5GammaBlue
        _m20 uint32_t                   b_v5_intent;           //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .bV5Intent
        _m21 uint32_t                   b_v5_profile_data;     //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .bV5ProfileData
        _m22 uint32_t                   b_v5_profile_size;     //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .bV5ProfileSize
        _m23 uint32_t                   b_v5_reserved;         //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .bV5Reserved
                                                             
        SDK_MAGIC_PROPERTIES( "BITMAPV5HEADER.$", 0x7c, true, 0xb6df1b62fe35c067 );                     
        SDK_FIXED_SIZE( bitmapv5header_t, 0x7c );                     
    };                                                       
};
#include "magic/bitmapv5header_t.end.hpp"
SDK_VERIFY( struct win::bitmapv5header_t, 0x7c );
