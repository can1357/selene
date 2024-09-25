#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t;            }
namespace nt { struct pohandle_t;        }
namespace po { struct fx_component_v1_t; }

#include "magic/power_framework_settings_v1_11_t.start.hpp"
namespace wdf
{
    struct wdfdevice_t;

    // [struct _WDF_POWER_FRAMEWORK_SETTINGS_V1_11]
    // => Windows 10 v1607
    //
    struct power_framework_settings_v1_11_t                                                              
    {                                                                                                    
        using pfn_wdfdevice_wdm_post_po_fx_register_device_t =  sdk::function<int32_t(struct wdf::wdfdevice_t*, struct nt::pohandle_t*)>*;                                           
        using pfn_wdfdevice_wdm_pre_po_fx_unregister_device_t = sdk::function<void(struct wdf::wdfdevice_t*, struct nt::pohandle_t*)>*;                                           
        using ppo_fx_power_control_callback_t =                 sdk::function<int32_t(void*, const struct nt::guid_t*, void*, uint64_t, void*, uint64_t, uint64_t*)>*;                                           
                                                                                                         
        // Windows 10 v1607                                                                              
        //                                                                                               
        _m00 uint32_t                                         size;                                        //{ +0x0000    } | .Size
        _m01 pfn_wdfdevice_wdm_post_po_fx_register_device_t   evt_device_wdm_post_po_fx_register_device;   //{ +0x0008    } | .EvtDeviceWdmPostPoFxRegisterDevice
        _m02 pfn_wdfdevice_wdm_pre_po_fx_unregister_device_t  evt_device_wdm_pre_po_fx_unregister_device;  //{ +0x0010    } | .EvtDeviceWdmPrePoFxUnregisterDevice
        _m03 struct po::fx_component_v1_t*                    component;                                   //{ +0x0018    } | .Component
        _m04 sdk::function<void(void*, uint32_t)>*            component_active_condition_callback;         //{ +0x0020    } | .ComponentActiveConditionCallback
        _m05 sdk::function<void(void*, uint32_t)>*            component_idle_condition_callback;           //{ +0x0028    } | .ComponentIdleConditionCallback
        _m06 sdk::function<void(void*, uint32_t, uint32_t)>*  component_idle_state_callback;               //{ +0x0030    } | .ComponentIdleStateCallback
        _m07 ppo_fx_power_control_callback_t                  power_control_callback;                      //{ +0x0038    } | .PowerControlCallback
        _m08 void*                                            po_fx_device_context;                        //{ +0x0040    } | .PoFxDeviceContext
                                                                                                         
        SDK_MAGIC_PROPERTIES( "_WDF_POWER_FRAMEWORK_SETTINGS_V1_11.$", 0x0, false, 0x3d8d48d43e860251 );                                           
        SDK_FIXED_SIZE( power_framework_settings_v1_11_t, 0x48 );                                           
    };                                                                                                   
};
#include "magic/power_framework_settings_v1_11_t.end.hpp"
SDK_VERIFY( struct wdf::power_framework_settings_v1_11_t, 0x48 );
