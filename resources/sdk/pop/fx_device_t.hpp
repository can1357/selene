#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/kevent_t.hpp"
#include "../nt/ktimer_t.hpp"
#include "fx_accounting_t.hpp"
#include "fx_work_order_t.hpp"
#include "../power/state_t.hpp"
#include "fx_device_status_t.hpp"
#include "../io/remove_lock_t.hpp"
#include "fx_driver_callbacks_t.hpp"
#include "../nt/work_queue_item_t.hpp"
#include "fx_drips_watchdog_context_t.hpp"
#include "fx_work_order_watchdog_info_t.hpp"
#include "fx_device_directed_transition_state_t.hpp"

namespace io  { struct status_block_t;          }
namespace nt  { struct device_node_t;           }
namespace nt  { struct device_object_t;         }
namespace nt  { struct driver_object_t;         }
namespace nt  { struct irp_t;                   }
namespace nt  { struct pephandle_t;             }
namespace pep { struct crashdump_information_t; }

#include "magic/fx_device_t.start.hpp"
namespace pop
{
    struct irp_data_t;
    struct fx_plugin_t;
    struct fx_component_t;
    struct fx_log_entry_t;
    struct device_power_profile_t;

    // [struct _POP_FX_DEVICE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fx_device_t                                                                              
    {                                                                                               
        using next_irp_caller_completion_t =    sdk::array<sdk::function<void(struct nt::device_object_t*, uint8_t, union power::state_t, void*, struct io::status_block_t*)>*, 2>;                                           
        using power_on_dump_device_callback_t = sdk::function<uint8_t(struct pep::crashdump_information_t*)>*;                                           
        using directed_transition_state_t =     struct pop::fx_device_directed_transition_state_t;                                           
                                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                                          
        _m000 nt::list_entry_t                           link;                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m001 struct nt::irp_t*                          irp;                                         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Irp
        _m002 struct pop::irp_data_t*                    irp_data;                                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IrpData
        _m003 volatile union pop::fx_device_status_t     status;                                      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Status
        _m004 volatile int32_t                           power_req_call;                              //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .PowerReqCall
        _m005 volatile int32_t                           power_not_req_call;                          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PowerNotReqCall
        _m006 struct nt::device_node_t*                  dev_node;                                    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DevNode
        _m007 struct nt::pephandle_t*                    dpm_context;                                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .DpmContext
        _m008 struct pop::fx_plugin_t*                   plugin;                                      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Plugin
        _m009 struct nt::pephandle_t*                    plugin_handle;                               //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .PluginHandle
        _m010 struct pop::fx_plugin_t*                   acpi_plugin;                                 //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .AcpiPlugin
        _m011 struct nt::pephandle_t*                    acpi_plugin_handle;                          //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .AcpiPluginHandle
        _m012 struct nt::device_object_t*                device_object;                               //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .DeviceObject
        _m013 struct nt::device_object_t*                target_device;                               //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .TargetDevice
        _m014 struct pop::fx_driver_callbacks_t          callbacks;                                   //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .Callbacks
        _m015 void*                                      driver_context;                              //{ +0x00a8    +0x00c0    +0x00c0    +0x00c0    } | .DriverContext
        _m016 nt::list_entry_t                           acpi_link;                                   //{ +0x00b0    +0x00c8    +0x00c8    +0x00c8    } | .AcpiLink
        _m017 nt::unicode_view                           device_id;                                   //{ +0x00c0    +0x00d8    +0x00d8    +0x00d8    } | .DeviceId
        _m018 struct io::remove_lock_t                   remove_lock;                                 //{ +0x00d0    +0x00e8    +0x00f0    +0x00e8    } | .RemoveLock
        _m019 struct io::remove_lock_t                   acpi_remove_lock;                            //{ +0x00f0    +0x0108    +0x0110    +0x0108    } | .AcpiRemoveLock
        _m020 struct pop::fx_work_order_t                work_order;                                  //{ +0x0110    +0x0128    +0x0130    +0x0128    } | .WorkOrder
        _m021 uint64_t                                   idle_lock;                                   //{ +0x0148    +0x0160    +0x0168    +0x0160    } | .IdleLock
        _m022 struct nt::ktimer_t                        idle_timer;                                  //{ +0x0150    +0x0168    +0x0170    +0x0168    } | .IdleTimer
        _m023 struct nt::kdpc_t                          idle_dpc;                                    //{ +0x0190    +0x01a8    +0x01b0    +0x01a8    } | .IdleDpc
        _m024 uint64_t                                   idle_timeout;                                //{ +0x01d0    +0x01e8    +0x01f0    +0x01e8    } | .IdleTimeout
        _m025 uint64_t                                   idle_stamp;                                  //{ +0x01d8    +0x01f0    +0x01f8    +0x01f0    } | .IdleStamp
        _m026 sdk::array<struct nt::device_object_t*, 2> next_irp_device_object;                      //{ +0x01e0    +0x01f8    +0x0200    +0x01f8    } | .NextIrpDeviceObject
        _m027 sdk::array<union power::state_t, 2>        next_irp_power_state;                        //{ +0x01f0    +0x0208    +0x0210    +0x0208    } | .NextIrpPowerState
        _m028 next_irp_caller_completion_t               next_irp_caller_completion;                  //{ +0x01f8    +0x0210    +0x0218    +0x0210    } | .NextIrpCallerCompletion
        _m029 sdk::array<void*, 2>                       next_irp_caller_context;                     //{ +0x0208    +0x0220    +0x0228    +0x0220    } | .NextIrpCallerContext
        _m030 struct nt::kevent_t                        irp_complete_event;                          //{ +0x0218    +0x0230    +0x0238    +0x0230    } | .IrpCompleteEvent
        _m031 power_on_dump_device_callback_t            power_on_dump_device_callback;               //{ +0x0230    +0x0248    +0x0250    +0x0248    } | .PowerOnDumpDeviceCallback
        _m032 struct pop::fx_accounting_t                accounting;                                  //{ +0x0238    +0x0250    +0x0258    +0x0250    } | .Accounting
        _m033 volatile uint32_t                          flags;                                       //{ +0x0268    +0x0330    +0x0338    +0x0330    } | .Flags
        _m034 uint32_t                                   component_count;                             //{ +0x026c    +0x0334    +0x033c    +0x0334    } | .ComponentCount
        _m035 struct pop::fx_component_t**               components;                                  //{ +0x0270    +0x0338    +0x0340    +0x0338    } | .Components
                                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                                          
        _m036 uint32_t                                   log_entries;                                 //{ +0x0340    +0x0348    +0x0340    } | .LogEntries
        _m037 struct pop::fx_log_entry_t*                log;                                         //{ +0x0348    +0x0350    +0x0348    } | .Log
        _m038 volatile int32_t                           log_index;                                   //{ +0x0350    +0x0358    +0x0350    } | .LogIndex
        _m039 struct nt::driver_object_t*                drips_watchdog_driver_object;                //{ +0x0358    +0x0360    +0x0358    } | .DripsWatchdogDriverObject
        _m040 struct pop::fx_drips_watchdog_context_t    drips_watchdog_context;                      //{ +0x0360    +0x0368    +0x0360    } | .DripsWatchdogContext
        _m041 uint32_t                                   directed_timeout;                            //{ +0x0388    +0x0390    +0x0388    } | .DirectedTimeout
        _m042 struct pop::fx_work_order_t                directed_work_order;                         //{ +0x0390    +0x0398    +0x0390    } | .DirectedWorkOrder
        _m043 struct pop::fx_work_order_watchdog_info_t  directed_work_watchdog_info;                 //{ +0x03c8    +0x03d0    +0x03c8    } | .DirectedWorkWatchdogInfo
        _m044 uint64_t                                   directed_lock;                               //{ +0x0478    +0x0480    +0x0478    } | .DirectedLock
        _m045 volatile int32_t                           directed_transition_call_count;              //{ +0x0480    +0x0488    +0x0480    } | .DirectedTransitionCallCount
        _m046 directed_transition_state_t                directed_transition_state;                   //{ +0x0488    +0x0490    +0x0488    } | .DirectedTransitionState
        _m047 struct pop::device_power_profile_t*        power_profile;                               //{ +0x0498    +0x04a0    +0x0498    } | .PowerProfile
        _m048 nt::unicode_view                           friendly_name;                               //{ +0x04a0    +0x04a8    +0x04a0    } | .FriendlyName
                                                                                                    
        // Windows 11                                                                               
        //                                                                                          
        _m049 volatile int32_t                           common_reference_flags;                      //{ +0x00e8    } | .CommonReferenceFlags
        _m050 struct nt::work_queue_item_t               report_device_powered_on_passive_work_item;  //{ +0x04b8    } | .ReportDevicePoweredOnPassiveWorkItem
        _m051 uint64_t                                   relations_lock;                              //{ +0x04d8    } | .RelationsLock
        _m052 uint32_t                                   idle_provider_count;                         //{ +0x04e0    } | .IdleProviderCount
        _m053 struct nt::irp_t*                          pending_device_power_irp;                    //{ +0x04e8    } | .PendingDevicePowerIrp
        _m054 nt::list_entry_t                           external_dependencies;                       //{ +0x04f0    } | .ExternalDependencies
                                                                                                    
        SDK_MAGIC_PROPERTIES( "_POP_FX_DEVICE.$", 0x4b0, true, 0xc158be818c2cb468 );                                           
        SDK_DYNAMIC_SIZE( fx_device_t );                                                            
    };                                                                                              
};
#include "magic/fx_device_t.end.hpp"
