#pragma once
#include <sdkgen/support_library.hpp>
#include "tri_state_t.hpp"

#include "magic/device_state_t.start.hpp"
namespace wdf
{
    // [struct _WDF_DEVICE_STATE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct device_state_t                             
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                            
        _m00 uint32_t              size;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 enum wdf::tri_state_t disabled;            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Disabled
        _m02 enum wdf::tri_state_t dont_display_in_ui;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DontDisplayInUI
        _m03 enum wdf::tri_state_t failed;              //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Failed
        _m04 enum wdf::tri_state_t not_disableable;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .NotDisableable
        _m05 enum wdf::tri_state_t removed;             //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .Removed
        _m06 enum wdf::tri_state_t resources_changed;   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ResourcesChanged
                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                            
        _m07 enum wdf::tri_state_t assigned_to_guest;   //{ +0x001c    +0x001c    +0x001c    } | .AssignedToGuest
                                                      
        SDK_NONVOL_PROPERTIES( "_WDF_DEVICE_STATE.$", 0x20, true, 0xfa3d8d825163ad5e );                   
        SDK_DYNAMIC_SIZE( device_state_t );                   
    };                                                
};
#include "magic/device_state_t.end.hpp"
