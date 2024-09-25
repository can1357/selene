#pragma once
#include <sdkgen/support_library.hpp>
#include "clock_timer_mode_t.hpp"
#include "../nt/bus_data_type_t.hpp"
#include "processor_stat_type_t.hpp"
#include "../nt/interface_type_t.hpp"
#include "../kd/callback_action_t.hpp"
#include "../nt/kinterrupt_mode_t.hpp"
#include "../nt/kprofile_source_t.hpp"
#include "../nt/system_power_state_t.hpp"
#include "../nt/kinterrupt_polarity_t.hpp"

namespace cm   { struct resource_list_t;                    }
namespace dma  { struct iommu_interface_ex_t;               }
namespace dma  { struct iommu_interface_t;                  }
namespace ext  { struct iommu_device_id_t;                  }
namespace nt   { struct adapter_object_t;                   }
namespace nt   { struct bus_handler_t;                      }
namespace nt   { struct debug_device_descriptor_t;          }
namespace nt   { struct device_object_t;                    }
namespace nt   { struct driver_object_t;                    }
namespace nt   { struct fault_information_t;                }
namespace nt   { struct group_affinity_t;                   }
namespace nt   { struct guid_t;                             }
namespace nt   { struct hidden_processor_power_interface_t; }
namespace nt   { struct interrupt_remapping_info_t;         }
namespace nt   { struct interrupt_vector_data_t;            }
namespace nt   { struct iommu_dma_device_t;                 }
namespace nt   { struct kaffinity_ex_t;                     }
namespace nt   { struct kinterrupt_t;                       }
namespace nt   { struct loader_parameter_block_t;           }
namespace nt   { struct map_register_entry_t;               }
namespace nt   { struct mdl_t;                              }
namespace pci  { struct busmaster_descriptor_t;             }
namespace whea { struct error_record_section_descriptor_t;  }
namespace whea { struct processor_generic_error_section_t;  }

#include "magic/private_dispatch_t.start.hpp"
namespace hal
{
    struct lbr_entry_t;
    struct pmc_counters_t;
    struct iommu_dispatch_t;
    struct log_register_context_t;
    struct dp_replace_parameters_t;
    struct clock_timer_configuration_t;
    struct unmasked_interrupt_information_t;
    struct intel_enlightenment_information_t;

