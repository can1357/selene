#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/user_bitmap_t.start.hpp"
namespace win
{
    // [struct _userBITMAP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct user_bitmap_t                           
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                         
        _m00 int32_t                bm_type;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bmType
        _m01 int32_t                bm_width;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bmWidth
        _m02 int32_t                bm_height;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .bmHeight
        _m03 int32_t                bm_width_bytes;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .bmWidthBytes
        _m04 uint16_t               bm_planes;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .bmPlanes
        _m05 uint16_t               bm_bits_pixel;   //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .bmBitsPixel
        _m06 uint32_t               cb_size;         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .cbSize
        _m07 sdk::array<uint8_t, 1> p_buffer;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pBuffer
                                                   
        SDK_MAGIC_PROPERTIES( "_userBITMAP.$", 0x1c, true, 0xecae427a188a9d22 );               
        SDK_FIXED_SIZE( user_bitmap_t, 0x1c );               
    };                                             
};
#include "magic/user_bitmap_t.end.hpp"
SDK_VERIFY( struct win::user_bitmap_t, 0x1c );
