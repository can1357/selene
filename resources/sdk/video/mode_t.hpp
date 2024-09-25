#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_t.start.hpp"
namespace video
{
    // [struct _VIDEO_MODE]
    // => WDK 10 (NV)
    //
    struct mode_t                    
    {                                
        // WDK 10                    
        //                           
        _m00 uint32_t requested_mode;  //{ +0x0000    } | .RequestedMode
                                     
        SDK_NONVOL_PROPERTIES( "_VIDEO_MODE.$", 0x0, false, 0x9ca3d9a4e2fc0d3a );               
        SDK_FIXED_SIZE( mode_t, 0x4 );               
    };                               
};
#include "magic/mode_t.end.hpp"
SDK_VERIFY( struct video::mode_t, 0x4 );
