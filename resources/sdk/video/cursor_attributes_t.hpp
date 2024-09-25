#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cursor_attributes_t.start.hpp"
namespace video
{
    // [struct _VIDEO_CURSOR_ATTRIBUTES]
    // => WDK 10 (NV)
    //
    struct cursor_attributes_t
    {                         
        // WDK 10            
        //                   
        _m00 uint16_t width;    //{ +0x0000    } | .Width
        _m01 uint16_t height;   //{ +0x0002    } | .Height
        _m02 int16_t  column;   //{ +0x0004    } | .Column
        _m03 int16_t  row;      //{ +0x0006    } | .Row
        _m04 uint8_t  rate;     //{ +0x0008    } | .Rate
        _m05 uint8_t  enable;   //{ +0x0009    } | .Enable
                              
        SDK_NONVOL_PROPERTIES( "_VIDEO_CURSOR_ATTRIBUTES.$", 0x0, false, 0x4024564ea390383b );       
        SDK_FIXED_SIZE( cursor_attributes_t, 0xa );       
    };                        
};
#include "magic/cursor_attributes_t.end.hpp"
SDK_VERIFY( struct video::cursor_attributes_t, 0xa );
