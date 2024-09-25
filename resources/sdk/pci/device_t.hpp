#pragma once
#include <sdkgen/support_library.hpp>
#include "fpb_pdo_t.hpp"
#include "../nt/kdpc_t.hpp"
#include "slot_number_t.hpp"
#include "../nt/ktimer_t.hpp"
#include "device_usage_t.hpp"
#include "object_state_t.hpp"
#include "../pm/support_t.hpp"
#include "d3cold_support_t.hpp"
#include "dma_properties_t.hpp"
#include "wake_irp_state_t.hpp"
#include "custom_settings_t.hpp"
#include "device_resources_t.hpp"
#include "../io/remove_lock_t.hpp"
#include "save_restore_data_t.hpp"
#include "device_reset_state_t.hpp"
#include "device_requirements_t.hpp"
#include "acs_hierarchy_support_t.hpp"
#include "../nt/device_power_state_t.hpp"
#include "d3cold_interface_request_t.hpp"
#include "d3cold_support_interface_t.hpp"
#include "device_interrupt_resource_t.hpp"
#include "device_early_restore_traces_t.hpp"
#include "device_interrupt_requirement_t.hpp"
#include "dsm_ignore_boot_config_state_t.hpp"
#include "device_start_worker_parameters_t.hpp"
#include "d3cold_aux_power_and_timing_device_info_t.hpp"

namespace ex { struct timer_t;         }
namespace io { struct workitem_t;      }
namespace nt { struct device_object_t; }
namespace nt { struct irp_t;           }

#include "magic/device_t.start.hpp"
namespace pci
{
    struct bus_t;
    struct root_t;
    struct device_t;
    struct cfg_record_t;
    struct express_port_t;
    struct hotplug_slot_t;
    struct cfg_access_log_t;
    struct header_operations_t;
    struct sleepstudy_blocker_t;
    struct express_compatibility_port_t;

