#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cursor_position_t.start.hpp"
namespace video
{
    // [struct _VIDEO_CURSOR_POSITION]
    // => WDK 10 (NV)
    //
    struct cursor_position_t
    {                       
        // WDK 10           
        //                  
        _m00 int16_t column;  //{ +0x0000    } | .Column
        _m01 int16_t row;     //{ +0x0002    } | .Row
                            
        SDK_NONVOL_PROPERTIES( "_VIDEO_CURSOR_POSITION.$", 0x0, false, 0x7e4ba22bd3f10cf0 );       
        SDK_FIXED_SIZE( cursor_position_t, 0x4 );       
    };                      
};
#include "magic/cursor_position_t.end.hpp"
SDK_VERIFY( struct video::cursor_position_t, 0x4 );
