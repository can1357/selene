#pragma once
#include <sdkgen/support_library.hpp>
#include "../dbgkd/debug_data_header64_t.hpp"

#include "magic/kddebugger_data64_t.start.hpp"
namespace nt
{
    // [struct KDDEBUGGER_DATA64]
    // => WDK 10 (NV)
    //
    struct kddebugger_data64_t                                                              
    {                                                                                       
        // WDK 10                                                                           
        //                                                                                  
        _m000 struct dbgkd::debug_data_header64_t header;                                     //{ +0x0000    } | .Header
        _m001 uint64_t                            kern_base;                                  //{ +0x0018    } | .KernBase
        _m002 uint64_t                            breakpoint_with_status;                     //{ +0x0020    } | .BreakpointWithStatus
        _m003 uint64_t                            saved_context;                              //{ +0x0028    } | .SavedContext
        _m004 uint16_t                            th_callback_stack;                          //{ +0x0030    } | .ThCallbackStack
        _m005 uint16_t                            next_callback;                              //{ +0x0032    } | .NextCallback
        _m006 uint16_t                            frame_pointer;                              //{ +0x0034    } | .FramePointer
        _m007 uint1_t                             pae_enabled;                                //{ +0x0036@0  } | .PaeEnabled
        _m008 uint64_t                            ki_call_user_mode;                          //{ +0x0038    } | .KiCallUserMode
        _m009 uint64_t                            ke_user_callback_dispatcher;                //{ +0x0040    } | .KeUserCallbackDispatcher
        _m010 uint64_t                            ps_loaded_module_list;                      //{ +0x0048    } | .PsLoadedModuleList
        _m011 uint64_t                            ps_active_process_head;                     //{ +0x0050    } | .PsActiveProcessHead
        _m012 uint64_t                            psp_cid_table;                              //{ +0x0058    } | .PspCidTable
        _m013 uint64_t                            exp_system_resources_list;                  //{ +0x0060    } | .ExpSystemResourcesList
        _m014 uint64_t                            exp_paged_pool_descriptor;                  //{ +0x0068    } | .ExpPagedPoolDescriptor
        _m015 uint64_t                            exp_number_of_paged_pools;                  //{ +0x0070    } | .ExpNumberOfPagedPools
        _m016 uint64_t                            ke_time_increment;                          //{ +0x0078    } | .KeTimeIncrement
        _m017 uint64_t                            ke_bug_check_callback_list_head;            //{ +0x0080    } | .KeBugCheckCallbackListHead
        _m018 uint64_t                            ki_bugcheck_data;                           //{ +0x0088    } | .KiBugcheckData
        _m019 uint64_t                            iop_error_log_list_head;                    //{ +0x0090    } | .IopErrorLogListHead
        _m020 uint64_t                            obp_root_directory_object;                  //{ +0x0098    } | .ObpRootDirectoryObject
        _m021 uint64_t                            obp_type_object_type;                       //{ +0x00a0    } | .ObpTypeObjectType
        _m022 uint64_t                            mm_system_cache_start;                      //{ +0x00a8    } | .MmSystemCacheStart
        _m023 uint64_t                            mm_system_cache_end;                        //{ +0x00b0    } | .MmSystemCacheEnd
        _m024 uint64_t                            mm_system_cache_ws;                         //{ +0x00b8    } | .MmSystemCacheWs
        _m025 uint64_t                            mm_pfn_database;                            //{ +0x00c0    } | .MmPfnDatabase
        _m026 uint64_t                            mm_system_ptes_start;                       //{ +0x00c8    } | .MmSystemPtesStart
        _m027 uint64_t                            mm_system_ptes_end;                         //{ +0x00d0    } | .MmSystemPtesEnd
        _m028 uint64_t                            mm_subsection_base;                         //{ +0x00d8    } | .MmSubsectionBase
        _m029 uint64_t                            mm_number_of_paging_files;                  //{ +0x00e0    } | .MmNumberOfPagingFiles
        _m030 uint64_t                            mm_lowest_physical_page;                    //{ +0x00e8    } | .MmLowestPhysicalPage
        _m031 uint64_t                            mm_highest_physical_page;                   //{ +0x00f0    } | .MmHighestPhysicalPage
        _m032 uint64_t                            mm_number_of_physical_pages;                //{ +0x00f8    } | .MmNumberOfPhysicalPages
        _m033 uint64_t                            mm_maximum_non_paged_pool_in_bytes;         //{ +0x0100    } | .MmMaximumNonPagedPoolInBytes
        _m034 uint64_t                            mm_non_paged_system_start;                  //{ +0x0108    } | .MmNonPagedSystemStart
        _m035 uint64_t                            mm_non_paged_pool_start;                    //{ +0x0110    } | .MmNonPagedPoolStart
        _m036 uint64_t                            mm_non_paged_pool_end;                      //{ +0x0118    } | .MmNonPagedPoolEnd
        _m037 uint64_t                            mm_paged_pool_start;                        //{ +0x0120    } | .MmPagedPoolStart
        _m038 uint64_t                            mm_paged_pool_end;                          //{ +0x0128    } | .MmPagedPoolEnd
        _m039 uint64_t                            mm_paged_pool_information;                  //{ +0x0130    } | .MmPagedPoolInformation
        _m040 uint64_t                            mm_page_size;                               //{ +0x0138    } | .MmPageSize
        _m041 uint64_t                            mm_size_of_paged_pool_in_bytes;             //{ +0x0140    } | .MmSizeOfPagedPoolInBytes
        _m042 uint64_t                            mm_total_commit_limit;                      //{ +0x0148    } | .MmTotalCommitLimit
        _m043 uint64_t                            mm_total_committed_pages;                   //{ +0x0150    } | .MmTotalCommittedPages
        _m044 uint64_t                            mm_shared_commit;                           //{ +0x0158    } | .MmSharedCommit
        _m045 uint64_t                            mm_driver_commit;                           //{ +0x0160    } | .MmDriverCommit
        _m046 uint64_t                            mm_process_commit;                          //{ +0x0168    } | .MmProcessCommit
        _m047 uint64_t                            mm_paged_pool_commit;                       //{ +0x0170    } | .MmPagedPoolCommit
        _m048 uint64_t                            mm_extended_commit;                         //{ +0x0178    } | .MmExtendedCommit
        _m049 uint64_t                            mm_zeroed_page_list_head;                   //{ +0x0180    } | .MmZeroedPageListHead
        _m050 uint64_t                            mm_free_page_list_head;                     //{ +0x0188    } | .MmFreePageListHead
        _m051 uint64_t                            mm_standby_page_list_head;                  //{ +0x0190    } | .MmStandbyPageListHead
        _m052 uint64_t                            mm_modified_page_list_head;                 //{ +0x0198    } | .MmModifiedPageListHead
        _m053 uint64_t                            mm_modified_no_write_page_list_head;        //{ +0x01a0    } | .MmModifiedNoWritePageListHead
        _m054 uint64_t                            mm_available_pages;                         //{ +0x01a8    } | .MmAvailablePages
        _m055 uint64_t                            mm_resident_available_pages;                //{ +0x01b0    } | .MmResidentAvailablePages
        _m056 uint64_t                            pool_track_table;                           //{ +0x01b8    } | .PoolTrackTable
        _m057 uint64_t                            non_paged_pool_descriptor;                  //{ +0x01c0    } | .NonPagedPoolDescriptor
        _m058 uint64_t                            mm_highest_user_address;                    //{ +0x01c8    } | .MmHighestUserAddress
        _m059 uint64_t                            mm_system_range_start;                      //{ +0x01d0    } | .MmSystemRangeStart
        _m060 uint64_t                            mm_user_probe_address;                      //{ +0x01d8    } | .MmUserProbeAddress
        _m061 uint64_t                            kd_print_circular_buffer;                   //{ +0x01e0    } | .KdPrintCircularBuffer
        _m062 uint64_t                            kd_print_circular_buffer_end;               //{ +0x01e8    } | .KdPrintCircularBufferEnd
        _m063 uint64_t                            kd_print_write_pointer;                     //{ +0x01f0    } | .KdPrintWritePointer
        _m064 uint64_t                            kd_print_rollover_count;                    //{ +0x01f8    } | .KdPrintRolloverCount
        _m065 uint64_t                            mm_loaded_user_image_list;                  //{ +0x0200    } | .MmLoadedUserImageList
        _m066 uint64_t                            nt_build_lab;                               //{ +0x0208    } | .NtBuildLab
        _m067 uint64_t                            ki_normal_system_call;                      //{ +0x0210    } | .KiNormalSystemCall
        _m068 uint64_t                            ki_processor_block;                         //{ +0x0218    } | .KiProcessorBlock
        _m069 uint64_t                            mm_unloaded_drivers;                        //{ +0x0220    } | .MmUnloadedDrivers
        _m070 uint64_t                            mm_last_unloaded_driver;                    //{ +0x0228    } | .MmLastUnloadedDriver
        _m071 uint64_t                            mm_triage_action_taken;                     //{ +0x0230    } | .MmTriageActionTaken
        _m072 uint64_t                            mm_special_pool_tag;                        //{ +0x0238    } | .MmSpecialPoolTag
        _m073 uint64_t                            kernel_verifier;                            //{ +0x0240    } | .KernelVerifier
        _m074 uint64_t                            mm_verifier_data;                           //{ +0x0248    } | .MmVerifierData
        _m075 uint64_t                            mm_allocated_non_paged_pool;                //{ +0x0250    } | .MmAllocatedNonPagedPool
        _m076 uint64_t                            mm_peak_commitment;                         //{ +0x0258    } | .MmPeakCommitment
        _m077 uint64_t                            mm_total_commit_limit_maximum;              //{ +0x0260    } | .MmTotalCommitLimitMaximum
        _m078 uint64_t                            cm_nt_csd_version;                          //{ +0x0268    } | .CmNtCSDVersion
        _m079 uint64_t                            mm_physical_memory_block;                   //{ +0x0270    } | .MmPhysicalMemoryBlock
        _m080 uint64_t                            mm_session_base;                            //{ +0x0278    } | .MmSessionBase
        _m081 uint64_t                            mm_session_size;                            //{ +0x0280    } | .MmSessionSize
        _m082 uint64_t                            mm_system_parent_table_page;                //{ +0x0288    } | .MmSystemParentTablePage
        _m083 uint64_t                            mm_virtual_translation_base;                //{ +0x0290    } | .MmVirtualTranslationBase
        _m084 uint16_t                            offset_k_thread_next_processor;             //{ +0x0298    } | .OffsetKThreadNextProcessor
        _m085 uint16_t                            offset_k_thread_teb;                        //{ +0x029a    } | .OffsetKThreadTeb
        _m086 uint16_t                            offset_k_thread_kernel_stack;               //{ +0x029c    } | .OffsetKThreadKernelStack
        _m087 uint16_t                            offset_k_thread_initial_stack;              //{ +0x029e    } | .OffsetKThreadInitialStack
        _m088 uint16_t                            offset_k_thread_apc_process;                //{ +0x02a0    } | .OffsetKThreadApcProcess
        _m089 uint16_t                            offset_k_thread_state;                      //{ +0x02a2    } | .OffsetKThreadState
        _m090 uint16_t                            offset_k_thread_b_store;                    //{ +0x02a4    } | .OffsetKThreadBStore
        _m091 uint16_t                            offset_k_thread_b_store_limit;              //{ +0x02a6    } | .OffsetKThreadBStoreLimit
        _m092 uint16_t                            size_e_process;                             //{ +0x02a8    } | .SizeEProcess
        _m093 uint16_t                            offset_eprocess_peb;                        //{ +0x02aa    } | .OffsetEprocessPeb
        _m094 uint16_t                            offset_eprocess_parent_cid;                 //{ +0x02ac    } | .OffsetEprocessParentCID
        _m095 uint16_t                            offset_eprocess_directory_table_base;       //{ +0x02ae    } | .OffsetEprocessDirectoryTableBase
        _m096 uint16_t                            size_prcb;                                  //{ +0x02b0    } | .SizePrcb
        _m097 uint16_t                            offset_prcb_dpc_routine;                    //{ +0x02b2    } | .OffsetPrcbDpcRoutine
        _m098 uint16_t                            offset_prcb_current_thread;                 //{ +0x02b4    } | .OffsetPrcbCurrentThread
        _m099 uint16_t                            offset_prcb_mhz;                            //{ +0x02b6    } | .OffsetPrcbMhz
        _m100 uint16_t                            offset_prcb_cpu_type;                       //{ +0x02b8    } | .OffsetPrcbCpuType
        _m101 uint16_t                            offset_prcb_vendor_string;                  //{ +0x02ba    } | .OffsetPrcbVendorString
        _m102 uint16_t                            offset_prcb_proc_state_context;             //{ +0x02bc    } | .OffsetPrcbProcStateContext
        _m103 uint16_t                            offset_prcb_number;                         //{ +0x02be    } | .OffsetPrcbNumber
        _m104 uint16_t                            size_e_thread;                              //{ +0x02c0    } | .SizeEThread
        _m105 uint64_t                            kd_print_circular_buffer_ptr;               //{ +0x02c8    } | .KdPrintCircularBufferPtr
        _m106 uint64_t                            kd_print_buffer_size;                       //{ +0x02d0    } | .KdPrintBufferSize
        _m107 uint64_t                            ke_loader_block;                            //{ +0x02d8    } | .KeLoaderBlock
        _m108 uint16_t                            size_pcr;                                   //{ +0x02e0    } | .SizePcr
        _m109 uint16_t                            offset_pcr_self_pcr;                        //{ +0x02e2    } | .OffsetPcrSelfPcr
        _m110 uint16_t                            offset_pcr_current_prcb;                    //{ +0x02e4    } | .OffsetPcrCurrentPrcb
        _m111 uint16_t                            offset_pcr_contained_prcb;                  //{ +0x02e6    } | .OffsetPcrContainedPrcb
        _m112 uint16_t                            offset_pcr_initial_b_store;                 //{ +0x02e8    } | .OffsetPcrInitialBStore
        _m113 uint16_t                            offset_pcr_b_store_limit;                   //{ +0x02ea    } | .OffsetPcrBStoreLimit
        _m114 uint16_t                            offset_pcr_initial_stack;                   //{ +0x02ec    } | .OffsetPcrInitialStack
        _m115 uint16_t                            offset_pcr_stack_limit;                     //{ +0x02ee    } | .OffsetPcrStackLimit
        _m116 uint16_t                            offset_prcb_pcr_page;                       //{ +0x02f0    } | .OffsetPrcbPcrPage
        _m117 uint16_t                            offset_prcb_proc_state_special_reg;         //{ +0x02f2    } | .OffsetPrcbProcStateSpecialReg
        _m118 uint16_t                            gdt_r0_code;                                //{ +0x02f4    } | .GdtR0Code
        _m119 uint16_t                            gdt_r0_data;                                //{ +0x02f6    } | .GdtR0Data
        _m120 uint16_t                            gdt_r0_pcr;                                 //{ +0x02f8    } | .GdtR0Pcr
        _m121 uint16_t                            gdt_r3_code;                                //{ +0x02fa    } | .GdtR3Code
        _m122 uint16_t                            gdt_r3_data;                                //{ +0x02fc    } | .GdtR3Data
        _m123 uint16_t                            gdt_r3_teb;                                 //{ +0x02fe    } | .GdtR3Teb
        _m124 uint16_t                            gdt_ldt;                                    //{ +0x0300    } | .GdtLdt
        _m125 uint16_t                            gdt_tss;                                    //{ +0x0302    } | .GdtTss
        _m126 uint16_t                            gdt64r3_cm_code;                            //{ +0x0304    } | .Gdt64R3CmCode
        _m127 uint16_t                            gdt64r3_cm_teb;                             //{ +0x0306    } | .Gdt64R3CmTeb
        _m128 uint64_t                            iop_num_triage_dump_data_blocks;            //{ +0x0308    } | .IopNumTriageDumpDataBlocks
        _m129 uint64_t                            iop_triage_dump_data_blocks;                //{ +0x0310    } | .IopTriageDumpDataBlocks
        _m130 uint64_t                            vf_crash_data_block;                        //{ +0x0318    } | .VfCrashDataBlock
        _m131 uint64_t                            mm_bad_pages_detected;                      //{ +0x0320    } | .MmBadPagesDetected
        _m132 uint64_t                            mm_zeroed_page_single_bit_errors_detected;  //{ +0x0328    } | .MmZeroedPageSingleBitErrorsDetected
        _m133 uint64_t                            etwp_debugger_data;                         //{ +0x0330    } | .EtwpDebuggerData
        _m134 uint16_t                            offset_prcb_context;                        //{ +0x0338    } | .OffsetPrcbContext
                                                                                            
        SDK_NONVOL_PROPERTIES( "KDDEBUGGER_DATA64.$", 0x0, false, 0xa6f42ee4f885266 );                                          
        SDK_FIXED_SIZE( kddebugger_data64_t, 0x340 );                                          
    };                                                                                      
};
#include "magic/kddebugger_data64_t.end.hpp"
SDK_VERIFY( struct nt::kddebugger_data64_t, 0x340 );
