#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/win32k_callbacks_t.start.hpp"
namespace video
{
    // [struct _VIDEO_WIN32K_CALLBACKS]
    // => WDK 10 (NV)
    //
    struct win32k_callbacks_t                                 
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 void*                       phys_disp;             //{ +0x0000    } | .PhysDisp
        _m01 sdk::function<void(void*)>* callout;               //{ +0x0008    } | .Callout
        _m02 uint32_t                    b_acpi;                //{ +0x0010    } | .bACPI
        _m03 void*                       p_phys_device_object;  //{ +0x0018    } | .pPhysDeviceObject
        _m04 uint32_t                    dualview_flags;        //{ +0x0020    } | .DualviewFlags
                                                              
        SDK_NONVOL_PROPERTIES( "_VIDEO_WIN32K_CALLBACKS.$", 0x0, false, 0x6a169c1d38bea368 );                     
        SDK_FIXED_SIZE( win32k_callbacks_t, 0x28 );                     
    };                                                        
};
#include "magic/win32k_callbacks_t.end.hpp"
SDK_VERIFY( struct video::win32k_callbacks_t, 0x28 );
