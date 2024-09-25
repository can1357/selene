#pragma once
#include <sdkgen/support_library.hpp>
#include "list_entry32_t.hpp"

#include "magic/peb32_t.start.hpp"
namespace nt
{
    // [struct _PEB32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct peb32_t                                                                                    
    {                                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                            
        _m000 uint8_t                                         inherited_address_space;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InheritedAddressSpace
        _m001 uint8_t                                         read_image_file_exec_options;             //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .ReadImageFileExecOptions
        _m002 uint8_t                                         being_debugged;                           //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .BeingDebugged
        _m003 uint8_t                                         bit_field;                                //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .BitField
        _m004 uint1_t                                         image_uses_large_pages;                   //{ +0x0003@0  +0x0003@0  +0x0003@0  +0x0003@0  } | .ImageUsesLargePages
        _m005 uint1_t                                         is_protected_process;                     //{ +0x0003@1  +0x0003@1  +0x0003@1  +0x0003@1  } | .IsProtectedProcess
        _m006 uint1_t                                         is_image_dynamically_relocated;           //{ +0x0003@2  +0x0003@2  +0x0003@2  +0x0003@2  } | .IsImageDynamicallyRelocated
        _m007 uint1_t                                         skip_patching_user32_forwarders;          //{ +0x0003@3  +0x0003@3  +0x0003@3  +0x0003@3  } | .SkipPatchingUser32Forwarders
        _m008 uint1_t                                         is_packaged_process;                      //{ +0x0003@4  +0x0003@4  +0x0003@4  +0x0003@4  } | .IsPackagedProcess
        _m009 uint1_t                                         is_app_container;                         //{ +0x0003@5  +0x0003@5  +0x0003@5  +0x0003@5  } | .IsAppContainer
        _m010 uint1_t                                         is_protected_process_light;               //{ +0x0003@6  +0x0003@6  +0x0003@6  +0x0003@6  } | .IsProtectedProcessLight
        _m011 uint1_t                                         is_long_path_aware_process;               //{ +0x0003@7  +0x0003@7  +0x0003@7  +0x0003@7  } | .IsLongPathAwareProcess
        _m012 uint32_t                                        mutant;                                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Mutant
        _m013 uint32_t                                        image_base_address;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ImageBaseAddress
        _m014 uint32_t                                        ldr;                                      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Ldr
        _m015 uint32_t                                        process_parameters;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessParameters
        _m016 uint32_t                                        sub_system_data;                          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .SubSystemData
        _m017 uint32_t                                        process_heap;                             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ProcessHeap
        _m018 uint32_t                                        fast_peb_lock;                            //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .FastPebLock
        _m019 uint32_t                                        atl_thunk_s_list_ptr;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .AtlThunkSListPtr
        _m020 uint32_t                                        ifeo_key;                                 //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .IFEOKey
        _m021 uint32_t                                        cross_process_flags;                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CrossProcessFlags
        _m022 uint1_t                                         process_in_job;                           //{ +0x0028@0  +0x0028@0  +0x0028@0  +0x0028@0  } | .ProcessInJob
        _m023 uint1_t                                         process_initializing;                     //{ +0x0028@1  +0x0028@1  +0x0028@1  +0x0028@1  } | .ProcessInitializing
        _m024 uint1_t                                         process_using_veh;                        //{ +0x0028@2  +0x0028@2  +0x0028@2  +0x0028@2  } | .ProcessUsingVEH
        _m025 uint1_t                                         process_using_vch;                        //{ +0x0028@3  +0x0028@3  +0x0028@3  +0x0028@3  } | .ProcessUsingVCH
        _m026 uint1_t                                         process_using_fth;                        //{ +0x0028@4  +0x0028@4  +0x0028@4  +0x0028@4  } | .ProcessUsingFTH
        _m027 uint32_t                                        kernel_callback_table;                    //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .KernelCallbackTable
        _m028 uint32_t                                        user_shared_info_ptr;                     //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .UserSharedInfoPtr
        _m029 sdk::variant<sdk::array<uint32_t, 1>, uint32_t> system_reserved;                          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SystemReserved
        _m030 uint32_t                                        atl_thunk_s_list_ptr32;                   //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .AtlThunkSListPtr32
        _m031 uint32_t                                        api_set_map;                              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ApiSetMap
        _m032 uint32_t                                        tls_expansion_counter;                    //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .TlsExpansionCounter
        _m033 uint32_t                                        tls_bitmap;                               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .TlsBitmap
        _m034 sdk::array<uint32_t, 2>                         tls_bitmap_bits;                          //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .TlsBitmapBits
        _m035 uint32_t                                        read_only_shared_memory_base;             //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .ReadOnlySharedMemoryBase
        _m036 uint32_t                                        read_only_static_server_data;             //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .ReadOnlyStaticServerData
        _m037 uint32_t                                        ansi_code_page_data;                      //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .AnsiCodePageData
        _m038 uint32_t                                        oem_code_page_data;                       //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .OemCodePageData
        _m039 uint32_t                                        unicode_case_table_data;                  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .UnicodeCaseTableData
        _m040 uint32_t                                        number_of_processors;                     //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .NumberOfProcessors
        _m041 uint32_t                                        nt_global_flag;                           //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .NtGlobalFlag
        _m042 int64_t                                         critical_section_timeout;                 //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .CriticalSectionTimeout
        _m043 uint32_t                                        heap_segment_reserve;                     //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .HeapSegmentReserve
        _m044 uint32_t                                        heap_segment_commit;                      //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .HeapSegmentCommit
        _m045 uint32_t                                        heap_de_commit_total_free_threshold;      //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .HeapDeCommitTotalFreeThreshold
        _m046 uint32_t                                        heap_de_commit_free_block_threshold;      //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .HeapDeCommitFreeBlockThreshold
        _m047 uint32_t                                        number_of_heaps;                          //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .NumberOfHeaps
        _m048 uint32_t                                        maximum_number_of_heaps;                  //{ +0x008c    +0x008c    +0x008c    +0x008c    } | .MaximumNumberOfHeaps
        _m049 uint32_t                                        process_heaps;                            //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .ProcessHeaps
        _m050 uint32_t                                        gdi_shared_handle_table;                  //{ +0x0094    +0x0094    +0x0094    +0x0094    } | .GdiSharedHandleTable
        _m051 uint32_t                                        process_starter_helper;                   //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .ProcessStarterHelper
        _m052 uint32_t                                        gdi_dc_attribute_list;                    //{ +0x009c    +0x009c    +0x009c    +0x009c    } | .GdiDCAttributeList
        _m053 uint32_t                                        loader_lock;                              //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .LoaderLock
        _m054 uint32_t                                        os_major_version;                         //{ +0x00a4    +0x00a4    +0x00a4    +0x00a4    } | .OSMajorVersion
        _m055 uint32_t                                        os_minor_version;                         //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .OSMinorVersion
        _m056 uint16_t                                        os_build_number;                          //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .OSBuildNumber
        _m057 uint16_t                                        oscsd_version;                            //{ +0x00ae    +0x00ae    +0x00ae    +0x00ae    } | .OSCSDVersion
        _m058 uint32_t                                        os_platform_id;                           //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .OSPlatformId
        _m059 uint32_t                                        image_subsystem;                          //{ +0x00b4    +0x00b4    +0x00b4    +0x00b4    } | .ImageSubsystem
        _m060 uint32_t                                        image_subsystem_major_version;            //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .ImageSubsystemMajorVersion
        _m061 uint32_t                                        image_subsystem_minor_version;            //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .ImageSubsystemMinorVersion
        _m062 uint32_t                                        active_process_affinity_mask;             //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .ActiveProcessAffinityMask
        _m063 sdk::array<uint32_t, 34>                        gdi_handle_buffer;                        //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .GdiHandleBuffer
        _m064 uint32_t                                        post_process_init_routine;                //{ +0x014c    +0x014c    +0x014c    +0x014c    } | .PostProcessInitRoutine
        _m065 uint32_t                                        tls_expansion_bitmap;                     //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .TlsExpansionBitmap
        _m066 sdk::array<uint32_t, 32>                        tls_expansion_bitmap_bits;                //{ +0x0154    +0x0154    +0x0154    +0x0154    } | .TlsExpansionBitmapBits
        _m067 uint32_t                                        session_id;                               //{ +0x01d4    +0x01d4    +0x01d4    +0x01d4    } | .SessionId
        _m068 uint64_t                                        app_compat_flags;                         //{ +0x01d8    +0x01d8    +0x01d8    +0x01d8    } | .AppCompatFlags
        _m069 uint64_t                                        app_compat_flags_user;                    //{ +0x01e0    +0x01e0    +0x01e0    +0x01e0    } | .AppCompatFlagsUser
        _m070 uint32_t                                        p_shim_data;                              //{ +0x01e8    +0x01e8    +0x01e8    +0x01e8    } | .pShimData
        _m071 uint32_t                                        app_compat_info;                          //{ +0x01ec    +0x01ec    +0x01ec    +0x01ec    } | .AppCompatInfo
        _m072 nt::ascii_view32                                csd_version;                              //{ +0x01f0    +0x01f0    +0x01f0    +0x01f0    } | .CSDVersion
        _m073 uint32_t                                        activation_context_data;                  //{ +0x01f8    +0x01f8    +0x01f8    +0x01f8    } | .ActivationContextData
        _m074 uint32_t                                        process_assembly_storage_map;             //{ +0x01fc    +0x01fc    +0x01fc    +0x01fc    } | .ProcessAssemblyStorageMap
        _m075 uint32_t                                        system_default_activation_context_data;   //{ +0x0200    +0x0200    +0x0200    +0x0200    } | .SystemDefaultActivationContextData
        _m076 uint32_t                                        system_assembly_storage_map;              //{ +0x0204    +0x0204    +0x0204    +0x0204    } | .SystemAssemblyStorageMap
        _m077 uint32_t                                        minimum_stack_commit;                     //{ +0x0208    +0x0208    +0x0208    +0x0208    } | .MinimumStackCommit
        _m078 uint32_t                                        wer_registration_data;                    //{ +0x0230    +0x0230    +0x0230    +0x0230    } | .WerRegistrationData
        _m079 uint32_t                                        wer_ship_assert_ptr;                      //{ +0x0234    +0x0234    +0x0234    +0x0234    } | .WerShipAssertPtr
        _m080 uint32_t                                        p_image_header_hash;                      //{ +0x023c    +0x023c    +0x023c    +0x023c    } | .pImageHeaderHash
        _m081 uint32_t                                        tracing_flags;                            //{ +0x0240    +0x0240    +0x0240    +0x0240    } | .TracingFlags
        _m082 uint1_t                                         heap_tracing_enabled;                     //{ +0x0240@0  +0x0240@0  +0x0240@0  +0x0240@0  } | .HeapTracingEnabled
        _m083 uint1_t                                         crit_sec_tracing_enabled;                 //{ +0x0240@1  +0x0240@1  +0x0240@1  +0x0240@1  } | .CritSecTracingEnabled
        _m084 uint1_t                                         lib_loader_tracing_enabled;               //{ +0x0240@2  +0x0240@2  +0x0240@2  +0x0240@2  } | .LibLoaderTracingEnabled
        _m085 uint29_t                                        spare_tracing_bits;                       //{ +0x0240@3  +0x0240@3  +0x0240@3  +0x0240@3  } | .SpareTracingBits
        _m086 uint64_t                                        csr_server_read_only_shared_memory_base;  //{ +0x0248    +0x0248    +0x0248    +0x0248    } | .CsrServerReadOnlySharedMemoryBase
        _m087 uint32_t                                        tpp_workerp_list_lock;                    //{ +0x0250    +0x0250    +0x0250    +0x0250    } | .TppWorkerpListLock
        _m088 struct nt::list_entry32_t                       tpp_workerp_list;                         //{ +0x0254    +0x0254    +0x0254    +0x0254    } | .TppWorkerpList
        _m089 sdk::array<uint32_t, 128>                       wait_on_address_hash_table;               //{ +0x025c    +0x025c    +0x025c    +0x025c    } | .WaitOnAddressHashTable
                                                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                                                            
        _m090 uint1_t                                         process_previously_throttled;             //{ +0x0028@5  +0x0028@5  +0x0028@5  } | .ProcessPreviouslyThrottled
        _m091 uint1_t                                         process_currently_throttled;              //{ +0x0028@6  +0x0028@6  +0x0028@6  } | .ProcessCurrentlyThrottled
        _m092 uint1_t                                         process_images_hot_patched;               //{ +0x0028@7  +0x0028@7  +0x0028@7  } | .ProcessImagesHotPatched
        _m093 uint32_t                                        shared_data;                              //{ +0x0050    +0x0050    +0x0050    } | .SharedData
        _m094 sdk::array<uint32_t, 5>                         spare_ulongs;                             //{ +0x021c    +0x0220    +0x021c    } | .SpareUlongs
        _m095 uint32_t                                        telemetry_coverage_header;                //{ +0x045c    +0x045c    +0x045c    } | .TelemetryCoverageHeader
        _m096 uint32_t                                        cloud_file_flags;                         //{ +0x0460    +0x0460    +0x0460    } | .CloudFileFlags
        _m097 uint32_t                                        cloud_file_diag_flags;                    //{ +0x0464    +0x0464    +0x0464    } | .CloudFileDiagFlags
        _m098 char                                            placeholder_compatibility_mode;           //{ +0x0468    +0x0468    +0x0468    } | .PlaceholderCompatibilityMode
        _m099 sdk::array<char, 7>                             placeholder_compatibility_mode_reserved;  //{ +0x0469    +0x0469    +0x0469    } | .PlaceholderCompatibilityModeReserved
        _m100 uint32_t                                        leap_second_data;                         //{ +0x0470    +0x0470    +0x0470    } | .LeapSecondData
        _m101 uint32_t                                        leap_second_flags;                        //{ +0x0474    +0x0474    +0x0474    } | .LeapSecondFlags
        _m102 uint1_t                                         sixty_second_enabled;                     //{ +0x0474@0  +0x0474@0  +0x0474@0  } | .SixtySecondEnabled
        _m103 uint32_t                                        nt_global_flag2;                          //{ +0x0478    +0x0478    +0x0478    } | .NtGlobalFlag2
                                                                                                      
        // Windows 10 v1607                                                                           
        //                                                                                            
        _m104 uint32_t                                        spare_pvoid0;                             //{ +0x0050    } | .SparePvoid0
        _m105 uint32_t                                        fls_callback;                             //{ +0x020c    } | .FlsCallback
        _m106 struct nt::list_entry32_t                       fls_list_head;                            //{ +0x0210    } | .FlsListHead
        _m107 uint32_t                                        fls_bitmap;                               //{ +0x0218    } | .FlsBitmap
        _m108 sdk::array<uint32_t, 4>                         fls_bitmap_bits;                          //{ +0x021c    } | .FlsBitmapBits
        _m109 uint32_t                                        fls_high_index;                           //{ +0x022c    } | .FlsHighIndex
                                                                                                      
        // Windows 11                                                                                 
        //                                                                                            
        _m110 uint32_t                                        patch_loader_data;                        //{ +0x0214    } | .PatchLoaderData
        _m111 uint32_t                                        chpe_v2_process_info;                     //{ +0x0218    } | .ChpeV2ProcessInfo
        _m112 uint32_t                                        app_model_feature_state;                  //{ +0x021c    } | .AppModelFeatureState
        _m113 uint16_t                                        active_code_page;                         //{ +0x0228    } | .ActiveCodePage
        _m114 uint16_t                                        oem_code_page;                            //{ +0x022a    } | .OemCodePage
        _m115 uint16_t                                        use_case_mapping;                         //{ +0x022c    } | .UseCaseMapping
        _m116 uint16_t                                        unused_nls_field;                         //{ +0x022e    } | .UnusedNlsField
        _m117 uint64_t                                        extended_feature_disable_mask;            //{ +0x0480    } | .ExtendedFeatureDisableMask
                                                                                                      
        SDK_MAGIC_PROPERTIES( "_PEB32.$", 0x480, true, 0x67fec3bdb3675ffb );                                        
        SDK_DYNAMIC_SIZE( peb32_t );                                                                  
    };                                                                                                
};
#include "magic/peb32_t.end.hpp"
