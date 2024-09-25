#pragma once
#include <sdkgen/support_library.hpp>
#include "fpb_fdo_t.hpp"
#include "hpx_info_t.hpp"
#include "../nt/kevent_t.hpp"
#include "device_usage_t.hpp"
#include "object_state_t.hpp"
#include "../rtl/bitmap_t.hpp"
#include "dma_properties_t.hpp"
#include "bus_fpga_control_t.hpp"
#include "bus_power_states_t.hpp"
#include "../io/remove_lock_t.hpp"
#include "hardware_interface_t.hpp"
#include "express_wake_states_t.hpp"
#include "../nt/device_wake_depth_t.hpp"
#include "../nt/device_power_state_t.hpp"
#include "../nt/system_power_state_t.hpp"
#include "conventional_wake_states_t.hpp"
#include "d3cold_support_interface_t.hpp"
#include "bus_async_dispatcher_context_t.hpp"
#include "dsm_ignore_boot_config_state_t.hpp"

namespace arbiter { struct instance_t;      }
namespace io      { struct workitem_t;      }
namespace nt      { struct device_object_t; }
namespace nt      { struct file_object_t;   }
namespace nt      { struct irp_t;           }
namespace nt      { struct pohandle_t;      }

#include "magic/bus_t.start.hpp"
namespace pci
{
    struct bus_t;
    struct root_t;
    struct bridge_t;
    struct device_t;
    struct recorder_log_t;
    struct bridge_requirement_hint_t;
    struct d3cold_aux_power_and_timing_aggregation_info_t;

