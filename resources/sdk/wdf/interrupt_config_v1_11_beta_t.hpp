#pragma once
#include <sdkgen/support_library.hpp>
#include "tri_state_t.hpp"

namespace cm { struct partial_resource_descriptor_t; }

#include "magic/interrupt_config_v1_11_beta_t.start.hpp"
namespace wdf
{
    struct wdfdevice_t;
    struct wdfspinlock_t;
    struct wdfwaitlock_t;
    struct wdfinterrupt_t;

    // [struct _WDF_INTERRUPT_CONFIG_V1_11_BETA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interrupt_config_v1_11_beta_t                                       
    {                                                                          
        using pfn_wdf_interrupt_isr_t =   sdk::function<uint8_t(struct wdf::wdfinterrupt_t*, uint32_t)>*;                        
        using evt_interrupt_dpc_t =       sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*;                        
        using evt_interrupt_enable_t =    sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*;                        
        using evt_interrupt_disable_t =   sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*;                        
        using evt_interrupt_work_item_t = sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*;                        
                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                     
        _m00 uint32_t                                  size;                     //{ +0x0000    +0x0000    +0x0000    } | .Size
        _m01 struct wdf::wdfspinlock_t*                spin_lock;                //{ +0x0008    +0x0008    +0x0008    } | .SpinLock
        _m02 enum wdf::tri_state_t                     share_vector;             //{ +0x0010    +0x0010    +0x0010    } | .ShareVector
        _m03 uint8_t                                   floating_save;            //{ +0x0014    +0x0014    +0x0014    } | .FloatingSave
        _m04 uint8_t                                   automatic_serialization;  //{ +0x0015    +0x0015    +0x0015    } | .AutomaticSerialization
        _m05 pfn_wdf_interrupt_isr_t                   evt_interrupt_isr;        //{ +0x0018    +0x0018    +0x0018    } | .EvtInterruptIsr
        _m06 evt_interrupt_dpc_t                       evt_interrupt_dpc;        //{ +0x0020    +0x0020    +0x0020    } | .EvtInterruptDpc
        _m07 evt_interrupt_enable_t                    evt_interrupt_enable;     //{ +0x0028    +0x0028    +0x0028    } | .EvtInterruptEnable
        _m08 evt_interrupt_disable_t                   evt_interrupt_disable;    //{ +0x0030    +0x0030    +0x0030    } | .EvtInterruptDisable
        _m09 evt_interrupt_work_item_t                 evt_interrupt_work_item;  //{ +0x0038    +0x0038    +0x0038    } | .EvtInterruptWorkItem
        _m10 struct cm::partial_resource_descriptor_t* interrupt_raw;            //{ +0x0040    +0x0040    +0x0040    } | .InterruptRaw
        _m11 struct cm::partial_resource_descriptor_t* interrupt_translated;     //{ +0x0048    +0x0048    +0x0048    } | .InterruptTranslated
        _m12 struct wdf::wdfwaitlock_t*                wait_lock;                //{ +0x0050    +0x0050    +0x0050    } | .WaitLock
        _m13 uint8_t                                   passive_handling;         //{ +0x0058    +0x0058    +0x0058    } | .PassiveHandling
                                                                               
        SDK_MAGIC_PROPERTIES( "_WDF_INTERRUPT_CONFIG_V1_11_BETA.$", 0x60, true, 0xad09ab7fc9e6c2e1 );                        
        SDK_FIXED_SIZE( interrupt_config_v1_11_beta_t, 0x60 );                        
    };                                                                         
};
#include "magic/interrupt_config_v1_11_beta_t.end.hpp"
SDK_VERIFY( struct wdf::interrupt_config_v1_11_beta_t, 0x60 );