    // [struct _PCI_DEVICE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_t                                                                                          
    {                                                                                                        
        struct u0_bridge_flags_t                                                                             
        {                                                                                                    
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                     
            //                                                                                               
            _n02 uint1_t d3_illegal;                                                                           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .D3Illegal
            _n03 uint1_t d3_causes66m_hz_b2;                                                                   //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .D3Causes66MHzB2
                                                                                                             
            SDK_MAGIC_PROPERTIES( "_PCI_DEVICE.BridgeFlags.$", 0x4, true, 0xe5c1b436c9f4eb43 );                                                                     
            SDK_FIXED_SIZE( u0_bridge_flags_t, 0x4 );                                                                     
        };                                                                                                   
                                                                                                             
        using power_timer_t = sdk::variant<struct nt::ktimer_t, struct ex::timer_t*>;                                                  
        using d3_cold_aux_t = struct pci::d3cold_aux_power_and_timing_device_info_t;                                                  
                                                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                  
        //                                                                                                   
        _m000 uint32_t                                     signature;                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m001 enum pci::object_state_t                     device_state;                                       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DeviceState
        _m002 enum pci::object_state_t                     tentative_next_state;                               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TentativeNextState
        _m003 struct pci::device_usage_t                   device_usage;                                       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .DeviceUsage
        _m004 uint32_t                                     bus_number;                                         //{ +0x0018    +0x001c    +0x001c    +0x001c    } | .BusNumber
        _m005 struct pci::slot_number_t                    slot;                                               //{ +0x001c    +0x0020    +0x0020    +0x0020    } | .Slot
        _m006 uint16_t                                     vendor_id;                                          //{ +0x0020    +0x0024    +0x0024    +0x0024    } | .VendorID
        _m007 uint16_t                                     device_id;                                          //{ +0x0022    +0x0026    +0x0026    +0x0026    } | .DeviceID
        _m008 uint8_t                                      revision_id;                                        //{ +0x0024    +0x0028    +0x0028    +0x0028    } | .RevisionID
        _m009 uint8_t                                      base_class;                                         //{ +0x0025    +0x0029    +0x0029    +0x0029    } | .BaseClass
        _m010 uint8_t                                      sub_class;                                          //{ +0x0026    +0x002a    +0x002a    +0x002a    } | .SubClass
        _m011 uint8_t                                      prog_if;                                            //{ +0x0027    +0x002b    +0x002b    +0x002b    } | .ProgIf
        _m012 uint16_t                                     sub_vendor_id;                                      //{ +0x0028    +0x002c    +0x002c    +0x002c    } | .SubVendorID
        _m013 uint16_t                                     sub_system_id;                                      //{ +0x002a    +0x002e    +0x002e    +0x002e    } | .SubSystemID
        _m014 uint8_t                                      header_type;                                        //{ +0x002c    +0x0030    +0x0030    +0x0030    } | .HeaderType
        _m015 uint8_t                                      interrupt_pin;                                      //{ +0x002d    +0x0031    +0x0031    +0x0031    } | .InterruptPin
        _m016 uint8_t                                      first_capability;                                   //{ +0x002e    +0x0032    +0x0032    +0x0032    } | .FirstCapability
        _m017 uint8_t                                      power_capability;                                   //{ +0x002f    +0x0033    +0x0033    +0x0033    } | .PowerCapability
        _m018 uint8_t                                      sub_i_ds_capability;                                //{ +0x0030    +0x0034    +0x0034    +0x0034    } | .SubIDsCapability
        _m019 uint8_t                                      agp_capability;                                     //{ +0x0031    +0x0035    +0x0035    +0x0035    } | .AgpCapability
        _m020 uint8_t                                      pci_x_capability;                                   //{ +0x0032    +0x0036    +0x0036    +0x0036    } | .PciXCapability
        _m021 uint8_t                                      advanced_features;                                  //{ +0x0033    +0x0037    +0x0037    +0x0037    } | .AdvancedFeatures
        _m022 uint8_t                                      msi_capability;                                     //{ +0x0034    +0x0038    +0x0038    +0x0038    } | .MsiCapability
        _m023 uint8_t                                      msi_x_capability;                                   //{ +0x0035    +0x0039    +0x0039    +0x0039    } | .MsiXCapability
        _m024 uint8_t                                      first_ht_capability;                                //{ +0x0036    +0x003a    +0x003a    +0x003a    } | .FirstHtCapability
        _m025 uint8_t                                      ht_msi_map_capability;                              //{ +0x0037    +0x003b    +0x003b    +0x003b    } | .HtMsiMapCapability
        _m026 uint8_t                                      express_capability;                                 //{ +0x0038    +0x003c    +0x003c    +0x003c    } | .ExpressCapability
        _m027 uint16_t                                     possible_decodes;                                   //{ +0x003a    +0x003e    +0x003e    +0x003e    } | .PossibleDecodes
        _m028 uint16_t                                     resource_decodes;                                   //{ +0x003c    +0x0040    +0x0040    +0x0040    } | .ResourceDecodes
        _m029 uint16_t                                     previous_command;                                   //{ +0x003e    +0x0042    +0x0042    +0x0042    } | .PreviousCommand
        _m030 struct nt::device_object_t*                  device_object;                                      //{ +0x0040    +0x0080    +0x0080    +0x0080    } | .DeviceObject
        _m031 struct pci::root_t*                          root;                                               //{ +0x0048    +0x0088    +0x0088    +0x0088    } | .Root
        _m032 struct pci::bus_t*                           parent;                                             //{ +0x0050    +0x0090    +0x0090    +0x0090    } | .Parent
        _m033 struct pci::device_t*                        sibling;                                            //{ +0x0058    +0x0098    +0x0098    +0x0098    } | .Sibling
        _m034 struct io::remove_lock_t                     remove_lock;                                        //{ +0x0060    +0x00a0    +0x00a0    +0x00a0    } | .RemoveLock
        _m035 struct pci::express_compatibility_port_t*    express_compatibility_port;                         //{ +0x0080    +0x00c0    +0x00c0    +0x00c0    } | .ExpressCompatibilityPort
        _m036 struct pci::express_port_t*                  express_port;                                       //{ +0x0088    +0x00c8    +0x00c8    +0x00c8    } | .ExpressPort
        _m037 struct pci::hotplug_slot_t*                  hot_plug_slot;                                      //{ +0x0090    +0x00d0    +0x00d0    +0x00d0    } | .HotPlugSlot
        _m038 uint64_t                                     instance_id_serial_number;                          //{ +0x0098    +0x00d8    +0x00d8    +0x00d8    } | .InstanceIdSerialNumber
        _m039 union pci::device_resources_t                resources;                                          //{ +0x00a0    +0x00e0    +0x00e0    +0x00e0    } | .Resources
        _m040 union pci::device_requirements_t             requirements;                                       //{ +0x01a8    +0x01e8    +0x01e8    +0x01e8    } | .Requirements
        _m041 struct pci::device_interrupt_resource_t      interrupt_resource;                                 //{ +0x0348    +0x0388    +0x0388    +0x0388    } | .InterruptResource
        _m042 struct pci::device_interrupt_requirement_t   interrupt_requirement;                              //{ +0x03b0    +0x03f0    +0x03f0    +0x03f0    } | .InterruptRequirement
        _m043 struct pci::save_restore_data_t              saved_registers;                                    //{ +0x03f8    +0x0438    +0x0438    +0x0438    } | .SavedRegisters
        _m044 uint32_t                                     captured_processor_count;                           //{ +0x0404    +0x0444    +0x0444    +0x0444    } | .CapturedProcessorCount
        _m045 enum nt::device_power_state_t                logical_power_state;                                //{ +0x0408    +0x0448    +0x0448    +0x0448    } | .LogicalPowerState
        _m046 enum nt::device_power_state_t                previous_power_state;                               //{ +0x040c    +0x044c    +0x044c    +0x044c    } | .PreviousPowerState
        _m047 enum nt::device_power_state_t                wake_level;                                         //{ +0x0410    +0x0450    +0x0450    +0x0450    } | .WakeLevel
        _m048 int32_t                                      power_state_change_delay;                           //{ +0x0414    +0x0454    +0x0454    +0x0454    } | .PowerStateChangeDelay
        _m049 struct pm::support_t                         power_support;                                      //{ +0x0418    +0x0458    +0x0458    +0x0458    } | .PowerSupport
        _m050 power_timer_t                                power_timer;                                        //{ +0x0420    +0x0460    +0x0460    +0x0460    } | .PowerTimer
        _m051 struct nt::irp_t*                            d_irp;                                              //{ +0x04a0    +0x0468    +0x0468    +0x0468    } | .DIrp
        _m052 struct nt::irp_t*                            wake_irp;                                           //{ +0x04a8    +0x0470    +0x0470    +0x0470    } | .WakeIrp
        _m053 enum pci::wake_irp_state_t                   wake_irp_state;                                     //{ +0x04b0    +0x0478    +0x0478    +0x0478    } | .WakeIrpState
        _m054 enum pci::d3cold_support_t                   d3_cold_support;                                    //{ +0x04b4    +0x047c    +0x047c    +0x047c    } | .D3ColdSupport
        _m055 struct nt::ktimer_t                          transaction_timer;                                  //{ +0x04b8    +0x0480    +0x0480    +0x0480    } | .TransactionTimer
        _m056 struct nt::kdpc_t                            transaction_timer_dpc;                              //{ +0x04f8    +0x04c0    +0x04c0    +0x04c0    } | .TransactionTimerDpc
        _m057 uint16_t                                     d0_delay_in_milliseconds;                           //{ +0x0538    +0x0500    +0x0500    +0x0500    } | .D0DelayInMilliseconds
        _m058 uint3_t                                      mps_size_override;                                  //{ +0x053a@0  +0x0502@0  +0x0502@0  +0x0502@0  } | .MpsSizeOverride
        _m059 uint1_t                                      mps_size_override_set;                              //{ +0x053a@3  +0x0502@3  +0x0502@3  +0x0502@3  } | .MpsSizeOverrideSet
        _m060 uint8_t                                      transaction_timeout_passes;                         //{ +0x053b    +0x0503    +0x0503    +0x0503    } | .TransactionTimeoutPasses
        _m061 uint8_t                                      dstate_change_retry_count;                          //{ +0x053c    +0x0504    +0x0504    +0x0504    } | .DstateChangeRetryCount
        _m062 struct pci::d3cold_support_interface_t       d3_cold_filter;                                     //{ +0x0540    +0x0508    +0x0508    +0x0508    } | .D3ColdFilter
        _m063 uint64_t                                     wake_irp_lock;                                      //{ +0x0588    +0x0568    +0x0570    +0x0568    } | .WakeIrpLock
        _m064 uint64_t                                     d0_irp_lock;                                        //{ +0x0590    +0x0570    +0x0578    +0x0570    } | .D0IrpLock
        _m065 uint1_t                                      configure_mwi;                                      //{ +0x0598@0  +0x0578@0  +0x0580@0  +0x0578@0  } | .ConfigureMwi
        _m066 uint1_t                                      bus_numbers_configured;                             //{ +0x0598@1  +0x0578@1  +0x0580@1  +0x0578@1  } | .BusNumbersConfigured
        _m067 uint1_t                                      on_debug_path;                                      //{ +0x0598@2  +0x0578@2  +0x0580@2  +0x0578@2  } | .OnDebugPath
        _m068 uint1_t                                      pci_owned;                                          //{ +0x0598@3  +0x0578@3  +0x0580@3  +0x0578@3  } | .PciOwned
        _m069 uint1_t                                      legacy_driver;                                      //{ +0x0598@4  +0x0578@4  +0x0580@4  +0x0578@4  } | .LegacyDriver
        _m070 uint1_t                                      native_ide_switch_allowed;                          //{ +0x0598@5  +0x0578@5  +0x0580@5  +0x0578@5  } | .NativeIdeSwitchAllowed
        _m071 uint1_t                                      ide_in_native_mode;                                 //{ +0x0598@6  +0x0578@6  +0x0580@6  +0x0578@6  } | .IdeInNativeMode
        _m072 uint1_t                                      ide_interface_active;                               //{ +0x0598@7  +0x0578@7  +0x0580@7  +0x0578@7  } | .IdeInterfaceActive
        _m073 uint1_t                                      present;                                            //{ +0x0598@8  +0x0578@8  +0x0580@8  +0x0578@8  } | .Present
        _m074 uint1_t                                      reported_missing;                                   //{ +0x0598@9  +0x0578@9  +0x0580@9  +0x0578@9  } | .ReportedMissing
        _m075 uint1_t                                      connected;                                          //{ +0x0598@10 +0x0578@10 +0x0580@10 +0x0578@10 } | .Connected
        _m076 uint1_t                                      pme_owned;                                          //{ +0x0598@11 +0x0578@11 +0x0580@11 +0x0578@11 } | .PmeOwned
        _m077 uint1_t                                      pme_enabled;                                        //{ +0x0598@12 +0x0578@12 +0x0580@12 +0x0578@12 } | .PmeEnabled
        _m078 uint1_t                                      triggered_pme;                                      //{ +0x0598@13 +0x0578@13 +0x0580@13 +0x0578@13 } | .TriggeredPme
        _m079 uint1_t                                      hyper_transport;                                    //{ +0x0598@14 +0x0578@14 +0x0580@14 +0x0578@14 } | .HyperTransport
        _m080 uint1_t                                      msi_ht_converter;                                   //{ +0x0598@15 +0x0578@15 +0x0580@15 +0x0578@15 } | .MsiHtConverter
        _m081 uint1_t                                      extended_config_available;                          //{ +0x0598@16 +0x0578@16 +0x0580@16 +0x0578@16 } | .ExtendedConfigAvailable
        _m082 uint1_t                                      b2_on66m_hz_segment_illegal;                        //{ +0x0598@17 +0x0578@17 +0x0580@17 +0x0578@17 } | .B2On66MHzSegmentIllegal
        _m083 uint1_t                                      device66m_hz_capable;                               //{ +0x0598@18 +0x0578@18 +0x0580@18 +0x0578@18 } | .Device66MHzCapable
        _m084 uint1_t                                      dsm_to_ignore_boot_config_evaluated;                //{ +0x0598@19 +0x0578@19 +0x0580@19 +0x0578@19 } | .DsmToIgnoreBootConfigEvaluated
        _m085 uint1_t                                      removed;                                            //{ +0x0598@21 +0x0578@21 +0x0580@21 +0x0578@21 } | .Removed
        _m086 uint1_t                                      ari_is_enabled;                                     //{ +0x0598@22 +0x0578@22 +0x0580@22 +0x0578@22 } | .AriIsEnabled
        _m087 uint1_t                                      multi_function;                                     //{ +0x0598@23 +0x0578@23 +0x0580@23 +0x0578@23 } | .MultiFunction
        _m088 uint1_t                                      already_been_started;                               //{ +0x0598@24 +0x0578@24 +0x0580@24 +0x0578@24 } | .AlreadyBeenStarted
        _m089 uint1_t                                      waiting_for_power_up;                               //{ +0x0598@25 +0x0578@25 +0x0580@25 +0x0578@25 } | .WaitingForPowerUp
        _m090 uint1_t                                      on_post_path;                                       //{ +0x0598@26 +0x0578@26 +0x0580@26 +0x0578@26 } | .OnPostPath
        _m091 uint1_t                                      sriov_device_didnt_get_vf_bar_space;                //{ +0x0598@27 +0x0578@27 +0x0580@27 +0x0578@27 } | .SriovDeviceDidntGetVfBarSpace
        _m092 uint1_t                                      extra_bus_power_reference_for_wake;                 //{ +0x0598@28 +0x0578@28 +0x0580@28 +0x0578@28 } | .ExtraBusPowerReferenceForWake
        _m093 uint1_t                                      firmware_says_device_does_d3cold;                   //{ +0x0598@29 +0x0578@29 +0x0580@29 +0x0578@29 } | .FirmwareSaysDeviceDoesD3cold
        _m094 uint1_t                                      transaction_timer_set_power;                        //{ +0x0598@30 +0x0578@30 +0x0580@30 +0x0578@30 } | .TransactionTimerSetPower
        _m095 uint1_t                                      surprise_remove_and_reenumerate_self;               //{ +0x0598@31 +0x0578@31 +0x0580@31 +0x0578@31 } | .SurpriseRemoveAndReenumerateSelf
        _m096 uint1_t                                      busmaster_disabled_on_boot;                         //{ +0x0598@32 +0x0578@32 +0x0580@32 +0x0578@32 } | .BusmasterDisabledOnBoot
        _m097 uint1_t                                      dsm_for_delay_optimization_evaluated;               //{ +0x0598@33 +0x0578@33 +0x0580@33 +0x0578@33 } | .DsmForDelayOptimizationEvaluated
        _m098 uint1_t                                      no_initial_config;                                  //{ +0x0598@34 +0x0578@34 +0x0580@34 +0x0578@34 } | .NoInitialConfig
        _m099 uint1_t                                      disable_whea_during_pldr;                           //{ +0x0598@35 +0x0578@35 +0x0580@35 +0x0578@35 } | .DisableWheaDuringPLDR
        _m100 uint1_t                                      whea_reporting_disabled;                            //{ +0x0598@36 +0x0578@36 +0x0580@36 +0x0578@36 } | .WheaReportingDisabled
        _m101 uint64_t                                     flags_as_ulonglong;                                 //{ +0x0598    +0x0578    +0x0580    +0x0578    } | .FlagsAsULONGLONG
        _m104 u0_bridge_flags_t                            bridge_flags;                                       //{ +0x05a0    +0x0588    +0x0594    +0x0588    } | .BridgeFlags
        _m105 uint64_t                                     hack_flags;                                         //{ +0x05a8    +0x0590    +0x0598    +0x0590    } | .HackFlags
        _m106 struct pci::header_operations_t*             operations;                                         //{ +0x05b0    +0x0598    +0x05a0    +0x0598    } | .Operations
        _m107 volatile int32_t                             pci_bus_interface_count;                            //{ +0x05b8    +0x05a0    +0x05a8    +0x05a0    } | .PciBusInterfaceCount
        _m108 volatile int32_t                             agp_target_interface_ref_count;                     //{ +0x05bc    +0x05a4    +0x05ac    +0x05a4    } | .AgpTargetInterfaceRefCount
        _m109 volatile int32_t                             pci_card_bus_interface_count;                       //{ +0x05c0    +0x05a8    +0x05b0    +0x05a8    } | .PciCardBusInterfaceCount
        _m110 volatile int32_t                             pci_device_present_interface_count;                 //{ +0x05c4    +0x05ac    +0x05b4    +0x05ac    } | .PciDevicePresentInterfaceCount
        _m111 volatile int32_t                             pci_native_ide_interface_count;                     //{ +0x05c8    +0x05b0    +0x05b8    +0x05b0    } | .PciNativeIdeInterfaceCount
        _m112 volatile int32_t                             pci_location_interface_count;                       //{ +0x05cc    +0x05b4    +0x05bc    +0x05b4    } | .PciLocationInterfaceCount
        _m113 volatile int32_t                             pci_d3_cold_support_interface_count;                //{ +0x05d0    +0x05b8    +0x05c0    +0x05b8    } | .PciD3ColdSupportInterfaceCount
        _m114 uint32_t                                     enum_failure_code;                                  //{ +0x05d4    +0x05c8    +0x05d0    +0x05c8    } | .EnumFailureCode
        _m115 void*                                        debug_device_power_callback_handle;                 //{ +0x05d8    +0x05d0    +0x05d8    +0x05d0    } | .DebugDevicePowerCallbackHandle
        _m116 sdk::array<int32_t, 7>                       delay_info;                                         //{ +0x05e0    +0x05d8    +0x05e0    +0x05d8    } | .DelayInfo
                                                                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
        //                                                                                                   
        _m117 uint8_t                                      fpb_capability;                                     //{ +0x003d    +0x003d    +0x003d    } | .FpbCapability
        _m118 struct pci::cfg_record_t*                    cfg_record;                                         //{ +0x0048    +0x0048    +0x0048    } | .CfgRecord
        _m119 struct pci::cfg_access_log_t*                pci_cfg_access_log;                                 //{ +0x0050    +0x0050    +0x0050    } | .PciCfgAccessLog
        _m120 struct io::workitem_t*                       start_work_item;                                    //{ +0x0058    +0x0058    +0x0058    } | .StartWorkItem
        _m121 struct pci::device_start_worker_parameters_t start_worker_parameters;                            //{ +0x0060    +0x0060    +0x0060    } | .StartWorkerParameters
        _m122 uint64_t                                     last_pmcsr_write_d0_timestamp;                      //{ +0x0550    +0x0558    +0x0550    } | .LastPmcsrWriteD0Timestamp
        _m123 uint64_t                                     previous_power_state_timestamp;                     //{ +0x0558    +0x0560    +0x0558    } | .PreviousPowerStateTimestamp
        _m124 uint32_t                                     hierarchy_depth;                                    //{ +0x0560    +0x0568    +0x0560    } | .HierarchyDepth
        _m125 uint1_t                                      secure_device;                                      //{ +0x0578@37 +0x0580@37 +0x0578@37 } | .SecureDevice
        _m126 uint1_t                                      dma_protected;                                      //{ +0x0578@38 +0x0580@38 +0x0578@38 } | .DmaProtected
        _m127 uint1_t                                      is_thunderbolt_device;                              //{ +0x0578@39 +0x0580@39 +0x0578@39 } | .IsThunderboltDevice
        _m128 uint1_t                                      decode_io_on_boot;                                  //{ +0x0578@40 +0x0580@40 +0x0578@40 } | .DecodeIoOnBoot
        _m129 uint1_t                                      fpb_need_restore;                                   //{ +0x0578@41 +0x0580@41 +0x0578@41 } | .FpbNeedRestore
        _m130 uint1_t                                      force_sbr;                                          //{ +0x0578@42 +0x0580@42 +0x0578@42 } | .ForceSBR
        _m131 uint1_t                                      is_guest_assigned;                                  //{ +0x0578@43 +0x0580@43 +0x0578@43 } | .IsGuestAssigned
        _m132 uint1_t                                      surprise_remove_and_reenumerate_self_reset_device;  //{ +0x0578@44 +0x0580@44 +0x0578@44 } | .SurpriseRemoveAndReenumerateSelfResetDevice
        _m133 union pci::dma_properties_t                  dma_properties;                                     //{ +0x0580    +0x058c    +0x0580    } | .DmaProperties
        _m134 uint32_t                                     port_uid;                                           //{ +0x0584    +0x0590    +0x0584    } | .PortUid
        _m135 volatile int32_t                             pci_d3_cold_aux_power_and_timing_interface_count;   //{ +0x05bc    +0x05c4    +0x05bc    } | .PciD3ColdAuxPowerAndTimingInterfaceCount
        _m136 volatile int32_t                             pci_ptm_control_interface_count;                    //{ +0x05c0    +0x05c8    +0x05c0    } | .PciPtmControlInterfaceCount
        _m137 volatile int32_t                             pci_npem_control_interface_count;                   //{ +0x05c4    +0x05cc    +0x05c4    } | .PciNpemControlInterfaceCount
        _m138 uint64_t                                     secure_device_token;                                //{ +0x05f8    +0x0600    +0x05f8    } | .SecureDeviceToken
        _m139 d3_cold_aux_t                                d3_cold_aux;                                        //{ +0x0600    +0x0608    +0x0600    } | .D3ColdAux
        _m140 struct pci::fpb_pdo_t                        fpb_pdo_node;                                       //{ +0x0628    +0x0650    +0x0628    } | .FpbPdoNode
        _m141 uint64_t                                     sleepstudy_lock;                                    //{ +0x0710    +0x0738    +0x0710    } | .SleepstudyLock
        _m142 uint8_t                                      blocker_active;                                     //{ +0x0718    +0x0740    +0x0718    } | .BlockerActive
        _m143 struct pci::sleepstudy_blocker_t*            sleepstudy_handle;                                  //{ +0x0720    +0x0748    +0x0720    } | .SleepstudyHandle
                                                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                                  
        //                                                                                                   
        _m144 uint1_t                                      ignore_boot_config;                                 //{ +0x0598@20 +0x0578@20 +0x0578@20 } | .IgnoreBootConfig
                                                                                                             
        // Windows 11                                                                                        
        //                                                                                                   
        _m145 enum pci::d3cold_interface_request_t         d3_cold_interface_request;                          //{ +0x0550    } | .D3ColdInterfaceRequest
        _m146 uint1_t                                      usb4_power_dependency_processed;                    //{ +0x0580@45 } | .Usb4PowerDependencyProcessed
        _m147 uint1_t                                      has_boot_config;                                    //{ +0x0580@46 } | .HasBootConfig
        _m148 uint1_t                                      keep_device_stack_over_reset;                       //{ +0x0580@47 } | .KeepDeviceStackOverReset
        _m149 uint1_t                                      on_e_dpc;                                           //{ +0x0580@48 } | .OnEDpc
        _m150 uint1_t                                      immediate_readiness;                                //{ +0x0580@49 } | .ImmediateReadiness
        _m151 uint1_t                                      bridge_use_native_wake_info;                        //{ +0x0580@50 } | .BridgeUseNativeWakeInfo
        _m152 uint1_t                                      is_recovery_enabled;                                //{ +0x0580@51 } | .IsRecoveryEnabled
        _m153 struct pci::device_early_restore_traces_t    early_restore_trace;                                //{ +0x0588    } | .EarlyRestoreTrace
        _m154 uint8_t                                      acs_not_needed;                                     //{ +0x0750    } | .AcsNotNeeded
        _m155 enum pci::acs_hierarchy_support_t            acs_hierarchy_support;                              //{ +0x0754    } | .AcsHierarchySupport
        _m156 uint32_t                                     acs_scenarios;                                      //{ +0x0758    } | .AcsScenarios
        _m157 struct io::workitem_t*                       d3_cold_work_item;                                  //{ +0x0760    } | .D3ColdWorkItem
        _m158 volatile int32_t                             pci_d3_cold_property_update_worker_queued;          //{ +0x0768    } | .PciD3ColdPropertyUpdateWorkerQueued
        _m159 nt::unicode_view                             usb4_nhi_name;                                      //{ +0x0770    } | .Usb4NhiName
        _m160 nt::unicode_view                             usb4cm_reference_string;                            //{ +0x0780    } | .Usb4CMReferenceString
        _m161 void*                                        target_device_change_notification_entry;            //{ +0x0790    } | .TargetDeviceChangeNotificationEntry
        _m162 void*                                        driver_notification_entry;                          //{ +0x0798    } | .DriverNotificationEntry
        _m163 enum pci::dsm_ignore_boot_config_state_t     dsm_to_ignore_boot_config_state;                    //{ +0x07a0    } | .DsmToIgnoreBootConfigState
        _m164 enum pci::device_reset_state_t               reset_state;                                        //{ +0x07a4    } | .ResetState
        _m165 struct pci::custom_settings_t                custom_settings;                                    //{ +0x07a8    } | .CustomSettings
                                                                                                             
        // Windows 10 v1607                                                                                  
        //                                                                                                   
        _m166 struct nt::kdpc_t                            power_timer_dpc;                                    //{ +0x0460    } | .PowerTimerDpc
                                                                                                             
        SDK_MAGIC_PROPERTIES( "_PCI_DEVICE.$", 0x728, true, 0x602cffd0eca88d00 );                                                  
        SDK_DYNAMIC_SIZE( device_t );                                                                        
    };                                                                                                       
};
#include "magic/device_t.end.hpp"
SDK_VERIFY( struct pci::device_t::u0_bridge_flags_t, 0x4 );