    // [struct HAL_PRIVATE_DISPATCH]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct private_dispatch_t                                                                                                          
    {                                                                                                                                  
        using hal_handler_for_bus_t =                                        sdk::function<struct nt::bus_handler_t*(enum nt::interface_type_t, uint32_t)>*;                                                           
        using hal_handler_for_config_space_t =                               sdk::function<struct nt::bus_handler_t*(enum nt::bus_data_type_t, uint32_t)>*;                                                           
        using hal_register_bus_handler_t =                                   sdk::function<int32_t(enum nt::interface_type_t, enum nt::bus_data_type_t, uint32_t, enum nt::interface_type_t, uint32_t, uint32_t, sdk::function<int32_t(struct nt::bus_handler_t*)>*, struct nt::bus_handler_t**)>*;                                                           
        using hal_pci_translate_bus_address_t =                              sdk::function<uint8_t(enum nt::interface_type_t, uint32_t, int64_t, uint32_t*, int64_t*)>*;                                                           
        using hal_pci_assign_slot_resources_t =                              sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*, struct nt::driver_object_t*, struct nt::device_object_t*, enum nt::interface_type_t, uint32_t, uint32_t, struct cm::resource_list_t**)>*;                                                           
        using hal_find_bus_address_translation_t =                           sdk::function<uint8_t(int64_t, uint32_t*, int64_t*, uint64_t*, uint8_t)>*;                                                           
        using hal_allocate_map_registers_t =                                 sdk::function<int32_t(struct nt::adapter_object_t*, uint32_t, uint32_t, struct nt::map_register_entry_t*)>*;                                                           
        using kd_setup_pci_device_for_debugging_t =                          sdk::function<int32_t(void*, struct nt::debug_device_descriptor_t*)>*;                                                           
        using kd_release_pci_device_for_debugging_t =                        sdk::function<int32_t(struct nt::debug_device_descriptor_t*)>*;                                                           
        using kd_get_acpi_table_phase0_t =                                   sdk::function<void*(struct nt::loader_parameter_block_t*, uint32_t)>*;                                                           
        using kd_map_physical_memory64_t =                                   sdk::function<void*(int64_t, uint32_t, uint8_t)>*;                                                           
        using kd_get_pci_data_by_offset_t =                                  sdk::function<uint32_t(uint32_t, uint32_t, void*, uint32_t, uint32_t)>*;                                                           
        using kd_set_pci_data_by_offset_t =                                  sdk::function<uint32_t(uint32_t, uint32_t, void*, uint32_t, uint32_t)>*;                                                           
        using hal_get_interrupt_vector_override_t =                          sdk::function<uint32_t(enum nt::interface_type_t, uint32_t, uint32_t, uint32_t, uint8_t*, uint64_t*)>*;                                                           
        using hal_get_vector_input_override_t =                              sdk::function<int32_t(uint32_t, struct nt::group_affinity_t*, uint32_t*, enum nt::kinterrupt_polarity_t*, struct nt::interrupt_remapping_info_t*)>*;                                                           
        using hal_allocate_message_target_override_t =                       sdk::function<int32_t(struct nt::device_object_t*, struct nt::group_affinity_t*, uint32_t, enum nt::kinterrupt_mode_t, uint8_t, uint32_t*, uint8_t*, uint32_t*)>*;                                                           
        using hal_free_message_target_override_t =                           sdk::function<void(struct nt::device_object_t*, uint32_t, struct nt::group_affinity_t*)>*;                                                           
        using hal_dp_replace_begin_t =                                       sdk::function<int32_t(struct hal::dp_replace_parameters_t*, void**)>*;                                                           
        using hal_report_idle_state_usage_t =                                sdk::function<void(uint8_t, struct nt::kaffinity_ex_t*)>*;                                                           
        using hal_whea_init_processor_generic_section_t =                    sdk::function<int32_t(struct whea::error_record_section_descriptor_t*, struct whea::processor_generic_error_section_t*)>*;                                                           
        using hal_stop_legacy_usb_interrupts_t =                             sdk::function<void(enum nt::system_power_state_t)>*;                                                           
        using hal_read_whea_physical_memory_t =                              sdk::function<int32_t(int64_t, uint32_t, void*)>*;                                                           
        using hal_write_whea_physical_memory_t =                             sdk::function<int32_t(int64_t, uint32_t, void*)>*;                                                           
        using kd_setup_integrated_device_for_debugging_t =                   sdk::function<int32_t(void*, struct nt::debug_device_descriptor_t*)>*;                                                           
        using kd_release_integrated_device_for_debugging_t =                 sdk::function<int32_t(struct nt::debug_device_descriptor_t*)>*;                                                           
        using hal_get_enlightenment_information_t =                          sdk::function<void(struct hal::intel_enlightenment_information_t*)>*;                                                           
        using hal_allocate_early_pages_t =                                   sdk::function<void*(struct nt::loader_parameter_block_t*, uint32_t, uint64_t*, uint32_t)>*;                                                           
        using hal_map_early_pages_t =                                        sdk::function<void*(uint64_t, uint32_t, uint32_t)>*;                                                           
        using hal_register_log_routine_t =                                   sdk::function<void(struct hal::log_register_context_t*)>*;                                                           
        using hal_secondary_interrupt_query_primary_information_t =          sdk::function<int32_t(struct nt::interrupt_vector_data_t*, uint32_t*)>*;                                                           
        using hal_allocate_gsiv_for_secondary_interrupt_t =                  sdk::function<int32_t(char*, uint16_t, uint32_t*)>*;                                                           
        using hal_add_interrupt_remapping_t =                                sdk::function<int32_t(uint32_t, uint32_t, struct pci::busmaster_descriptor_t*, uint8_t, struct nt::interrupt_vector_data_t*, uint32_t)>*;                                                           
        using hal_remove_interrupt_remapping_t =                             sdk::function<void(uint32_t, uint32_t, struct pci::busmaster_descriptor_t*, uint8_t, struct nt::interrupt_vector_data_t*, uint32_t)>*;                                                           
        using hal_save_and_disable_hv_enlightenment_t =                      sdk::variant<sdk::function<void()>*, sdk::function<void(uint8_t)>*>;                                                           
        using hal_pci_early_restore_t =                                      sdk::function<int32_t(enum nt::system_power_state_t)>*;                                                           
        using hal_get_processor_id_t =                                       sdk::function<int32_t(uint32_t, uint32_t*, uint32_t*)>*;                                                           
        using hal_allocate_pmc_counter_set_t =                               sdk::function<int32_t(uint32_t, enum nt::kprofile_source_t*, uint32_t, struct hal::pmc_counters_t**)>*;                                                           
        using hal_collect_pmc_counters_t =                                   sdk::function<void(struct hal::pmc_counters_t*, uint64_t*)>*;                                                           
        using hal_free_pmc_counter_set_t =                                   sdk::function<void(struct hal::pmc_counters_t*)>*;                                                           
        using hal_processor_halt_t =                                         sdk::function<int32_t(uint32_t, void*, sdk::function<int32_t(void*)>*)>*;                                                           
        using hal_enumerate_unmasked_interrupts_t =                          sdk::function<int32_t(sdk::function<uint8_t(void*, struct hal::unmasked_interrupt_information_t*)>*, void*, struct hal::unmasked_interrupt_information_t*)>*;                                                           
        using kd_enumerate_debugging_devices_t =                             sdk::function<int32_t(void*, struct nt::debug_device_descriptor_t*, sdk::function<enum kd::callback_action_t(struct nt::debug_device_descriptor_t*)>*)>*;                                                           
        using hal_flush_io_rectangle_external_cache_t =                      sdk::function<void(struct nt::mdl_t*, uint32_t, uint32_t, uint32_t, uint32_t, uint8_t)>*;                                                           
        using hal_query_capsule_capabilities_t =                             sdk::function<int32_t(void*, uint32_t, uint64_t*, uint32_t*)>*;                                                           
        using hal_update_capsule_t =                                         sdk::function<int32_t(void*, uint32_t, int64_t)>*;                                                           
        using hal_interrupt_set_destination_t =                              sdk::function<int32_t(struct nt::interrupt_vector_data_t*, struct nt::group_affinity_t*, uint32_t*)>*;                                                           
        using hal_get_clock_configuration_t =                                sdk::function<void(struct hal::clock_timer_configuration_t*)>*;                                                           
        using hal_clock_timer_arm_t =                                        sdk::function<int32_t(enum hal::clock_timer_mode_t, uint64_t, uint64_t*)>*;                                                           
        using hal_power_set_reboot_handler_t =                               sdk::function<sdk::function<void(uint32_t, volatile int32_t*)>*(sdk::function<void(uint32_t, volatile int32_t*)>*)>*;                                                           
        using hal_iommu_register_dispatch_table_t =                          sdk::function<void(struct hal::iommu_dispatch_t*)>*;                                                           
        using hal_interrupt_vector_data_to_gsiv_t =                          sdk::function<int32_t(struct nt::interrupt_vector_data_t*, uint32_t*)>*;                                                           
        using hal_dma_link_device_object_by_token_t =                        sdk::function<int32_t(uint64_t, struct nt::device_object_t*)>*;                                                           
        using hal_timer_convert_performance_counter_to_auxiliary_counter_t = sdk::function<int32_t(uint64_t, uint64_t*, uint64_t*)>*;                                                           
        using hal_timer_convert_auxiliary_counter_to_performance_counter_t = sdk::function<int32_t(uint64_t, uint64_t*, uint64_t*)>*;                                                           
        using hal_connect_thermal_interrupt_t =                              sdk::function<int32_t(sdk::function<uint8_t(struct nt::kinterrupt_t*, void*)>*)>*;                                                           
        using hal_get_processor_stats_t =                                    sdk::function<int32_t(enum hal::processor_stat_type_t, uint32_t, uint32_t, uint64_t*)>*;                                                           
        using hal_timer_watchdog_query_due_time_t =                          sdk::variant<sdk::function<uint64_t()>*, sdk::function<uint64_t(uint8_t)>*>;                                                           
        using hal_connect_synthetic_interrupt_t =                            sdk::function<int32_t(sdk::function<uint8_t(struct nt::kinterrupt_t*, void*)>*)>*;                                                           
        using hal_enumerate_environment_variables_with_filter_t =            sdk::function<int32_t(uint32_t, sdk::function<uint8_t(const struct nt::guid_t*, const wchar_t*)>*, void*, uint32_t*)>*;                                                           
        using hal_capture_last_branch_record_stack_t =                       sdk::function<int32_t(uint32_t, struct hal::lbr_entry_t*, uint32_t*)>*;                                                           
        using hal_iommu_block_device_t =                                     sdk::variant<sdk::function<int32_t(void*)>*, sdk::function<int32_t(struct nt::iommu_dma_device_t*)>*>;                                                           
        using hal_iommu_unblock_device_t =                                   sdk::variant<sdk::function<int32_t(struct ext::iommu_device_id_t*, void**)>*, sdk::function<int32_t(struct ext::iommu_device_id_t*, struct nt::device_object_t*, struct nt::iommu_dma_device_t**)>*>;                                                           
        using hal_get_iommu_interface_t =                                    sdk::function<int32_t(uint32_t, struct dma::iommu_interface_t*)>*;                                                           
        using hal_topology_query_processor_relationships_t =                 sdk::function<int32_t(uint32_t, uint32_t, uint8_t*, uint8_t*, uint8_t*, uint32_t*, uint32_t*)>*;                                                           
        using hal_get_hidden_processor_power_interface_t =                   sdk::function<int32_t(struct nt::hidden_processor_power_interface_t*)>*;                                                           
        using hal_iommu_report_iommu_fault_t =                               sdk::function<void(uint64_t, struct nt::fault_information_t*)>*;                                                           
        using hal_iommu_dma_remapping_capable_t =                            sdk::function<uint8_t(struct ext::iommu_device_id_t*, uint32_t*)>*;                                                           
        using hal_allocate_pmc_counter_set_ex_t =                            sdk::function<int32_t(uint32_t, enum nt::kprofile_source_t*, uint32_t, uint32_t*, struct hal::pmc_counters_t**, uint32_t*)>*;                                                           
        using hal_start_profile_interrupt_ex_t =                             sdk::function<int32_t(enum nt::kprofile_source_t, uint32_t*, uint32_t*, struct hal::pmc_counters_t**)>*;                                                           
        using hal_get_iommu_interface_ex_t =                                 sdk::function<int32_t(uint32_t, uint64_t, struct dma::iommu_interface_ex_t*)>*;                                                           
        using hal_notify_iommu_domain_policy_change_t =                      sdk::function<void(struct nt::device_object_t*)>*;                                                           
        using hal_pci_get_device_location_from_physical_address_t =          sdk::function<uint8_t(uint64_t, uint16_t*, uint8_t*, uint8_t*, uint8_t*)>*;                                                           
        using hal_invoke_smc_t =                                             sdk::function<void(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t*, uint64_t*, uint64_t*, uint64_t*)>*;                                                           
        using hal_invoke_hvc_t =                                             sdk::function<void(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t*, uint64_t*, uint64_t*, uint64_t*)>*;                                                           
                                                                                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                              
        //                                                                                                                             
        _m000 uint32_t                                                      version;                                                     //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m001 hal_handler_for_bus_t                                         hal_handler_for_bus;                                         //{ +0x0008    +0x0008    +0x0008    } | .HalHandlerForBus
        _m002 hal_handler_for_config_space_t                                hal_handler_for_config_space;                                //{ +0x0010    +0x0010    +0x0010    } | .HalHandlerForConfigSpace
        _m003 sdk::function<void(void*)>*                                   hal_locate_hiber_ranges;                                     //{ +0x0018    +0x0018    +0x0018    } | .HalLocateHiberRanges
        _m004 hal_register_bus_handler_t                                    hal_register_bus_handler;                                    //{ +0x0020    +0x0020    +0x0020    } | .HalRegisterBusHandler
        _m005 sdk::function<void(uint8_t)>*                                 hal_set_wake_enable;                                         //{ +0x0028    +0x0028    +0x0028    } | .HalSetWakeEnable
        _m006 sdk::function<int32_t(uint64_t, uint64_t)>*                   hal_set_wake_alarm;                                          //{ +0x0030    +0x0030    +0x0030    } | .HalSetWakeAlarm
        _m007 hal_pci_translate_bus_address_t                               hal_pci_translate_bus_address;                               //{ +0x0038    +0x0038    +0x0038    } | .HalPciTranslateBusAddress
        _m008 hal_pci_assign_slot_resources_t                               hal_pci_assign_slot_resources;                               //{ +0x0040    +0x0040    +0x0040    } | .HalPciAssignSlotResources
        _m009 sdk::function<void()>*                                        hal_halt_system;                                             //{ +0x0048    +0x0048    +0x0048    } | .HalHaltSystem
        _m010 hal_find_bus_address_translation_t                            hal_find_bus_address_translation;                            //{ +0x0050    +0x0050    +0x0050    } | .HalFindBusAddressTranslation
        _m011 sdk::function<uint8_t()>*                                     hal_reset_display;                                           //{ +0x0058    +0x0058    +0x0058    } | .HalResetDisplay
        _m012 hal_allocate_map_registers_t                                  hal_allocate_map_registers;                                  //{ +0x0060    +0x0060    +0x0060    } | .HalAllocateMapRegisters
        _m013 kd_setup_pci_device_for_debugging_t                           kd_setup_pci_device_for_debugging;                           //{ +0x0068    +0x0068    +0x0068    } | .KdSetupPciDeviceForDebugging
        _m014 kd_release_pci_device_for_debugging_t                         kd_release_pci_device_for_debugging;                         //{ +0x0070    +0x0070    +0x0070    } | .KdReleasePciDeviceForDebugging
        _m015 kd_get_acpi_table_phase0_t                                    kd_get_acpi_table_phase0;                                    //{ +0x0078    +0x0078    +0x0078    } | .KdGetAcpiTablePhase0
        _m016 sdk::function<void()>*                                        kd_check_power_button;                                       //{ +0x0080    +0x0080    +0x0080    } | .KdCheckPowerButton
        _m017 sdk::function<uint8_t(uint32_t)>*                             hal_vector_to_idt_entry;                                     //{ +0x0088    +0x0088    +0x0088    } | .HalVectorToIDTEntry
        _m018 kd_map_physical_memory64_t                                    kd_map_physical_memory64;                                    //{ +0x0090    +0x0090    +0x0090    } | .KdMapPhysicalMemory64
        _m019 sdk::function<void(void*, uint32_t, uint8_t)>*                kd_unmap_virtual_address;                                    //{ +0x0098    +0x0098    +0x0098    } | .KdUnmapVirtualAddress
        _m020 kd_get_pci_data_by_offset_t                                   kd_get_pci_data_by_offset;                                   //{ +0x00a0    +0x00a0    +0x00a0    } | .KdGetPciDataByOffset
        _m021 kd_set_pci_data_by_offset_t                                   kd_set_pci_data_by_offset;                                   //{ +0x00a8    +0x00a8    +0x00a8    } | .KdSetPciDataByOffset
        _m022 hal_get_interrupt_vector_override_t                           hal_get_interrupt_vector_override;                           //{ +0x00b0    +0x00b0    +0x00b0    } | .HalGetInterruptVectorOverride
        _m023 hal_get_vector_input_override_t                               hal_get_vector_input_override;                               //{ +0x00b8    +0x00b8    +0x00b8    } | .HalGetVectorInputOverride
        _m024 sdk::function<int32_t(void*)>*                                hal_load_microcode;                                          //{ +0x00c0    +0x00c0    +0x00c0    } | .HalLoadMicrocode
        _m025 sdk::function<int32_t()>*                                     hal_unload_microcode;                                        //{ +0x00c8    +0x00c8    +0x00c8    } | .HalUnloadMicrocode
        _m026 sdk::function<int32_t()>*                                     hal_post_microcode_update;                                   //{ +0x00d0    +0x00d0    +0x00d0    } | .HalPostMicrocodeUpdate
        _m027 hal_allocate_message_target_override_t                        hal_allocate_message_target_override;                        //{ +0x00d8    +0x00d8    +0x00d8    } | .HalAllocateMessageTargetOverride
        _m028 hal_free_message_target_override_t                            hal_free_message_target_override;                            //{ +0x00e0    +0x00e0    +0x00e0    } | .HalFreeMessageTargetOverride
        _m029 hal_dp_replace_begin_t                                        hal_dp_replace_begin;                                        //{ +0x00e8    +0x00e8    +0x00e8    } | .HalDpReplaceBegin
        _m030 sdk::function<void(void*)>*                                   hal_dp_replace_target;                                       //{ +0x00f0    +0x00f0    +0x00f0    } | .HalDpReplaceTarget
        _m031 sdk::function<int32_t(uint32_t, void*)>*                      hal_dp_replace_control;                                      //{ +0x00f8    +0x00f8    +0x00f8    } | .HalDpReplaceControl
        _m032 sdk::function<void(void*)>*                                   hal_dp_replace_end;                                          //{ +0x0100    +0x0100    +0x0100    } | .HalDpReplaceEnd
        _m033 sdk::function<void(uint32_t)>*                                hal_prepare_for_bugcheck;                                    //{ +0x0108    +0x0108    +0x0108    } | .HalPrepareForBugcheck
        _m034 sdk::function<uint8_t(uint64_t*, uint64_t*)>*                 hal_query_wake_time;                                         //{ +0x0110    +0x0110    +0x0110    } | .HalQueryWakeTime
        _m035 hal_report_idle_state_usage_t                                 hal_report_idle_state_usage;                                 //{ +0x0118    +0x0118    +0x0118    } | .HalReportIdleStateUsage
        _m036 sdk::function<void(uint8_t, uint32_t*)>*                      hal_tsc_synchronization;                                     //{ +0x0120    +0x0120    +0x0120    } | .HalTscSynchronization
        _m037 hal_whea_init_processor_generic_section_t                     hal_whea_init_processor_generic_section;                     //{ +0x0128    +0x0128    +0x0128    } | .HalWheaInitProcessorGenericSection
        _m038 hal_stop_legacy_usb_interrupts_t                              hal_stop_legacy_usb_interrupts;                              //{ +0x0130    +0x0130    +0x0130    } | .HalStopLegacyUsbInterrupts
        _m039 hal_read_whea_physical_memory_t                               hal_read_whea_physical_memory;                               //{ +0x0138    +0x0138    +0x0138    } | .HalReadWheaPhysicalMemory
        _m040 hal_write_whea_physical_memory_t                              hal_write_whea_physical_memory;                              //{ +0x0140    +0x0140    +0x0140    } | .HalWriteWheaPhysicalMemory
        _m041 sdk::function<int32_t()>*                                     hal_dp_mask_level_triggered_interrupts;                      //{ +0x0148    +0x0148    +0x0148    } | .HalDpMaskLevelTriggeredInterrupts
        _m042 sdk::function<int32_t()>*                                     hal_dp_unmask_level_triggered_interrupts;                    //{ +0x0150    +0x0150    +0x0150    } | .HalDpUnmaskLevelTriggeredInterrupts
        _m043 sdk::function<int32_t(void*, void**)>*                        hal_dp_get_interrupt_replay_state;                           //{ +0x0158    +0x0158    +0x0158    } | .HalDpGetInterruptReplayState
        _m044 sdk::function<int32_t(void*)>*                                hal_dp_replay_interrupts;                                    //{ +0x0160    +0x0160    +0x0160    } | .HalDpReplayInterrupts
        _m045 sdk::function<uint8_t()>*                                     hal_query_io_port_access_supported;                          //{ +0x0168    +0x0168    +0x0168    } | .HalQueryIoPortAccessSupported
        _m046 kd_setup_integrated_device_for_debugging_t                    kd_setup_integrated_device_for_debugging;                    //{ +0x0170    +0x0170    +0x0170    } | .KdSetupIntegratedDeviceForDebugging
        _m047 kd_release_integrated_device_for_debugging_t                  kd_release_integrated_device_for_debugging;                  //{ +0x0178    +0x0178    +0x0178    } | .KdReleaseIntegratedDeviceForDebugging
        _m048 hal_get_enlightenment_information_t                           hal_get_enlightenment_information;                           //{ +0x0180    +0x0180    +0x0180    } | .HalGetEnlightenmentInformation
        _m049 hal_allocate_early_pages_t                                    hal_allocate_early_pages;                                    //{ +0x0188    +0x0188    +0x0188    } | .HalAllocateEarlyPages
        _m050 hal_map_early_pages_t                                         hal_map_early_pages;                                         //{ +0x0190    +0x0190    +0x0190    } | .HalMapEarlyPages
        _m051 void*                                                         dummy1;                                                      //{ +0x0198    +0x0198    +0x0198    } | .Dummy1
        _m052 void*                                                         dummy2;                                                      //{ +0x01a0    +0x01a0    +0x01a0    } | .Dummy2
        _m053 sdk::function<void(uint8_t, uint8_t)>*                        hal_notify_processor_freeze;                                 //{ +0x01a8    +0x01a8    +0x01a8    } | .HalNotifyProcessorFreeze
        _m054 sdk::function<int32_t(uint32_t)>*                             hal_prepare_processor_for_idle;                              //{ +0x01b0    +0x01b0    +0x01b0    } | .HalPrepareProcessorForIdle
        _m055 hal_register_log_routine_t                                    hal_register_log_routine;                                    //{ +0x01b8    +0x01b8    +0x01b8    } | .HalRegisterLogRoutine
        _m056 sdk::function<void()>*                                        hal_resume_processor_from_idle;                              //{ +0x01c0    +0x01c0    +0x01c0    } | .HalResumeProcessorFromIdle
        _m057 void*                                                         dummy;                                                       //{ +0x01c8    +0x01c8    +0x01c8    } | .Dummy
        _m058 sdk::function<uint32_t(uint32_t)>*                            hal_vector_to_idt_entry_ex;                                  //{ +0x01d0    +0x01d0    +0x01d0    } | .HalVectorToIDTEntryEx
        _m059 hal_secondary_interrupt_query_primary_information_t           hal_secondary_interrupt_query_primary_information;           //{ +0x01d8    +0x01d8    +0x01d8    } | .HalSecondaryInterruptQueryPrimaryInformation
        _m060 sdk::function<int32_t(uint32_t, uint32_t)>*                   hal_mask_interrupt;                                          //{ +0x01e0    +0x01e0    +0x01e0    } | .HalMaskInterrupt
        _m061 sdk::function<int32_t(uint32_t, uint32_t)>*                   hal_unmask_interrupt;                                        //{ +0x01e8    +0x01e8    +0x01e8    } | .HalUnmaskInterrupt
        _m062 sdk::function<uint8_t(uint32_t, uint32_t)>*                   hal_is_interrupt_type_secondary;                             //{ +0x01f0    +0x01f0    +0x01f0    } | .HalIsInterruptTypeSecondary
        _m063 hal_allocate_gsiv_for_secondary_interrupt_t                   hal_allocate_gsiv_for_secondary_interrupt;                   //{ +0x01f8    +0x01f8    +0x01f8    } | .HalAllocateGsivForSecondaryInterrupt
        _m064 hal_add_interrupt_remapping_t                                 hal_add_interrupt_remapping;                                 //{ +0x0200    +0x0200    +0x0200    } | .HalAddInterruptRemapping
        _m065 hal_remove_interrupt_remapping_t                              hal_remove_interrupt_remapping;                              //{ +0x0208    +0x0208    +0x0208    } | .HalRemoveInterruptRemapping
        _m066 hal_save_and_disable_hv_enlightenment_t                       hal_save_and_disable_hv_enlightenment;                       //{ +0x0210    +0x0210    +0x0210    } | .HalSaveAndDisableHvEnlightenment
        _m067 sdk::function<void()>*                                        hal_restore_hv_enlightenment;                                //{ +0x0218    +0x0218    +0x0218    } | .HalRestoreHvEnlightenment
        _m068 sdk::function<void(struct nt::mdl_t*, uint8_t)>*              hal_flush_io_buffers_external_cache;                         //{ +0x0220    +0x0220    +0x0220    } | .HalFlushIoBuffersExternalCache
        _m069 sdk::function<void(uint8_t)>*                                 hal_flush_external_cache;                                    //{ +0x0228    +0x0228    +0x0228    } | .HalFlushExternalCache
        _m070 hal_pci_early_restore_t                                       hal_pci_early_restore;                                       //{ +0x0230    +0x0230    +0x0230    } | .HalPciEarlyRestore
        _m071 hal_get_processor_id_t                                        hal_get_processor_id;                                        //{ +0x0238    +0x0238    +0x0238    } | .HalGetProcessorId
        _m072 hal_allocate_pmc_counter_set_t                                hal_allocate_pmc_counter_set;                                //{ +0x0240    +0x0240    +0x0240    } | .HalAllocatePmcCounterSet
        _m073 hal_collect_pmc_counters_t                                    hal_collect_pmc_counters;                                    //{ +0x0248    +0x0248    +0x0248    } | .HalCollectPmcCounters
        _m074 hal_free_pmc_counter_set_t                                    hal_free_pmc_counter_set;                                    //{ +0x0250    +0x0250    +0x0250    } | .HalFreePmcCounterSet
        _m075 hal_processor_halt_t                                          hal_processor_halt;                                          //{ +0x0258    +0x0258    +0x0258    } | .HalProcessorHalt
        _m076 sdk::function<uint64_t(uint64_t*)>*                           hal_timer_query_cycle_counter;                               //{ +0x0260    +0x0260    +0x0260    } | .HalTimerQueryCycleCounter
        _m077 void*                                                         dummy3;                                                      //{ +0x0268    +0x0268    +0x0268    } | .Dummy3
        _m078 sdk::function<void()>*                                        hal_pci_mark_hiber_phase;                                    //{ +0x0270    +0x0270    +0x0270    } | .HalPciMarkHiberPhase
        _m079 sdk::function<int32_t(int64_t*)>*                             hal_query_processor_restart_entry_point;                     //{ +0x0278    +0x0278    +0x0278    } | .HalQueryProcessorRestartEntryPoint
        _m080 sdk::function<int32_t(uint32_t)>*                             hal_request_interrupt;                                       //{ +0x0280    +0x0280    +0x0280    } | .HalRequestInterrupt
        _m081 hal_enumerate_unmasked_interrupts_t                           hal_enumerate_unmasked_interrupts;                           //{ +0x0288    +0x0288    +0x0288    } | .HalEnumerateUnmaskedInterrupts
        _m082 sdk::function<void(int64_t)>*                                 hal_flush_and_invalidate_page_external_cache;                //{ +0x0290    +0x0290    +0x0290    } | .HalFlushAndInvalidatePageExternalCache
        _m083 kd_enumerate_debugging_devices_t                              kd_enumerate_debugging_devices;                              //{ +0x0298    +0x0298    +0x0298    } | .KdEnumerateDebuggingDevices
        _m084 hal_flush_io_rectangle_external_cache_t                       hal_flush_io_rectangle_external_cache;                       //{ +0x02a0    +0x02a0    +0x02a0    } | .HalFlushIoRectangleExternalCache
        _m085 sdk::function<void(uint32_t)>*                                hal_power_early_restore;                                     //{ +0x02a8    +0x02a8    +0x02a8    } | .HalPowerEarlyRestore
        _m086 hal_query_capsule_capabilities_t                              hal_query_capsule_capabilities;                              //{ +0x02b0    +0x02b0    +0x02b0    } | .HalQueryCapsuleCapabilities
        _m087 hal_update_capsule_t                                          hal_update_capsule;                                          //{ +0x02b8    +0x02b8    +0x02b8    } | .HalUpdateCapsule
        _m088 sdk::function<uint8_t()>*                                     hal_pci_multi_stage_resume_capable;                          //{ +0x02c0    +0x02c0    +0x02c0    } | .HalPciMultiStageResumeCapable
        _m089 sdk::function<void(uint32_t)>*                                hal_dma_free_crash_dump_registers;                           //{ +0x02c8    +0x02c8    +0x02c8    } | .HalDmaFreeCrashDumpRegisters
        _m090 sdk::function<uint8_t()>*                                     hal_acpi_aoac_capable;                                       //{ +0x02d0    +0x02d0    +0x02d0    } | .HalAcpiAoacCapable
        _m091 hal_interrupt_set_destination_t                               hal_interrupt_set_destination;                               //{ +0x02d8    +0x02d8    +0x02d8    } | .HalInterruptSetDestination
        _m092 hal_get_clock_configuration_t                                 hal_get_clock_configuration;                                 //{ +0x02e0    +0x02e0    +0x02e0    } | .HalGetClockConfiguration
        _m093 sdk::function<void(uint8_t)>*                                 hal_clock_timer_activate;                                    //{ +0x02e8    +0x02e8    +0x02e8    } | .HalClockTimerActivate
        _m094 sdk::function<void()>*                                        hal_clock_timer_initialize;                                  //{ +0x02f0    +0x02f0    +0x02f0    } | .HalClockTimerInitialize
        _m095 sdk::function<void()>*                                        hal_clock_timer_stop;                                        //{ +0x02f8    +0x02f8    +0x02f8    } | .HalClockTimerStop
        _m096 hal_clock_timer_arm_t                                         hal_clock_timer_arm;                                         //{ +0x0300    +0x0300    +0x0300    } | .HalClockTimerArm
        _m097 sdk::function<uint8_t()>*                                     hal_timer_only_clock_interrupt_pending;                      //{ +0x0308    +0x0308    +0x0308    } | .HalTimerOnlyClockInterruptPending
        _m098 sdk::function<void*()>*                                       hal_acpi_get_multi_node;                                     //{ +0x0310    +0x0310    +0x0310    } | .HalAcpiGetMultiNode
        _m099 hal_power_set_reboot_handler_t                                hal_power_set_reboot_handler;                                //{ +0x0318    +0x0318    +0x0318    } | .HalPowerSetRebootHandler
        _m100 hal_iommu_register_dispatch_table_t                           hal_iommu_register_dispatch_table;                           //{ +0x0320    +0x0320    +0x0320    } | .HalIommuRegisterDispatchTable
        _m101 sdk::function<void()>*                                        hal_timer_watchdog_start;                                    //{ +0x0328    +0x0328    +0x0328    } | .HalTimerWatchdogStart
        _m102 sdk::function<void()>*                                        hal_timer_watchdog_reset_countdown;                          //{ +0x0330    +0x0330    +0x0330    } | .HalTimerWatchdogResetCountdown
        _m103 sdk::function<void()>*                                        hal_timer_watchdog_stop;                                     //{ +0x0338    +0x0338    +0x0338    } | .HalTimerWatchdogStop
        _m104 sdk::function<uint8_t()>*                                     hal_timer_watchdog_generated_last_reset;                     //{ +0x0340    +0x0340    +0x0340    } | .HalTimerWatchdogGeneratedLastReset
        _m105 sdk::function<int32_t(uint8_t)>*                              hal_timer_watchdog_trigger_system_reset;                     //{ +0x0348    +0x0348    +0x0348    } | .HalTimerWatchdogTriggerSystemReset
        _m106 hal_interrupt_vector_data_to_gsiv_t                           hal_interrupt_vector_data_to_gsiv;                           //{ +0x0350    +0x0350    +0x0350    } | .HalInterruptVectorDataToGsiv
        _m107 sdk::function<int32_t(uint32_t*, uint8_t*)>*                  hal_interrupt_get_highest_priority_interrupt;                //{ +0x0358    +0x0358    +0x0358    } | .HalInterruptGetHighestPriorityInterrupt
        _m108 sdk::function<int32_t(uint32_t)>*                             hal_processor_on;                                            //{ +0x0360    +0x0360    +0x0360    } | .HalProcessorOn
        _m109 sdk::function<int32_t()>*                                     hal_processor_off;                                           //{ +0x0368    +0x0368    +0x0368    } | .HalProcessorOff
        _m110 sdk::function<int32_t()>*                                     hal_processor_freeze;                                        //{ +0x0370    +0x0370    +0x0370    } | .HalProcessorFreeze
        _m111 hal_dma_link_device_object_by_token_t                         hal_dma_link_device_object_by_token;                         //{ +0x0378    +0x0378    +0x0378    } | .HalDmaLinkDeviceObjectByToken
        _m112 sdk::function<int32_t(uint64_t)>*                             hal_dma_check_adapter_token;                                 //{ +0x0380    +0x0380    +0x0380    } | .HalDmaCheckAdapterToken
        _m113 void*                                                         dummy4;                                                      //{ +0x0388    +0x0388    +0x0388    } | .Dummy4
        _m114 hal_timer_convert_performance_counter_to_auxiliary_counter_t  hal_timer_convert_performance_counter_to_auxiliary_counter;  //{ +0x0390    +0x0390    +0x0390    } | .HalTimerConvertPerformanceCounterToAuxiliaryCounter
        _m115 hal_timer_convert_auxiliary_counter_to_performance_counter_t  hal_timer_convert_auxiliary_counter_to_performance_counter;  //{ +0x0398    +0x0398    +0x0398    } | .HalTimerConvertAuxiliaryCounterToPerformanceCounter
        _m116 sdk::function<int32_t(uint64_t*)>*                            hal_timer_query_auxiliary_counter_frequency;                 //{ +0x03a0    +0x03a0    +0x03a0    } | .HalTimerQueryAuxiliaryCounterFrequency
        _m117 hal_connect_thermal_interrupt_t                               hal_connect_thermal_interrupt;                               //{ +0x03a8    +0x03a8    +0x03a8    } | .HalConnectThermalInterrupt
        _m118 sdk::function<uint8_t()>*                                     hal_is_efi_runtime_active;                                   //{ +0x03b0    +0x03b0    +0x03b0    } | .HalIsEFIRuntimeActive
        _m119 sdk::function<uint8_t(uint8_t)>*                              hal_timer_query_and_reset_rtc_errors;                        //{ +0x03b8    +0x03b8    +0x03b8    } | .HalTimerQueryAndResetRtcErrors
        _m120 sdk::function<void()>*                                        hal_acpi_late_restore;                                       //{ +0x03c0    +0x03c0    +0x03c0    } | .HalAcpiLateRestore
        _m121 sdk::function<int32_t(uint64_t*)>*                            kd_watchdog_delay_expiration;                                //{ +0x03c8    +0x03c8    +0x03c8    } | .KdWatchdogDelayExpiration
        _m122 hal_get_processor_stats_t                                     hal_get_processor_stats;                                     //{ +0x03d0    +0x03d0    +0x03d0    } | .HalGetProcessorStats
        _m123 hal_timer_watchdog_query_due_time_t                           hal_timer_watchdog_query_due_time;                           //{ +0x03d8    +0x03d8    +0x03d8    } | .HalTimerWatchdogQueryDueTime
        _m124 hal_connect_synthetic_interrupt_t                             hal_connect_synthetic_interrupt;                             //{ +0x03e0    +0x03e0    +0x03e0    } | .HalConnectSyntheticInterrupt
        _m125 sdk::function<void(uint32_t)>*                                hal_preprocess_nmi;                                          //{ +0x03e8    +0x03e8    +0x03e8    } | .HalPreprocessNmi
        _m126 hal_enumerate_environment_variables_with_filter_t             hal_enumerate_environment_variables_with_filter;             //{ +0x03f0    +0x03f0    +0x03f0    } | .HalEnumerateEnvironmentVariablesWithFilter
        _m127 hal_capture_last_branch_record_stack_t                        hal_capture_last_branch_record_stack;                        //{ +0x03f8    +0x03f8    +0x03f8    } | .HalCaptureLastBranchRecordStack
        _m128 sdk::function<uint8_t()>*                                     hal_clear_last_branch_record_stack;                          //{ +0x0400    +0x0400    +0x0400    } | .HalClearLastBranchRecordStack
        _m129 sdk::function<int32_t(uint32_t, uint32_t)>*                   hal_configure_last_branch_record;                            //{ +0x0408    +0x0408    +0x0408    } | .HalConfigureLastBranchRecord
        _m130 sdk::function<uint8_t(uint32_t*, uint32_t*)>*                 hal_get_last_branch_information;                             //{ +0x0410    +0x0410    +0x0410    } | .HalGetLastBranchInformation
        _m131 sdk::function<void(uint8_t)>*                                 hal_resume_last_branch_record;                               //{ +0x0418    +0x0418    +0x0418    } | .HalResumeLastBranchRecord
        _m132 sdk::function<int32_t(uint32_t, uint32_t*)>*                  hal_start_last_branch_record;                                //{ +0x0420    +0x0420    +0x0420    } | .HalStartLastBranchRecord
        _m133 sdk::function<int32_t(uint32_t)>*                             hal_stop_last_branch_record;                                 //{ +0x0428    +0x0428    +0x0428    } | .HalStopLastBranchRecord
        _m134 hal_iommu_block_device_t                                      hal_iommu_block_device;                                      //{ +0x0430    +0x0430    +0x0430    } | .HalIommuBlockDevice
        _m135 hal_iommu_unblock_device_t                                    hal_iommu_unblock_device;                                    //{ +0x0438    +0x0438    +0x0438    } | .HalIommuUnblockDevice
        _m136 hal_get_iommu_interface_t                                     hal_get_iommu_interface;                                     //{ +0x0440    +0x0440    +0x0440    } | .HalGetIommuInterface
        _m137 sdk::function<int32_t(void*, uint32_t*)>*                     hal_request_generic_error_recovery;                          //{ +0x0448    +0x0448    +0x0448    } | .HalRequestGenericErrorRecovery
        _m138 sdk::function<int32_t(uint64_t*)>*                            hal_timer_query_host_performance_counter;                    //{ +0x0450    +0x0450    +0x0450    } | .HalTimerQueryHostPerformanceCounter
        _m139 hal_topology_query_processor_relationships_t                  hal_topology_query_processor_relationships;                  //{ +0x0458    +0x0458    +0x0458    } | .HalTopologyQueryProcessorRelationships
        _m140 sdk::function<void()>*                                        hal_init_platform_debug_triggers;                            //{ +0x0460    +0x0460    +0x0460    } | .HalInitPlatformDebugTriggers
        _m141 sdk::function<void(uint8_t)>*                                 hal_run_platform_debug_triggers;                             //{ +0x0468    +0x0468    +0x0468    } | .HalRunPlatformDebugTriggers
        _m142 sdk::function<void*()>*                                       hal_timer_get_reference_page;                                //{ +0x0470    +0x0470    +0x0470    } | .HalTimerGetReferencePage
        _m143 hal_get_hidden_processor_power_interface_t                    hal_get_hidden_processor_power_interface;                    //{ +0x0478    +0x0478    +0x0478    } | .HalGetHiddenProcessorPowerInterface
        _m144 sdk::function<uint32_t(uint32_t)>*                            hal_get_hidden_processor_package_id;                         //{ +0x0480    +0x0480    +0x0480    } | .HalGetHiddenProcessorPackageId
        _m145 sdk::function<uint32_t(uint32_t)>*                            hal_get_hidden_package_processor_count;                      //{ +0x0488    +0x0488    +0x0488    } | .HalGetHiddenPackageProcessorCount
        _m146 sdk::function<int32_t(uint32_t, uint32_t*)>*                  hal_get_hidden_processor_apic_id_by_index;                   //{ +0x0490    +0x0490    +0x0490    } | .HalGetHiddenProcessorApicIdByIndex
        _m147 sdk::function<int32_t(uint32_t, uint64_t)>*                   hal_register_hidden_processor_idle_state;                    //{ +0x0498    +0x0498    +0x0498    } | .HalRegisterHiddenProcessorIdleState
        _m148 hal_iommu_report_iommu_fault_t                                hal_iommu_report_iommu_fault;                                //{ +0x04a0    +0x04a0    +0x04a0    } | .HalIommuReportIommuFault
        _m149 hal_iommu_dma_remapping_capable_t                             hal_iommu_dma_remapping_capable;                             //{ +0x04a8    +0x04a8    +0x04a8    } | .HalIommuDmaRemappingCapable
                                                                                                                                       
