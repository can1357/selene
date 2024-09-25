#pragma once
#include <sdkgen/support_library.hpp>
#include "fscntl_screen_info_t.hpp"

#include "magic/fsvideo_copy_frame_buffer_t.start.hpp"
namespace nt
{
    // [struct _FSVIDEO_COPY_FRAME_BUFFER]
    // => WDK 10 (NV)
    //
    struct fsvideo_copy_frame_buffer_t                   
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 struct nt::fscntl_screen_info_t src_screen;   //{ +0x0000    } | .SrcScreen
        _m01 struct nt::fscntl_screen_info_t dest_screen;  //{ +0x000c    } | .DestScreen
                                                         
        SDK_NONVOL_PROPERTIES( "_FSVIDEO_COPY_FRAME_BUFFER.$", 0x0, false, 0xcb5dce4929205b06 );            
        SDK_FIXED_SIZE( fsvideo_copy_frame_buffer_t, 0x18 );            
    };                                                   
};
#include "magic/fsvideo_copy_frame_buffer_t.end.hpp"
SDK_VERIFY( struct nt::fsvideo_copy_frame_buffer_t, 0x18 );
