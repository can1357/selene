#pragma once
#include <sdkgen/support_library.hpp>
#include "io_info_t.hpp"
#include "../rtl/bitmap_t.hpp"

namespace nt { struct dump_stack_context_t; }
namespace nt { struct kprocessor_state_t;   }
namespace nt { struct mdl_t;                }
namespace po { struct memory_image_t;       }

#include "magic/hiber_context_t.start.hpp"
namespace pop
{
    struct per_processor_context_t;

    // [struct _POP_HIBER_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hiber_context_t                                                          
    {                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                          
        _m000 uint8_t                              reset;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Reset
        _m001 uint8_t                              hiber_flags;                       //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .HiberFlags
        _m002 uint8_t                              wrote_hiber_file;                  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .WroteHiberFile
        _m003 uint8_t                              kernel_phase_verification_active;  //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .KernelPhaseVerificationActive
        _m004 volatile uint8_t                     initialization_finished;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .InitializationFinished
        _m005 volatile int32_t                     next_table_lock_held;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NextTableLockHeld
        _m006 volatile int32_t                     boot_phase_finished_barrier;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .BootPhaseFinishedBarrier
        _m007 volatile int32_t                     kernel_resume_finished_barrier;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .KernelResumeFinishedBarrier
        _m008 volatile int32_t                     hv_capture_ready_barrier;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .HvCaptureReadyBarrier
        _m009 volatile int32_t                     hv_capture_completed_barrier;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .HvCaptureCompletedBarrier
        _m010 uint8_t                              map_frozen;                        //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .MapFrozen
        _m011 struct rtl::bitmap_t                 discard_map;                       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DiscardMap
        _m012 struct rtl::bitmap_t                 kernel_phase_map;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .KernelPhaseMap
        _m013 struct rtl::bitmap_t                 boot_phase_map;                    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .BootPhaseMap
        _m014 nt::list_entry_t                     cloned_ranges;                     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ClonedRanges
        _m015 uint32_t                             cloned_range_count;                //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ClonedRangeCount
        _m016 uint64_t                             cloned_page_count;                 //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ClonedPageCount
        _m017 struct rtl::bitmap_t*                current_map;                       //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .CurrentMap
        _m018 nt::list_entry_t*                    next_clone_range;                  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .NextCloneRange
        _m019 uint64_t                             next_preserve;                     //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .NextPreserve
        _m020 struct nt::mdl_t*                    loader_mdl;                        //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .LoaderMdl
        _m021 struct nt::mdl_t*                    allocated_mdl;                     //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .AllocatedMdl
        _m022 uint64_t                             pages_out;                         //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .PagesOut
        _m023 void*                                io_pages;                          //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .IoPages
        _m024 uint32_t                             io_pages_count;                    //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .IoPagesCount
        _m025 void*                                current_mcb;                       //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .CurrentMcb
        _m026 struct nt::dump_stack_context_t*     dump_stack;                        //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .DumpStack
        _m027 struct nt::kprocessor_state_t*       wake_state;                        //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .WakeState
        _m028 uint32_t                             io_progress;                       //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .IoProgress
        _m029 int32_t                              status;                            //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .Status
        _m030 uint32_t                             graphics_proc;                     //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .GraphicsProc
        _m031 struct po::memory_image_t*           memory_image;                      //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .MemoryImage
        _m032 uint32_t*                            performance_stats;                 //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .PerformanceStats
        _m033 struct nt::mdl_t*                    boot_loader_log_mdl;               //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .BootLoaderLogMdl
        _m034 struct nt::mdl_t*                    firmware_runtime_information_mdl;  //{ +0x00e8    +0x00e0    +0x00e0    +0x00e0    } | .FirmwareRuntimeInformationMdl
        _m035 void*                                firmware_runtime_information_va;   //{ +0x00f0    +0x00e8    +0x00e8    +0x00e8    } | .FirmwareRuntimeInformationVa
        _m036 void*                                resume_context;                    //{ +0x00f8    +0x00f0    +0x00f0    +0x00f0    } | .ResumeContext
        _m037 uint32_t                             resume_context_pages;              //{ +0x0100    +0x00f8    +0x00f8    +0x00f8    } | .ResumeContextPages
        _m038 uint32_t                             secure_pages;                      //{ +0x0104    +0x00fc    +0x00fc    +0x00fc    } | .SecurePages
        _m039 uint32_t                             processor_count;                   //{ +0x0108    +0x0100    +0x0100    +0x0100    } | .ProcessorCount
        _m040 struct pop::per_processor_context_t* processor_context;                 //{ +0x0110    +0x0108    +0x0108    +0x0108    } | .ProcessorContext
        _m041 char*                                prod_cons_buffer;                  //{ +0x0118    +0x0110    +0x0110    +0x0110    } | .ProdConsBuffer
        _m042 uint32_t                             prod_cons_size;                    //{ +0x0120    +0x0118    +0x0118    +0x0118    } | .ProdConsSize
        _m043 uint32_t                             max_data_pages;                    //{ +0x0124    +0x011c    +0x011c    +0x011c    } | .MaxDataPages
        _m044 void*                                extra_buffer;                      //{ +0x0128    +0x0120    +0x0120    +0x0120    } | .ExtraBuffer
        _m045 uint64_t                             extra_buffer_size;                 //{ +0x0130    +0x0128    +0x0128    +0x0128    } | .ExtraBufferSize
        _m046 void*                                extra_map_va;                      //{ +0x0138    +0x0130    +0x0130    +0x0130    } | .ExtraMapVa
        _m047 uint64_t                             bitlocker_key_pfn;                 //{ +0x0140    +0x0138    +0x0138    +0x0138    } | .BitlockerKeyPFN
        _m048 struct pop::io_info_t                io_info;                           //{ +0x0148    +0x0140    +0x0140    +0x0140    } | .IoInfo
        _m049 uint16_t*                            io_checksums;                      //{ +0x01b8    +0x01b0    +0x01b0    +0x01b0    } | .IoChecksums
        _m050 uint64_t                             io_checksums_size;                 //{ +0x01c0    +0x01b8    +0x01b8    +0x01b8    } | .IoChecksumsSize
        _m051 uint32_t                             hardware_configuration_signature;  //{ +0x01c8    +0x01c0    +0x01c0    +0x01c0    } | .HardwareConfigurationSignature
        _m052 uint8_t                              ium_enabled;                       //{ +0x01cc    +0x01c4    +0x01c4    +0x01c4    } | .IumEnabled
                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                          
        _m053 uint8_t                              secure_boot;                       //{ +0x01c5    +0x01c5    +0x01c5    } | .SecureBoot
                                                                                    
        // Windows 10 v1607                                                         
        //                                                                          
        _m054 uint32_t                             si_log_offset;                     //{ +0x00e0    } | .SiLogOffset
                                                                                    
        SDK_MAGIC_PROPERTIES( "_POP_HIBER_CONTEXT.$", 0x1c8, true, 0x5a0b6c19fca52d53 );                                 
        SDK_DYNAMIC_SIZE( hiber_context_t );                                        
    };                                                                              
};
#include "magic/hiber_context_t.end.hpp"
