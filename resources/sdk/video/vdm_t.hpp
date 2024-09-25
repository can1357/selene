#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vdm_t.start.hpp"
namespace video
{
    // [struct _VIDEO_VDM]
    // => WDK 10 (NV)
    //
    struct vdm_t                  
    {                             
        // WDK 10                 
        //                        
        _m00 void* process_handle;  //{ +0x0000    } | .ProcessHandle
                                  
        SDK_NONVOL_PROPERTIES( "_VIDEO_VDM.$", 0x0, false, 0xc2c4667ff819b8c0 );               
        SDK_FIXED_SIZE( vdm_t, 0x8 );               
    };                            
};
#include "magic/vdm_t.end.hpp"
SDK_VERIFY( struct video::vdm_t, 0x8 );
