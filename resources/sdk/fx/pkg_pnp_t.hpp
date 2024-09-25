#pragma once
#include <sdkgen/support_library.hpp>
#include "pnp_caps_t.hpp"
#include "pnp_state_t.hpp"
#include "../mx/lock_t.hpp"
#include "power_caps_t.hpp"
#include "pnp_machine_t.hpp"
#include "power_machine_t.hpp"
#include "pnp_device_d0_exit_t.hpp"
#include "pnp_state_and_caps_t.hpp"
#include "wait_lock_internal_t.hpp"
#include "pnp_device_d0_entry_t.hpp"
#include "power_policy_machine_t.hpp"
#include "pnp_device_query_stop_t.hpp"
#include "../pnp/bus_information_t.hpp"
#include "../nt/single_list_entry_t.hpp"
#include "pnp_device_query_remove_t.hpp"
#include "../wdf/shared_power_data_t.hpp"
#include "../power/thread_interface_t.hpp"
#include "pnp_device_relations_query_t.hpp"
#include "pnp_device_prepare_hardware_t.hpp"
#include "pnp_device_release_hardware_t.hpp"
#include "pnp_device_surprise_removal_t.hpp"
#include "pnp_device_usage_notification_t.hpp"
#include "../pci/d3cold_support_interface_t.hpp"
#include "pnp_device_usage_notification_ex_t.hpp"
#include "pnp_device_d0_exit_pre_hw_disabled_t.hpp"
#include "pnp_device_d0_entry_post_hw_enabled_t.hpp"
#include "pnp_device_d0_exit_pre_interrupts_disabled_t.hpp"
#include "pnp_device_d0_entry_post_interrupts_enabled_t.hpp"

namespace io  { struct connect_interrupt_parameters_t;             }
namespace io  { struct disconnect_interrupt_parameters_t;          }
namespace io  { struct report_interrupt_active_state_parameters_t; }
namespace mx  { class event_t;                                     }
namespace nt  { struct irp_t;                                      }
namespace wdf { struct sleep_study_interface_t;                    }

#include "magic/pkg_pnp_t.start.hpp"
namespace fx
{
    class device_t;
    class object_t;
    struct cr_event_t;
    class cm_res_list_t;
    class device_base_t;
    class system_thread_t;
    struct driver_globals_t;
    class companion_target_t;
    class system_work_item_t;
    struct enumeration_info_t;
    class related_device_list_t;
    struct pnp_state_callback_t;
    struct power_state_callback_t;
    class self_managed_io_machine_t;
    class spin_lock_transactioned_list_t;
    struct power_policy_state_callback_t;

