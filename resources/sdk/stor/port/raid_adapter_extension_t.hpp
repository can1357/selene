#pragma once
#include <sdkgen/support_library.hpp>
#include "device_state_t.hpp"
#include "../../nt/guid_t.hpp"
#include "../../nt/kdpc_t.hpp"
#include "raid_miniport_t.hpp"
#include "../../nt/ktimer_t.hpp"
#include "stor_dictionary_t.hpp"
#include "stor_io_gateway_t.hpp"
#include "../../rtl/bitmap_t.hpp"
#include "raid_dma_adapter_t.hpp"
#include "raid_object_type_t.hpp"
#include "raid_power_state_t.hpp"
#include "stor_locked_list_t.hpp"
#include "port_registry_info_t.hpp"
#include "raid_bus_interface_t.hpp"
#include "raid_memory_region_t.hpp"
#include "raid_power_context_t.hpp"
#include "raid_resource_list_t.hpp"
#include "mfnd_operation_mode_t.hpp"
#include "raid_deferred_queue_t.hpp"
#include "../../nt/slist_header_t.hpp"
#include "dsm_pci_ssd_led_state_t.hpp"
#include "raid_crypto_key_table_t.hpp"
#include "raid_deferred_element_t.hpp"
#include "raid_rpmb_capabilities_t.hpp"
#include "../../pci/common_header_t.hpp"
#include "raid_adapter_parameters_t.hpp"
#include "storage_indicator_state_t.hpp"
#include "mfnd_operation_privilege_t.hpp"
#include "raid_redirection_support_t.hpp"
#include "stor_synchronization_model_t.hpp"
#include "storport_extended_functions_t.hpp"
#include "crashdump_functions_interface_t.hpp"
#include "raid_shared_work_item_context_t.hpp"
#include "interrupt_synchronization_mode_t.hpp"
#include "stor_power_setting_notification_t.hpp"
#include "raid_miniport_system_thread_context_t.hpp"
#include "../../pci/msix_table_config_interface_t.hpp"

namespace ex   { struct rundown_ref_cache_aware_t;         }
namespace io   { struct interrupt_message_info_t;          }
namespace ndis { struct device_reset_interface_standard_t; }
namespace nt   { struct device_object_t;                   }
namespace nt   { struct device_relations_t;                }
namespace nt   { struct group_affinity_t;                  }
namespace nt   { struct kinterrupt_t;                      }
namespace nt   { struct mdl_t;                             }
namespace nt   { struct slist_entry_t;                     }
namespace pci  { struct d3cold_support_interface_t;        }
namespace pci  { struct npem_control_interface_t;          }

#include "magic/raid_adapter_extension_t.start.hpp"
namespace stor::port
{
    struct stor_address_t;
    struct mapped_address_t;
    struct raid_log_entry_t;
    struct stor_hmb_range_t;
    struct raid_adapter_pofx_t;
    struct raid_unit_extension_t;
    struct raid_driver_extension_t;
    struct nvme_identify_controller_data_t;
    struct stor_crypto_capabilities_data_t;
    struct raid_concurrent_channel_token_list_t;
    struct identify_mfnd_capability_information_t;

