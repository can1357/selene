#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_session_status_t.start.hpp"
namespace video
{
    // [struct _VIDEO_DEVICE_SESSION_STATUS]
    // => WDK 10 (NV)
    //
    struct device_session_status_t
    {                             
        // WDK 10               
        //                      
        _m00 uint32_t b_enable;     //{ +0x0000    } | .bEnable
        _m01 uint32_t b_success;    //{ +0x0004    } | .bSuccess
                                  
        SDK_NONVOL_PROPERTIES( "_VIDEO_DEVICE_SESSION_STATUS.$", 0x0, false, 0x7587df478e398b5f );          
        SDK_FIXED_SIZE( device_session_status_t, 0x8 );          
    };                            
};
#include "magic/device_session_status_t.end.hpp"
SDK_VERIFY( struct video::device_session_status_t, 0x8 );
