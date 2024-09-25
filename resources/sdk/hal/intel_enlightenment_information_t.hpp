#pragma once
#include <sdkgen/support_library.hpp>

namespace ext  { struct iommu_device_id_t;  }
namespace nt   { struct group_affinity_t;   }
namespace nt   { struct kaffinity_ex_t;     }
namespace nt   { struct ktb_flush_va_t;     }
namespace whea { struct recovery_context_t; }

#include "magic/intel_enlightenment_information_t.start.hpp"
namespace hal
{
    struct hv_dma_domain_info_t;
    struct hv_dma_domain_config_t;
    struct hv_dma_create_domain_info_t;
    struct hv_svm_device_capabilities_t;
    struct hv_svm_system_capabilities_t;
    struct hv_dma_hybrid_passthrough_reserved_regions_t;

    // [struct _HAL_INTEL_ENLIGHTENMENT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct intel_enlightenment_information_t                                                       
    {                                                                                              
        using get_reference_time_t =                      sdk::variant<sdk::function<uint64_t()>*, sdk::function<uint64_t(uint32_t*)>*>;                                        
        using set_system_sleep_property_t =               sdk::function<int32_t(uint32_t, uint8_t, uint8_t)>*;                                        
        using map_device_interrupt_t =                    sdk::function<int32_t(uint64_t, void*, struct nt::group_affinity_t*, void*)>*;                                        
        using retarget_device_interrupt_t =               sdk::function<int32_t(uint64_t, void*, void*, struct nt::group_affinity_t*, void*)>*;                                        
        using set_hpet_config_t =                         sdk::variant<sdk::function<int32_t(int64_t, uint32_t, uint64_t, uint8_t, void*)>*, sdk::function<int32_t(uint32_t, uint64_t, uint8_t, void*)>*>;                                        
        using query_associated_processors_t =             sdk::function<int32_t(uint32_t, uint32_t*, uint32_t*)>*;                                        
        using read_multiple_msr_t =                       sdk::function<int32_t(uint32_t, uint32_t, uint32_t*, uint64_t*)>*;                                        
        using write_multiple_msr_t =                      sdk::function<int32_t(uint32_t, uint32_t, uint32_t*, uint64_t*)>*;                                        
        using read_cpuid_t =                              sdk::function<int32_t(uint32_t, uint32_t, uint32_t*, uint32_t*, uint32_t*, uint32_t*)>*;                                        
        using get_machine_check_context_t =               sdk::function<int32_t(uint32_t, uint32_t*, uint64_t*, uint32_t*)>*;                                        
        using whea_error_notification_t =                 sdk::function<int32_t(struct whea::recovery_context_t*, uint8_t, uint8_t)>*;                                        
        using synthetic_cluster_ipi_t =                   sdk::function<int32_t(struct nt::kaffinity_ex_t*, uint32_t)>*;                                        
        using ium_access_pci_device_t =                   sdk::function<int32_t(uint8_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, void*)>*;                                        
        using ium_efi_runtime_service_t =                 sdk::function<uint64_t(uint32_t, void*, uint64_t, uint64_t*)>*;                                        
        using svm_get_system_capabilities_t =             sdk::function<void(struct hal::hv_svm_system_capabilities_t*)>*;                                        
        using svm_set_pasid_address_space_t =             sdk::function<int32_t(uint32_t, uint32_t, uint64_t)>*;                                        
        using svm_flush_pasid_t =                         sdk::function<void(uint32_t, uint32_t, uint32_t, struct nt::ktb_flush_va_t*)>*;                                        
        using svm_attach_pasid_space_t =                  sdk::variant<sdk::function<int32_t(uint32_t, uint32_t, uint32_t, uint32_t)>*, sdk::function<int32_t(uint64_t, uint32_t, uint32_t, uint32_t)>*>;                                        
        using svm_detach_pasid_space_t =                  sdk::variant<sdk::function<int32_t(uint32_t)>*, sdk::function<int32_t(uint64_t)>*>;                                        
        using svm_enable_pasid_t =                        sdk::variant<sdk::function<int32_t(uint32_t, uint32_t)>*, sdk::function<int32_t(uint64_t, uint32_t)>*>;                                        
        using svm_disable_pasid_t =                       sdk::variant<sdk::function<int32_t(uint32_t, uint32_t)>*, sdk::function<int32_t(uint64_t, uint32_t)>*>;                                        
        using svm_acknowledge_page_request_t =            sdk::function<int32_t(uint32_t, void*, uint32_t*)>*;                                        
        using svm_create_pr_queue_t =                     sdk::function<int32_t(uint32_t, uint32_t, int64_t, uint32_t, uint32_t)>*;                                        
        using register_device_id_t =                      sdk::function<int32_t(struct ext::iommu_device_id_t*, uint64_t)>*;                                        
        using allocate_device_domain_t =                  sdk::variant<sdk::function<int32_t(struct hal::hv_dma_domain_info_t*)>*, sdk::function<int32_t(struct hal::hv_dma_create_domain_info_t*)>*>;                                        
        using attach_device_domain_t =                    sdk::variant<sdk::function<int32_t(struct ext::iommu_device_id_t*, struct hal::hv_dma_domain_info_t*)>*, sdk::function<int32_t(uint64_t, struct hal::hv_dma_domain_info_t*)>*>;                                        
        using delete_device_domain_t =                    sdk::function<int32_t(struct hal::hv_dma_domain_info_t*)>*;                                        
        using map_device_logical_range_t =                sdk::function<int32_t(struct hal::hv_dma_domain_info_t*, uint32_t, uint64_t, uint64_t*, uint64_t*, uint8_t)>*;                                        
        using unmap_device_logical_range_t =              sdk::function<int32_t(struct hal::hv_dma_domain_info_t*, uint64_t, uint64_t*)>*;                                        
        using map_device_sparse_pages_t =                 sdk::function<int32_t(struct hal::hv_dma_domain_info_t*, uint32_t, uint64_t*, uint64_t*)>*;                                        
        using unmap_device_sparse_pages_t =               sdk::function<int32_t(struct hal::hv_dma_domain_info_t*, uint64_t*, uint64_t*)>*;                                        
        using update_microcode_t =                        sdk::variant<sdk::function<int32_t(void*, uint32_t)>*, sdk::function<int32_t(void*, uint32_t, uint8_t)>*>;                                        
        using svm_get_device_capabilities_t =             sdk::function<int32_t(uint32_t, struct hal::hv_svm_device_capabilities_t*)>*;                                        
        using get_device_capabilities_t =                 sdk::function<int32_t(struct ext::iommu_device_id_t*, void*)>*;                                        
        using set_device_ats_enabled_t =                  sdk::function<int32_t(struct ext::iommu_device_id_t*, uint8_t)>*;                                        
        using set_device_capabilities_t =                 sdk::function<int32_t(uint64_t, uint32_t, uint32_t)>*;                                        
        using restore_time_t =                            sdk::function<int32_t(uint32_t, uint64_t, uint64_t)>*;                                        
        using configure_device_domain_t =                 sdk::function<int32_t(struct hal::hv_dma_domain_info_t*, struct hal::hv_dma_domain_config_t*)>*;                                        
        using flush_device_domain_t =                     sdk::function<int32_t(struct hal::hv_dma_domain_info_t*)>*;                                        
        using flush_device_domain_va_list_t =             sdk::function<int32_t(struct hal::hv_dma_domain_info_t*, uint32_t, struct nt::ktb_flush_va_t*)>*;                                        
        using get_hybrid_passthrough_reserved_regions_t = sdk::function<int32_t(struct hal::hv_dma_hybrid_passthrough_reserved_regions_t*)>*;                                        
                                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                         
        _m000 uint32_t                                     enlightenments;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Enlightenments
        _m001 uint32_t                                     hypervisor_connected;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .HypervisorConnected
        _m002 sdk::function<void()>*                       end_of_interrupt;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EndOfInterrupt
        _m003 sdk::function<void(uint32_t, uint32_t)>*     apic_write_icr;                           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ApicWriteIcr
        _m004 uint32_t                                     spin_count_mask;                          //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .SpinCountMask
        _m005 sdk::function<void(uint32_t)>*               long_spin_wait;                           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LongSpinWait
        _m006 get_reference_time_t                         get_reference_time;                       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .GetReferenceTime
        _m007 set_system_sleep_property_t                  set_system_sleep_property;                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SetSystemSleepProperty
        _m008 sdk::function<int32_t(uint32_t)>*            enter_sleep_state;                        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .EnterSleepState
        _m009 sdk::function<int32_t()>*                    notify_debug_device_available;            //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NotifyDebugDeviceAvailable
        _m010 map_device_interrupt_t                       map_device_interrupt;                     //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .MapDeviceInterrupt
        _m011 sdk::function<int32_t(uint64_t, void*)>*     unmap_device_interrupt;                   //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .UnmapDeviceInterrupt
        _m012 retarget_device_interrupt_t                  retarget_device_interrupt;                //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .RetargetDeviceInterrupt
        _m013 set_hpet_config_t                            set_hpet_config;                          //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .SetHpetConfig
        _m014 sdk::function<int32_t()>*                    notify_hpet_enabled;                      //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .NotifyHpetEnabled
        _m015 query_associated_processors_t                query_associated_processors;              //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .QueryAssociatedProcessors
        _m016 read_multiple_msr_t                          read_multiple_msr;                        //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .ReadMultipleMsr
        _m017 write_multiple_msr_t                         write_multiple_msr;                       //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .WriteMultipleMsr
        _m018 read_cpuid_t                                 read_cpuid;                               //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .ReadCpuid
        _m019 sdk::function<int32_t(uint32_t)>*            lp_writeback_invalidate;                  //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .LpWritebackInvalidate
        _m020 get_machine_check_context_t                  get_machine_check_context;                //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .GetMachineCheckContext
        _m021 sdk::function<int32_t(uint64_t)>*            suspend_partition;                        //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .SuspendPartition
        _m022 sdk::function<int32_t(uint64_t)>*            resume_partition;                         //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .ResumePartition
        _m023 sdk::function<int32_t(void*)>*               set_system_machine_check_property;        //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .SetSystemMachineCheckProperty
        _m024 whea_error_notification_t                    whea_error_notification;                  //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .WheaErrorNotification
        _m025 sdk::function<uint32_t(uint32_t)>*           get_processor_index_from_vp_index;        //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .GetProcessorIndexFromVpIndex
        _m026 synthetic_cluster_ipi_t                      synthetic_cluster_ipi;                    //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .SyntheticClusterIpi
        _m027 sdk::function<uint8_t()>*                    vp_start_enabled;                         //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .VpStartEnabled
        _m028 sdk::function<int32_t(uint32_t, void*)>*     start_virtual_processor;                  //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .StartVirtualProcessor
        _m029 sdk::function<int32_t(uint32_t, uint32_t*)>* get_vp_index_from_apic_id;                //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .GetVpIndexFromApicId
        _m030 ium_access_pci_device_t                      ium_access_pci_device;                    //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .IumAccessPciDevice
        _m031 ium_efi_runtime_service_t                    ium_efi_runtime_service;                  //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .IumEfiRuntimeService
        _m032 svm_get_system_capabilities_t                svm_get_system_capabilities;              //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .SvmGetSystemCapabilities
        _m033 sdk::function<int32_t(uint32_t, uint32_t)>*  svm_create_pasid_space;                   //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .SvmCreatePasidSpace
        _m034 svm_set_pasid_address_space_t                svm_set_pasid_address_space;              //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .SvmSetPasidAddressSpace
        _m035 svm_flush_pasid_t                            svm_flush_pasid;                          //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .SvmFlushPasid
        _m036 svm_attach_pasid_space_t                     svm_attach_pasid_space;                   //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .SvmAttachPasidSpace
        _m037 svm_detach_pasid_space_t                     svm_detach_pasid_space;                   //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .SvmDetachPasidSpace
        _m038 svm_enable_pasid_t                           svm_enable_pasid;                         //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .SvmEnablePasid
        _m039 svm_disable_pasid_t                          svm_disable_pasid;                        //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .SvmDisablePasid
        _m040 svm_acknowledge_page_request_t               svm_acknowledge_page_request;             //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .SvmAcknowledgePageRequest
        _m041 svm_create_pr_queue_t                        svm_create_pr_queue;                      //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .SvmCreatePrQueue
        _m042 sdk::function<int32_t(uint32_t)>*            svm_delete_pr_queue;                      //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .SvmDeletePrQueue
        _m043 sdk::function<int32_t(uint32_t)>*            svm_clear_prq_stalled;                    //{ +0x0158    +0x0158    +0x0158    +0x0158    } | .SvmClearPrqStalled
        _m044 sdk::function<int32_t(uint8_t)>*             hv_debugger_power_handler;                //{ +0x0168    +0x0168    +0x0170    +0x0168    } | .HvDebuggerPowerHandler
                                                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
        //                                                                                         
        _m045 sdk::function<int32_t(uint64_t)>*            set_qpc_bias;                             //{ +0x0170    +0x0178    +0x0170    } | .SetQpcBias
        _m046 sdk::function<uint64_t()>*                   get_qpc_bias;                             //{ +0x0178    +0x0180    +0x0178    } | .GetQpcBias
        _m047 register_device_id_t                         register_device_id;                       //{ +0x0180    +0x0188    +0x0180    } | .RegisterDeviceId
        _m048 sdk::function<int32_t(uint64_t)>*            unregister_device_id;                     //{ +0x0188    +0x0190    +0x0188    } | .UnregisterDeviceId
        _m049 allocate_device_domain_t                     allocate_device_domain;                   //{ +0x0190    +0x0198    +0x0190    } | .AllocateDeviceDomain
        _m050 attach_device_domain_t                       attach_device_domain;                     //{ +0x0198    +0x01a0    +0x0198    } | .AttachDeviceDomain
        _m051 sdk::function<int32_t(uint64_t)>*            detach_device_domain;                     //{ +0x01a0    +0x01a8    +0x01a0    } | .DetachDeviceDomain
        _m052 delete_device_domain_t                       delete_device_domain;                     //{ +0x01a8    +0x01b0    +0x01a8    } | .DeleteDeviceDomain
        _m053 map_device_logical_range_t                   map_device_logical_range;                 //{ +0x01b0    +0x01b8    +0x01b0    } | .MapDeviceLogicalRange
        _m054 unmap_device_logical_range_t                 unmap_device_logical_range;               //{ +0x01b8    +0x01c0    +0x01b8    } | .UnmapDeviceLogicalRange
        _m055 map_device_sparse_pages_t                    map_device_sparse_pages;                  //{ +0x01c0    +0x01c8    +0x01c0    } | .MapDeviceSparsePages
        _m056 unmap_device_sparse_pages_t                  unmap_device_sparse_pages;                //{ +0x01c8    +0x01d0    +0x01c8    } | .UnmapDeviceSparsePages
        _m057 sdk::function<int32_t(uint8_t*)>*            get_dma_guard_enabled;                    //{ +0x01d0    +0x01d8    +0x01d0    } | .GetDmaGuardEnabled
        _m058 update_microcode_t                           update_microcode;                         //{ +0x01d8    +0x01e0    +0x01d8    } | .UpdateMicrocode
        _m059 sdk::function<int32_t(uint8_t, void**)>*     get_sint_message;                         //{ +0x01e0    +0x01e8    +0x01e0    } | .GetSintMessage
        _m060 sdk::function<int32_t()>*                    set_root_fault_reporting_ready;           //{ +0x01e8    +0x01f8    +0x01e8    } | .SetRootFaultReportingReady
                                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                        
        //                                                                                         
        _m061 svm_get_device_capabilities_t                svm_get_device_capabilities;              //{ +0x0100    +0x0100    +0x0100    } | .SvmGetDeviceCapabilities
        _m062 sdk::function<int32_t(uint32_t, uint8_t)>*   svm_set_device_enabled;                   //{ +0x0160    +0x0160    +0x0160    } | .SvmSetDeviceEnabled
                                                                                                   
        // Windows 11                                                                              
        //                                                                                         
        _m063 get_device_capabilities_t                    get_device_capabilities;                  //{ +0x0100    } | .GetDeviceCapabilities
        _m064 set_device_ats_enabled_t                     set_device_ats_enabled;                   //{ +0x0160    } | .SetDeviceAtsEnabled
        _m065 set_device_capabilities_t                    set_device_capabilities;                  //{ +0x0168    } | .SetDeviceCapabilities
        _m066 restore_time_t                               restore_time;                             //{ +0x01f0    } | .RestoreTime
        _m067 configure_device_domain_t                    configure_device_domain;                  //{ +0x0200    } | .ConfigureDeviceDomain
        _m068 sdk::function<int32_t()>*                    unblock_default_dma;                      //{ +0x0208    } | .UnblockDefaultDma
        _m069 flush_device_domain_t                        flush_device_domain;                      //{ +0x0210    } | .FlushDeviceDomain
        _m070 flush_device_domain_va_list_t                flush_device_domain_va_list;              //{ +0x0218    } | .FlushDeviceDomainVaList
        _m071 get_hybrid_passthrough_reserved_regions_t    get_hybrid_passthrough_reserved_regions;  //{ +0x0220    } | .GetHybridPassthroughReservedRegions
                                                                                                   
        SDK_MAGIC_PROPERTIES( "_HAL_INTEL_ENLIGHTENMENT_INFORMATION.$", 0x1f0, true, 0x2a4bfdbcedf4db71 );                                        
        SDK_DYNAMIC_SIZE( intel_enlightenment_information_t );                                        
    };                                                                                             
};
#include "magic/intel_enlightenment_information_t.end.hpp"
