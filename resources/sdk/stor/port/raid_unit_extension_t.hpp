#pragma once
#include <sdkgen/support_library.hpp>
#include "device_state_t.hpp"
#include "raid_address_t.hpp"
#include "../../nt/guid_t.hpp"
#include "../../nt/kdpc_t.hpp"
#include "raid_unit_qos_t.hpp"
#include "stor_identity_t.hpp"
#include "../../io/queue_t.hpp"
#include "queue_tag_list_t.hpp"
#include "stor_addr_btl8_t.hpp"
#include "../../nt/kevent_t.hpp"
#include "../../nt/ktimer_t.hpp"
#include "../../rtl/bitmap_t.hpp"
#include "raid_object_type_t.hpp"
#include "raid_power_state_t.hpp"
#include "storage_bus_type_t.hpp"
#include "raid_io_resources_t.hpp"
#include "stor_scsi_address_t.hpp"
#include "stor_scsi_identity_t.hpp"
#include "storage_dump_event_t.hpp"
#include "../../nt/slist_entry_t.hpp"
#include "raid_unit_attributes_t.hpp"
#include "raid_deferred_element_t.hpp"
#include "raid_work_item_context_t.hpp"
#include "telemetry_unit_extension_t.hpp"
#include "stor_async_notify_context_t.hpp"
#include "storage_powerup_reason_type_t.hpp"
#include "raid_telemetry_node_counters_t.hpp"
#include "raid_shared_work_item_context_t.hpp"
#include "raid_unit_registry_parameters_t.hpp"
#include "../../acpi/interface_standard2_t.hpp"
#include "raid_telemetry_unique_error_log_t.hpp"
#include "raid_telemetry_sampled_error_log_t.hpp"

namespace ex  { struct rundown_ref_cache_aware_t;  }
namespace io  { struct workitem_t;                 }
namespace nt  { struct device_object_t;            }
namespace nt  { struct irp_t;                      }
namespace pci { struct d3cold_support_interface_t; }

#include "magic/raid_unit_extension_t.start.hpp"
namespace stor::port
{
    struct raid_unit_pofx_t;
    struct stor_event_queue_t;
    struct raid_memory_region_t;
    struct raid_adapter_extension_t;
    struct raid_telemetry_perf_bucket_t;
    struct nvme_identify_namespace_data_t;
    struct raid_telemetry_io_size_bucket_t;
    struct raid_telemetry_latency_bucket_t;
    struct raid_unit_extension_per_processor_t;
    struct nvme_identify_specific_namespace_io_command_set_t;

