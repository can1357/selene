#pragma once
#include <sdkgen/support_library.hpp>
#include "tri_state_t.hpp"
#include "../nt/device_power_state_t.hpp"
#include "../nt/system_power_state_t.hpp"

#include "magic/device_power_capabilities_v1_1_t.start.hpp"
namespace wdf
{
    // [struct _WDF_DEVICE_POWER_CAPABILITIES_V1_1]
    // => Windows 10 v1607
    //
    struct device_power_capabilities_v1_1_t                                     
    {                                                                           
        // Windows 10 v1607                                                     
        //                                                                      
        _m00 uint32_t                                     size;                   //{ +0x0000    } | .Size
        _m01 enum wdf::tri_state_t                        device_d1;              //{ +0x0004    } | .DeviceD1
        _m02 enum wdf::tri_state_t                        device_d2;              //{ +0x0008    } | .DeviceD2
        _m03 enum wdf::tri_state_t                        wake_from_d0;           //{ +0x000c    } | .WakeFromD0
        _m04 enum wdf::tri_state_t                        wake_from_d1;           //{ +0x0010    } | .WakeFromD1
        _m05 enum wdf::tri_state_t                        wake_from_d2;           //{ +0x0014    } | .WakeFromD2
        _m06 enum wdf::tri_state_t                        wake_from_d3;           //{ +0x0018    } | .WakeFromD3
        _m07 sdk::array<enum nt::device_power_state_t, 7> device_state;           //{ +0x001c    } | .DeviceState
        _m08 enum nt::device_power_state_t                device_wake;            //{ +0x0038    } | .DeviceWake
        _m09 enum nt::system_power_state_t                system_wake;            //{ +0x003c    } | .SystemWake
        _m10 uint32_t                                     d1_latency;             //{ +0x0040    } | .D1Latency
        _m11 uint32_t                                     d2_latency;             //{ +0x0044    } | .D2Latency
        _m12 uint32_t                                     d3_latency;             //{ +0x0048    } | .D3Latency
        _m13 enum nt::device_power_state_t                ideal_dx_state_for_sx;  //{ +0x004c    } | .IdealDxStateForSx
                                                                                
        SDK_MAGIC_PROPERTIES( "_WDF_DEVICE_POWER_CAPABILITIES_V1_1.$", 0x0, false, 0x953abb6bdc6089cf );                      
        SDK_FIXED_SIZE( device_power_capabilities_v1_1_t, 0x50 );                      
    };                                                                          
};
#include "magic/device_power_capabilities_v1_1_t.end.hpp"
SDK_VERIFY( struct wdf::device_power_capabilities_v1_1_t, 0x50 );
