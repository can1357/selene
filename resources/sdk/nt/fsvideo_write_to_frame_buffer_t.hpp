#pragma once
#include <sdkgen/support_library.hpp>
#include "fscntl_screen_info_t.hpp"

#include "magic/fsvideo_write_to_frame_buffer_t.start.hpp"
namespace nt
{
    struct char_image_info_t;

    // [struct _FSVIDEO_WRITE_TO_FRAME_BUFFER]
    // => WDK 10 (NV)
    //
    struct fsvideo_write_to_frame_buffer_t               
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 struct nt::char_image_info_t*   src_buffer;   //{ +0x0000    } | .SrcBuffer
        _m01 struct nt::fscntl_screen_info_t dest_screen;  //{ +0x0008    } | .DestScreen
                                                         
        SDK_NONVOL_PROPERTIES( "_FSVIDEO_WRITE_TO_FRAME_BUFFER.$", 0x0, false, 0x1ff4e82eaa6642c2 );            
        SDK_FIXED_SIZE( fsvideo_write_to_frame_buffer_t, 0x18 );            
    };                                                   
};
#include "magic/fsvideo_write_to_frame_buffer_t.end.hpp"
SDK_VERIFY( struct nt::fsvideo_write_to_frame_buffer_t, 0x18 );
