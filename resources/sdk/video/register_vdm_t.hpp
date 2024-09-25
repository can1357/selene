#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/register_vdm_t.start.hpp"
namespace video
{
    // [struct _VIDEO_REGISTER_VDM]
    // => WDK 10 (NV)
    //
    struct register_vdm_t                
    {                                    
        // WDK 10                        
        //                               
        _m00 uint32_t minimum_state_size;  //{ +0x0000    } | .MinimumStateSize
                                         
        SDK_NONVOL_PROPERTIES( "_VIDEO_REGISTER_VDM.$", 0x0, false, 0xdad069b05f0f5723 );                   
        SDK_FIXED_SIZE( register_vdm_t, 0x4 );                   
    };                                   
};
#include "magic/register_vdm_t.end.hpp"
SDK_VERIFY( struct video::register_vdm_t, 0x4 );
