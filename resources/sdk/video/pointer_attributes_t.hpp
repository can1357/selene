#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pointer_attributes_t.start.hpp"
namespace video
{
    // [struct _VIDEO_POINTER_ATTRIBUTES]
    // => WDK 10 (NV)
    //
    struct pointer_attributes_t                    
    {                                              
        // WDK 10                                  
        //                                         
        _m00 uint32_t               flags;           //{ +0x0000    } | .Flags
        _m01 uint32_t               width;           //{ +0x0004    } | .Width
        _m02 uint32_t               height;          //{ +0x0008    } | .Height
        _m03 uint32_t               width_in_bytes;  //{ +0x000c    } | .WidthInBytes
        _m04 uint32_t               enable;          //{ +0x0010    } | .Enable
        _m05 int16_t                column;          //{ +0x0014    } | .Column
        _m06 int16_t                row;             //{ +0x0016    } | .Row
        _m07 sdk::array<uint8_t, 1> pixels;          //{ +0x0018    } | .Pixels
                                                   
        SDK_NONVOL_PROPERTIES( "_VIDEO_POINTER_ATTRIBUTES.$", 0x0, false, 0x671e07b1477dce4f );               
        SDK_FIXED_SIZE( pointer_attributes_t, 0x1c );               
    };                                             
};
#include "magic/pointer_attributes_t.end.hpp"
SDK_VERIFY( struct video::pointer_attributes_t, 0x1c );
