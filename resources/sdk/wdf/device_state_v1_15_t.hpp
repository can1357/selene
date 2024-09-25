#pragma once
#include <sdkgen/support_library.hpp>
#include "tri_state_t.hpp"

#include "magic/device_state_v1_15_t.start.hpp"
namespace wdf
{
    // [struct _WDF_DEVICE_STATE_V1_15]
    // => Windows 10 v1607
    //
    struct device_state_v1_15_t                       
    {                                                 
        // Windows 10 v1607                           
        //                                            
        _m00 uint32_t              size;                //{ +0x0000    } | .Size
        _m01 enum wdf::tri_state_t disabled;            //{ +0x0004    } | .Disabled
        _m02 enum wdf::tri_state_t dont_display_in_ui;  //{ +0x0008    } | .DontDisplayInUI
        _m03 enum wdf::tri_state_t failed;              //{ +0x000c    } | .Failed
        _m04 enum wdf::tri_state_t not_disableable;     //{ +0x0010    } | .NotDisableable
        _m05 enum wdf::tri_state_t removed;             //{ +0x0014    } | .Removed
        _m06 enum wdf::tri_state_t resources_changed;   //{ +0x0018    } | .ResourcesChanged
                                                      
        SDK_MAGIC_PROPERTIES( "_WDF_DEVICE_STATE_V1_15.$", 0x0, false, 0xcadfcba60a215bbc );                   
        SDK_FIXED_SIZE( device_state_v1_15_t, 0x1c );                   
    };                                                
};
#include "magic/device_state_v1_15_t.end.hpp"
SDK_VERIFY( struct wdf::device_state_v1_15_t, 0x1c );
