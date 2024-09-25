#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hardware_state_t.start.hpp"
namespace video
{
    struct hardware_state_header_t;

    // [struct _VIDEO_HARDWARE_STATE]
    // => WDK 10 (NV)
    //
    struct hardware_state_t                                      
    {                                                            
        // WDK 10                                                
        //                                                       
        _m00 struct video::hardware_state_header_t* state_header;  //{ +0x0000    } | .StateHeader
        _m01 uint32_t                               state_length;  //{ +0x0008    } | .StateLength
                                                                 
        SDK_NONVOL_PROPERTIES( "_VIDEO_HARDWARE_STATE.$", 0x0, false, 0xc89539a645c26746 );             
        SDK_FIXED_SIZE( hardware_state_t, 0x10 );                
    };                                                           
};
#include "magic/hardware_state_t.end.hpp"
SDK_VERIFY( struct video::hardware_state_t, 0x10 );
