#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pointer_position_t.start.hpp"
namespace video
{
    // [struct _VIDEO_POINTER_POSITION]
    // => WDK 10 (NV)
    //
    struct pointer_position_t
    {                        
        // WDK 10           
        //                  
        _m00 int16_t column;   //{ +0x0000    } | .Column
        _m01 int16_t row;      //{ +0x0002    } | .Row
                             
        SDK_NONVOL_PROPERTIES( "_VIDEO_POINTER_POSITION.$", 0x0, false, 0xd0e74c79e62816be );       
        SDK_FIXED_SIZE( pointer_position_t, 0x4 );       
    };                       
};
#include "magic/pointer_position_t.end.hpp"
SDK_VERIFY( struct video::pointer_position_t, 0x4 );
