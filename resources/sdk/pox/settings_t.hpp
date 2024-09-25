#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;            }
namespace nt  { struct pohandle_t;        }
namespace po  { struct fx_component_v1_t; }
namespace wdf { struct wdfdevice_t;       }

#include "magic/settings_t.start.hpp"
namespace pox
{
    // [struct _POX_SETTINGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct settings_t                                                                                    
    {                                                                                                    
        using pfn_wdfdevice_wdm_post_po_fx_register_device_t =  sdk::function<int32_t(struct wdf::wdfdevice_t*, struct nt::pohandle_t*)>*;                                           
        using pfn_wdfdevice_wdm_pre_po_fx_unregister_device_t = sdk::function<void(struct wdf::wdfdevice_t*, struct nt::pohandle_t*)>*;                                           
        using ppo_fx_power_control_callback_t =                 sdk::function<int32_t(void*, const struct nt::guid_t*, void*, uint64_t, void*, uint64_t, uint64_t*)>*;                                           
                                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                                               
        _m00 pfn_wdfdevice_wdm_post_po_fx_register_device_t   evt_device_wdm_post_po_fx_register_device;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EvtDeviceWdmPostPoFxRegisterDevice
        _m01 pfn_wdfdevice_wdm_pre_po_fx_unregister_device_t  evt_device_wdm_pre_po_fx_unregister_device;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EvtDeviceWdmPrePoFxUnregisterDevice
        _m02 struct po::fx_component_v1_t*                    component;                                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Component
        _m03 sdk::function<void(void*, uint32_t)>*            component_active_condition_callback;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ComponentActiveConditionCallback
        _m04 sdk::function<void(void*, uint32_t)>*            component_idle_condition_callback;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ComponentIdleConditionCallback
        _m05 sdk::function<void(void*, uint32_t, uint32_t)>*  component_idle_state_callback;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ComponentIdleStateCallback
        _m06 ppo_fx_power_control_callback_t                  power_control_callback;                      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .PowerControlCallback
        _m07 void*                                            po_fx_device_context;                        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .PoFxDeviceContext
                                                                                                         
        SDK_MAGIC_PROPERTIES( "_POX_SETTINGS.$", 0x40, true, 0xddef0fc518a807f1 );                                           
        SDK_FIXED_SIZE( settings_t, 0x40 );                                                              
    };                                                                                                   
};
#include "magic/settings_t.end.hpp"
SDK_VERIFY( struct pox::settings_t, 0x40 );
