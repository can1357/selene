#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_information_t.start.hpp"
namespace video
{
    // [struct _VIDEO_MEMORY_INFORMATION]
    // => WDK 10 (NV)
    //
    struct memory_information_t           
    {                                     
        // WDK 10                         
        //                                
        _m00 void*    video_ram_base;       //{ +0x0000    } | .VideoRamBase
        _m01 uint32_t video_ram_length;     //{ +0x0008    } | .VideoRamLength
        _m02 void*    frame_buffer_base;    //{ +0x0010    } | .FrameBufferBase
        _m03 uint32_t frame_buffer_length;  //{ +0x0018    } | .FrameBufferLength
                                          
        SDK_NONVOL_PROPERTIES( "_VIDEO_MEMORY_INFORMATION.$", 0x0, false, 0x3d9b1e18cd1a431e );                    
        SDK_FIXED_SIZE( memory_information_t, 0x20 );                    
    };                                    
};
#include "magic/memory_information_t.end.hpp"
SDK_VERIFY( struct video::memory_information_t, 0x20 );
