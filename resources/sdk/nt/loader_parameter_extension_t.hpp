#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"
#include "../etw/boot_config_t.hpp"
#include "loader_reset_reason_t.hpp"
#include "vsm_performance_data_t.hpp"
#include "loader_performance_data_t.hpp"
#include "profile_parameter_block_t.hpp"
#include "loader_hive_recovery_info_t.hpp"
#include "../boot/entropy_ldr_result_t.hpp"
#include "loader_bugcheck_parameters_t.hpp"
#include "loader_parameter_hypervisor_extension_t.hpp"
#include "loader_feature_configuration_information_t.hpp"
#include "offline_crashdump_configuration_table_v2_t.hpp"

namespace boot { struct firmware_ramdisk_info_t; }

#include "magic/loader_parameter_extension_t.start.hpp"
namespace nt
{
    struct leap_second_data_t;
    struct numa_memory_range_t;
    struct network_loader_block_t;
    struct smbios3_table_header_t;
    struct headless_loader_block_t;
    struct memory_mirroring_data_t;
    struct installed_memory_range_t;
    struct debug_device_descriptor_t;
    struct loader_parameter_ci_extension_t;

    // [struct _LOADER_PARAMETER_EXTENSION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct loader_parameter_extension_t                                                                 
    {                                                                                                   
        struct u0_mini_executive_t                                                                      
        {                                                                                               
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
            //                                                                                          
            _n02 void*    code_base;                                                                      //{ +0x0000    +0x0000    +0x0000    } | .CodeBase
            _n03 uint64_t code_size;                                                                      //{ +0x0008    +0x0008    +0x0008    } | .CodeSize
                                                                                                        
            SDK_MAGIC_PROPERTIES( "_LOADER_PARAMETER_EXTENSION.MiniExecutive.$", 0x10, true, 0x84b146c5c4d77d68 );                                                
            SDK_FIXED_SIZE( u0_mini_executive_t, 0x10 );                                                
        };                                                                                              
                                                                                                        
        struct u3_installed_memory_t                                                                    
        {                                                                                               
            // Windows 11                                                                               
            //                                                                                          
            _n26 struct nt::installed_memory_range_t* ranges;                                             //{ +0x0000    } | .Ranges
            _n27 uint32_t                             range_count;                                        //{ +0x0008    } | .RangeCount
                                                                                                        
            SDK_MAGIC_PROPERTIES( "_LOADER_PARAMETER_EXTENSION.InstalledMemory.$", 0x0, false, 0x1246b7e3020ab523 );                                                  
            SDK_FIXED_SIZE( u3_installed_memory_t, 0x10 );                                                  
        };                                                                                              
                                                                                                        
        struct u4_cimfs_information_t                                                                   
        {                                                                                               
            // Windows 11                                                                               
            //                                                                                          
            _n32 struct nt::guid_t target_volume;                                                         //{ +0x0000    } | .TargetVolume
            _n33 nt::unicode_view* cim_files;                                                             //{ +0x0010    } | .CimFiles
            _n34 uint32_t          cim_files_count;                                                       //{ +0x0018    } | .CimFilesCount
                                                                                                        
            SDK_MAGIC_PROPERTIES( "_LOADER_PARAMETER_EXTENSION.CimfsInformation.$", 0x0, false, 0xca5c7a8301703a85 );                                                      
            SDK_FIXED_SIZE( u4_cimfs_information_t, 0x20 );                                                      
        };                                                                                              
                                                                                                        
        using hypervisor_extension_t =                  struct nt::loader_parameter_hypervisor_extension_t;                                      
        using offline_crashdump_configuration_table_t = struct nt::offline_crashdump_configuration_table_v2_t;                                      
        using feature_configuration_information_t =     struct nt::loader_feature_configuration_information_t;                                      
                                                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                                                              
        _m000 uint32_t                                            size;                                   //{ +0x0000    +0x0000    +0x0000    } | .Size
        _m001 struct nt::profile_parameter_block_t                profile;                                //{ +0x0004    +0x0004    +0x0004    } | .Profile
        _m002 void*                                               em_inf_file_image;                      //{ +0x0018    +0x0018    +0x0018    } | .EmInfFileImage
        _m003 uint32_t                                            em_inf_file_size;                       //{ +0x0020    +0x0020    +0x0020    } | .EmInfFileSize
        _m004 void*                                               triage_dump_block;                      //{ +0x0028    +0x0028    +0x0028    } | .TriageDumpBlock
        _m005 struct nt::headless_loader_block_t*                 headless_loader_block;                  //{ +0x0030    +0x0030    +0x0030    } | .HeadlessLoaderBlock
        _m006 struct nt::smbios3_table_header_t*                  sm_bios_eps_header;                     //{ +0x0038    +0x0038    +0x0038    } | .SMBiosEPSHeader
        _m007 void*                                               drv_db_image;                           //{ +0x0040    +0x0040    +0x0040    } | .DrvDBImage
        _m008 uint32_t                                            drv_db_size;                            //{ +0x0048    +0x0048    +0x0048    } | .DrvDBSize
        _m009 void*                                               drv_db_patch_image;                     //{ +0x0050    +0x0050    +0x0050    } | .DrvDBPatchImage
        _m010 uint32_t                                            drv_db_patch_size;                      //{ +0x0058    +0x0058    +0x0058    } | .DrvDBPatchSize
        _m011 struct nt::network_loader_block_t*                  network_loader_block;                   //{ +0x0060    +0x0060    +0x0060    } | .NetworkLoaderBlock
        _m012 nt::list_entry_t                                    firmware_descriptor_list_head;          //{ +0x0068    +0x0068    +0x0068    } | .FirmwareDescriptorListHead
        _m013 void*                                               acpi_table;                             //{ +0x0078    +0x0078    +0x0078    } | .AcpiTable
        _m014 uint32_t                                            acpi_table_size;                        //{ +0x0080    +0x0080    +0x0080    } | .AcpiTableSize
        _m015 uint1_t                                             last_boot_succeeded;                    //{ +0x0084@0  +0x0084@0  +0x0084@0  } | .LastBootSucceeded
        _m016 uint1_t                                             last_boot_shutdown;                     //{ +0x0084@1  +0x0084@1  +0x0084@1  } | .LastBootShutdown
        _m017 uint1_t                                             io_port_access_supported;               //{ +0x0084@2  +0x0084@2  +0x0084@2  } | .IoPortAccessSupported
        _m018 uint1_t                                             boot_debugger_active;                   //{ +0x0084@3  +0x0084@3  +0x0084@3  } | .BootDebuggerActive
        _m019 uint1_t                                             strong_code_guarantees;                 //{ +0x0084@4  +0x0084@4  +0x0084@4  } | .StrongCodeGuarantees
        _m020 uint1_t                                             hard_strong_code_guarantees;            //{ +0x0084@5  +0x0084@5  +0x0084@5  } | .HardStrongCodeGuarantees
        _m021 uint1_t                                             sid_sharing_disabled;                   //{ +0x0084@6  +0x0084@6  +0x0084@6  } | .SidSharingDisabled
        _m022 uint1_t                                             tpm_initialized;                        //{ +0x0084@7  +0x0084@7  +0x0084@7  } | .TpmInitialized
        _m023 uint1_t                                             vsm_configured;                         //{ +0x0084@8  +0x0084@8  +0x0084@8  } | .VsmConfigured
        _m024 uint1_t                                             ium_enabled;                            //{ +0x0084@9  +0x0084@9  +0x0084@9  } | .IumEnabled
        _m025 uint1_t                                             is_smbboot;                             //{ +0x0084@10 +0x0084@10 +0x0084@10 } | .IsSmbboot
        _m026 uint1_t                                             boot_log_enabled;                       //{ +0x0084@11 +0x0084@11 +0x0084@11 } | .BootLogEnabled
        _m027 uint1_t                                             driver_verifier_enabled;                //{ +0x0084@12 +0x0084@12 +0x0084@12 } | .DriverVerifierEnabled
        _m028 uint1_t                                             suppress_monitor_x;                     //{ +0x0084@13 +0x0084@13 +0x0084@13 } | .SuppressMonitorX
        _m029 uint1_t                                             kernel_cet_enabled;                     //{ +0x0084@14 +0x0084@14 +0x0084@14 } | .KernelCetEnabled
        _m030 uint1_t                                             suppress_smap;                          //{ +0x0084@15 +0x0084@15 +0x0084@15 } | .SuppressSmap
        _m031 uint6_t                                             feature_simulations;                    //{ +0x0084@21 +0x0084@21 +0x0084@21 } | .FeatureSimulations
        _m032 uint1_t                                             microcode_self_hosting;                 //{ +0x0084@27 +0x0084@27 +0x0084@27 } | .MicrocodeSelfHosting
        _m033 uint1_t                                             xhci_legacy_handoff_skip;               //{ +0x0084@28 +0x0084@28 +0x0084@28 } | .XhciLegacyHandoffSkip
        _m034 uint1_t                                             disable_insider_opt_in_hvci;            //{ +0x0084@29 +0x0084@29 +0x0084@29 } | .DisableInsiderOptInHVCI
        _m035 uint1_t                                             microcode_min_ver_supported;            //{ +0x0084@30 +0x0084@30 +0x0084@30 } | .MicrocodeMinVerSupported
        _m036 uint1_t                                             gpu_iommu_enabled;                      //{ +0x0084@31 +0x0084@31 +0x0084@31 } | .GpuIommuEnabled
        _m037 struct nt::loader_performance_data_t                loader_performance_data;                //{ +0x0088    +0x0088    +0x0088    } | .LoaderPerformanceData
        _m038 nt::list_entry_t                                    boot_application_persistent_data;       //{ +0x00e8    +0x00e8    +0x00e8    } | .BootApplicationPersistentData
        _m039 void*                                               wmd_test_result;                        //{ +0x00f8    +0x00f8    +0x00f8    } | .WmdTestResult
        _m040 struct nt::guid_t                                   boot_identifier;                        //{ +0x0100    +0x0100    +0x0100    } | .BootIdentifier
        _m041 uint32_t                                            resume_pages;                           //{ +0x0110    +0x0110    +0x0110    } | .ResumePages
        _m042 void*                                               dump_header;                            //{ +0x0118    +0x0118    +0x0118    } | .DumpHeader
        _m043 void*                                               bg_context;                             //{ +0x0120    +0x0120    +0x0120    } | .BgContext
        _m044 void*                                               numa_locality_info;                     //{ +0x0128    +0x0128    +0x0128    } | .NumaLocalityInfo
        _m045 void*                                               numa_group_assignment;                  //{ +0x0130    +0x0130    +0x0130    } | .NumaGroupAssignment
        _m046 nt::list_entry_t                                    attached_hives;                         //{ +0x0138    +0x0138    +0x0138    } | .AttachedHives
        _m047 uint32_t                                            memory_caching_requirements_count;      //{ +0x0148    +0x0148    +0x0148    } | .MemoryCachingRequirementsCount
        _m048 void*                                               memory_caching_requirements;            //{ +0x0150    +0x0150    +0x0150    } | .MemoryCachingRequirements
        _m049 struct boot::entropy_ldr_result_t                   boot_entropy_result;                    //{ +0x0158    +0x0158    +0x0158    } | .BootEntropyResult
        _m050 uint64_t                                            processor_counter_frequency;            //{ +0x09c0    +0x09c0    +0x09c0    } | .ProcessorCounterFrequency
        _m051 hypervisor_extension_t                              hypervisor_extension;                   //{ +0x09c8    +0x09c8    +0x09c8    } | .HypervisorExtension
        _m052 struct nt::guid_t                                   hardware_configuration_id;              //{ +0x0a08    +0x0a08    +0x0a08    } | .HardwareConfigurationId
        _m053 nt::list_entry_t                                    hal_extension_module_list;              //{ +0x0a18    +0x0a18    +0x0a18    } | .HalExtensionModuleList
        _m054 int64_t                                             system_time;                            //{ +0x0a28    +0x0a48    +0x0a28    } | .SystemTime
        _m055 uint64_t                                            time_stamp_at_system_time_read;         //{ +0x0a30    +0x0a50    +0x0a30    } | .TimeStampAtSystemTimeRead
        _m056 uint64_t                                            boot_flags;                             //{ +0x0a38    +0x0a58    +0x0a38    } | .BootFlags
        _m057 uint1_t                                             dbg_menu_os_selection;                  //{ +0x0a38@0  +0x0a58@0  +0x0a38@0  } | .DbgMenuOsSelection
        _m058 uint1_t                                             dbg_hiber_boot;                         //{ +0x0a38@1  +0x0a58@1  +0x0a38@1  } | .DbgHiberBoot
        _m059 uint1_t                                             dbg_soft_restart;                       //{ +0x0a38@2  +0x0a58@2  +0x0a38@2  } | .DbgSoftRestart
        _m060 uint1_t                                             dbg_measured_launch;                    //{ +0x0a38@3  +0x0a58@3  +0x0a38@3  } | .DbgMeasuredLaunch
        _m061 uint64_t                                            internal_boot_flags;                    //{ +0x0a40    +0x0a60    +0x0a40    } | .InternalBootFlags
        _m062 uint1_t                                             dbg_utc_boot_time;                      //{ +0x0a40@0  +0x0a60@0  +0x0a40@0  } | .DbgUtcBootTime
        _m063 uint1_t                                             dbg_rtc_boot_time;                      //{ +0x0a40@1  +0x0a60@1  +0x0a40@1  } | .DbgRtcBootTime
        _m064 uint1_t                                             dbg_no_legacy_services;                 //{ +0x0a40@2  +0x0a60@2  +0x0a40@2  } | .DbgNoLegacyServices
        _m065 void*                                               wfs_fp_data;                            //{ +0x0a48    +0x0a68    +0x0a48    } | .WfsFPData
        _m066 uint32_t                                            wfs_fp_data_size;                       //{ +0x0a50    +0x0a70    +0x0a50    } | .WfsFPDataSize
        _m067 struct nt::loader_bugcheck_parameters_t             bugcheck_parameters;                    //{ +0x0a58    +0x0a78    +0x0a58    } | .BugcheckParameters
        _m068 void*                                               api_set_schema;                         //{ +0x0a80    +0x0aa0    +0x0a80    } | .ApiSetSchema
        _m069 uint32_t                                            api_set_schema_size;                    //{ +0x0a88    +0x0aa8    +0x0a88    } | .ApiSetSchemaSize
        _m070 nt::list_entry_t                                    api_set_schema_extensions;              //{ +0x0a90    +0x0ab0    +0x0a90    } | .ApiSetSchemaExtensions
        _m071 nt::unicode_view                                    acpi_bios_version;                      //{ +0x0aa0    +0x0ac0    +0x0aa0    } | .AcpiBiosVersion
        _m072 nt::unicode_view                                    smbios_version;                         //{ +0x0ab0    +0x0ad0    +0x0ab0    } | .SmbiosVersion
        _m073 nt::unicode_view                                    efi_version;                            //{ +0x0ac0    +0x0ae0    +0x0ac0    } | .EfiVersion
        _m074 struct nt::debug_device_descriptor_t*               kd_debug_device;                        //{ +0x0ad0    +0x0af0    +0x0ad0    } | .KdDebugDevice
        _m075 offline_crashdump_configuration_table_t             offline_crashdump_configuration_table;  //{ +0x0ad8    +0x0af8    +0x0ad8    } | .OfflineCrashdumpConfigurationTable
        _m076 nt::unicode_view                                    manufacturing_profile;                  //{ +0x0af8    +0x0b18    +0x0af8    } | .ManufacturingProfile
        _m077 void*                                               bbt_buffer;                             //{ +0x0b08    +0x0b28    +0x0b08    } | .BbtBuffer
        _m078 uint64_t                                            xsave_allowed_features;                 //{ +0x0b10    +0x0b30    +0x0b10    } | .XsaveAllowedFeatures
        _m079 uint32_t                                            xsave_flags;                            //{ +0x0b18    +0x0b38    +0x0b18    } | .XsaveFlags
        _m080 void*                                               boot_options;                           //{ +0x0b20    +0x0b40    +0x0b20    } | .BootOptions
        _m081 uint32_t                                            ium_enablement;                         //{ +0x0b28    +0x0b48    +0x0b28    } | .IumEnablement
        _m082 uint32_t                                            ium_policy;                             //{ +0x0b2c    +0x0b4c    +0x0b2c    } | .IumPolicy
        _m083 int32_t                                             ium_status;                             //{ +0x0b30    +0x0b50    +0x0b30    } | .IumStatus
        _m084 uint32_t                                            boot_id;                                //{ +0x0b34    +0x0b54    +0x0b34    } | .BootId
        _m085 struct nt::loader_parameter_ci_extension_t*         code_integrity_data;                    //{ +0x0b38    +0x0b58    +0x0b38    } | .CodeIntegrityData
        _m086 uint32_t                                            code_integrity_data_size;               //{ +0x0b40    +0x0b60    +0x0b40    } | .CodeIntegrityDataSize
        _m087 struct nt::loader_hive_recovery_info_t              system_hive_recovery_info;              //{ +0x0b44    +0x0b64    +0x0b44    } | .SystemHiveRecoveryInfo
        _m088 uint32_t                                            soft_restart_count;                     //{ +0x0b58    +0x0b78    +0x0b58    } | .SoftRestartCount
        _m089 int64_t                                             soft_restart_time;                      //{ +0x0b60    +0x0b80    +0x0b60    } | .SoftRestartTime
        _m090 void*                                               hypercall_code_va;                      //{ +0x0b68    +0x0b88    +0x0b68    } | .HypercallCodeVa
        _m091 void*                                               hal_virtual_address;                    //{ +0x0b70    +0x0b90    +0x0b70    } | .HalVirtualAddress
        _m092 uint64_t                                            hal_number_of_bytes;                    //{ +0x0b78    +0x0b98    +0x0b78    } | .HalNumberOfBytes
        _m093 struct nt::leap_second_data_t*                      leap_second_data;                       //{ +0x0b80    +0x0ba0    +0x0b80    } | .LeapSecondData
        _m094 uint32_t                                            major_release;                          //{ +0x0b88    +0x0ba8    +0x0b88    } | .MajorRelease
        _m095 sdk::array<char, 224>                               nt_build_lab;                           //{ +0x0b90    +0x0bb0    +0x0b90    } | .NtBuildLab
        _m096 sdk::array<char, 224>                               nt_build_lab_ex;                        //{ +0x0c70    +0x0c90    +0x0c70    } | .NtBuildLabEx
        _m097 struct nt::loader_reset_reason_t                    reset_reason;                           //{ +0x0d50    +0x0d70    +0x0d50    } | .ResetReason
        _m098 uint32_t                                            max_pci_bus_number;                     //{ +0x0d80    +0x0da0    +0x0d80    } | .MaxPciBusNumber
        _m099 uint32_t                                            feature_settings;                       //{ +0x0d84    +0x0da4    +0x0d84    } | .FeatureSettings
        _m100 uint32_t                                            hot_patch_reserve_size;                 //{ +0x0d88    +0x0da8    +0x0d88    } | .HotPatchReserveSize
        _m101 uint32_t                                            retpoline_reserve_size;                 //{ +0x0d8c    +0x0dac    +0x0d8c    } | .RetpolineReserveSize
        _m104 u0_mini_executive_t                                 mini_executive;                         //{ +0x0d90    +0x0db0    +0x0d90    } | .MiniExecutive
        _m105 struct nt::vsm_performance_data_t                   vsm_performance_data;                   //{ +0x0da0    +0x0dc0    +0x0da0    } | .VsmPerformanceData
        _m106 struct nt::numa_memory_range_t*                     numa_memory_ranges;                     //{ +0x0de0    +0x0e00    +0x0de0    } | .NumaMemoryRanges
        _m107 uint32_t                                            numa_memory_range_count;                //{ +0x0de8    +0x0e08    +0x0de8    } | .NumaMemoryRangeCount
        _m108 uint32_t                                            iommu_fault_policy;                     //{ +0x0dec    +0x0e0c    +0x0dec    } | .IommuFaultPolicy
                                                                                                        
        // Windows 11, Windows 10 v20H2                                                                 
        //                                                                                              
        _m109 feature_configuration_information_t                 feature_configuration_information;      //{ +0x0e10    +0x0df0    } | .FeatureConfigurationInformation
                                                                                                        
        // Windows 11                                                                                   
        //                                                                                              
        _m110 uint1_t                                             pointer_auth_kernel_ip_enabled;         //{ +0x0084@16 } | .PointerAuthKernelIpEnabled
        _m111 uint1_t                                             split_large_numa_nodes;                 //{ +0x0084@17 } | .SplitLargeNumaNodes
        _m112 uint1_t                                             kernel_cet_audit_mode_enabled;          //{ +0x0084@18 } | .KernelCetAuditModeEnabled
        _m113 uint1_t                                             verbose_sel_enabled;                    //{ +0x0084@19 } | .VerboseSELEnabled
        _m114 uint1_t                                             early_crash_dump_enabled;               //{ +0x0084@20 } | .EarlyCrashDumpEnabled
        _m115 nt::list_entry_t                                    prm_update_module_list;                 //{ +0x0a28    } | .PrmUpdateModuleList
        _m116 nt::list_entry_t                                    prm_firmware_module_list;               //{ +0x0a38    } | .PrmFirmwareModuleList
        _m117 struct etw::boot_config_t                           etw_boot_config;                        //{ +0x0e58    } | .EtwBootConfig
        _m118 struct boot::firmware_ramdisk_info_t*               fw_ramdisk_info;                        //{ +0x0e70    } | .FwRamdiskInfo
        _m119 void*                                               ipmi_hw_context;                        //{ +0x0e78    } | .IpmiHwContext
        _m120 uint64_t                                            idle_thread_shadow_stack;               //{ +0x0e80    } | .IdleThreadShadowStack
        _m121 uint64_t                                            transition_shadow_stack;                //{ +0x0e88    } | .TransitionShadowStack
        _m122 uint64_t*                                           ist_shadow_stacks_table;                //{ +0x0e90    } | .IstShadowStacksTable
        _m123 sdk::array<uint64_t, 2>                             reserved_for_kernel_cet;                //{ +0x0e98    } | .ReservedForKernelCet
        _m124 struct nt::memory_mirroring_data_t*                 mirroring_data;                         //{ +0x0ea8    } | .MirroringData
        _m125 int64_t                                             luid;                                   //{ +0x0eb0    } | .Luid
        _m128 u3_installed_memory_t                               installed_memory;                       //{ +0x0eb8    } | .InstalledMemory
        _m129 nt::list_entry_t                                    hot_patch_list;                         //{ +0x0ec8    } | .HotPatchList
        _m130 void*                                               bsp_microcode_data;                     //{ +0x0ed8    } | .BSPMicrocodeData
        _m131 uint32_t                                            bsp_microcode_data_size;                //{ +0x0ee0    } | .BSPMicrocodeDataSize
        _m135 u4_cimfs_information_t                              cimfs_information;                      //{ +0x0ee8    } | .CimfsInformation
        _m136 int64_t                                             hal_soft_reboot_database;               //{ +0x0f08    } | .HalSoftRebootDatabase
        _m137 uint1_t                                             kasan_enabled;                          //{ +0x0f10@0  } | .KasanEnabled
        _m138 uint64_t                                            performance_data_frequency;             //{ +0x0f18    } | .PerformanceDataFrequency
                                                                                                        
        SDK_MAGIC_PROPERTIES( "_LOADER_PARAMETER_EXTENSION.$", 0xe38, true, 0x3a13eef746818052 );                                      
        SDK_DYNAMIC_SIZE( loader_parameter_extension_t );                                               
    };                                                                                                  
};
#include "magic/loader_parameter_extension_t.end.hpp"
SDK_VERIFY( struct nt::loader_parameter_extension_t::u0_mini_executive_t, 0x10 );
SDK_VERIFY( struct nt::loader_parameter_extension_t::u3_installed_memory_t, 0x10 );
SDK_VERIFY( struct nt::loader_parameter_extension_t::u4_cimfs_information_t, 0x20 );
