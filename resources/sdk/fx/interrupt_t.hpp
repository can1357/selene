#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_t.hpp"
#include "../nt/kdpc_t.hpp"
#include "../wdf/tri_state_t.hpp"
#include "../nt/group_affinity_t.hpp"
#include "../wdf/interrupt_info_t.hpp"
#include "../nt/single_list_entry_t.hpp"
#include "../wdf/interrupt_policy_t.hpp"
#include "../wdf/interrupt_priority_t.hpp"

namespace cm  { struct partial_resource_descriptor_t; }
namespace nt  { struct kinterrupt_t;                  }
namespace wdf { struct wdfdevice_t;                   }
namespace wdf { struct wdfinterrupt_t;                }

#include "magic/interrupt_t.start.hpp"
namespace fx
{
    class device_t;
    class object_t;
    class wait_lock_t;
    class device_base_t;
    class callback_lock_t;
    struct driver_globals_t;
    class system_work_item_t;
    class wake_interrupt_machine_t;

    // [class FxInterrupt]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class interrupt_t                                                                         
    {                                                                                         
        struct u0_m_object_flags_by_name_t                                                    
        {                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                           
            //                                                                                
            _m06 uint1_t passive_callbacks;                                                     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PassiveCallbacks
            _m07 uint1_t no_delete_ddi;                                                         //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NoDeleteDDI
            _m08 uint1_t delete_called;                                                         //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DeleteCalled
            _m09 uint1_t committed;                                                             //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Committed
            _m10 uint1_t passive_dispose;                                                       //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PassiveDispose
            _m11 uint1_t force_dispose_thread;                                                  //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ForceDisposeThread
            _m12 uint1_t has_debug;                                                             //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .HasDebug
            _m13 uint1_t early_disposed_ext;                                                    //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .EarlyDisposedExt
            _m14 uint1_t trace_state;                                                           //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .TraceState
                                                                                              
            SDK_MAGIC_PROPERTIES( "FxInterrupt.m_ObjectFlagsByName.$", 0x2, true, 0x818f768807812290 );                                                           
            SDK_FIXED_SIZE( u0_m_object_flags_by_name_t, 0x2 );                                                           
        };                                                                                    
                                                                                              
        using m_evt_interrupt_enable_t =    sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*;                                      
        using m_evt_interrupt_disable_t =   sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*;                                      
        using pfn_wdf_interrupt_isr_t =     sdk::function<uint8_t(struct wdf::wdfinterrupt_t*, uint32_t)>*;                                      
        using m_evt_interrupt_dpc_t =       sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*;                                      
        using m_evt_interrupt_work_item_t = sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*;                                      
                                                                                              
        // Windows 10 v1607, Windows 10 v1607, Windows 10 v2004, Windows 10 v2004, Windows 11, Windows 11, Windows 10 v20H2, Windows 10 v20H2                                      
        //                                                                                    
        _m000 sdk::variant<class mx::lock_t, uint64_t*> m_spin_lock;                            //{ +0x0030    +0x0088    +0x0030    +0x0088    +0x0030    +0x0088    +0x0030    +0x0088    } | .m_SpinLock
                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                    
        _m001 uint16_t                                  m_type;                                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Type
        _m002 uint16_t                                  m_object_size;                          //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .m_ObjectSize
        _m003 int32_t                                   m_refcnt;                               //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .m_Refcnt
        _m004 struct fx::driver_globals_t*              m_globals;                              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Globals
        _m005 uint16_t                                  m_object_flags;                         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlags
        _m015 u0_m_object_flags_by_name_t               m_object_flags_by_name;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlagsByName
        _m016 uint16_t                                  m_object_state;                         //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .m_ObjectState
        _m017 nt::list_entry_t                          m_child_list_head;                      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_ChildListHead
        _m018 class fx::object_t*                       m_parent_object;                        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_ParentObject
        _m019 nt::list_entry_t                          m_child_entry;                          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_ChildEntry
        _m020 struct nt::single_list_entry_t            m_dispose_single_entry;                 //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_DisposeSingleEntry
        _m021 class fx::device_base_t*                  m_device_base;                          //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_DeviceBase
        _m022 class fx::device_t*                       m_device;                               //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_Device
        _m023 class mx::lock_t                          m_np_lock;                              //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_NPLock
        _m024 enum wdf::tri_state_t                     m_share_vector;                         //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .m_ShareVector
        _m025 struct nt::kinterrupt_t*                  m_interrupt;                            //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .m_Interrupt
        _m026 uint8_t                                   m_old_irql;                             //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .m_OldIrql
        _m027 volatile uint8_t                          m_synchronize_irql;                     //{ +0x0091    +0x0091    +0x0091    +0x0091    } | .m_SynchronizeIrql
        _m028 class mx::lock_t                          m_built_in_spin_lock;                   //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .m_BuiltInSpinLock
        _m029 class fx::wait_lock_t*                    m_wait_lock;                            //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .m_WaitLock
        _m030 struct nt::kdpc_t                         m_dpc;                                  //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .m_Dpc
        _m031 class fx::system_work_item_t*             m_system_work_item;                     //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .m_SystemWorkItem
        _m032 class fx::callback_lock_t*                m_callback_lock;                        //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .m_CallbackLock
        _m033 uint8_t                                   m_dispose_wait_lock;                    //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .m_DisposeWaitLock
        _m034 uint8_t                                   m_use_soft_disconnect;                  //{ +0x0101    +0x0101    +0x0101    +0x0101    } | .m_UseSoftDisconnect
        _m035 uint8_t                                   m_passive_handling;                     //{ +0x0102    +0x0102    +0x0102    +0x0102    } | .m_PassiveHandling
        _m036 uint8_t                                   m_added_to_list;                        //{ +0x0103    +0x0103    +0x0103    +0x0103    } | .m_AddedToList
        _m037 uint8_t                                   m_connected;                            //{ +0x0104    +0x0104    +0x0104    +0x0104    } | .m_Connected
        _m038 uint8_t                                   m_force_disconnected;                   //{ +0x0105    +0x0105    +0x0105    +0x0105    } | .m_ForceDisconnected
        _m039 uint8_t                                   m_enabled;                              //{ +0x0106    +0x0106    +0x0106    +0x0106    } | .m_Enabled
        _m040 uint8_t                                   m_floating_save;                        //{ +0x0107    +0x0107    +0x0107    +0x0107    } | .m_FloatingSave
        _m041 uint8_t                                   m_created_in_prepare_hardware;          //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .m_CreatedInPrepareHardware
        _m042 class fx::wake_interrupt_machine_t*       m_wake_interrupt_machine;               //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .m_WakeInterruptMachine
        _m043 uint8_t                                   m_active;                               //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .m_Active
        _m044 uint8_t                                   m_set_policy;                           //{ +0x0119    +0x0119    +0x0119    +0x0119    } | .m_SetPolicy
        _m045 enum wdf::interrupt_policy_t              m_policy;                               //{ +0x011c    +0x011c    +0x011c    +0x011c    } | .m_Policy
        _m046 enum wdf::interrupt_priority_t            m_priority;                             //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .m_Priority
        _m047 struct nt::group_affinity_t               m_processors;                           //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .m_Processors
        _m048 m_evt_interrupt_enable_t                  m_evt_interrupt_enable;                 //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .m_EvtInterruptEnable
        _m049 m_evt_interrupt_disable_t                 m_evt_interrupt_disable;                //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .m_EvtInterruptDisable
        _m050 pfn_wdf_interrupt_isr_t                   m_evt_interrupt_isr;                    //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .m_EvtInterruptIsr
        _m051 m_evt_interrupt_dpc_t                     m_evt_interrupt_dpc;                    //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .m_EvtInterruptDpc
        _m052 m_evt_interrupt_work_item_t               m_evt_interrupt_work_item;              //{ +0x0158    +0x0158    +0x0158    +0x0158    } | .m_EvtInterruptWorkItem
        _m053 struct wdf::interrupt_info_t              m_interrupt_info;                       //{ +0x0160    +0x0160    +0x0160    +0x0160    } | .m_InterruptInfo
        _m054 struct cm::partial_resource_descriptor_t* m_cm_translated_resource;               //{ +0x01a0    +0x01a0    +0x01a0    +0x01a0    } | .m_CmTranslatedResource
        _m055 struct nt::kinterrupt_t*                  m_interrupt_captured;                   //{ +0x01a8    +0x01a8    +0x01a8    +0x01a8    } | .m_InterruptCaptured
        _m056 uint8_t                                   m_disconnecting;                        //{ +0x01b0    +0x01b0    +0x01b0    +0x01b0    } | .m_Disconnecting
        _m057 uint8_t                                   m_is_edge_triggered_non_msi_interrupt;  //{ +0x01b1    +0x01b1    +0x01b1    +0x01b1    } | .m_IsEdgeTriggeredNonMsiInterrupt
        _m058 nt::list_entry_t                          m_pnp_list;                             //{ +0x01b8    +0x01b8    +0x01b8    +0x01b8    } | .m_PnpList
                                                                                              
        SDK_MAGIC_PROPERTIES( "FxInterrupt.$", 0x1c8, true, 0x85dfa1a46a080395 );                                      
        SDK_FIXED_SIZE( interrupt_t, 0x1c8 );                                                 
    };                                                                                        
};
#include "magic/interrupt_t.end.hpp"
SDK_VERIFY( struct fx::interrupt_t::u0_m_object_flags_by_name_t, 0x2 );
SDK_VERIFY( class fx::interrupt_t, 0x1c8 );
