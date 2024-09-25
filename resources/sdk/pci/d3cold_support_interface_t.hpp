#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/device_wake_depth_t.hpp"
#include "../nt/system_power_state_t.hpp"
#include "d3cold_last_transition_status_t.hpp"

#include "magic/d3cold_support_interface_t.start.hpp"
namespace pci
{
    // [struct _D3COLD_SUPPORT_INTERFACE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct d3cold_support_interface_t                                                
    {                                                                                
        using pget_idle_wake_info_t =                sdk::function<int32_t(void*, enum nt::system_power_state_t, enum nt::device_wake_depth_t*)>*;                               
        using pget_d3cold_last_transition_status_t = sdk::function<void(void*, enum pci::d3cold_last_transition_status_t*)>*;                               
                                                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                           
        _m00 uint16_t                                 size;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                                 version;                         //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                                    context;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*              interface_reference;             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*              interface_dereference;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 sdk::function<void(void*, uint8_t)>*     set_d3_cold_support;             //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SetD3ColdSupport
        _m06 pget_idle_wake_info_t                    get_idle_wake_info;              //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .GetIdleWakeInfo
        _m07 sdk::function<int32_t(void*, uint8_t*)>* get_d3_cold_capability;          //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .GetD3ColdCapability
        _m08 sdk::function<int32_t(void*, uint8_t*)>* get_bus_driver_d3_cold_support;  //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .GetBusDriverD3ColdSupport
        _m09 pget_d3cold_last_transition_status_t     get_last_transition_status;      //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .GetLastTransitionStatus
                                                                                     
        SDK_NONVOL_PROPERTIES( "_D3COLD_SUPPORT_INTERFACE.$", 0x48, true, 0xd29066fe64a1baf3 );                               
        SDK_FIXED_SIZE( d3cold_support_interface_t, 0x48 );                               
    };                                                                               
};
#include "magic/d3cold_support_interface_t.end.hpp"
SDK_VERIFY( struct pci::d3cold_support_interface_t, 0x48 );