    // [struct _PCI_BUS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bus_t                                                                                          
    {                                                                                                     
        struct u0_hpp_t                                                                                   
        {                                                                                                 
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                               
            //                                                                                            
            _m79 uint8_t cache_line_size;                                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CacheLineSize
            _m80 uint8_t latency_timer;                                                                     //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .LatencyTimer
            _m81 uint8_t enable_serr;                                                                       //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .EnableSERR
            _m82 uint8_t enable_perr;                                                                       //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .EnablePERR
                                                                                                          
            SDK_MAGIC_PROPERTIES( "_PCI_BUS._HPP.$", 0x4, true, 0xcadf4dabd94cfeb9 );                                                               
            SDK_FIXED_SIZE( u0_hpp_t, 0x4 );                                                               
        };                                                                                                
                                                                                                          
        using d3_cold_aux_power_and_timing_info_t = struct pci::d3cold_aux_power_and_timing_aggregation_info_t*;                                               
                                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                                                                
        _m000 uint32_t                                     signature;                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m001 enum pci::object_state_t                     device_state;                                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DeviceState
        _m002 enum pci::object_state_t                     tentative_next_state;                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TentativeNextState
        _m003 struct pci::device_usage_t                   device_usage;                                    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .DeviceUsage
        _m004 struct io::remove_lock_t                     remove_lock;                                     //{ +0x0018    +0x0020    +0x0020    +0x0020    } | .RemoveLock
        _m005 struct pci::bus_t*                           parent_bus;                                      //{ +0x0038    +0x0068    +0x0068    +0x0068    } | .ParentBus
        _m006 struct pci::bus_t*                           sibling_bus;                                     //{ +0x0040    +0x0070    +0x0070    +0x0070    } | .SiblingBus
        _m007 struct pci::bus_t*                           child_buses;                                     //{ +0x0048    +0x0078    +0x0078    +0x0078    } | .ChildBuses
        _m008 struct pci::bus_t*                           child_bus_tail;                                  //{ +0x0050    +0x0080    +0x0080    +0x0080    } | .ChildBusTail
        _m009 struct pci::root_t*                          root;                                            //{ +0x0058    +0x0088    +0x0088    +0x0088    } | .Root
        _m010 struct pci::bridge_t*                        pci_bridge;                                      //{ +0x0060    +0x0090    +0x0090    +0x0090    } | .PciBridge
        _m011 struct pci::device_t*                        child_devices;                                   //{ +0x0068    +0x0098    +0x0098    +0x0098    } | .ChildDevices
        _m012 struct pci::device_t*                        child_device_tail;                               //{ +0x0070    +0x00a0    +0x00a0    +0x00a0    } | .ChildDeviceTail
        _m013 struct nt::kevent_t                          child_device_lock;                               //{ +0x0078    +0x00a8    +0x00a8    +0x00a8    } | .ChildDeviceLock
        _m014 struct nt::kevent_t                          express_link_quiescent_event;                    //{ +0x0090    +0x00c0    +0x00c0    +0x00c0    } | .ExpressLinkQuiescentEvent
        _m015 struct rtl::bitmap_t                         evaluated_rid_map;                               //{ +0x00a8    +0x00d8    +0x00d8    +0x00d8    } | .EvaluatedRidMap
        _m016 sdk::array<uint32_t, 8>                      evaluated_rid_map_buffer;                        //{ +0x00b8    +0x00e8    +0x00e8    +0x00e8    } | .EvaluatedRidMapBuffer
        _m017 struct nt::device_object_t*                  device_object;                                   //{ +0x00d8    +0x0108    +0x0108    +0x0108    } | .DeviceObject
        _m018 struct nt::device_object_t*                  attached_device_object;                          //{ +0x00e0    +0x0110    +0x0110    +0x0110    } | .AttachedDeviceObject
        _m019 struct nt::device_object_t*                  physical_device_object;                          //{ +0x00e8    +0x0118    +0x0118    +0x0118    } | .PhysicalDeviceObject
        _m020 enum pci::hardware_interface_t               secondary_interface;                             //{ +0x00f0    +0x0120    +0x0120    +0x0120    } | .SecondaryInterface
        _m021 uint32_t                                     secondary_bus_number;                            //{ +0x00f4    +0x0124    +0x0124    +0x0124    } | .SecondaryBusNumber
        _m022 uint32_t                                     subordinate_bus_number;                          //{ +0x00f8    +0x0128    +0x0128    +0x0128    } | .SubordinateBusNumber
        _m023 struct rtl::bitmap_t                         bus_number_map;                                  //{ +0x0100    +0x0130    +0x0130    +0x0130    } | .BusNumberMap
        _m024 sdk::array<uint32_t, 8>                      bus_number_map_buffer;                           //{ +0x0110    +0x0140    +0x0140    +0x0140    } | .BusNumberMapBuffer
        _m025 uint8_t                                      captured_bus_number_count;                       //{ +0x0130    +0x0160    +0x0160    +0x0160    } | .CapturedBusNumberCount
        _m026 enum nt::device_power_state_t                power_state;                                     //{ +0x0134    +0x0164    +0x0164    +0x0164    } | .PowerState
        _m027 sdk::array<enum nt::device_power_state_t, 7> system_state_mapping;                            //{ +0x0138    +0x0168    +0x0168    +0x0168    } | .SystemStateMapping
        _m028 enum nt::system_power_state_t                system_wake;                                     //{ +0x0154    +0x0184    +0x0184    +0x0184    } | .SystemWake
        _m029 enum nt::device_power_state_t                device_wake;                                     //{ +0x0158    +0x0188    +0x0188    +0x0188    } | .DeviceWake
        _m030 enum nt::device_wake_depth_t                 idle_d_state;                                    //{ +0x015c    +0x018c    +0x018c    +0x018c    } | .IdleDState
        _m031 int32_t                                      devices_powered_down;                            //{ +0x0160    +0x0190    +0x0190    +0x0190    } | .DevicesPoweredDown
        _m032 struct nt::irp_t*                            s_irp;                                           //{ +0x0168    +0x0198    +0x0198    +0x0198    } | .SIrp
        _m033 struct nt::irp_t*                            wake_irp;                                        //{ +0x0170    +0x01a0    +0x01a0    +0x01a0    } | .WakeIrp
        _m034 uint8_t                                      woke_system;                                     //{ +0x0178    +0x01a8    +0x01a8    +0x01a8    } | .WokeSystem
        _m035 nt::list_entry_t                             waiting_for_wait_state_machine;                  //{ +0x0180    +0x01b0    +0x01b0    +0x01b0    } | .WaitingForWaitStateMachine
        _m036 nt::list_entry_t                             waiting_for_d0_send;                             //{ +0x0190    +0x01c0    +0x01c0    +0x01c0    } | .WaitingForD0Send
        _m037 nt::list_entry_t                             waiting_for_wait_wake_send;                      //{ +0x01a0    +0x01d0    +0x01d0    +0x01d0    } | .WaitingForWaitWakeSend
        _m038 nt::list_entry_t                             waiting_for_wait_wake_complete;                  //{ +0x01b0    +0x01e0    +0x01e0    +0x01e0    } | .WaitingForWaitWakeComplete
        _m039 nt::list_entry_t                             waiting_for_wait_wake_cancel;                    //{ +0x01c0    +0x01f0    +0x01f0    +0x01f0    } | .WaitingForWaitWakeCancel
        _m040 nt::list_entry_t                             waiting_for_child_d0_retirement;                 //{ +0x01d0    +0x0200    +0x0200    +0x0200    } | .WaitingForChildD0Retirement
        _m041 uint64_t                                     bus_power_lock;                                  //{ +0x01e0    +0x0230    +0x0230    +0x0230    } | .BusPowerLock
        _m042 uint64_t                                     bus_wake_lock;                                   //{ +0x01e8    +0x0238    +0x0238    +0x0238    } | .BusWakeLock
        _m043 int64_t                                      time_of_power_up;                                //{ +0x01f0    +0x0250    +0x0250    +0x0250    } | .TimeOfPowerUp
        _m044 struct nt::kevent_t                          bus_power_event;                                 //{ +0x01f8    +0x0258    +0x0258    +0x0258    } | .BusPowerEvent
        _m045 enum pci::bus_power_states_t                 bus_power_state;                                 //{ +0x0210    +0x0270    +0x0270    +0x0270    } | .BusPowerState
        _m046 uint16_t                                     child_wake_count;                                //{ +0x0214    +0x0274    +0x0274    +0x0274    } | .ChildWakeCount
        _m047 uint32_t                                     bus_wake_state;                                  //{ +0x0218    +0x0278    +0x0278    +0x0278    } | .BusWakeState
        _m048 enum pci::conventional_wake_states_t         bus_wake_as_conventional;                        //{ +0x0218    +0x0278    +0x0278    +0x0278    } | .BusWakeAsConventional
        _m049 enum pci::express_wake_states_t              bus_wake_as_express;                             //{ +0x0218    +0x0278    +0x0278    +0x0278    } | .BusWakeAsExpress
        _m050 int32_t                                      wake_irp_status;                                 //{ +0x021c    +0x027c    +0x027c    +0x027c    } | .WakeIrpStatus
        _m051 sdk::array<int32_t, 10>                      bus_power_reference_reason;                      //{ +0x0220    +0x0280    +0x0280    +0x0280    } | .BusPowerReferenceReason
        _m052 struct arbiter::instance_t*                  memory_arbiter;                                  //{ +0x0248    +0x02a8    +0x02a8    +0x02a8    } | .MemoryArbiter
        _m053 struct arbiter::instance_t*                  io_arbiter;                                      //{ +0x0250    +0x02b0    +0x02b0    +0x02b0    } | .IoArbiter
        _m054 struct arbiter::instance_t*                  bus_number_arbiter;                              //{ +0x0258    +0x02b8    +0x02b8    +0x02b8    } | .BusNumberArbiter
        _m055 uint1_t                                      acquired_hpp;                                    //{ +0x0260@0  +0x02d8@0  +0x02d8@0  +0x02d8@0  } | .AcquiredHPP
        _m056 uint1_t                                      acquired_hpx;                                    //{ +0x0260@1  +0x02d8@1  +0x02d8@1  +0x02d8@1  } | .AcquiredHPX
        _m057 uint1_t                                      arbiters_initialized;                            //{ +0x0260@2  +0x02d8@2  +0x02d8@2  +0x02d8@2  } | .ArbitersInitialized
        _m058 uint1_t                                      io_arbiter_video_hack_applied;                   //{ +0x0260@3  +0x02d8@3  +0x02d8@3  +0x02d8@3  } | .IoArbiterVideoHackApplied
        _m059 uint1_t                                      extended_config_available;                       //{ +0x0260@4  +0x02d8@4  +0x02d8@4  +0x02d8@4  } | .ExtendedConfigAvailable
        _m060 uint1_t                                      started_already;                                 //{ +0x0260@6  +0x02d8@6  +0x02d8@6  +0x02d8@6  } | .StartedAlready
        _m061 uint1_t                                      need_to_scan_after_hibernate;                    //{ +0x0260@7  +0x02d8@7  +0x02d8@7  +0x02d8@7  } | .NeedToScanAfterHibernate
        _m062 uint1_t                                      bus_power_available;                             //{ +0x0260@8  +0x02d8@8  +0x02d8@8  +0x02d8@8  } | .BusPowerAvailable
        _m063 uint1_t                                      first_bus_scan_done;                             //{ +0x0260@9  +0x02d8@9  +0x02d8@9  +0x02d8@9  } | .FirstBusScanDone
        _m064 uint1_t                                      retiring_child_d0_irps;                          //{ +0x0260@10 +0x02d8@10 +0x02d8@10 +0x02d8@10 } | .RetiringChildD0Irps
        _m065 uint1_t                                      expecting_s0_irp;                                //{ +0x0260@11 +0x02d8@11 +0x02d8@11 +0x02d8@11 } | .ExpectingS0Irp
        _m066 uint1_t                                      pep_powered_off;                                 //{ +0x0260@12 +0x02d8@12 +0x02d8@12 +0x02d8@12 } | .PepPoweredOff
        _m067 uint1_t                                      wake_state_power_on;                             //{ +0x0260@13 +0x02d8@13 +0x02d8@13 +0x02d8@13 } | .WakeStatePowerOn
        _m068 uint1_t                                      armed_for_wake;                                  //{ +0x0260@14 +0x02d8@14 +0x02d8@14 +0x02d8@14 } | .ArmedForWake
        _m069 uint1_t                                      removing;                                        //{ +0x0260@15 +0x02d8@15 +0x02d8@15 +0x02d8@15 } | .Removing
        _m070 uint1_t                                      pme_event_deferred;                              //{ +0x0260@16 +0x02d8@16 +0x02d8@16 +0x02d8@16 } | .PmeEventDeferred
        _m071 uint1_t                                      wake_power_referenced;                           //{ +0x0260@17 +0x02d8@17 +0x02d8@17 +0x02d8@17 } | .WakePowerReferenced
        _m072 uint1_t                                      pme_power_referenced;                            //{ +0x0260@18 +0x02d8@18 +0x02d8@18 +0x02d8@18 } | .PmePowerReferenced
        _m073 uint1_t                                      once_contained_no_devices;                       //{ +0x0260@19 +0x02d8@19 +0x02d8@19 +0x02d8@19 } | .OnceContainedNoDevices
        _m074 uint1_t                                      requirements_changed;                            //{ +0x0260@20 +0x02d8@20 +0x02d8@20 +0x02d8@20 } | .RequirementsChanged
        _m075 uint1_t                                      started_without_inf;                             //{ +0x0260@21 +0x02d8@21 +0x02d8@21 +0x02d8@21 } | .StartedWithoutInf
        _m076 uint1_t                                      busmaster_disabled_on_boot;                      //{ +0x0260@22 +0x02d8@22 +0x02d8@22 +0x02d8@22 } | .BusmasterDisabledOnBoot
        _m077 uint1_t                                      settle_time_required;                            //{ +0x0260@23 +0x02d8@23 +0x02d8@23 +0x02d8@23 } | .SettleTimeRequired
        _m078 uint32_t                                     hack_flags;                                      //{ +0x0264    +0x02e0    +0x02e0    +0x02e0    } | .HackFlags
        _m083 u0_hpp_t                                     hpp;                                             //{ +0x0268    +0x02ec    +0x02ec    +0x02ec    } | ._HPP
        _m084 struct pci::hpx_info_t                       hpx;                                             //{ +0x026c    +0x02f0    +0x02f0    +0x02f0    } | ._HPX
        _m085 volatile int32_t                             pci_routing_interface_count;                     //{ +0x02b4    +0x0338    +0x0338    +0x0338    } | .PciRoutingInterfaceCount
        _m086 volatile int32_t                             pci_legacy_device_interface_count;               //{ +0x02b8    +0x033c    +0x033c    +0x033c    } | .PciLegacyDeviceInterfaceCount
        _m087 volatile int32_t                             pci_pme_interface_count;                         //{ +0x02bc    +0x0340    +0x0340    +0x0340    } | .PciPmeInterfaceCount
        _m088 volatile int32_t                             pci_location_interface_count;                    //{ +0x02c0    +0x0344    +0x0344    +0x0344    } | .PciLocationInterfaceCount
        _m089 struct nt::pohandle_t*                       pep_handle;                                      //{ +0x02c8    +0x0350    +0x0350    +0x0350    } | .PepHandle
        _m090 struct pci::recorder_log_t*                  black_box_handle;                                //{ +0x02d0    +0x0360    +0x0360    +0x0360    } | .BlackBoxHandle
        _m091 struct pci::d3cold_support_interface_t       d3cold_intrf;                                    //{ +0x02d8    +0x0370    +0x0370    +0x0370    } | .D3coldIntrf
                                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                               
        //                                                                                                
        _m092 uint1_t                                      ignore_boot_config;                              //{ +0x0260@5  +0x02d8@5  +0x02d8@5  } | .IgnoreBootConfig
                                                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
        //                                                                                                
        _m093 struct io::workitem_t*                       async_work_item;                                 //{ +0x0040    +0x0040    +0x0040    } | .AsyncWorkItem
        _m094 struct pci::bus_async_dispatcher_context_t   async_context;                                   //{ +0x0048    +0x0048    +0x0048    } | .AsyncContext
        _m095 nt::list_entry_t                             waiting_for_ww_send_cancel_bus_power_available;  //{ +0x0210    +0x0210    +0x0210    } | .WaitingForWWSendCancelBusPowerAvailable
        _m096 nt::list_entry_t                             waiting_for_drips_watchdog_callback;             //{ +0x0220    +0x0220    +0x0220    } | .WaitingForDripsWatchdogCallback
        _m097 uint64_t                                     bus_d0_retire_lock;                              //{ +0x0240    +0x0240    +0x0240    } | .BusD0RetireLock
        _m098 uint64_t                                     bus_drips_watchdog_callback_lock;                //{ +0x0248    +0x0248    +0x0248    } | .BusDripsWatchdogCallbackLock
        _m099 uint32_t                                     memory_below4gb_start;                           //{ +0x02c0    +0x02c0    +0x02c0    } | .MemoryBelow4GBStart
        _m100 uint32_t                                     memory_below4gb_length;                          //{ +0x02c4    +0x02c4    +0x02c4    } | .MemoryBelow4GBLength
        _m101 uint64_t                                     memory_above4gb_start;                           //{ +0x02c8    +0x02c8    +0x02c8    } | .MemoryAbove4GBStart
        _m102 uint64_t                                     memory_above4gb_length;                          //{ +0x02d0    +0x02d0    +0x02d0    } | .MemoryAbove4GBLength
        _m103 uint1_t                                      pre_scanned;                                     //{ +0x02d8@24 +0x02d8@24 +0x02d8@24 } | .PreScanned
        _m104 uint1_t                                      root_port_support_hotplug_in_d3;                 //{ +0x02d8@25 +0x02d8@25 +0x02d8@25 } | .RootPortSupportHotplugInD3
        _m105 uint1_t                                      cancel_ww_wait_for_parent_power_on;              //{ +0x02d8@26 +0x02d8@26 +0x02d8@26 } | .CancelWWWaitForParentPowerOn
        _m106 uint1_t                                      send_ww_wait_for_parent_power_on;                //{ +0x02d8@27 +0x02d8@27 +0x02d8@27 } | .SendWWWaitForParentPowerOn
        _m107 uint1_t                                      send_cancel_ww_queued;                           //{ +0x02d8@28 +0x02d8@28 +0x02d8@28 } | .SendCancelWWQueued
        _m108 uint1_t                                      has_thunderbolt_capability;                      //{ +0x02d8@29 +0x02d8@29 +0x02d8@29 } | .HasThunderboltCapability
        _m109 uint1_t                                      config_space_locked_down;                        //{ +0x02d8@30 +0x02d8@30 +0x02d8@30 } | .ConfigSpaceLockedDown
        _m110 uint1_t                                      fundamental_device_reset_triggered_on_d3_to_d0;  //{ +0x02d8@31 +0x02d8@31 +0x02d8@31 } | .FundamentalDeviceResetTriggeredOnD3ToD0
        _m111 uint1_t                                      drips_watchdog_work_item_queued;                 //{ +0x02d8@32 +0x02d8@32 +0x02d8@32 } | .DripsWatchdogWorkItemQueued
        _m112 uint1_t                                      firmware_reported_bus_d3_cold_capable;           //{ +0x02d8@33 +0x02d8@33 +0x02d8@33 } | .FirmwareReportedBusD3ColdCapable
        _m113 uint1_t                                      force_enabled_d3_cold_on_sx;                     //{ +0x02d8@34 +0x02d8@34 +0x02d8@34 } | .ForceEnabledD3ColdOnSx
        _m114 uint1_t                                      under_fpb_hierarchy;                             //{ +0x02d8@35 +0x02d8@35 +0x02d8@35 } | .UnderFpbHierarchy
        _m115 uint1_t                                      po_fx_crashdump_device_registered;               //{ +0x02d8@36 +0x02d8@36 +0x02d8@36 } | .PoFxCrashdumpDeviceRegistered
        _m116 uint1_t                                      fpb_requirements_not_met;                        //{ +0x02d8@37 +0x02d8@37 +0x02d8@37 } | .FpbRequirementsNotMet
        _m117 uint1_t                                      express_pc_event_triggered;                      //{ +0x02d8@38 +0x02d8@38 +0x02d8@38 } | .ExpressPcEventTriggered
        _m118 uint1_t                                      dpc_bus_teardown_complete;                       //{ +0x02d8@39 +0x02d8@39 +0x02d8@39 } | .DpcBusTeardownComplete
        _m119 uint64_t                                     flags_as_ulonglong;                              //{ +0x02d8    +0x02d8    +0x02d8    } | .FlagsAsULONGLONG
        _m120 uint32_t                                     hierarchy_depth;                                 //{ +0x02e4    +0x02e4    +0x02e4    } | .HierarchyDepth
        _m121 union pci::dma_properties_t                  dma_properties;                                  //{ +0x02e8    +0x02e8    +0x02e8    } | .DmaProperties
        _m122 volatile int32_t                             pci_d3_fpga_control_interface_count;             //{ +0x0348    +0x0348    +0x0348    } | .PciD3FpgaControlInterfaceCount
        _m123 volatile int32_t                             pci_fpb_resource_update_interface_count;         //{ +0x034c    +0x034c    +0x034c    } | .PciFpbResourceUpdateInterfaceCount
        _m124 uint32_t                                     dpc_containment_ref_count;                       //{ +0x0358    +0x0358    +0x0358    } | .DpcContainmentRefCount
        _m125 struct pci::recorder_log_t*                  power_and_wake_handle;                           //{ +0x0368    +0x0368    +0x0368    } | .PowerAndWakeHandle
        _m126 struct pci::bridge_requirement_hint_t*       bridge_resource_hints;                           //{ +0x03b8    +0x03b8    +0x03b8    } | .BridgeResourceHints
        _m127 d3_cold_aux_power_and_timing_info_t          d3_cold_aux_power_and_timing_info;               //{ +0x03c0    +0x03c0    +0x03c0    } | .D3ColdAuxPowerAndTimingInfo
        _m128 struct pci::bus_fpga_control_t               fpga_control;                                    //{ +0x03c8    +0x03c8    +0x03c8    } | .FpgaControl
        _m129 struct pci::fpb_fdo_t                        fpb_fdo_node;                                    //{ +0x03f0    +0x03f0    +0x03f0    } | .FpbFdoNode
                                                                                                          
        // Windows 10 v1607                                                                               
        //                                                                                                
        _m130 uint32_t                                     flags_as_ulong;                                  //{ +0x0260    } | .FlagsAsULONG
        _m131 nt::list_entry_t                             children_bus_num_hints;                          //{ +0x0320    } | .ChildrenBusNumHints
                                                                                                          
        // Windows 11                                                                                     
        //                                                                                                
        _m132 nt::unicode_view                             usb4_nhi_name;                                   //{ +0x04f0    } | .Usb4NhiName
        _m133 nt::unicode_view                             usb4cm_reference_string;                         //{ +0x0500    } | .Usb4CMReferenceString
        _m134 struct nt::file_object_t*                    virtual_power_pdo_handle;                        //{ +0x0510    } | .VirtualPowerPdoHandle
        _m135 struct nt::device_object_t*                  virtual_power_pdo;                               //{ +0x0518    } | .VirtualPowerPdo
        _m136 void*                                        target_device_change_notification_entry;         //{ +0x0520    } | .TargetDeviceChangeNotificationEntry
        _m137 void*                                        driver_notification_entry;                       //{ +0x0528    } | .DriverNotificationEntry
        _m138 enum pci::dsm_ignore_boot_config_state_t     dsm_to_ignore_boot_config_state;                 //{ +0x0530    } | .DsmToIgnoreBootConfigState
                                                                                                          
        SDK_MAGIC_PROPERTIES( "_PCI_BUS.$", 0x4f0, true, 0xad86969444a3d077 );                                               
        SDK_DYNAMIC_SIZE( bus_t );                                                                        
    };                                                                                                    
};
#include "magic/bus_t.end.hpp"
SDK_VERIFY( struct pci::bus_t::u0_hpp_t, 0x4 );