    // [class FxPkgPnp]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class pkg_pnp_t                                                                                           
    {                                                                                                         
        struct u0_m_object_flags_by_name_t                                                                    
        {                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                     
            //                                                                                                
            _m05 uint1_t passive_callbacks;                                                                     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PassiveCallbacks
            _m06 uint1_t no_delete_ddi;                                                                         //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NoDeleteDDI
            _m07 uint1_t delete_called;                                                                         //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DeleteCalled
            _m08 uint1_t committed;                                                                             //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Committed
            _m09 uint1_t passive_dispose;                                                                       //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PassiveDispose
            _m10 uint1_t force_dispose_thread;                                                                  //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ForceDisposeThread
            _m11 uint1_t has_debug;                                                                             //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .HasDebug
            _m12 uint1_t early_disposed_ext;                                                                    //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .EarlyDisposedExt
            _m13 uint1_t trace_state;                                                                           //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .TraceState
                                                                                                              
            SDK_MAGIC_PROPERTIES( "FxPkgPnp.m_ObjectFlagsByName.$", 0x2, true, 0x94de7d053336aa04 );                                                                     
            SDK_FIXED_SIZE( u0_m_object_flags_by_name_t, 0x2 );                                                                     
        };                                                                                                    
                                                                                                              
        using pfn_io_connect_interrupt_ex_t =               sdk::function<int32_t(struct io::connect_interrupt_parameters_t*)>*;                                                
        using pfn_io_disconnect_interrupt_ex_t =            sdk::function<int32_t(struct io::disconnect_interrupt_parameters_t*)>*;                                                
        using m_io_report_interrupt_active_t =              sdk::function<void(struct io::report_interrupt_active_state_parameters_t*)>*;                                                
        using m_io_report_interrupt_inactive_t =            sdk::function<void(struct io::report_interrupt_active_state_parameters_t*)>*;                                                
        using m_device_d0_entry_post_interrupts_enabled_t = class fx::pnp_device_d0_entry_post_interrupts_enabled_t;                                                
        using m_device_d0_exit_pre_interrupts_disabled_t =  class fx::pnp_device_d0_exit_pre_interrupts_disabled_t;                                                
                                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
        //                                                                                                    
        _m000 uint16_t                                        m_type;                                           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Type
        _m001 uint16_t                                        m_object_size;                                    //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .m_ObjectSize
        _m002 int32_t                                         m_refcnt;                                         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .m_Refcnt
        _m003 struct fx::driver_globals_t*                    m_globals;                                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Globals
        _m004 uint16_t                                        m_object_flags;                                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlags
        _m014 u0_m_object_flags_by_name_t                     m_object_flags_by_name;                           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlagsByName
        _m015 uint16_t                                        m_object_state;                                   //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .m_ObjectState
        _m016 nt::list_entry_t                                m_child_list_head;                                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_ChildListHead
        _m017 class mx::lock_t                                m_spin_lock;                                      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_SpinLock
        _m018 class fx::object_t*                             m_parent_object;                                  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_ParentObject
        _m019 nt::list_entry_t                                m_child_entry;                                    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_ChildEntry
        _m020 struct nt::single_list_entry_t                  m_dispose_single_entry;                           //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_DisposeSingleEntry
        _m021 class fx::device_base_t*                        m_device_base;                                    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_DeviceBase
        _m022 class fx::device_t*                             m_device;                                         //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_Device
        _m023 class mx::lock_t                                m_np_lock;                                        //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_NPLock
        _m024 uint32_t                                        m_pnp_caps_address;                               //{ +0x007c    +0x0080    +0x0080    +0x0080    } | .m_PnpCapsAddress
        _m025 uint32_t                                        m_pnp_caps_ui_number;                             //{ +0x0080    +0x0084    +0x0084    +0x0084    } | .m_PnpCapsUINumber
        _m026 struct fx::power_caps_t                         m_power_caps;                                     //{ +0x0084    +0x0088    +0x0088    +0x0088    } | .m_PowerCaps
        _m027 uint8_t                                         m_failed;                                         //{ +0x0098    +0x009c    +0x009c    +0x009c    } | .m_Failed
        _m028 uint8_t                                         m_system_power_state;                             //{ +0x0099    +0x009d    +0x009d    +0x009d    } | .m_SystemPowerState
        _m029 uint8_t                                         m_device_power_state;                             //{ +0x009a    +0x009e    +0x009e    +0x009e    } | .m_DevicePowerState
        _m030 uint8_t                                         m_device_power_state_old;                         //{ +0x009b    +0x009f    +0x009f    +0x009f    } | .m_DevicePowerStateOld
        _m031 class fx::related_device_list_t*                m_usage_dependent_device_list;                    //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .m_UsageDependentDeviceList
        _m032 class fx::related_device_list_t*                m_removal_device_list;                            //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .m_RemovalDeviceList
        _m033 class fx::wait_lock_internal_t                  m_query_interface_lock;                           //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .m_QueryInterfaceLock
        _m034 struct nt::single_list_entry_t                  m_query_interface_head;                           //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .m_QueryInterfaceHead
        _m035 class fx::wait_lock_internal_t                  m_device_interface_lock;                          //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .m_DeviceInterfaceLock
        _m036 struct nt::single_list_entry_t                  m_device_interface_head;                          //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .m_DeviceInterfaceHead
        _m037 uint8_t                                         m_device_interfaces_can_be_enabled;               //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .m_DeviceInterfacesCanBeEnabled
        _m038 sdk::array<uint8_t, 4>                          m_special_support;                                //{ +0x0111    +0x0111    +0x0111    +0x0111    } | .m_SpecialSupport
        _m039 sdk::array<int32_t, 4>                          m_special_file_count;                             //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .m_SpecialFileCount
        _m040 uint32_t                                        m_device_stop_count;                              //{ +0x0128    +0x0130    +0x0130    +0x0130    } | .m_DeviceStopCount
        _m041 struct fx::pnp_machine_t                        m_pnp_machine;                                    //{ +0x0130    +0x0138    +0x0138    +0x0138    } | .m_PnpMachine
        _m042 struct fx::power_machine_t                      m_power_machine;                                  //{ +0x01d8    +0x01e0    +0x01e0    +0x01e0    } | .m_PowerMachine
        _m043 struct fx::power_policy_machine_t               m_power_policy_machine;                           //{ +0x02b0    +0x02b8    +0x02b8    +0x02b8    } | .m_PowerPolicyMachine
        _m044 class fx::self_managed_io_machine_t*            m_self_managed_io_machine;                        //{ +0x0380    +0x0388    +0x0388    +0x0388    } | .m_SelfManagedIoMachine
        _m045 struct wdf::shared_power_data_t                 m_shared_power;                                   //{ +0x0388    +0x0390    +0x0390    +0x0390    } | .m_SharedPower
        _m046 struct pci::d3cold_support_interface_t          m_d3_cold_interface;                              //{ +0x0398    +0x03a0    +0x03a0    +0x03a0    } | .m_D3ColdInterface
        _m047 class mx::event_t*                              m_device_remove_processed;                        //{ +0x03e0    +0x03f8    +0x03f8    +0x03f8    } | .m_DeviceRemoveProcessed
        _m048 int32_t                                         m_pending_child_count;                            //{ +0x03e8    +0x0400    +0x0400    +0x0400    } | .m_PendingChildCount
        _m049 sdk::array<uint8_t, 5>                          m_device_wake;                                    //{ +0x03ec    +0x0404    +0x0404    +0x0404    } | .m_DeviceWake
        _m050 uint8_t                                         m_system_wake;                                    //{ +0x03f1    +0x0409    +0x0409    +0x0409    } | .m_SystemWake
        _m051 uint8_t                                         m_failed_action;                                  //{ +0x03f2    +0x040a    +0x040a    +0x040a    } | .m_FailedAction
        _m052 uint8_t                                         m_set_device_remove_processed;                    //{ +0x03f3    +0x040b    +0x040b    +0x040b    } | .m_SetDeviceRemoveProcessed
        _m053 struct power::thread_interface_t                m_power_thread_interface;                         //{ +0x03f8    +0x0410    +0x0410    +0x0410    } | .m_PowerThreadInterface
        _m054 struct fx::enumeration_info_t*                  m_enum_info;                                      //{ +0x0420    +0x0438    +0x0438    +0x0438    } | .m_EnumInfo
        _m055 class fx::cm_res_list_t*                        m_resources;                                      //{ +0x0428    +0x0440    +0x0440    +0x0440    } | .m_Resources
        _m056 class fx::cm_res_list_t*                        m_resources_raw;                                  //{ +0x0430    +0x0448    +0x0448    +0x0448    } | .m_ResourcesRaw
        _m057 class fx::spin_lock_transactioned_list_t*       m_dma_enabler_list;                               //{ +0x0438    +0x0450    +0x0450    +0x0450    } | .m_DmaEnablerList
        _m058 struct pnp::bus_information_t                   m_bus_information;                                //{ +0x0440    +0x0458    +0x0458    +0x0458    } | .m_BusInformation
        _m059 uint8_t                                         m_bus_enum_retries;                               //{ +0x0458    +0x0470    +0x0470    +0x0470    } | .m_BusEnumRetries
        _m060 uint8_t                                         m_system_power_action;                            //{ +0x0459    +0x0471    +0x0471    +0x0471    } | .m_SystemPowerAction
        _m061 uint8_t                                         m_caps_queried;                                   //{ +0x045a    +0x0472    +0x0472    +0x0472    } | .m_CapsQueried
        _m062 uint8_t                                         m_internal_failure;                               //{ +0x045b    +0x0473    +0x0473    +0x0473    } | .m_InternalFailure
        _m063 uint8_t                                         m_has_power_thread;                               //{ +0x045c    +0x0474    +0x0474    +0x0474    } | .m_HasPowerThread
        _m064 uint8_t                                         m_release_hardware_after_descendants_on_failure;  //{ +0x045d    +0x0475    +0x0475    +0x0475    } | .m_ReleaseHardwareAfterDescendantsOnFailure
        _m065 pfn_io_connect_interrupt_ex_t                   m_io_connect_interrupt_ex;                        //{ +0x0460    +0x0478    +0x0478    +0x0478    } | .m_IoConnectInterruptEx
        _m066 pfn_io_disconnect_interrupt_ex_t                m_io_disconnect_interrupt_ex;                     //{ +0x0468    +0x0480    +0x0480    +0x0480    } | .m_IoDisconnectInterruptEx
        _m067 m_io_report_interrupt_active_t                  m_io_report_interrupt_active;                     //{ +0x0470    +0x0488    +0x0488    +0x0488    } | .m_IoReportInterruptActive
        _m068 m_io_report_interrupt_inactive_t                m_io_report_interrupt_inactive;                   //{ +0x0478    +0x0490    +0x0490    +0x0490    } | .m_IoReportInterruptInactive
        _m069 uint32_t                                        m_interrupt_object_count;                         //{ +0x0480    +0x04a0    +0x04a0    +0x04a0    } | .m_InterruptObjectCount
        _m070 nt::list_entry_t                                m_interrupt_list_head;                            //{ +0x0488    +0x04a8    +0x04a8    +0x04a8    } | .m_InterruptListHead
        _m071 uint32_t                                        m_wake_interrupt_count;                           //{ +0x0498    +0x04b8    +0x04b8    +0x04b8    } | .m_WakeInterruptCount
        _m072 uint32_t                                        m_wake_interrupt_pending_ack_count;               //{ +0x049c    +0x04bc    +0x04bc    +0x04bc    } | .m_WakeInterruptPendingAckCount
        _m073 uint8_t                                         m_system_woken_by_wake_interrupt;                 //{ +0x04a0    +0x04c0    +0x04c0    +0x04c0    } | .m_SystemWokenByWakeInterrupt
        _m074 uint8_t                                         m_wake_interrupts_keep_connected;                 //{ +0x04a1    +0x04c1    +0x04c1    +0x04c1    } | .m_WakeInterruptsKeepConnected
        _m075 uint8_t                                         m_achieved_start;                                 //{ +0x04a2    +0x04c2    +0x04c2    +0x04c2    } | .m_AchievedStart
        _m076 class fx::system_thread_t*                      m_power_thread;                                   //{ +0x04a8    +0x04d8    +0x04d8    +0x04d8    } | .m_PowerThread
        _m077 int32_t                                         m_power_thread_interface_reference_count;         //{ +0x04b0    +0x04e0    +0x04e0    +0x04e0    } | .m_PowerThreadInterfaceReferenceCount
        _m078 struct fx::cr_event_t*                          m_power_thread_event;                             //{ +0x04b8    +0x04e8    +0x04e8    +0x04e8    } | .m_PowerThreadEvent
        _m079 struct nt::irp_t*                               m_pending_pn_p_irp;                               //{ +0x04c0    +0x04f0    +0x04f0    +0x04f0    } | .m_PendingPnPIrp
        _m080 struct nt::irp_t*                               m_pending_system_power_irp;                       //{ +0x04c8    +0x04f8    +0x04f8    +0x04f8    } | .m_PendingSystemPowerIrp
        _m081 struct nt::irp_t*                               m_pending_device_power_irp;                       //{ +0x04d0    +0x0500    +0x0500    +0x0500    } | .m_PendingDevicePowerIrp
        _m082 struct fx::pnp_state_callback_t*                m_pnp_state_callbacks;                            //{ +0x04d8    +0x0508    +0x0508    +0x0508    } | .m_PnpStateCallbacks
        _m083 struct fx::power_state_callback_t*              m_power_state_callbacks;                          //{ +0x04e0    +0x0510    +0x0510    +0x0510    } | .m_PowerStateCallbacks
        _m084 struct fx::power_policy_state_callback_t*       m_power_policy_state_callbacks;                   //{ +0x04e8    +0x0518    +0x0518    +0x0518    } | .m_PowerPolicyStateCallbacks
        _m085 class fx::pnp_device_usage_notification_t       m_device_usage_notification;                      //{ +0x04f0    +0x0520    +0x0520    +0x0520    } | .m_DeviceUsageNotification
        _m086 class fx::pnp_device_usage_notification_ex_t    m_device_usage_notification_ex;                   //{ +0x04f8    +0x0528    +0x0528    +0x0528    } | .m_DeviceUsageNotificationEx
        _m087 class fx::pnp_device_relations_query_t          m_device_relations_query;                         //{ +0x0500    +0x0530    +0x0530    +0x0530    } | .m_DeviceRelationsQuery
        _m088 class fx::pnp_device_d0_entry_t                 m_device_d0_entry;                                //{ +0x0508    +0x0538    +0x0538    +0x0538    } | .m_DeviceD0Entry
        _m089 m_device_d0_entry_post_interrupts_enabled_t     m_device_d0_entry_post_interrupts_enabled;        //{ +0x0538    +0x0568    +0x0568    +0x0568    } | .m_DeviceD0EntryPostInterruptsEnabled
        _m090 m_device_d0_exit_pre_interrupts_disabled_t      m_device_d0_exit_pre_interrupts_disabled;         //{ +0x0540    +0x0570    +0x0570    +0x0570    } | .m_DeviceD0ExitPreInterruptsDisabled
        _m091 class fx::pnp_device_d0_exit_t                  m_device_d0_exit;                                 //{ +0x0548    +0x0578    +0x0578    +0x0578    } | .m_DeviceD0Exit
        _m092 class fx::pnp_device_prepare_hardware_t         m_device_prepare_hardware;                        //{ +0x0578    +0x05f8    +0x05f8    +0x05f8    } | .m_DevicePrepareHardware
        _m093 class fx::pnp_device_release_hardware_t         m_device_release_hardware;                        //{ +0x05b0    +0x0630    +0x0630    +0x0630    } | .m_DeviceReleaseHardware
        _m094 class fx::pnp_device_query_stop_t               m_device_query_stop;                              //{ +0x05e0    +0x0660    +0x0660    +0x0660    } | .m_DeviceQueryStop
        _m095 class fx::pnp_device_query_remove_t             m_device_query_remove;                            //{ +0x05e8    +0x0668    +0x0668    +0x0668    } | .m_DeviceQueryRemove
        _m096 class fx::pnp_device_surprise_removal_t         m_device_surprise_removal;                        //{ +0x05f0    +0x0670    +0x0670    +0x0670    } | .m_DeviceSurpriseRemoval
                                                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                     
        //                                                                                                    
        _m097 union fx::pnp_state_t                           m_pnp_state;                                      //{ +0x0078    +0x0078    +0x0078    } | .m_PnpState
        _m098 union fx::pnp_caps_t                            m_pnp_caps;                                       //{ +0x007c    +0x007c    +0x007c    } | .m_PnpCaps
        _m099 class fx::companion_target_t*                   m_companion_target;                               //{ +0x03e8    +0x03e8    +0x03e8    } | .m_CompanionTarget
        _m100 int32_t                                         m_companion_target_status;                        //{ +0x03f0    +0x03f0    +0x03f0    } | .m_CompanionTargetStatus
        _m101 class fx::system_work_item_t*                   m_set_device_failed_attempt_restart_work_item;    //{ +0x0498    +0x0498    +0x0498    } | .m_SetDeviceFailedAttemptRestartWorkItem
        _m102 struct wdf::sleep_study_interface_t*            m_sleep_study;                                    //{ +0x04c8    +0x04c8    +0x04c8    } | .m_SleepStudy
        _m103 volatile int32_t                                m_sleep_study_power_ref_io_count;                 //{ +0x04d0    +0x04d0    +0x04d0    } | .m_SleepStudyPowerRefIoCount
        _m104 uint8_t                                         m_sleep_study_track_references;                   //{ +0x04d4    +0x04d4    +0x04d4    } | .m_SleepStudyTrackReferences
        _m105 class fx::pnp_device_d0_entry_post_hw_enabled_t m_device_d0_entry_post_hardware_enabled;          //{ +0x05a8    +0x05a8    +0x05a8    } | .m_DeviceD0EntryPostHardwareEnabled
        _m106 class fx::pnp_device_d0_exit_pre_hw_disabled_t  m_device_d0_exit_pre_hardware_disabled;           //{ +0x05d0    +0x05d0    +0x05d0    } | .m_DeviceD0ExitPreHardwareDisabled
                                                                                                              
        // Windows 10 v1607                                                                                   
        //                                                                                                    
        _m107 union fx::pnp_state_and_caps_t                  m_pnp_state_and_caps;                             //{ +0x0078    } | .m_PnpStateAndCaps
                                                                                                              
        SDK_MAGIC_PROPERTIES( "FxPkgPnp.$", 0x698, true, 0xe9bee30c36685034 );                                                
        SDK_DYNAMIC_SIZE( pkg_pnp_t );                                                                        
    };                                                                                                        
};
#include "magic/pkg_pnp_t.end.hpp"
SDK_VERIFY( struct fx::pkg_pnp_t::u0_m_object_flags_by_name_t, 0x2 );
