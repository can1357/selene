#pragma once
#include <sdkgen/support_library.hpp>
#include "tri_state_t.hpp"

namespace nt { struct guid_t;            }
namespace nt { struct pohandle_t;        }
namespace po { struct fx_component_v1_t; }

#include "magic/power_framework_settings_t.start.hpp"
namespace wdf
{
    struct wdfdevice_t;

    // [struct _WDF_POWER_FRAMEWORK_SETTINGS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct power_framework_settings_t                                                                    
    {                                                                                                    
        using pfn_wdfdevice_wdm_post_po_fx_register_device_t =  sdk::function<int32_t(struct wdf::wdfdevice_t*, struct nt::pohandle_t*)>*;                                           
        using pfn_wdfdevice_wdm_pre_po_fx_unregister_device_t = sdk::function<void(struct wdf::wdfdevice_t*, struct nt::pohandle_t*)>*;                                           
        using ppo_fx_power_control_callback_t =                 sdk::function<int32_t(void*, const struct nt::guid_t*, void*, uint64_t, void*, uint64_t, uint64_t*)>*;                                           
                                                                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                                               
        _m00 uint32_t                                         size;                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 pfn_wdfdevice_wdm_post_po_fx_register_device_t   evt_device_wdm_post_po_fx_register_device;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .EvtDeviceWdmPostPoFxRegisterDevice
        _m02 pfn_wdfdevice_wdm_pre_po_fx_unregister_device_t  evt_device_wdm_pre_po_fx_unregister_device;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .EvtDeviceWdmPrePoFxUnregisterDevice
        _m03 struct po::fx_component_v1_t*                    component;                                   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Component
        _m04 sdk::function<void(void*, uint32_t)>*            component_active_condition_callback;         //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ComponentActiveConditionCallback
        _m05 sdk::function<void(void*, uint32_t)>*            component_idle_condition_callback;           //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .ComponentIdleConditionCallback
        _m06 sdk::function<void(void*, uint32_t, uint32_t)>*  component_idle_state_callback;               //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .ComponentIdleStateCallback
        _m07 ppo_fx_power_control_callback_t                  power_control_callback;                      //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .PowerControlCallback
        _m08 void*                                            po_fx_device_context;                        //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .PoFxDeviceContext
                                                                                                         
        // Windows 11                                                                                    
        //                                                                                               
        _m09 uint64_t                                         po_fx_device_flags;                          //{ +0x0048    } | .PoFxDeviceFlags
        _m10 enum wdf::tri_state_t                            directed_po_fx_enabled;                      //{ +0x0050    } | .DirectedPoFxEnabled
                                                                                                         
        SDK_NONVOL_PROPERTIES( "_WDF_POWER_FRAMEWORK_SETTINGS.$", 0x48, true, 0x3ed992d2bfd629ed );                                           
        SDK_DYNAMIC_SIZE( power_framework_settings_t );                                                  
    };                                                                                                   
};
#include "magic/power_framework_settings_t.end.hpp"
