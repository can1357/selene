#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wmi_idle_state_t.start.hpp"
namespace ppm
{
    // [struct PPM_WMI_IDLE_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wmi_idle_state_t           
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t latency;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Latency
        _m01 uint32_t power;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Power
        _m02 uint32_t time_check;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TimeCheck
        _m03 uint8_t  promote_percent;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PromotePercent
        _m04 uint8_t  demote_percent;   //{ +0x000d    +0x000d    +0x000d    +0x000d    } | .DemotePercent
        _m05 uint8_t  state_type;       //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .StateType
        _m06 uint32_t state_flags;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .StateFlags
        _m07 uint32_t context;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Context
        _m08 uint32_t idle_handler;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IdleHandler
                                      
        SDK_MAGIC_PROPERTIES( "PPM_WMI_IDLE_STATE.$", 0x20, true, 0xe1df48a9973083db );                
        SDK_FIXED_SIZE( wmi_idle_state_t, 0x20 );                
    };                                
};
#include "magic/wmi_idle_state_t.end.hpp"
SDK_VERIFY( struct ppm::wmi_idle_state_t, 0x20 );