    // [struct _RAID_ADAPTER_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_adapter_extension_t                                                                                                                    
    {                                                                                                                                                  
        struct u0_flags_t                                                                                                                              
        {                                                                                                                                              
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                        
            //                                                                                                                                         
            _m013 uint1_t   initialized_miniport;                                                                                                        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .InitializedMiniport
            _m014 uint1_t   wmi_mini_port_initialized;                                                                                                   //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .WmiMiniPortInitialized
            _m015 uint1_t   wmi_initialized;                                                                                                             //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .WmiInitialized
            _m016 uint1_t   bus_interface_internal;                                                                                                      //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .BusInterfaceInternal
            _m017 uint1_t   in_hw_initialize;                                                                                                            //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .InHwInitialize
            _m018 uint1_t   idle_power_management_enabled;                                                                                               //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .IdlePowerManagementEnabled
            _m019 uint1_t   targeted_rescan;                                                                                                             //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .TargetedRescan
            _m020 uint1_t   boot_adapter;                                                                                                                //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .BootAdapter
            _m021 uint8_t   invalidate_bus_relations;                                                                                                    //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .InvalidateBusRelations
            _m022 uint8_t   rescan_bus;                                                                                                                  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .RescanBus
            _m023 varuint_t interrupts_enabled;                                                                                                          //{ +0x0003    +0x0003    +0x0003@0  +0x0003    } | .InterruptsEnabled
            _m024 uint1_t   powering_up;                                                                                                                 //{ +0x0004@0  +0x0004@0  +0x0003@1  +0x0004@0  } | .PoweringUp
            _m025 uint1_t   powering_down;                                                                                                               //{ +0x0004@1  +0x0004@1  +0x0003@2  +0x0004@1  } | .PoweringDown
            _m026 uint1_t   d3_cold_allowed;                                                                                                             //{ +0x0004@2  +0x0004@2  +0x0003@3  +0x0004@2  } | .D3ColdAllowed
            _m027 uint1_t   d3_cold_enabled;                                                                                                             //{ +0x0004@3  +0x0004@3  +0x0003@4  +0x0004@3  } | .D3ColdEnabled
            _m028 uint1_t   disable_runtime_power_management;                                                                                            //{ +0x0004@4  +0x0004@4  +0x0003@5  +0x0004@4  } | .DisableRuntimePowerManagement
            _m029 uint1_t   dump_active_not_capable;                                                                                                     //{ +0x0004@5  +0x0004@5  +0x0003@6  +0x0004@5  } | .DumpActiveNotCapable
            _m030 uint1_t   d3_idle_timeout_user_override;                                                                                               //{ +0x0004@6  +0x0004@6  +0x0003@7  +0x0004@6  } | .D3IdleTimeoutUserOverride
            _m031 uint1_t   system_in_lpe;                                                                                                               //{ +0x0004@7  +0x0004@7  +0x0004@0  +0x0004@7  } | .SystemInLPE
            _m032 uint1_t   system_coalescing_on;                                                                                                        //{ +0x0005@0  +0x0005@0  +0x0004@1  +0x0005@0  } | .SystemCoalescingOn
            _m033 uint1_t   use_dm_av3;                                                                                                                  //{ +0x0005@1  +0x0005@1  +0x0004@2  +0x0005@1  } | .UseDMAv3
            _m034 uint1_t   no_unit_po_fx_registration;                                                                                                  //{ +0x0005@2  +0x0005@2  +0x0004@3  +0x0005@2  } | .NoUnitPoFxRegistration
            _m035 uint1_t   cooling_interface_exposed;                                                                                                   //{ +0x0005@3  +0x0005@3  +0x0004@4  +0x0005@3  } | .CoolingInterfaceExposed
            _m036 uint1_t   protocol_command_effects_pending_update;                                                                                     //{ +0x0005@4  +0x0005@4  +0x0004@5  +0x0005@4  } | .ProtocolCommandEffectsPendingUpdate
            _m037 uint1_t   find_adapter_called;                                                                                                         //{ +0x0005@5  +0x0005@5  +0x0004@6  +0x0005@5  } | .FindAdapterCalled
            _m038 uint1_t   dump_always_power_on;                                                                                                        //{ +0x0005@6  +0x0005@6  +0x0004@7  +0x0005@6  } | .DumpAlwaysPowerOn
                                                                                                                                                       
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                          
            //                                                                                                                                         
            _m039 uint1_t   disable_interrupts_on_d3;                                                                                                    //{ +0x0005@7  +0x0005@0  +0x0005@7  } | .DisableInterruptsOnD3
            _m040 uint1_t   etw_enabled;                                                                                                                 //{ +0x0006@0  +0x0005@1  +0x0006@0  } | .EtwEnabled
            _m041 uint1_t   adapter_interface_type_initialized;                                                                                          //{ +0x0006@1  +0x0005@2  +0x0006@1  } | .AdapterInterfaceTypeInitialized
            _m042 uint1_t   adapter_failed;                                                                                                              //{ +0x0006@2  +0x0005@3  +0x0006@2  } | .AdapterFailed
            _m043 uint1_t   dsm_led_supported_function_cached;                                                                                           //{ +0x0006@3  +0x0005@4  +0x0006@3  } | .DsmLedSupportedFunctionCached
            _m044 uint1_t   dsm_led_supported_state_cached;                                                                                              //{ +0x0006@4  +0x0005@5  +0x0006@4  } | .DsmLedSupportedStateCached
            _m045 uint1_t   d_fx_power_down_active;                                                                                                      //{ +0x0006@5  +0x0005@6  +0x0006@5  } | .DFxPowerDownActive
            _m046 uint1_t   adapter_failure_reported_to_whea;                                                                                            //{ +0x0006@6  +0x0006@0  +0x0006@6  } | .AdapterFailureReportedToWHEA
                                                                                                                                                       
            // Windows 11                                                                                                                              
            //                                                                                                                                         
            _m047 uint1_t   device_led_state_cached;                                                                                                     //{ +0x0005@7  } | .DeviceLedStateCached
            _m048 uint1_t   firmware_shared;                                                                                                             //{ +0x0006@1  } | .FirmwareShared
            _m049 uint1_t   disable_runtime_power_bypass_po_fx;                                                                                          //{ +0x0006@2  } | .DisableRuntimePowerBypassPoFx
            _m050 uint1_t   operational_events_enabled;                                                                                                  //{ +0x0006@3  } | .OperationalEventsEnabled
            _m051 uint1_t   health_events_enabled;                                                                                                       //{ +0x0006@4  } | .HealthEventsEnabled
            _m052 uint1_t   diagnostic_events_enabled;                                                                                                   //{ +0x0006@5  } | .DiagnosticEventsEnabled
            _m053 uint1_t   po_fx_place_holder_mode_enabled;                                                                                             //{ +0x0006@6  } | .PoFxPlaceHolderModeEnabled
            _m054 uint1_t   adapter_restart;                                                                                                             //{ +0x0006@7  } | .AdapterRestart
            _m055 uint1_t   mfnd_supported;                                                                                                              //{ +0x0007@0  } | .MFNDSupported
            _m056 uint1_t   mfnd_operation_info_cached;                                                                                                  //{ +0x0007@1  } | .MFNDOperationInfoCached
            _m057 uint1_t   pdc_idle_resiliency_engaged;                                                                                                 //{ +0x0007@2  } | .PdcIdleResiliencyEngaged
            _m058 uint64_t  as_ulonglong;                                                                                                                //{ +0x0000    } | .AsUlonglong
                                                                                                                                                       
            SDK_MAGIC_PROPERTIES( "_RAID_ADAPTER_EXTENSION.Flags.$", 0x7, true, 0xb86d5b38ac13ee16 );                                                                                        
            SDK_DYNAMIC_SIZE( u0_flags_t );                                                                                                            
        };                                                                                                                                             
                                                                                                                                                       
        struct u4_deferred_list_t                                                                                                                      
        {                                                                                                                                              
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                        
            //                                                                                                                                         
            _m84 struct stor::port::raid_deferred_element_t timer;                                                                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Timer
                                                                                                                                                       
            SDK_MAGIC_PROPERTIES( "_RAID_ADAPTER_EXTENSION.DeferredList.$", 0x50, true, 0xf93dcb90191f973d );                                                      
            SDK_FIXED_SIZE( u4_deferred_list_t, 0x50 );                                                                                                
        };                                                                                                                                             
                                                                                                                                                       
        struct u8_deferred_pause_resume_context_t                                                                                                      
        {                                                                                                                                              
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                           
            //                                                                                                                                         
            _m86 struct stor::port::raid_deferred_element_t adapter_gateway_pause;                                                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AdapterGatewayPause
            _m87 struct stor::port::raid_deferred_element_t adapter_gateway_resume;                                                                      //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .AdapterGatewayResume
            _m88 uint32_t                                   latest_adapter_gateway_pause_timeout_value;                                                  //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .LatestAdapterGatewayPauseTimeoutValue
            _m89 int32_t                                    end_result_pause_desired;                                                                    //{ +0x00a4    +0x00a4    +0x00a4    +0x00a4    } | .EndResultPauseDesired
                                                                                                                                                       
            SDK_MAGIC_PROPERTIES( "_RAID_ADAPTER_EXTENSION.DeferredPauseResumeContext.$", 0xb0, true, 0x58c6da78371abe15 );                                                                                           
            SDK_FIXED_SIZE( u8_deferred_pause_resume_context_t, 0xb0 );                                                                                           
        };                                                                                                                                             
                                                                                                                                                       
        struct u12_perf_opt_flags_t                                                                                                                    
        {                                                                                                                                              
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                        
            //                                                                                                                                         
            _n22 uint1_t   optimize_for_completion_during_start_io;                                                                                      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .OptimizeForCompletionDuringStartIo
            _n23 uint1_t   dpc_use_current_cpu;                                                                                                          //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .DpcUseCurrentCpu
            _n24 varuint_t unused_flags;                                                                                                                 //{ +0x0000@2  +0x0000@3  +0x0000@4  +0x0000@3  } | .UnusedFlags
                                                                                                                                                       
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                          
            //                                                                                                                                         
            _n25 uint1_t   bypass_sgl;                                                                                                                   //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .BypassSgl
                                                                                                                                                       
            // Windows 11                                                                                                                              
            //                                                                                                                                         
            _n26 uint1_t   soft_numa_opt_in;                                                                                                             //{ +0x0000@3  } | .SoftNumaOptIn
                                                                                                                                                       
            SDK_MAGIC_PROPERTIES( "_RAID_ADAPTER_EXTENSION.PerfOptFlags.$", 0x1, true, 0xd3108b01b23682a8 );                                                                                        
            SDK_FIXED_SIZE( u12_perf_opt_flags_t, 0x1 );                                                                                               
        };                                                                                                                                             
                                                                                                                                                       
        struct u16_telemetry_hierarchical_reset_lun_bucket_t                                                                                           
        {                                                                                                                                              
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                        
            //                                                                                                                                         
            _n68 uint32_t count;                                                                                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
            _n69 uint32_t successes;                                                                                                                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Successes
            _n70 uint8_t  last_error_srb_status;                                                                                                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LastErrorSrbStatus
                                                                                                                                                       
            SDK_MAGIC_PROPERTIES( "_RAID_ADAPTER_EXTENSION.TelemetryHierarchicalResetLunBucket.$", 0xc, true, 0x5223469cd3870714 );                                                                      
            SDK_FIXED_SIZE( u16_telemetry_hierarchical_reset_lun_bucket_t, 0xc );                                                                      
        };                                                                                                                                             
                                                                                                                                                       
        struct u20_telemetry_hierarchical_reset_target_bucket_t                                                                                        
        {                                                                                                                                              
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                        
            //                                                                                                                                         
            _n72 uint32_t count;                                                                                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
            _n73 uint32_t successes;                                                                                                                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Successes
            _n74 uint8_t  last_error_srb_status;                                                                                                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LastErrorSrbStatus
                                                                                                                                                       
            SDK_MAGIC_PROPERTIES( "_RAID_ADAPTER_EXTENSION.TelemetryHierarchicalResetTargetBucket.$", 0xc, true, 0x746f84f47460ca6a );                                                                      
            SDK_FIXED_SIZE( u20_telemetry_hierarchical_reset_target_bucket_t, 0xc );                                                                      
        };                                                                                                                                             
                                                                                                                                                       
        struct u20_d_fx_queue_t                                                                                                                        
        {                                                                                                                                              
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                          
            //                                                                                                                                         
            _o34 nt::list_entry_t list;                                                                                                                  //{ +0x0000    +0x0000    +0x0000    } | .List
            _o35 uint32_t         count;                                                                                                                 //{ +0x0010    +0x0010    +0x0010    } | .Count
            _o36 uint64_t         lock;                                                                                                                  //{ +0x0018    +0x0018    +0x0018    } | .Lock
                                                                                                                                                       
            SDK_MAGIC_PROPERTIES( "_RAID_ADAPTER_EXTENSION.DFxQueue.$", 0x20, true, 0x9988427142a2beb4 );                                                      
            SDK_FIXED_SIZE( u20_d_fx_queue_t, 0x20 );                                                                                                  
        };                                                                                                                                             
                                                                                                                                                       
        using gateway_t =                                    sdk::variant<struct stor::port::stor_io_gateway_t, struct stor::port::stor_io_gateway_t*>;                                                
        using msi_mode_t =                                   enum stor::port::interrupt_synchronization_mode_t;                                                
        using concurrent_channel_tokens_t =                  struct stor::port::raid_concurrent_channel_token_list_t*;                                                
        using power_setting_notification_t =                 struct stor::port::stor_power_setting_notification_t;                                                
        using hw_state_change_t =                            sdk::function<void(void*, void*, int16_t, void*, uint32_t)>*;                                                
        using parent_crashdump_interface_t =                 struct stor::port::crashdump_functions_interface_t;                                                
        using telemetry_hierarchical_reset_lun_bucket_t =    sdk::array<u16_telemetry_hierarchical_reset_lun_bucket_t, 5>;                                                
        using telemetry_hierarchical_reset_target_bucket_t = sdk::array<u16_telemetry_hierarchical_reset_lun_bucket_t, 5>;                                                
        using crypto_capabilities_t =                        struct stor::port::stor_crypto_capabilities_data_t*;                                                
        using power_work_item_t =                            struct stor::port::raid_shared_work_item_context_t;                                                
        using io_resource_work_item_t =                      struct stor::port::raid_shared_work_item_context_t;                                                
        using identify_controller_data_t =                   struct stor::port::nvme_identify_controller_data_t*;                                                
        using miniport_system_thread_context_t =             struct stor::port::raid_miniport_system_thread_context_t;                                                
        using mfnd_capabilities_t =                          struct stor::port::identify_mfnd_capability_information_t*;                                                
                                                                                                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                            
        //                                                                                                                                             
        _m000 enum stor::port::raid_object_type_t                                                      object_type;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ObjectType
        _m001 struct nt::device_object_t*                                                              device_object;                                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceObject
        _m002 struct stor::port::raid_driver_extension_t*                                              driver;                                           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Driver
        _m003 struct nt::device_object_t*                                                              lower_device_object;                              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LowerDeviceObject
        _m004 struct nt::device_object_t*                                                              physical_device_object;                           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PhysicalDeviceObject
        _m005 nt::unicode_view                                                                         device_name;                                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DeviceName
        _m006 uint32_t                                                                                 port_number;                                      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .PortNumber
        _m007 nt::list_entry_t                                                                         next_adapter;                                     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NextAdapter
        _m008 uint64_t                                                                                 slow_lock;                                        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .SlowLock
        _m009 enum stor::port::device_state_t                                                          device_state;                                     //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .DeviceState
        _m010 uint32_t                                                                                 paging_path_count;                                //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .PagingPathCount
        _m011 uint32_t                                                                                 crash_dump_path_count;                            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .CrashDumpPathCount
        _m012 uint32_t                                                                                 hiber_path_count;                                 //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .HiberPathCount
        _m059 sdk::variant<u0_flags_t, u0_flags_t>                                                     flags;                                            //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .Flags
        _m060 struct stor::port::stor_locked_list_t                                                    unit_list;                                        //{ +0x0070    +0x0070    +0x0078    +0x0070    } | .UnitList
        _m061 struct stor::port::stor_dictionary_t                                                     unit_dictionary;                                  //{ +0x0090    +0x0090    +0x0098    +0x0090    } | .UnitDictionary
        _m062 struct stor::port::stor_locked_list_t                                                    zombie_list;                                      //{ +0x00c0    +0x00c0    +0x00c8    +0x00c0    } | .ZombieList
        _m063 union nt::slist_header_t                                                                 completed_list;                                   //{ +0x00e0    +0x00e0    +0x00f0    +0x00e0    } | .CompletedList
        _m064 struct nt::slist_entry_t*                                                                saved_xrb_list;                                   //{ +0x00f0    +0x00f0    +0x0100    +0x00f0    } | .SavedXrbList
        _m065 volatile int32_t                                                                         adapter_dpc_routine_lock;                         //{ +0x00f8    +0x00f8    +0x0108    +0x00f8    } | .AdapterDpcRoutineLock
        _m066 volatile int32_t                                                                         adapter_reset_bus_lock;                           //{ +0x00fc    +0x00fc    +0x010c    +0x00fc    } | .AdapterResetBusLock
        _m067 struct ex::rundown_ref_cache_aware_t*                                                    remove_lock;                                      //{ +0x0100    +0x0108    +0x0118    +0x0108    } | .RemoveLock
        _m068 struct stor::port::raid_power_state_t                                                    power;                                            //{ +0x0108    +0x0110    +0x0120    +0x0110    } | .Power
        _m069 struct stor::port::raid_resource_list_t                                                  resource_list;                                    //{ +0x0118    +0x0120    +0x0130    +0x0120    } | .ResourceList
        _m070 struct stor::port::raid_miniport_t                                                       miniport;                                         //{ +0x0128    +0x0130    +0x0140    +0x0130    } | .Miniport
        _m071 struct stor::port::raid_bus_interface_t                                                  bus;                                              //{ +0x0250    +0x0260    +0x0278    +0x0260    } | .Bus
        _m072 struct nt::kinterrupt_t*                                                                 interrupt;                                        //{ +0x0298    +0x02a8    +0x02c0    +0x02a8    } | .Interrupt
        _m073 uint32_t                                                                                 interrupt_irql;                                   //{ +0x02a0    +0x02b0    +0x02c8    +0x02b0    } | .InterruptIrql
        _m074 uint32_t                                                                                 interrupt_version;                                //{ +0x02a4    +0x02b4    +0x02cc    +0x02b4    } | .InterruptVersion
        _m075 uint64_t                                                                                 start_io_lock;                                    //{ +0x02a8    +0x02b8    +0x02d0    +0x02b8    } | .StartIoLock
        _m076 enum stor::port::stor_synchronization_model_t                                            io_model;                                         //{ +0x02b0    +0x02c0    +0x02d8    +0x02c0    } | .IoModel
        _m077 struct stor::port::raid_dma_adapter_t                                                    dma;                                              //{ +0x02b8    +0x02c8    +0x02e0    +0x02c8    } | .Dma
        _m078 struct stor::port::raid_memory_region_t                                                  uncached_extension;                               //{ +0x02d8    +0x02e8    +0x0300    +0x02e8    } | .UncachedExtension
        _m079 uint32_t                                                                                 bus_number;                                       //{ +0x02f0    +0x0300    +0x0318    +0x0300    } | .BusNumber
        _m080 uint32_t                                                                                 slot_number;                                      //{ +0x02f4    +0x0304    +0x031c    +0x0304    } | .SlotNumber
        _m081 struct stor::port::mapped_address_t*                                                     mapped_address_list;                              //{ +0x02f8    +0x0308    +0x0328    +0x0308    } | .MappedAddressList
        _m082 gateway_t                                                                                gateway;                                          //{ +0x0300    +0x0340    +0x0340    +0x0340    } | .Gateway
        _m083 struct stor::port::raid_deferred_queue_t                                                 deferred_queue;                                   //{ +0x0440    +0x0480    +0x0370    +0x0480    } | .DeferredQueue
        _m085 u4_deferred_list_t                                                                       deferred_list;                                    //{ +0x04c0    +0x0500    +0x03f0    +0x0500    } | .DeferredList
        _m090 u8_deferred_pause_resume_context_t                                                       deferred_pause_resume_context;                    //{ +0x0510    +0x0550    +0x0440    +0x0550    } | .DeferredPauseResumeContext
        _m091 struct stor::port::raid_deferred_queue_t                                                 wmi_deferred_queue;                               //{ +0x05c0    +0x0600    +0x04f0    +0x0600    } | .WmiDeferredQueue
        _m092 struct nt::kdpc_t                                                                        timer_dpc;                                        //{ +0x0640    +0x0680    +0x0570    +0x0680    } | .TimerDpc
        _m093 struct nt::ktimer_t                                                                      timer;                                            //{ +0x0680    +0x06c0    +0x05b0    +0x06c0    } | .Timer
        _m094 struct nt::kdpc_t                                                                        pause_timer_dpc;                                  //{ +0x06c0    +0x0700    +0x05f0    +0x0700    } | .PauseTimerDpc
        _m095 struct nt::kdpc_t                                                                        restart_dpc;                                      //{ +0x0700    +0x0740    +0x0630    +0x0740    } | .RestartDpc
        _m096 struct nt::ktimer_t                                                                      pause_timer;                                      //{ +0x0740    +0x0780    +0x0670    +0x0780    } | .PauseTimer
        _m097 sdk::function<void(void*)>*                                                              hw_timer_routine;                                 //{ +0x0780    +0x07c0    +0x06b0    +0x07c0    } | .HwTimerRoutine
        _m098 struct nt::kdpc_t                                                                        completion_dpc;                                   //{ +0x0788    +0x07c8    +0x06b8    +0x07c8    } | .CompletionDpc
        _m099 struct nt::kdpc_t                                                                        bus_change_dpc;                                   //{ +0x07c8    +0x0808    +0x06f8    +0x0808    } | .BusChangeDpc
        _m100 nt::unicode_view                                                                         pnp_interface_name;                               //{ +0x0808    +0x0848    +0x0738    +0x0848    } | .PnpInterfaceName
        _m101 uint32_t                                                                                 adapter_number;                                   //{ +0x0818    +0x0858    +0x0748    +0x0858    } | .AdapterNumber
        _m102 void*                                                                                    driver_parameters;                                //{ +0x0820    +0x0860    +0x0750    +0x0860    } | .DriverParameters
        _m103 struct stor::port::port_registry_info_t                                                  registry_info;                                    //{ +0x0828    +0x0868    +0x0758    +0x0868    } | .RegistryInfo
        _m104 uint32_t                                                                                 link_down_timeout_value;                          //{ +0x0868    +0x08a8    +0x0798    +0x08a8    } | .LinkDownTimeoutValue
        _m105 uint32_t                                                                                 link_up;                                          //{ +0x086c    +0x08ac    +0x079c    +0x08ac    } | .LinkUp
        _m106 sdk::array<void*, 255>                                                                   bus_key_array;                                    //{ +0x0870    +0x08b0    +0x07a0    +0x08b0    } | .BusKeyArray
        _m107 int32_t                                                                                  processing_deferred_items;                        //{ +0x1068    +0x10a8    +0x0f98    +0x10a8    } | .ProcessingDeferredItems
        _m108 uint32_t                                                                                 default_timeout;                                  //{ +0x106c    +0x10ac    +0x0f9c    +0x10ac    } | .DefaultTimeout
        _m109 uint32_t                                                                                 additional_timers;                                //{ +0x1070    +0x10b0    +0x0fa0    +0x10b0    } | .AdditionalTimers
        _m110 struct nt::ktimer_t                                                                      reset_hold_timer;                                 //{ +0x1078    +0x10b8    +0x0fa8    +0x10b8    } | .ResetHoldTimer
        _m111 struct nt::kdpc_t                                                                        reset_hold_dpc;                                   //{ +0x10b8    +0x10f8    +0x0fe8    +0x10f8    } | .ResetHoldDpc
        _m112 int64_t                                                                                  last_scan_time;                                   //{ +0x10f8    +0x1138    +0x1028    +0x1138    } | .LastScanTime
        _m113 struct stor::port::raid_adapter_parameters_t                                             parameters;                                       //{ +0x1100    +0x1140    +0x1030    +0x1140    } | .Parameters
        _m114 sdk::function<uint8_t(void*)>*                                                           hw_passive_init_routine;                          //{ +0x1138    +0x1178    +0x1068    +0x1178    } | .HwPassiveInitRoutine
        _m115 msi_mode_t                                                                               msi_mode;                                         //{ +0x1140    +0x1180    +0x1070    +0x1180    } | .MsiMode
        _m116 uint64_t                                                                                 msi_interrupt_lock;                               //{ +0x1148    +0x1188    +0x1078    +0x1188    } | .MSIInterruptLock
        _m117 struct io::interrupt_message_info_t*                                                     msi_message_info;                                 //{ +0x1150    +0x1190    +0x1080    +0x1190    } | .MSIMessageInfo
        _m118 struct nt::group_affinity_t*                                                             msi_message_group_affinity;                       //{ +0x1158    +0x1198    +0x1088    +0x1198    } | .MSIMessageGroupAffinity
        _m119 uint8_t                                                                                  msi_supported;                                    //{ +0x1160    +0x11a0    +0x1090    +0x11a0    } | .MSISupported
        _m120 uint8_t                                                                                  msi_enabled;                                      //{ +0x1161    +0x11a1    +0x1091    +0x11a1    } | .MSIEnabled
        _m121 uint8_t                                                                                  contiguous;                                       //{ +0x1162    +0x11a2    +0x1092    +0x11a2    } | .Contiguous
        _m127 u12_perf_opt_flags_t                                                                     perf_opt_flags;                                   //{ +0x1163    +0x11a3    +0x1093    +0x11a3    } | .PerfOptFlags
        _m128 struct nt::device_relations_t*                                                           device_relations;                                 //{ +0x1168    +0x11a8    +0x1098    +0x11a8    } | .DeviceRelations
        _m129 struct stor::port::raid_power_context_t                                                  power_context;                                    //{ +0x1170    +0x11b0    +0x10a0    +0x11b0    } | .PowerContext
        _m130 struct stor::port::storport_extended_functions_t                                         extended_functions;                               //{ +0x1228    +0x1268    +0x1158    +0x1268    } | .ExtendedFunctions
        _m131 uint32_t                                                                                 device_node;                                      //{ +0x1280    +0x12c0    +0x11b0    +0x12c0    } | .DeviceNode
        _m132 union stor::port::raid_redirection_support_t                                             redirection_support;                              //{ +0x1284    +0x12c4    +0x11b4    +0x12c4    } | .RedirectionSupport
        _m133 uint16_t                                                                                 interrupt_redirection_groups;                     //{ +0x1286    +0x12c6    +0x11b6    +0x12c6    } | .InterruptRedirectionGroups
        _m134 int32_t                                                                                  concurrent_channels;                              //{ +0x1288    +0x12c8    +0x11b8    +0x12c8    } | .ConcurrentChannels
        _m135 concurrent_channel_tokens_t                                                              concurrent_channel_tokens;                        //{ +0x1290    +0x12d0    +0x11c0    +0x12d0    } | .ConcurrentChannelTokens
        _m136 uint8_t*                                                                                 interrupt_redirection_table;                      //{ +0x1298    +0x12d8    +0x11c8    +0x12d8    } | .InterruptRedirectionTable
        _m137 struct pci::common_header_t                                                              pci_configuration;                                //{ +0x12dc    +0x1310    +0x1200    +0x1310    } | .PciConfiguration
        _m138 power_setting_notification_t                                                             power_setting_notification;                       //{ +0x1320    +0x1350    +0x1240    +0x1350    } | .PowerSettingNotification
        _m139 volatile int32_t                                                                         state_change_in_progress;                         //{ +0x1338    +0x1368    +0x1258    +0x1368    } | .StateChangeInProgress
        _m140 uint32_t                                                                                 state_changed_entity;                             //{ +0x133c    +0x136c    +0x125c    +0x136c    } | .StateChangedEntity
        _m141 uint32_t                                                                                 state_change_entity_attributes;                   //{ +0x1340    +0x1370    +0x1260    +0x1370    } | .StateChangeEntityAttributes
        _m142 struct stor::port::stor_address_t*                                                       state_change_address;                             //{ +0x1348    +0x1378    +0x1268    +0x1378    } | .StateChangeAddress
        _m143 hw_state_change_t                                                                        hw_state_change;                                  //{ +0x1350    +0x1380    +0x1270    +0x1380    } | .HwStateChange
        _m144 void*                                                                                    state_change_context;                             //{ +0x1358    +0x1388    +0x1278    +0x1388    } | .StateChangeContext
        _m145 struct rtl::bitmap_t                                                                     buses_with_vm_luns_bitmap;                        //{ +0x1360    +0x1390    +0x1280    +0x1390    } | .BusesWithVmLunsBitmap
        _m146 uint32_t*                                                                                buses_with_vm_luns_bitmap_buffer;                 //{ +0x1370    +0x13a0    +0x1290    +0x13a0    } | .BusesWithVmLunsBitmapBuffer
        _m147 uint32_t                                                                                 num_work_items;                                   //{ +0x1378    +0x13a8    +0x1298    +0x13a8    } | .NumWorkItems
        _m148 uint8_t                                                                                  default_sense_byte_count;                         //{ +0x137c    +0x13ac    +0x129c    +0x13ac    } | .DefaultSenseByteCount
        _m149 uint8_t                                                                                  dump_power_ready;                                 //{ +0x137d    +0x13ad    +0x129d    +0x13ad    } | .DumpPowerReady
        _m150 uint8_t                                                                                  max_dump_level_enabled;                           //{ +0x137e    +0x13ae    +0x129e    +0x13ae    } | .MaxDumpLevelEnabled
        _m151 uint8_t                                                                                  vendor_specific_log_page_address;                 //{ +0x137f    +0x13af    +0x129f    +0x13af    } | .VendorSpecificLogPageAddress
        _m152 uint32_t                                                                                 max_device_dump_size;                             //{ +0x1380    +0x13b0    +0x12a0    +0x13b0    } | .MaxDeviceDumpSize
        _m153 uint64_t                                                                                 io_latency_cap;                                   //{ +0x1388    +0x13b8    +0x12a8    +0x13b8    } | .IoLatencyCap
        _m154 uint32_t                                                                                 raid_log_list_index;                              //{ +0x13c0    +0x13c0    +0x12c0    +0x13c0    } | .RaidLogListIndex
        _m155 uint32_t                                                                                 raid_log_list_size;                               //{ +0x13c4    +0x13c4    +0x12c4    +0x13c4    } | .RaidLogListSize
        _m156 struct stor::port::raid_log_entry_t*                                                     raid_log_list;                                    //{ +0x13c8    +0x13c8    +0x12c8    +0x13c8    } | .RaidLogList
        _m157 union nt::slist_header_t                                                                 units_pending_power_up_list;                      //{ +0x13d0    +0x13d0    +0x12d0    +0x13d0    } | .UnitsPendingPowerUpList
        _m158 struct stor::port::raid_adapter_pofx_t*                                                  po_fx;                                            //{ +0x13e0    +0x13e0    +0x12e0    +0x13e0    } | .PoFx
        _m159 void*                                                                                    low_power_epoch_handle;                           //{ +0x13e8    +0x13e8    +0x12e8    +0x13e8    } | .LowPowerEpochHandle
        _m160 uint32_t                                                                                 d3_idle_timeout;                                  //{ +0x13f0    +0x13f0    +0x12f0    +0x13f0    } | .D3IdleTimeout
        _m161 void*                                                                                    coalescing_registration;                          //{ +0x13f8    +0x13f8    +0x12f8    +0x13f8    } | .CoalescingRegistration
        _m162 void*                                                                                    max_power_handle;                                 //{ +0x1400    +0x1400    +0x1300    +0x1400    } | .MaxPowerHandle
        _m163 nt::unicode_view                                                                         cooling_interface_symlink;                        //{ +0x1408    +0x1408    +0x1308    +0x1408    } | .CoolingInterfaceSymlink
        _m164 struct stor::port::raid_unit_extension_t*                                                crash_dump_unit;                                  //{ +0x1418    +0x1418    +0x1318    +0x1418    } | .CrashDumpUnit
        _m165 parent_crashdump_interface_t                                                             parent_crashdump_interface;                       //{ +0x1420    +0x1420    +0x1320    +0x1420    } | .ParentCrashdumpInterface
        _m166 struct nt::guid_t                                                                        adapter_guid;                                     //{ +0x1448    +0x1448    +0x1348    +0x1448    } | .AdapterGuid
        _m167 uint32_t                                                                                 completions_during_reset;                         //{ +0x1458    +0x1460    +0x1360    +0x1460    } | .CompletionsDuringReset
        _m171 telemetry_hierarchical_reset_lun_bucket_t                                                telemetry_hierarchical_reset_lun_bucket;          //{ +0x145c    +0x1464    +0x1364    +0x1464    } | .TelemetryHierarchicalResetLunBucket
        _m175 telemetry_hierarchical_reset_target_bucket_t                                             telemetry_hierarchical_reset_target_bucket;       //{ +0x1498    +0x14a0    +0x13a0    +0x14a0    } | .TelemetryHierarchicalResetTargetBucket
        _m176 uint64_t                                                                                 last_cs_state_change;                             //{ +0x14d8    +0x14e0    +0x13e0    +0x14e0    } | .LastCSStateChange
        _m177 uint64_t                                                                                 last_io_coalescing_on_start_time;                 //{ +0x14e0    +0x14e8    +0x13e8    +0x14e8    } | .LastIOCoalescingOnStartTime
        _m178 uint64_t                                                                                 io_coalescing_on_duration;                        //{ +0x14e8    +0x14f0    +0x13f0    +0x14f0    } | .IOCoalescingOnDuration
        _m179 uint64_t                                                                                 first_dpnr_time_after_cs;                         //{ +0x14f0    +0x14f8    +0x13f8    +0x14f8    } | .FirstDPNRTimeAfterCS
        _m180 uint64_t                                                                                 last_dpnr_start_time;                             //{ +0x14f8    +0x1500    +0x1400    +0x1500    } | .LastDPNRStartTime
        _m181 uint64_t                                                                                 dpnr_duration_in_cs;                              //{ +0x1500    +0x1508    +0x1408    +0x1508    } | .DPNRDurationInCS
        _m182 uint64_t                                                                                 last_f1_start_time;                               //{ +0x1508    +0x1510    +0x1410    +0x1510    } | .LastF1StartTime
        _m183 uint64_t                                                                                 f1_duration_in_cs;                                //{ +0x1510    +0x1518    +0x1418    +0x1518    } | .F1DurationInCS
        _m184 uint64_t                                                                                 active_references_in_cs;                          //{ +0x1518    +0x1520    +0x1420    +0x1520    } | .ActiveReferencesInCS
        _m185 uint64_t                                                                                 active_references_in_coalescing;                  //{ +0x1520    +0x1528    +0x1428    +0x1528    } | .ActiveReferencesInCoalescing
        _m186 uint32_t                                                                                 unit_timeouts_in_cs;                              //{ +0x1528    +0x1530    +0x1430    +0x1530    } | .UnitTimeoutsInCS
        _m187 uint32_t                                                                                 f0_transitions_since_cs_state_change;             //{ +0x152c    +0x1534    +0x1434    +0x1534    } | .F0TransitionsSinceCSStateChange
        _m188 uint32_t                                                                                 d0_transitions_since_cs_state_change;             //{ +0x1530    +0x1538    +0x1438    +0x1538    } | .D0TransitionsSinceCSStateChange
        _m189 uint32_t                                                                                 f0_transitions_long_since_cs_state_change;        //{ +0x1534    +0x153c    +0x143c    +0x153c    } | .F0TransitionsLongSinceCSStateChange
        _m190 uint32_t                                                                                 d0_transitions_long_since_cs_state_change;        //{ +0x1538    +0x1540    +0x1440    +0x1540    } | .D0TransitionsLongSinceCSStateChange
        _m191 uint8_t                                                                                  topology_info_logged;                             //{ +0x153c    +0x1560    +0x1460    +0x1560    } | .TopologyInfoLogged
        _m192 uint32_t                                                                                 periodic_max_gateway_queue_depth_at_sw_timeout;   //{ +0x1540    +0x1564    +0x1464    +0x1564    } | .PeriodicMaxGatewayQueueDepthAtSwTimeout
        _m193 uint32_t                                                                                 pause_count;                                      //{ +0x1544    +0x1568    +0x1468    +0x1568    } | .PauseCount
        _m194 uint32_t                                                                                 busy_count;                                       //{ +0x1548    +0x156c    +0x146c    +0x156c    } | .BusyCount
        _m195 uint8_t                                                                                  disable_telemetry_device_health;                  //{ +0x154c    +0x1570    +0x1470    +0x1570    } | .DisableTelemetryDeviceHealth
        _m196 uint32_t                                                                                 miniport_firmware_data_structure_version;         //{ +0x1550    +0x1574    +0x1474    +0x1574    } | .MiniportFirmwareDataStructureVersion
        _m197 struct pci::d3cold_support_interface_t*                                                  d3_cold_interface;                                //{ +0x1558    +0x1578    +0x1478    +0x1578    } | .D3ColdInterface
        _m198 void*                                                                                    protocol_command_effects;                         //{ +0x1560    +0x1588    +0x1488    +0x1588    } | .ProtocolCommandEffects
        _m199 struct nt::ktimer_t                                                                      queue_wait_check_timer;                           //{ +0x1568    +0x1590    +0x1490    +0x1590    } | .QueueWaitCheckTimer
        _m200 struct nt::kdpc_t                                                                        queue_wait_check_dpc;                             //{ +0x15a8    +0x15d0    +0x14d0    +0x15d0    } | .QueueWaitCheckDpc
        _m201 uint64_t                                                                                 qos_lock;                                         //{ +0x15e8    +0x1610    +0x1510    +0x1610    } | .QosLock
        _m202 uint32_t                                                                                 qos_unit_count_for_wait_timeout;                  //{ +0x15f0    +0x1618    +0x1518    +0x1618    } | .QosUnitCountForWaitTimeout
        _m203 struct stor::port::raid_rpmb_capabilities_t                                              rpmb;                                             //{ +0x15f8    +0x1620    +0x1520    +0x1620    } | .Rpmb
        _m204 uint32_t                                                                                 power_srb_timeout;                                //{ +0x1638    +0x1660    +0x1560    +0x1660    } | .PowerSrbTimeout
                                                                                                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                              
        //                                                                                                                                             
        _m205 volatile int32_t                                                                         adapter_device_reset_lock;                        //{ +0x0100    +0x0110    +0x0100    } | .AdapterDeviceResetLock
        _m206 uint32_t                                                                                 hierarchical_reset_succeeded_at_bus;              //{ +0x12e0    +0x11d0    +0x12e0    } | .HierarchicalResetSucceededAtBus
        _m207 uint32_t                                                                                 hierarchical_reset_succeeded_at_target;           //{ +0x12e4    +0x11d4    +0x12e4    } | .HierarchicalResetSucceededAtTarget
        _m208 uint32_t                                                                                 hierarchical_reset_succeeded_at_lun;              //{ +0x12e8    +0x11d8    +0x12e8    } | .HierarchicalResetSucceededAtLun
        _m209 uint32_t                                                                                 hierarchical_reset_count_internal;                //{ +0x12ec    +0x11dc    +0x12ec    } | .HierarchicalResetCountInternal
        _m210 uint32_t                                                                                 hierarchical_reset_count_app;                     //{ +0x12f0    +0x11e0    +0x12f0    } | .HierarchicalResetCountApp
        _m211 uint32_t                                                                                 max_dpc_completion_count;                         //{ +0x12f4    +0x11e4    +0x12f4    } | .MaxDpcCompletionCount
        _m212 uint32_t                                                                                 max_dpc_completion_time_ticks;                    //{ +0x12f8    +0x11e8    +0x12f8    } | .MaxDpcCompletionTimeTicks
        _m213 uint32_t                                                                                 completions_for_longest_dpc;                      //{ +0x12fc    +0x11ec    +0x12fc    } | .CompletionsForLongestDpc
        _m214 wchar_t*                                                                                 miniport_name;                                    //{ +0x1300    +0x11f0    +0x1300    } | .MiniportName
        _m215 wchar_t*                                                                                 adapter_id;                                       //{ +0x1308    +0x11f8    +0x1308    } | .AdapterId
        _m216 wchar_t*                                                                                 adapter_serial_number;                            //{ +0x1458    +0x1358    +0x1458    } | .AdapterSerialNumber
        _m217 uint64_t                                                                                 first_d_fx_power_down_time_after_cs;              //{ +0x1548    +0x1448    +0x1548    } | .FirstDFxPowerDownTimeAfterCS
        _m218 uint64_t                                                                                 last_d_fx_power_down_start_time;                  //{ +0x1550    +0x1450    +0x1550    } | .LastDFxPowerDownStartTime
        _m219 uint64_t                                                                                 d_fx_power_down_duration_in_cs;                   //{ +0x1558    +0x1458    +0x1558    } | .DFxPowerDownDurationInCS
        _m220 struct ndis::device_reset_interface_standard_t*                                          reset_interface;                                  //{ +0x1580    +0x1480    +0x1580    } | .ResetInterface
        _m221 struct stor::port::stor_hmb_range_t*                                                     hmb_range_list;                                   //{ +0x1658    +0x1558    +0x1658    } | .HmbRangeList
        _m222 crypto_capabilities_t                                                                    crypto_capabilities;                              //{ +0x1668    +0x1568    +0x1668    } | .CryptoCapabilities
        _m223 struct stor::port::raid_crypto_key_table_t                                               crypto_key_table;                                 //{ +0x1670    +0x1570    +0x1670    } | .CryptoKeyTable
        _m224 uint32_t                                                                                 zone_device_write_errors;                         //{ +0x1688    +0x1588    +0x1688    } | .ZoneDeviceWriteErrors
        _m225 uint32_t                                                                                 zone_device_errors;                               //{ +0x168c    +0x158c    +0x168c    } | .ZoneDeviceErrors
        _m226 uint32_t                                                                                 zone_write_overflow_entries;                      //{ +0x1690    +0x1590    +0x1690    } | .ZoneWriteOverflowEntries
        _m227 uint32_t                                                                                 busy_retry_count;                                 //{ +0x1694    +0x1594    +0x1694    } | .BusyRetryCount
        _m228 uint32_t                                                                                 busy_pause_time_in_ms;                            //{ +0x1698    +0x1598    +0x1698    } | .BusyPauseTimeInMs
        _m229 power_work_item_t                                                                        power_work_item;                                  //{ +0x16a0    +0x15a0    +0x16a0    } | .PowerWorkItem
        _m230 struct pci::npem_control_interface_t*                                                    npem_control_interface;                           //{ +0x16b8    +0x15b8    +0x16b8    } | .NpemControlInterface
        _m231 uint32_t                                                                                 dsm_led_supported_function;                       //{ +0x16d8    +0x15c0    +0x16d8    } | .DsmLedSupportedFunction
        _m232 union stor::port::dsm_pci_ssd_led_state_t                                                dsm_led_supported_states;                         //{ +0x16dc    +0x15c4    +0x16dc    } | .DsmLedSupportedStates
        _m233 nt::unicode_view                                                                         non_po_fx_miniport_interface_name;                //{ +0x16e0    +0x15c8    +0x16e0    } | .NonPoFxMiniportInterfaceName
        _m237 u20_d_fx_queue_t                                                                         d_fx_queue;                                       //{ +0x16f0    +0x15d8    +0x16f0    } | .DFxQueue
                                                                                                                                                       
        // Windows 10 v2004, Windows 10 v20H2                                                                                                          
        //                                                                                                                                             
        _m238 io_resource_work_item_t                                                                  io_resource_work_item;                            //{ +0x16c0    +0x16c0    } | .IoResourceWorkItem
                                                                                                                                                       
        // Windows 11                                                                                                                                  
        //                                                                                                                                             
        _m239 uint32_t                                                                                 device;                                           //{ +0x0320    } | .Device
        _m240 uint32_t                                                                                 function;                                         //{ +0x0324    } | .Function
        _m241 uint32_t                                                                                 in_use_gateway_count;                             //{ +0x0348    } | .InUseGatewayCount
        _m242 uint32_t                                                                                 allocated_gateway_count;                          //{ +0x034c    } | .AllocatedGatewayCount
        _m243 uint32_t                                                                                 processor_count_per_gateway;                      //{ +0x0350    } | .ProcessorCountPerGateway
        _m244 uint32_t                                                                                 io_resource_reclaim_tolerance_period_limit;       //{ +0x0354    } | .IoResourceReclaimTolerancePeriodLimit
        _m245 uint32_t                                                                                 low_water_mark_for_adapter;                       //{ +0x0358    } | .LowWaterMarkForAdapter
        _m246 uint32_t                                                                                 adapter_pause_count;                              //{ +0x035c    } | .AdapterPauseCount
        _m247 uint32_t                                                                                 adapter_busy_count;                               //{ +0x0360    } | .AdapterBusyCount
        _m248 uint32_t                                                                                 adapter_slow_path_count;                          //{ +0x0364    } | .AdapterSlowPathCount
        _m249 union stor::port::storage_indicator_state_t                                              led_state;                                        //{ +0x15f8    } | .LedState
        _m250 uint32_t                                                                                 pci_device_type;                                  //{ +0x15fc    } | .PciDeviceType
        _m251 int32_t                                                                                  deferred_update_associated_units_identity_items;  //{ +0x1600    } | .DeferredUpdateAssociatedUnitsIdentityItems
        _m252 struct nt::ktimer_t                                                                      io_resource_reclaim_timer;                        //{ +0x1608    } | .IoResourceReclaimTimer
        _m253 struct nt::kdpc_t                                                                        io_resource_reclaim_timer_dpc;                    //{ +0x1648    } | .IoResourceReclaimTimerDpc
        _m254 struct pci::msix_table_config_interface_t                                                msix_table_config_interface;                      //{ +0x1688    } | .MSIXTableConfigInterface
        _m255 sdk::array<uint16_t, 3>                                                                  event_count;                                      //{ +0x16d0    } | .EventCount
        _m256 identify_controller_data_t                                                               identify_controller_data;                         //{ +0x16d8    } | .IdentifyControllerData
        _m257 miniport_system_thread_context_t                                                         miniport_system_thread_context;                   //{ +0x16e0    } | .MiniportSystemThreadContext
        _m258 uint32_t                                                                                 po_fx_place_holder_d3_idle_timeout;               //{ +0x16f0    } | .PoFxPlaceHolderD3IdleTimeout
        _m259 nt::unicode_view                                                                         mfnd_interface_name;                              //{ +0x16f8    } | .MFNDInterfaceName
        _m260 enum stor::port::mfnd_operation_privilege_t                                              mfnd_operation_privilege;                         //{ +0x1708    } | .MFNDOperationPrivilege
        _m261 enum stor::port::mfnd_operation_mode_t                                                   mfnd_operation_mode;                              //{ +0x170c    } | .MFNDOperationMode
        _m262 mfnd_capabilities_t                                                                      mfnd_capabilities;                                //{ +0x1710    } | .MFNDCapabilities
        _m263 uint32_t                                                                                 powered_down_unit_count;                          //{ +0x1718    } | .PoweredDownUnitCount
        _m264 void*                                                                                    pdc_idle_resiliency_engaged_handle;               //{ +0x1720    } | .PdcIdleResiliencyEngagedHandle
                                                                                                                                                       
        // Windows 10 v1607                                                                                                                            
        //                                                                                                                                             
        _m265 uint32_t                                                                                 sqm_hierarchical_reset_succeeded_at_bus;          //{ +0x12a0    } | .SqmHierarchicalResetSucceededAtBus
        _m266 uint32_t                                                                                 sqm_hierarchical_reset_succeeded_at_target;       //{ +0x12a4    } | .SqmHierarchicalResetSucceededAtTarget
        _m267 uint32_t                                                                                 sqm_hierarchical_reset_succeeded_at_lun;          //{ +0x12a8    } | .SqmHierarchicalResetSucceededAtLun
        _m268 uint32_t                                                                                 sqm_hierarchical_reset_count_internal;            //{ +0x12ac    } | .SqmHierarchicalResetCountInternal
        _m269 uint32_t                                                                                 sqm_hierarchical_reset_count_app;                 //{ +0x12b0    } | .SqmHierarchicalResetCountApp
        _m270 uint32_t                                                                                 sqm_max_dpc_completion_count;                     //{ +0x12b4    } | .SqmMaxDpcCompletionCount
        _m271 uint32_t                                                                                 sqm_max_dpc_completion_time_ticks;                //{ +0x12b8    } | .SqmMaxDpcCompletionTimeTicks
        _m272 uint32_t                                                                                 sqm_completions_for_longest_dpc;                  //{ +0x12bc    } | .SqmCompletionsForLongestDpc
        _m273 wchar_t*                                                                                 sqm_miniport_name;                                //{ +0x12c0    } | .SqmMiniportName
        _m274 wchar_t*                                                                                 sqm_adapter_id;                                   //{ +0x12c8    } | .SqmAdapterId
        _m275 uint32_t                                                                                 sqm_random_id;                                    //{ +0x12d0    } | .SqmRandomId
        _m276 uint32_t                                                                                 sqm_save_total_resource_alloc_failures_logged;    //{ +0x12d4    } | .SqmSaveTotalResourceAllocFailuresLogged
        _m277 uint32_t                                                                                 sqm_save_highest_outstanding_max_logged;          //{ +0x12d8    } | .SqmSaveHighestOutstandingMaxLogged
        _m278 struct nt::mdl_t*                                                                        hmb_mdl_list;                                     //{ +0x1630    } | .HmbMdlList
                                                                                                                                                       
        SDK_MAGIC_PROPERTIES( "_RAID_ADAPTER_EXTENSION.$", 0x1740, true, 0xb86fcaf43862480d );                                                         
        SDK_DYNAMIC_SIZE( raid_adapter_extension_t );                                                                                                  
    };                                                                                                                                                 
};
#include "magic/raid_adapter_extension_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_adapter_extension_t::u4_deferred_list_t, 0x50 );
SDK_VERIFY( struct stor::port::raid_adapter_extension_t::u8_deferred_pause_resume_context_t, 0xb0 );
SDK_VERIFY( struct stor::port::raid_adapter_extension_t::u12_perf_opt_flags_t, 0x1 );
SDK_VERIFY( struct stor::port::raid_adapter_extension_t::u16_telemetry_hierarchical_reset_lun_bucket_t, 0xc );
SDK_VERIFY( struct stor::port::raid_adapter_extension_t::u20_telemetry_hierarchical_reset_target_bucket_t, 0xc );
SDK_VERIFY( struct stor::port::raid_adapter_extension_t::u20_d_fx_queue_t, 0x20 );
