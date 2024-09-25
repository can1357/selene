#pragma once
#include <sdkgen/support_library.hpp>
#include "../video/mode_information_t.hpp"
#include "../video/memory_information_t.hpp"

#include "magic/fsvideo_mode_information_t.start.hpp"
namespace nt
{
    // [struct _FSVIDEO_MODE_INFORMATION]
    // => WDK 10 (NV)
    //
    struct fsvideo_mode_information_t                        
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 struct video::mode_information_t   video_mode;    //{ +0x0000    } | .VideoMode
        _m01 struct video::memory_information_t video_memory;  //{ +0x0050    } | .VideoMemory
                                                             
        SDK_NONVOL_PROPERTIES( "_FSVIDEO_MODE_INFORMATION.$", 0x0, false, 0xef7039ca3df3971 );             
        SDK_FIXED_SIZE( fsvideo_mode_information_t, 0x70 );             
    };                                                       
};
#include "magic/fsvideo_mode_information_t.end.hpp"
SDK_VERIFY( struct nt::fsvideo_mode_information_t, 0x70 );