    // [struct _RAID_UNIT_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_unit_extension_t                                                                                                  
    {                                                                                                                             
        struct u0_flags_t                                                                                                         
        {                                                                                                                         
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                        
            //                                                                                                                    
            _m014 uint1_t  device_claimed;                                                                                          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DeviceClaimed
            _m015 uint1_t  enumerated;                                                                                              //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Enumerated
            _m016 uint1_t  present;                                                                                                 //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Present
            _m017 uint1_t  temporary;                                                                                               //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Temporary
            _m018 uint1_t  wmi_initialized;                                                                                         //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .WmiInitialized
            _m019 uint1_t  zombie;                                                                                                  //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .Zombie
            _m020 uint1_t  rescan_needed;                                                                                           //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .RescanNeeded
            _m021 uint1_t  powering_up;                                                                                             //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .PoweringUp
            _m022 uint1_t  powering_down;                                                                                           //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .PoweringDown
            _m023 uint1_t  d3_cold_supported;                                                                                       //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .D3ColdSupported
            _m024 uint1_t  d3_cold_enabled;                                                                                         //{ +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  } | .D3ColdEnabled
            _m025 uint1_t  device_initialized;                                                                                      //{ +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  } | .DeviceInitialized
            _m026 uint1_t  disabled_pending_timer;                                                                                  //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .DisabledPendingTimer
            _m027 uint1_t  dump_active_not_capable;                                                                                 //{ +0x0001@6  +0x0001@6  +0x0001@6  +0x0001@6  } | .DumpActiveNotCapable
            _m028 uint1_t  registered_for_po_fx;                                                                                    //{ +0x0001@7  +0x0001@7  +0x0001@7  +0x0001@7  } | .RegisteredForPoFx
            _m029 uint1_t  boot_unit;                                                                                               //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .BootUnit
            _m030 uint1_t  unresponsive;                                                                                            //{ +0x0002@1  +0x0002@1  +0x0002@1  +0x0002@1  } | .Unresponsive
            _m031 uint1_t  dump_always_power_on;                                                                                    //{ +0x0002@2  +0x0002@2  +0x0002@2  +0x0002@2  } | .DumpAlwaysPowerOn
                                                                                                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                                                                        
            //                                                                                                                    
            _m032 uint1_t  active_reference_on_adapter;                                                                             //{ +0x0001@3  +0x0001@3  +0x0001@3  } | .ActiveReferenceOnAdapter
                                                                                                                                  
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                        
            //                                                                                                                    
            _m033 uint1_t  vm_lun_interface_state;                                                                                  //{ +0x0002@3  +0x0002@3  +0x0002@3  } | .VmLunInterfaceState
            _m034 uint1_t  supports_ata_information;                                                                                //{ +0x0002@4  +0x0002@4  +0x0002@4  } | .SupportsAtaInformation
            _m035 uint1_t  device_failed;                                                                                           //{ +0x0002@5  +0x0002@5  +0x0002@5  } | .DeviceFailed
            _m036 uint1_t  removable;                                                                                               //{ +0x0002@6  +0x0002@6  +0x0002@6  } | .Removable
            _m037 uint1_t  surprise_removal_ok;                                                                                     //{ +0x0002@7  +0x0002@7  +0x0002@7  } | .SurpriseRemovalOK
            _m038 uint1_t  smr_resource_failed;                                                                                     //{ +0x0003@0  +0x0003@0  +0x0003@0  } | .SMRResourceFailed
            _m039 uint1_t  d_fx_power_down_active;                                                                                  //{ +0x0003@1  +0x0003@1  +0x0003@1  } | .DFxPowerDownActive
            _m040 uint1_t  d_fx_po_notified_adaptive_d3_engaged;                                                                    //{ +0x0003@2  +0x0003@2  +0x0003@2  } | .DFxPoNotifiedAdaptiveD3Engaged
            _m041 uint1_t  device_failure_reported_to_whea;                                                                         //{ +0x0003@3  +0x0003@3  +0x0003@3  } | .DeviceFailureReportedToWHEA
                                                                                                                                  
            // Windows 11                                                                                                         
            //                                                                                                                    
            _m042 uint1_t  unused_bit;                                                                                              //{ +0x0001@3  } | .UnusedBit
            _m043 uint1_t  io_size_distribution_enabled;                                                                            //{ +0x0003@4  } | .IoSizeDistributionEnabled
            _m044 uint1_t  disable_runtime_power_bypass_po_fx;                                                                      //{ +0x0003@5  } | .DisableRuntimePowerBypassPoFx
            _m045 uint32_t as_ulong;                                                                                                //{ +0x0000    } | .AsUlong
                                                                                                                                  
            SDK_MAGIC_PROPERTIES( "_RAID_UNIT_EXTENSION.Flags.$", 0x8, true, 0xb57cf3016109f711 );                                                                                        
            SDK_FIXED_SIZE( u0_flags_t, 0x8 );                                                                                        
        };                                                                                                                        
                                                                                                                                  
        union u4_interlocked_flags_t                                                                                              
        {                                                                                                                         
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                  
            //                                                                                                                    
            _m47 uint1_t  po_fx_registration_pending;                                                                               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PoFxRegistrationPending
            _m48 uint1_t  power_cycle_count_save_pending;                                                                           //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .PowerCycleCountSavePending
            _m49 uint32_t as_ulong;                                                                                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUlong
                                                                                                                                  
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                  
            //                                                                                                                    
            _m50 uint1_t  pending_timer_enabled;                                                                                    //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .PendingTimerEnabled
                                                                                                                                  
            SDK_MAGIC_PROPERTIES( "_RAID_UNIT_EXTENSION.InterlockedFlags.$", 0x4, true, 0xed811501ca89d5b2 );                                                                                  
            SDK_FIXED_SIZE( u4_interlocked_flags_t, 0x4 );                                                                                  
        };                                                                                                                        
                                                                                                                                  
        struct u8_deferred_list_t                                                                                                 
        {                                                                                                                         
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                      
            //                                                                                                                    
            _m74 struct stor::port::raid_deferred_element_t pause_device;                                                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PauseDevice
            _m75 struct stor::port::raid_deferred_element_t resume_device;                                                          //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ResumeDevice
            _m76 struct stor::port::raid_deferred_element_t device_busy;                                                            //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .DeviceBusy
            _m77 struct stor::port::raid_deferred_element_t device_ready;                                                           //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .DeviceReady
            _m78 struct stor::port::raid_deferred_element_t async_notification;                                                     //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .AsyncNotification
                                                                                                                                  
            SDK_MAGIC_PROPERTIES( "_RAID_UNIT_EXTENSION.DeferredList.$", 0x190, true, 0x6a87d9f2c88f6373 );                                                                      
            SDK_FIXED_SIZE( u8_deferred_list_t, 0x190 );                                                                          
        };                                                                                                                        
                                                                                                                                  
        struct u12_pending_power_up_context_t                                                                                     
        {                                                                                                                         
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                      
            //                                                                                                                    
            _n02 uint8_t           f_state_transition;                                                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FStateTransition
            _n03 uint8_t           d_state_transition;                                                                              //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .DStateTransition
            _n04 uint32_t          f_state;                                                                                         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .FState
            _n05 struct nt::irp_t* power_irp;                                                                                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PowerIrp
                                                                                                                                  
            SDK_MAGIC_PROPERTIES( "_RAID_UNIT_EXTENSION.PendingPowerUpContext.$", 0x10, true, 0xef21b934d3b83a42 );                                                                      
            SDK_FIXED_SIZE( u12_pending_power_up_context_t, 0x10 );                                                                      
        };                                                                                                                        
                                                                                                                                  
        struct u16_d_fx_queue_t                                                                                                   
        {                                                                                                                         
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                     
            //                                                                                                                    
            _n76 nt::list_entry_t list;                                                                                             //{ +0x0000    +0x0000    +0x0000    } | .List
            _n77 uint32_t         count;                                                                                            //{ +0x0010    +0x0010    +0x0010    } | .Count
            _n78 uint64_t         lock;                                                                                             //{ +0x0018    +0x0018    +0x0018    } | .Lock
                                                                                                                                  
            SDK_MAGIC_PROPERTIES( "_RAID_UNIT_EXTENSION.DFxQueue.$", 0x20, true, 0x54a5e11505c0bf4b );                                                         
            SDK_FIXED_SIZE( u16_d_fx_queue_t, 0x20 );                                                                             
        };                                                                                                                        
                                                                                                                                  
        using address_t =                               sdk::variant<struct stor::port::stor_scsi_address_t, union stor::port::raid_address_t>;                                                   
        using identity_t =                              sdk::variant<struct stor::port::stor_scsi_identity_t, struct stor::port::stor_identity_t>;                                                   
        using registry_parameters_t =                   struct stor::port::raid_unit_registry_parameters_t;                                                   
        using power_work_item_t =                       struct stor::port::raid_shared_work_item_context_t;                                                   
        using telemetry_sampled_error_log_t =           struct stor::port::raid_telemetry_sampled_error_log_t;                                                   
        using telemetry_unique_error_log_t =            struct stor::port::raid_telemetry_unique_error_log_t;                                                   
        using per_processor_data_t =                    struct stor::port::raid_unit_extension_per_processor_t*;                                                   
        using telemetry_counters_per_numa_node_t =      struct stor::port::raid_telemetry_node_counters_t*;                                                   
        using telemetry_perf_previous_node_counters_t = struct stor::port::raid_telemetry_node_counters_t;                                                   
        using crashdump_notify_routine_t =              sdk::function<int32_t(enum stor::port::storage_dump_event_t, void*)>*;                                                   
        using telemetry_latency_buckets_t =             struct stor::port::raid_telemetry_latency_bucket_t*;                                                   
        using telemetry_io_size_buckets_t =             struct stor::port::raid_telemetry_io_size_bucket_t*;                                                   
        using telemetry_previous_latency_buckets_t =    struct stor::port::raid_telemetry_latency_bucket_t*;                                                   
        using telemetry_previous_io_size_buckets_t =    struct stor::port::raid_telemetry_io_size_bucket_t*;                                                   
        using identify_namespace_data_t =               struct stor::port::nvme_identify_namespace_data_t*;                                                   
        using identify_namespace_io_command_set_t =     struct stor::port::nvme_identify_specific_namespace_io_command_set_t*;                                                   
                                                                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                       
        //                                                                                                                        
        _m000 enum stor::port::raid_object_type_t                              object_type;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ObjectType
        _m001 struct nt::device_object_t*                                      device_object;                                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceObject
        _m002 void*                                                            unit_extension;                                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .UnitExtension
        _m003 struct stor::port::raid_adapter_extension_t*                     adapter;                                             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Adapter
        _m004 uint64_t                                                         slow_lock;                                           //{ +0x0020    +0x0028    +0x0028    +0x0028    } | .SlowLock
        _m005 enum stor::port::device_state_t                                  device_state;                                        //{ +0x0028    +0x0030    +0x0030    +0x0030    } | .DeviceState
        _m006 nt::list_entry_t                                                 next_unit;                                           //{ +0x0030    +0x0038    +0x0038    +0x0038    } | .NextUnit
        _m007 nt::list_entry_t                                                 unit_table_link;                                     //{ +0x0040    +0x0048    +0x0048    +0x0048    } | .UnitTableLink
        _m008 struct stor::port::stor_addr_btl8_t                              stor_address_btl8;                                   //{ +0x0050    +0x0058    +0x0058    +0x0058    } | .StorAddressBTL8
        _m009 uint16_t                                                         address_type;                                        //{ +0x0050    +0x0058    +0x0058    +0x0058    } | .AddressType
        _m010 uint16_t                                                         address_port;                                        //{ +0x0052    +0x005a    +0x005a    +0x005a    } | .AddressPort
        _m011 uint32_t                                                         address_length;                                      //{ +0x0054    +0x005c    +0x005c    +0x005c    } | .AddressLength
        _m012 address_t                                                        address;                                             //{ +0x0058    +0x0060    +0x0060    +0x0060    } | .Address
        _m013 identity_t                                                       identity;                                            //{ +0x0060    +0x0068    +0x0068    +0x0068    } | .Identity
        _m046 sdk::variant<u0_flags_t, u0_flags_t>                             flags;                                               //{ +0x0098    +0x01c0    +0x01c0    +0x01c0    } | .Flags
        _m051 u4_interlocked_flags_t                                           interlocked_flags;                                   //{ +0x00a0    +0x01c8    +0x01c8    +0x01c8    } | .InterlockedFlags
        _m052 struct nt::kevent_t                                              zero_outstanding_event;                              //{ +0x00a8    +0x01d0    +0x01d0    +0x01d0    } | .ZeroOutstandingEvent
        _m053 struct stor::port::raid_power_state_t                            power;                                               //{ +0x00c0    +0x01e8    +0x01e8    +0x01e8    } | .Power
        _m054 struct stor::port::stor_event_queue_t*                           pending_queue;                                       //{ +0x00d0    +0x01f8    +0x01f8    +0x01f8    } | .PendingQueue
        _m055 struct stor::port::queue_tag_list_t                              tag_list;                                            //{ +0x0100    +0x0200    +0x0200    +0x0200    } | .TagList
        _m056 struct io::queue_t                                               io_queue;                                            //{ +0x0180    +0x0280    +0x0280    +0x0280    } | .IoQueue
        _m057 uint32_t                                                         max_queue_depth;                                     //{ +0x0220    +0x0328    +0x0328    +0x0328    } | .MaxQueueDepth
        _m058 enum stor::port::storage_powerup_reason_type_t                   powerup_reason;                                      //{ +0x0228    +0x0330    +0x0330    +0x0330    } | .PowerupReason
        _m059 struct acpi::interface_standard2_t                               acpi_interface;                                      //{ +0x0230    +0x0338    +0x0338    +0x0338    } | .AcpiInterface
        _m060 int32_t                                                          outstanding_count;                                   //{ +0x0288    +0x0390    +0x0390    +0x0390    } | .OutstandingCount
        _m061 uint32_t                                                         paging_path_count;                                   //{ +0x028c    +0x0394    +0x0394    +0x0394    } | .PagingPathCount
        _m062 uint32_t                                                         crash_dump_path_count;                               //{ +0x0290    +0x0398    +0x0398    +0x0398    } | .CrashDumpPathCount
        _m063 uint32_t                                                         hiber_path_count;                                    //{ +0x0294    +0x039c    +0x039c    +0x039c    } | .HiberPathCount
        _m064 struct nt::ktimer_t                                              pending_timer;                                       //{ +0x0298    +0x03a0    +0x03a0    +0x03a0    } | .PendingTimer
        _m065 struct nt::kdpc_t                                                pending_dpc;                                         //{ +0x02d8    +0x03e0    +0x03e0    +0x03e0    } | .PendingDpc
        _m066 struct nt::ktimer_t                                              pause_timer;                                         //{ +0x0318    +0x0420    +0x0420    +0x0420    } | .PauseTimer
        _m067 struct nt::kdpc_t                                                pause_timer_dpc;                                     //{ +0x0358    +0x0460    +0x0460    +0x0460    } | .PauseTimerDpc
        _m068 struct nt::kdpc_t                                                restart_dpc;                                         //{ +0x0398    +0x04a0    +0x04a0    +0x04a0    } | .RestartDpc
        _m069 struct stor::port::raid_memory_region_t*                         common_buffer_v_as;                                  //{ +0x03d8    +0x04e0    +0x04e0    +0x04e0    } | .CommonBufferVAs
        _m070 uint32_t                                                         common_buffer_size;                                  //{ +0x03e0    +0x04e8    +0x04e8    +0x04e8    } | .CommonBufferSize
        _m071 uint32_t                                                         common_buffer_blocks;                                //{ +0x03e4    +0x04ec    +0x04ec    +0x04ec    } | .CommonBufferBlocks
        _m072 uint32_t                                                         default_timeout;                                     //{ +0x03e8    +0x04f0    +0x04f0    +0x04f0    } | .DefaultTimeout
        _m073 uint64_t                                                         last_hierarchical_reset_end_time;                    //{ +0x0a28    +0x0500    +0x0500    +0x0500    } | .LastHierarchicalResetEndTime
        _m079 u8_deferred_list_t                                               deferred_list;                                       //{ +0x03f0    +0x0510    +0x0510    +0x0510    } | .DeferredList
        _m080 struct stor::port::raid_io_resources_t                           reset_resources;                                     //{ +0x0580    +0x06a0    +0x06a0    +0x06a0    } | .ResetResources
        _m081 int32_t                                                          reset_resources_acquired;                            //{ +0x05a0    +0x06c0    +0x06c0    +0x06c0    } | .ResetResourcesAcquired
        _m082 uint8_t                                                          sense_info_size;                                     //{ +0x05a4    +0x06c4    +0x06c4    +0x06c4    } | .SenseInfoSize
        _m083 uint8_t                                                          call_free_dump_ptr_srb;                              //{ +0x05a5    +0x06c5    +0x06c5    +0x06c5    } | .CallFreeDumpPtrSRB
        _m084 uint8_t                                                          dump_power_ready;                                    //{ +0x05a6    +0x06c6    +0x06c6    +0x06c6    } | .DumpPowerReady
        _m085 uint8_t                                                          stack_dump_power_ready;                              //{ +0x05a7    +0x06c7    +0x06c7    +0x06c7    } | .StackDumpPowerReady
        _m086 struct ex::rundown_ref_cache_aware_t*                            po_fx_rundown_protection;                            //{ +0x05a8    +0x06c8    +0x06c8    +0x06c8    } | .PoFxRundownProtection
        _m087 struct stor::port::raid_unit_pofx_t*                             po_fx;                                               //{ +0x05b0    +0x06d0    +0x06d0    +0x06d0    } | .PoFx
        _m088 struct pci::d3cold_support_interface_t*                          d3_cold_interface;                                   //{ +0x05b8    +0x06d8    +0x06d8    +0x06d8    } | .D3ColdInterface
        _m089 volatile int32_t                                                 power_up_required;                                   //{ +0x05c0    +0x06e0    +0x06e0    +0x06e0    } | .PowerUpRequired
        _m090 volatile int32_t                                                 power_down_required;                                 //{ +0x05c4    +0x06e4    +0x06e4    +0x06e4    } | .PowerDownRequired
        _m091 struct io::workitem_t*                                           hierarchical_reset_work_item;                        //{ +0x05c8    +0x06e8    +0x06e8    +0x06e8    } | .HierarchicalResetWorkItem
        _m092 int32_t                                                          hierarchical_reset_work_item_timeout_countdown;      //{ +0x05d0    +0x06f0    +0x06f0    +0x06f0    } | .HierarchicalResetWorkItemTimeoutCountdown
        _m093 int32_t                                                          hierarchical_reset_srb_timeout_countdown;            //{ +0x05d4    +0x06f4    +0x06f4    +0x06f4    } | .HierarchicalResetSrbTimeoutCountdown
        _m094 uint32_t                                                         hierarchical_reset_abort_count;                      //{ +0x05d8    +0x06f8    +0x06f8    +0x06f8    } | .HierarchicalResetAbortCount
        _m095 uint64_t                                                         hierarchical_reset_work_item_spin_lock;              //{ +0x05e0    +0x0700    +0x0700    +0x0700    } | .HierarchicalResetWorkItemSpinLock
        _m096 registry_parameters_t                                            registry_parameters;                                 //{ +0x05e8    +0x0708    +0x0708    +0x0708    } | .RegistryParameters
        _m097 struct stor::port::raid_unit_attributes_t                        unit_attributes;                                     //{ +0x0600    +0x0720    +0x0720    +0x0720    } | .UnitAttributes
        _m098 nt::unicode_view                                                 vm_lun_pnp_interface_name;                           //{ +0x0608    +0x0728    +0x0728    +0x0728    } | .VmLunPnpInterfaceName
        _m099 struct stor::port::raid_work_item_context_t                      quiesce_device_work_item;                            //{ +0x0618    +0x0738    +0x0738    +0x0738    } | .QuiesceDeviceWorkItem
        _m100 struct stor::port::stor_async_notify_context_t                   stor_async_notify;                                   //{ +0x0628    +0x0748    +0x0748    +0x0748    } | .StorAsyncNotify
        _m101 power_work_item_t                                                power_work_item;                                     //{ +0x0640    +0x0760    +0x0760    +0x0760    } | .PowerWorkItem
        _m106 u12_pending_power_up_context_t                                   pending_power_up_context;                            //{ +0x0658    +0x0778    +0x0778    +0x0778    } | .PendingPowerUpContext
        _m107 struct nt::slist_entry_t                                         pending_power_up_list_entry;                         //{ +0x0670    +0x0790    +0x0790    +0x0790    } | .PendingPowerUpListEntry
        _m108 nt::unicode_view                                                 ses_pnp_interface_name;                              //{ +0x0680    +0x07a0    +0x07a0    +0x07a0    } | .SesPnpInterfaceName
        _m109 uint64_t                                                         io_count_delayed_by_latency_cap;                     //{ +0x0690    +0x07b0    +0x07b0    +0x07b0    } | .IoCountDelayedByLatencyCap
        _m110 struct nt::guid_t                                                device_guid;                                         //{ +0x0698    +0x07b8    +0x07b8    +0x07b8    } | .DeviceGuid
        _m111 struct stor::port::telemetry_unit_extension_t                    telemetry_extension;                                 //{ +0x06a8    +0x07c8    +0x07c8    +0x07c8    } | .TelemetryExtension
        _m112 uint64_t                                                         first_dpnr_time_after_cs;                            //{ +0x06b0    +0x07d0    +0x07d0    +0x07d0    } | .FirstDPNRTimeAfterCS
        _m113 uint64_t                                                         last_f1_start_time;                                  //{ +0x06b8    +0x07d8    +0x07d8    +0x07d8    } | .LastF1StartTime
        _m114 uint64_t                                                         f1_duration_in_cs;                                   //{ +0x06c0    +0x07e0    +0x07e0    +0x07e0    } | .F1DurationInCS
        _m115 uint64_t                                                         last_dpnr_start_time;                                //{ +0x06c8    +0x07e8    +0x07e8    +0x07e8    } | .LastDPNRStartTime
        _m116 uint64_t                                                         dpnr_duration_in_cs;                                 //{ +0x06d0    +0x07f0    +0x07f0    +0x07f0    } | .DPNRDurationInCS
        _m117 uint64_t                                                         active_references_in_cs;                             //{ +0x06d8    +0x07f8    +0x07f8    +0x07f8    } | .ActiveReferencesInCS
        _m118 uint64_t                                                         active_references_in_coalescing;                     //{ +0x06e0    +0x0800    +0x0800    +0x0800    } | .ActiveReferencesInCoalescing
        _m119 uint32_t                                                         unit_timeouts_in_cs;                                 //{ +0x06e8    +0x0808    +0x0808    +0x0808    } | .UnitTimeoutsInCS
        _m120 uint32_t                                                         f0_transitions_since_cs_state_change;                //{ +0x06ec    +0x080c    +0x080c    +0x080c    } | .F0TransitionsSinceCSStateChange
        _m121 uint32_t                                                         d0_transitions_since_cs_state_change;                //{ +0x06f0    +0x0810    +0x0810    +0x0810    } | .D0TransitionsSinceCSStateChange
        _m122 uint32_t                                                         f0_transitions_long_since_cs_state_change;           //{ +0x06f4    +0x0814    +0x0814    +0x0814    } | .F0TransitionsLongSinceCSStateChange
        _m123 uint32_t                                                         d0_transitions_long_since_cs_state_change;           //{ +0x06f8    +0x0818    +0x0818    +0x0818    } | .D0TransitionsLongSinceCSStateChange
        _m124 uint64_t                                                         unresponsive_requests;                               //{ +0x0700    +0x0838    +0x0838    +0x0838    } | .UnresponsiveRequests
        _m125 uint64_t                                                         qos_guarantee_failures;                              //{ +0x0708    +0x0840    +0x0840    +0x0840    } | .QosGuaranteeFailures
        _m126 uint64_t                                                         timeouts_in_gateway;                                 //{ +0x0710    +0x0848    +0x0848    +0x0848    } | .TimeoutsInGateway
        _m127 uint64_t                                                         timeouts_in_lun_queue;                               //{ +0x0718    +0x0850    +0x0850    +0x0850    } | .TimeoutsInLunQueue
        _m128 uint32_t                                                         timeouts_in_miniport;                                //{ +0x0720    +0x0858    +0x0858    +0x0858    } | .TimeoutsInMiniport
        _m129 uint32_t                                                         periodic_max_device_count_at_sw_timeout;             //{ +0x0724    +0x085c    +0x085c    +0x085c    } | .PeriodicMaxDeviceCountAtSwTimeout
        _m130 uint32_t                                                         pause_device_count;                                  //{ +0x0728    +0x0860    +0x0860    +0x0860    } | .PauseDeviceCount
        _m131 uint32_t                                                         device_busy_count;                                   //{ +0x072c    +0x0864    +0x0864    +0x0864    } | .DeviceBusyCount
        _m132 uint32_t                                                         busy_completion_count;                               //{ +0x0730    +0x0868    +0x0868    +0x0868    } | .BusyCompletionCount
        _m133 uint32_t                                                         storp_trace_logging_performance_enabled;             //{ +0x0734    +0x08c4    +0x08c4    +0x08c4    } | .StorpTraceLoggingPerformanceEnabled
        _m134 int64_t                                                          telemetry_last_perf_collection_time_stamp;           //{ +0x0740    +0x08d0    +0x08d8    +0x08d0    } | .TelemetryLastPerfCollectionTimeStamp
        _m135 uint64_t                                                         telemetry_lock;                                      //{ +0x0758    +0x0910    +0x0920    +0x0910    } | .TelemetryLock
        _m136 telemetry_sampled_error_log_t                                    telemetry_sampled_error_log;                         //{ +0x0760    +0x0918    +0x0928    +0x0918    } | .TelemetrySampledErrorLog
        _m137 telemetry_unique_error_log_t                                     telemetry_unique_error_log;                          //{ +0x0920    +0x0ae0    +0x0af0    +0x0ae0    } | .TelemetryUniqueErrorLog
        _m138 uint32_t                                                         power_cycle_count;                                   //{ +0x09e8    +0x0c80    +0x0c90    +0x0c80    } | .PowerCycleCount
        _m139 int64_t                                                          initial_timestamp;                                   //{ +0x09f0    +0x0c88    +0x0c98    +0x0c88    } | .InitialTimestamp
        _m140 struct stor::port::raid_unit_qos_t                               qos;                                                 //{ +0x09f8    +0x0c90    +0x0ca0    +0x0c90    } | .Qos
                                                                                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                         
        //                                                                                                                        
        _m141 per_processor_data_t                                             per_processor_data;                                  //{ +0x0020    +0x0020    +0x0020    } | .PerProcessorData
        _m142 sdk::array<uint8_t, 9>                                           vendor_id;                                           //{ +0x00a0    +0x00a0    +0x00a0    } | .VendorId
        _m143 sdk::array<uint8_t, 17>                                          product_id;                                          //{ +0x00a9    +0x00a9    +0x00a9    } | .ProductId
        _m144 sdk::array<uint8_t, 256>                                         serial_number;                                       //{ +0x00ba    +0x00ba    +0x00ba    } | .SerialNumber
        _m145 sdk::array<uint8_t, 5>                                           product_revision;                                    //{ +0x01ba    +0x01ba    +0x01ba    } | .ProductRevision
        _m146 uint32_t                                                         logical_sector_size;                                 //{ +0x032c    +0x032c    +0x032c    } | .LogicalSectorSize
        _m147 int32_t                                                          outstanding_reset_count;                             //{ +0x04f4    +0x04f4    +0x04f4    } | .OutstandingResetCount
        _m148 uint32_t                                                         hierarchical_reset_success_count;                    //{ +0x04f8    +0x04f8    +0x04f8    } | .HierarchicalResetSuccessCount
        _m149 uint64_t                                                         first_d_fx_power_down_time_after_cs;                 //{ +0x0820    +0x0820    +0x0820    } | .FirstDFxPowerDownTimeAfterCS
        _m150 uint64_t                                                         last_d_fx_power_down_start_time;                     //{ +0x0828    +0x0828    +0x0828    } | .LastDFxPowerDownStartTime
        _m151 uint64_t                                                         d_fx_power_down_duration_in_cs;                      //{ +0x0830    +0x0830    +0x0830    } | .DFxPowerDownDurationInCS
        _m152 uint32_t                                                         zone_device_write_errors;                            //{ +0x086c    +0x086c    +0x086c    } | .ZoneDeviceWriteErrors
        _m153 uint32_t                                                         zone_write_overflow_entries;                         //{ +0x0870    +0x0870    +0x0870    } | .ZoneWriteOverflowEntries
        _m154 uint64_t                                                         total_device_queue_io_count;                         //{ +0x0878    +0x0878    +0x0878    } | .TotalDeviceQueueIoCount
        _m155 uint64_t                                                         total_device_queue_io_wait_duration;                 //{ +0x0880    +0x0880    +0x0880    } | .TotalDeviceQueueIoWaitDuration
        _m156 uint64_t                                                         max_device_queue_io_wait_duration;                   //{ +0x0888    +0x0888    +0x0888    } | .MaxDeviceQueueIoWaitDuration
        _m157 uint64_t                                                         device_queue_io_wait_exceeded_timeout_count;         //{ +0x0890    +0x0890    +0x0890    } | .DeviceQueueIoWaitExceededTimeoutCount
        _m158 uint64_t                                                         device_queue_io_busy_count;                          //{ +0x0898    +0x0898    +0x0898    } | .DeviceQueueIoBusyCount
        _m159 uint64_t                                                         device_queue_io_paused_count;                        //{ +0x08a0    +0x08a0    +0x08a0    } | .DeviceQueueIoPausedCount
        _m160 uint64_t                                                         device_queue_io_untagged_command_outstanding_count;  //{ +0x08a8    +0x08a8    +0x08a8    } | .DeviceQueueIoUntaggedCommandOutstandingCount
        _m161 uint64_t                                                         device_queue_io_paused_for_untagged_count;           //{ +0x08b0    +0x08b0    +0x08b0    } | .DeviceQueueIoPausedForUntaggedCount
        _m162 uint64_t                                                         device_queue_io_exceeded_threshold_count;            //{ +0x08b8    +0x08b8    +0x08b8    } | .DeviceQueueIoExceededThresholdCount
        _m163 uint32_t                                                         high_latency_io_count;                               //{ +0x08c0    +0x08c0    +0x08c0    } | .HighLatencyIoCount
        _m164 telemetry_counters_per_numa_node_t                               telemetry_counters_per_numa_node;                    //{ +0x08e0    +0x08f0    +0x08e0    } | .TelemetryCountersPerNumaNode
        _m165 telemetry_perf_previous_node_counters_t                          telemetry_perf_previous_node_counters;               //{ +0x08e8    +0x08f8    +0x08e8    } | .TelemetryPerfPreviousNodeCounters
        _m166 uint64_t                                                         telemetry_max_flush_latency;                         //{ +0x0900    +0x0910    +0x0900    } | .TelemetryMaxFlushLatency
        _m167 uint64_t                                                         telemetry_max_unmap_latency;                         //{ +0x0908    +0x0918    +0x0908    } | .TelemetryMaxUnmapLatency
        _m168 uint64_t                                                         telemetry_bytes_written;                             //{ +0x0c70    +0x0c80    +0x0c70    } | .TelemetryBytesWritten
        _m169 uint64_t                                                         telemetry_stream_bytes_written;                      //{ +0x0c78    +0x0c88    +0x0c78    } | .TelemetryStreamBytesWritten
        _m170 uint64_t                                                         zone_size;                                           //{ +0x0cc0    +0x0cd0    +0x0cc0    } | .ZoneSize
        _m171 uint8_t*                                                         cached_smart_data;                                   //{ +0x0cc8    +0x0cd8    +0x0cc8    } | .CachedSmartData
        _m172 enum stor::port::storage_bus_type_t                              bus_type;                                            //{ +0x0cd0    +0x0ce0    +0x0cd0    } | .BusType
        _m173 uint8_t*                                                         zone_pending_io_table;                               //{ +0x0cd8    +0x0ce8    +0x0cd8    } | .ZonePendingIoTable
        _m174 struct rtl::bitmap_t                                             zone_io_bit_map;                                     //{ +0x0ce0    +0x0cf0    +0x0ce0    } | .ZoneIoBitMap
        _m175 int64_t                                                          last_logical_block_address;                          //{ +0x0cf0    +0x0d00    +0x0cf0    } | .LastLogicalBlockAddress
        _m179 u16_d_fx_queue_t                                                 d_fx_queue;                                          //{ +0x0cf8    +0x0d08    +0x0cf8    } | .DFxQueue
        _m180 crashdump_notify_routine_t                                       crashdump_notify_routine;                            //{ +0x0d18    +0x0d28    +0x0d18    } | .CrashdumpNotifyRoutine
                                                                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                                                   
        //                                                                                                                        
        _m181 struct stor::port::raid_telemetry_perf_bucket_t*                 telemetry_perf_buckets;                              //{ +0x0738    +0x08c8    +0x08c8    } | .TelemetryPerfBuckets
        _m182 struct stor::port::raid_telemetry_perf_bucket_t*                 telemetry_perf_previous_counters;                    //{ +0x0748    +0x08d8    +0x08d8    } | .TelemetryPerfPreviousCounters
                                                                                                                                  
        // Windows 10 v1607                                                                                                       
        //                                                                                                                        
        _m183 uint32_t                                                         osc_data;                                            //{ +0x0224    } | .OscData
        _m184 int32_t                                                          reset_count;                                         //{ +0x03ec    } | .ResetCount
        _m185 uint8_t*                                                         telemetry_max_read_write_latency_per_numa_node;      //{ +0x0750    } | .TelemetryMaxReadWriteLatencyPerNumaNode
                                                                                                                                  
        // Windows 11                                                                                                             
        //                                                                                                                        
        _m186 telemetry_latency_buckets_t                                      telemetry_latency_buckets;                           //{ +0x08c8    } | .TelemetryLatencyBuckets
        _m187 telemetry_io_size_buckets_t                                      telemetry_io_size_buckets;                           //{ +0x08d0    } | .TelemetryIoSizeBuckets
        _m188 telemetry_previous_latency_buckets_t                             telemetry_previous_latency_buckets;                  //{ +0x08e0    } | .TelemetryPreviousLatencyBuckets
        _m189 telemetry_previous_io_size_buckets_t                             telemetry_previous_io_size_buckets;                  //{ +0x08e8    } | .TelemetryPreviousIoSizeBuckets
        _m190 sdk::array<uint16_t, 3>                                          event_count;                                         //{ +0x0d30    } | .EventCount
        _m191 nt::unicode_view                                                 zns_pnp_interface_name;                              //{ +0x0d38    } | .ZnsPnpInterfaceName
        _m192 identify_namespace_data_t                                        identify_namespace_data;                             //{ +0x0d48    } | .IdentifyNamespaceData
        _m193 identify_namespace_io_command_set_t                              identify_namespace_io_command_set;                   //{ +0x0d50    } | .IdentifyNamespaceIoCommandSet
        _m194 uint32_t                                                         active_reference_on_adapter;                         //{ +0x0d58    } | .ActiveReferenceOnAdapter
                                                                                                                                  
        SDK_MAGIC_PROPERTIES( "_RAID_UNIT_EXTENSION.$", 0xd40, true, 0x8e605db6f7a91a5e );                                                   
        SDK_DYNAMIC_SIZE( raid_unit_extension_t );                                                                                
    };                                                                                                                            
};
#include "magic/raid_unit_extension_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_unit_extension_t::u0_flags_t, 0x8 );
SDK_VERIFY( union stor::port::raid_unit_extension_t::u4_interlocked_flags_t, 0x4 );
SDK_VERIFY( struct stor::port::raid_unit_extension_t::u8_deferred_list_t, 0x190 );
SDK_VERIFY( struct stor::port::raid_unit_extension_t::u12_pending_power_up_context_t, 0x10 );
SDK_VERIFY( struct stor::port::raid_unit_extension_t::u16_d_fx_queue_t, 0x20 );