        // Windows 11                                                                                                                  
        //                                                                                                                             
        _m150 hal_allocate_pmc_counter_set_ex_t                             hal_allocate_pmc_counter_set_ex;                             //{ +0x04b0    } | .HalAllocatePmcCounterSetEx
        _m151 hal_start_profile_interrupt_ex_t                              hal_start_profile_interrupt_ex;                              //{ +0x04b8    } | .HalStartProfileInterruptEx
        _m152 hal_get_iommu_interface_ex_t                                  hal_get_iommu_interface_ex;                                  //{ +0x04c0    } | .HalGetIommuInterfaceEx
        _m153 hal_notify_iommu_domain_policy_change_t                       hal_notify_iommu_domain_policy_change;                       //{ +0x04c8    } | .HalNotifyIommuDomainPolicyChange
        _m154 hal_pci_get_device_location_from_physical_address_t           hal_pci_get_device_location_from_physical_address;           //{ +0x04d0    } | .HalPciGetDeviceLocationFromPhysicalAddress
        _m155 hal_invoke_smc_t                                              hal_invoke_smc;                                              //{ +0x04d8    } | .HalInvokeSmc
        _m156 hal_invoke_hvc_t                                              hal_invoke_hvc;                                              //{ +0x04e0    } | .HalInvokeHvc
        _m157 sdk::function<int64_t()>*                                     hal_get_soft_reboot_database;                                //{ +0x04e8    } | .HalGetSoftRebootDatabase
                                                                                                                                       
        SDK_MAGIC_PROPERTIES( "HAL_PRIVATE_DISPATCH.$", 0x4b0, true, 0x9b01df8b2e397e8e );                                                           
        SDK_DYNAMIC_SIZE( private_dispatch_t );                                                                                        
    };                                                                                                                                 
};
#include "magic/private_dispatch_t.end.hpp"
