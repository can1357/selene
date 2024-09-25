#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/timeline_bitmap_t.start.hpp"
namespace nt
{
    // [union _TIMELINE_BITMAP]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union timeline_bitmap_t    
    {                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint64_t value;     //{ +0x0000    +0x0000    +0x0000    } | .Value
        _m01 uint32_t end_time;  //{ +0x0000    +0x0000    +0x0000    } | .EndTime
        _m02 uint32_t bitmap;    //{ +0x0004    +0x0004    +0x0004    } | .Bitmap
                               
        SDK_MAGIC_PROPERTIES( "_TIMELINE_BITMAP.$", 0x8, true, 0x1586a32383de71d4 );         
        SDK_FIXED_SIZE( timeline_bitmap_t, 0x8 );         
    };                         
};
#include "magic/timeline_bitmap_t.end.hpp"
SDK_VERIFY( union nt::timeline_bitmap_t, 0x8 );
