#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pointer_capabilities_t.start.hpp"
namespace video
{
    // [struct _VIDEO_POINTER_CAPABILITIES]
    // => WDK 10 (NV)
    //
    struct pointer_capabilities_t         
    {                                     
        // WDK 10                         
        //                                
        _m00 uint32_t flags;                //{ +0x0000    } | .Flags
        _m01 uint32_t max_width;            //{ +0x0004    } | .MaxWidth
        _m02 uint32_t max_height;           //{ +0x0008    } | .MaxHeight
        _m03 uint32_t hw_ptr_bitmap_start;  //{ +0x000c    } | .HWPtrBitmapStart
        _m04 uint32_t hw_ptr_bitmap_end;    //{ +0x0010    } | .HWPtrBitmapEnd
                                          
        SDK_NONVOL_PROPERTIES( "_VIDEO_POINTER_CAPABILITIES.$", 0x0, false, 0xc15d9a8f1453f898 );                    
        SDK_FIXED_SIZE( pointer_capabilities_t, 0x14 );                    
    };                                    
};
#include "magic/pointer_capabilities_t.end.hpp"
SDK_VERIFY( struct video::pointer_capabilities_t, 0x14 );
