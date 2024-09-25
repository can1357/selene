#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/clutdata_t.start.hpp"
namespace video
{
    // [struct _VIDEO_CLUTDATA]
    // => WDK 10 (NV)
    //
    struct clutdata_t      
    {                      
        // WDK 10          
        //                 
        _m00 uint8_t red;    //{ +0x0000    } | .Red
        _m01 uint8_t green;  //{ +0x0001    } | .Green
        _m02 uint8_t blue;   //{ +0x0002    } | .Blue
                           
        SDK_NONVOL_PROPERTIES( "_VIDEO_CLUTDATA.$", 0x0, false, 0x3001df3c3ac390c7 );      
        SDK_FIXED_SIZE( clutdata_t, 0x4 );      
    };                     
};
#include "magic/clutdata_t.end.hpp"
SDK_VERIFY( struct video::clutdata_t, 0x4 );
