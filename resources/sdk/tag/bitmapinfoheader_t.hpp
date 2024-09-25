#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bitmapinfoheader_t.start.hpp"
namespace tag
{
    // [struct tagBITMAPINFOHEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct bitmapinfoheader_t             
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t bi_size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .biSize
        _m01 int32_t  bi_width;             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .biWidth
        _m02 int32_t  bi_height;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .biHeight
        _m03 uint16_t bi_planes;            //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .biPlanes
        _m04 uint16_t bi_bit_count;         //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .biBitCount
        _m05 uint32_t bi_compression;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .biCompression
        _m06 uint32_t bi_size_image;        //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .biSizeImage
        _m07 int32_t  bi_x_pels_per_meter;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .biXPelsPerMeter
        _m08 int32_t  bi_y_pels_per_meter;  //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .biYPelsPerMeter
        _m09 uint32_t bi_clr_used;          //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .biClrUsed
        _m10 uint32_t bi_clr_important;     //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .biClrImportant
                                          
        SDK_NONVOL_PROPERTIES( "tagBITMAPINFOHEADER.$", 0x28, true, 0x30455e35b5484b21 );                    
        SDK_FIXED_SIZE( bitmapinfoheader_t, 0x28 );                    
    };                                    
};
#include "magic/bitmapinfoheader_t.end.hpp"
SDK_VERIFY( struct tag::bitmapinfoheader_t, 0x28 );
