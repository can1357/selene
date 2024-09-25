#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/icexyztriple_t.hpp"

#include "magic/bitmapv4header_t.start.hpp"
namespace win
{
    // [struct BITMAPV4HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bitmapv4header_t                                  
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                   
        _m00 uint32_t                   b_v4_size;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bV4Size
        _m01 int32_t                    b_v4_width;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bV4Width
        _m02 int32_t                    b_v4_height;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .bV4Height
        _m03 uint16_t                   b_v4_planes;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .bV4Planes
        _m04 uint16_t                   b_v4_bit_count;        //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .bV4BitCount
        _m05 uint32_t                   b_v4v4_compression;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .bV4V4Compression
        _m06 uint32_t                   b_v4_size_image;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .bV4SizeImage
        _m07 int32_t                    b_v4x_pels_per_meter;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .bV4XPelsPerMeter
        _m08 int32_t                    b_v4y_pels_per_meter;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .bV4YPelsPerMeter
        _m09 uint32_t                   b_v4_clr_used;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .bV4ClrUsed
        _m10 uint32_t                   b_v4_clr_important;    //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .bV4ClrImportant
        _m11 uint32_t                   b_v4_red_mask;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .bV4RedMask
        _m12 uint32_t                   b_v4_green_mask;       //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .bV4GreenMask
        _m13 uint32_t                   b_v4_blue_mask;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .bV4BlueMask
        _m14 uint32_t                   b_v4_alpha_mask;       //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .bV4AlphaMask
        _m15 uint32_t                   b_v4cs_type;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .bV4CSType
        _m16 struct tag::icexyztriple_t b_v4_endpoints;        //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .bV4Endpoints
        _m17 uint32_t                   b_v4_gamma_red;        //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .bV4GammaRed
        _m18 uint32_t                   b_v4_gamma_green;      //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .bV4GammaGreen
        _m19 uint32_t                   b_v4_gamma_blue;       //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .bV4GammaBlue
                                                             
        SDK_MAGIC_PROPERTIES( "BITMAPV4HEADER.$", 0x6c, true, 0x329a9afecae2c62a );                     
        SDK_FIXED_SIZE( bitmapv4header_t, 0x6c );                     
    };                                                       
};
#include "magic/bitmapv4header_t.end.hpp"
SDK_VERIFY( struct win::bitmapv4header_t, 0x6c );
