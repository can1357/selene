#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/video_device_data_t.start.hpp"
namespace cm
{
    // [struct _CM_VIDEO_DEVICE_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct video_device_data_t    
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint16_t version;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t revision;     //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Revision
        _m02 uint32_t video_clock;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .VideoClock
                                  
        SDK_NONVOL_PROPERTIES( "_CM_VIDEO_DEVICE_DATA.$", 0x8, true, 0xdda1cb6b37fb41c7 );            
        SDK_FIXED_SIZE( video_device_data_t, 0x8 );            
    };                            
};
#include "magic/video_device_data_t.end.hpp"
SDK_VERIFY( struct cm::video_device_data_t, 0x8 );
