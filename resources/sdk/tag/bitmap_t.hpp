#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bitmap_t.start.hpp"
namespace tag
{
    // [struct tagBITMAP]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct bitmap_t                  
    {                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 int32_t  bm_type;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .bmType
        _m01 int32_t  bm_width;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .bmWidth
        _m02 int32_t  bm_height;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .bmHeight
        _m03 int32_t  bm_width_bytes;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .bmWidthBytes
        _m04 uint16_t bm_planes;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .bmPlanes
        _m05 uint16_t bm_bits_pixel;   //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .bmBitsPixel
        _m06 void*    bm_bits;         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .bmBits
                                     
        SDK_NONVOL_PROPERTIES( "tagBITMAP.$", 0x20, true, 0xae1d49fb1ef9d1e0 );               
        SDK_FIXED_SIZE( bitmap_t, 0x20 );               
    };                               
};
#include "magic/bitmap_t.end.hpp"
SDK_VERIFY( struct tag::bitmap_t, 0x20 );
