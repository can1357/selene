#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hiber_perf_t.start.hpp"
namespace po
{
    // [struct _PO_HIBER_PERF]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hiber_perf_t                                           
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                        
        _m000 uint64_t hiber_io_ticks;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HiberIoTicks
        _m001 uint64_t hiber_io_cpu_ticks;                          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HiberIoCpuTicks
        _m002 uint64_t hiber_init_ticks;                            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HiberInitTicks
        _m003 uint64_t hiber_hiber_file_ticks;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .HiberHiberFileTicks
        _m004 uint64_t hiber_compress_ticks;                        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HiberCompressTicks
        _m005 uint64_t hiber_shared_buffer_ticks;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .HiberSharedBufferTicks
        _m006 uint64_t hiber_checksum_ticks;                        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .HiberChecksumTicks
        _m007 uint64_t hiber_checksum_io_ticks;                     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .HiberChecksumIoTicks
        _m008 int64_t  total_hibernate_time;                        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .TotalHibernateTime
        _m009 int64_t  hibernate_complete_timestamp;                //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .HibernateCompleteTimestamp
        _m010 uint32_t post_time;                                   //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .POSTTime
        _m011 uint32_t resume_boot_mgr_time;                        //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .ResumeBootMgrTime
        _m012 uint32_t bootmgr_user_input_time;                     //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .BootmgrUserInputTime
        _m013 uint64_t resume_app_ticks;                            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ResumeAppTicks
        _m014 uint64_t resume_app_start_timestamp;                  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .ResumeAppStartTimestamp
        _m015 uint64_t resume_library_init_ticks;                   //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .ResumeLibraryInitTicks
        _m016 uint64_t resume_init_ticks;                           //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .ResumeInitTicks
        _m017 uint64_t resume_restore_image_start_timestamp;        //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .ResumeRestoreImageStartTimestamp
        _m018 uint64_t resume_hiber_file_ticks;                     //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .ResumeHiberFileTicks
        _m019 uint64_t resume_io_ticks;                             //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .ResumeIoTicks
        _m020 uint64_t resume_decompress_ticks;                     //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .ResumeDecompressTicks
        _m021 uint64_t resume_allocate_ticks;                       //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .ResumeAllocateTicks
        _m022 uint64_t resume_user_in_out_ticks;                    //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .ResumeUserInOutTicks
        _m023 uint64_t resume_map_ticks;                            //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .ResumeMapTicks
        _m024 uint64_t resume_unmap_ticks;                          //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .ResumeUnmapTicks
        _m025 uint64_t resume_checksum_ticks;                       //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .ResumeChecksumTicks
        _m026 uint64_t resume_checksum_io_ticks;                    //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .ResumeChecksumIoTicks
        _m027 uint64_t resume_kernel_switch_timestamp;              //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .ResumeKernelSwitchTimestamp
        _m028 uint64_t write_log_data_timestamp;                    //{ +0x00d8    +0x00e0    +0x00e0    +0x00e0    } | .WriteLogDataTimestamp
        _m029 uint64_t kernel_return_from_handler;                  //{ +0x00e0    +0x00e8    +0x00e8    +0x00e8    } | .KernelReturnFromHandler
        _m030 uint64_t time_stamp_counter_at_switch_time;           //{ +0x00e8    +0x00f0    +0x00f0    +0x00f0    } | .TimeStampCounterAtSwitchTime
        _m031 uint64_t sleeper_thread_end;                          //{ +0x0100    +0x0108    +0x0108    +0x0108    } | .SleeperThreadEnd
        _m032 uint64_t kernel_return_system_power_state_timestamp;  //{ +0x0108    +0x0118    +0x0118    +0x0118    } | .KernelReturnSystemPowerStateTimestamp
        _m033 uint64_t io_boundedness;                              //{ +0x0110    +0x0120    +0x0120    +0x0120    } | .IoBoundedness
        _m034 uint64_t kernel_decompress_ticks;                     //{ +0x0118    +0x0128    +0x0128    +0x0128    } | .KernelDecompressTicks
        _m035 uint64_t kernel_io_ticks;                             //{ +0x0120    +0x0130    +0x0130    +0x0130    } | .KernelIoTicks
        _m036 uint64_t kernel_copy_ticks;                           //{ +0x0128    +0x0138    +0x0138    +0x0138    } | .KernelCopyTicks
        _m037 uint64_t read_check_count;                            //{ +0x0130    +0x0140    +0x0140    +0x0140    } | .ReadCheckCount
        _m038 uint64_t kernel_init_ticks;                           //{ +0x0138    +0x0148    +0x0148    +0x0148    } | .KernelInitTicks
        _m039 uint64_t kernel_resume_hiber_file_ticks;              //{ +0x0140    +0x0150    +0x0150    +0x0150    } | .KernelResumeHiberFileTicks
        _m040 uint64_t kernel_io_cpu_ticks;                         //{ +0x0148    +0x0158    +0x0158    +0x0158    } | .KernelIoCpuTicks
        _m041 uint64_t kernel_shared_buffer_ticks;                  //{ +0x0150    +0x0160    +0x0160    +0x0160    } | .KernelSharedBufferTicks
        _m042 uint64_t kernel_animation_ticks;                      //{ +0x0158    +0x0168    +0x0168    +0x0168    } | .KernelAnimationTicks
        _m043 uint64_t kernel_checksum_ticks;                       //{ +0x0160    +0x0170    +0x0170    +0x0170    } | .KernelChecksumTicks
        _m044 uint64_t kernel_checksum_io_ticks;                    //{ +0x0168    +0x0178    +0x0178    +0x0178    } | .KernelChecksumIoTicks
        _m045 int64_t  animation_start;                             //{ +0x0170    +0x0180    +0x0180    +0x0180    } | .AnimationStart
        _m046 int64_t  animation_stop;                              //{ +0x0178    +0x0188    +0x0188    +0x0188    } | .AnimationStop
        _m047 uint32_t device_resume_time;                          //{ +0x0180    +0x0190    +0x0190    +0x0190    } | .DeviceResumeTime
        _m048 uint64_t secure_pages_processed;                      //{ +0x0188    +0x0198    +0x0198    +0x0198    } | .SecurePagesProcessed
        _m049 uint64_t boot_pages_processed;                        //{ +0x0190    +0x01a0    +0x01a0    +0x01a0    } | .BootPagesProcessed
        _m050 uint64_t kernel_pages_processed;                      //{ +0x0198    +0x01a8    +0x01a8    +0x01a8    } | .KernelPagesProcessed
        _m051 uint64_t boot_bytes_written;                          //{ +0x01a0    +0x01b0    +0x01b0    +0x01b0    } | .BootBytesWritten
        _m052 uint64_t kernel_bytes_written;                        //{ +0x01a8    +0x01b8    +0x01b8    +0x01b8    } | .KernelBytesWritten
        _m053 uint64_t boot_pages_written;                          //{ +0x01b0    +0x01c0    +0x01c0    +0x01c0    } | .BootPagesWritten
        _m054 uint64_t kernel_pages_written;                        //{ +0x01b8    +0x01c8    +0x01c8    +0x01c8    } | .KernelPagesWritten
        _m055 uint64_t bytes_written;                               //{ +0x01c0    +0x01d0    +0x01d0    +0x01d0    } | .BytesWritten
        _m056 uint32_t pages_written;                               //{ +0x01c8    +0x01d8    +0x01d8    +0x01d8    } | .PagesWritten
        _m057 uint32_t file_runs;                                   //{ +0x01cc    +0x01dc    +0x01dc    +0x01dc    } | .FileRuns
        _m058 uint32_t no_multi_stage_resume_reason;                //{ +0x01d0    +0x01e0    +0x01e0    +0x01e0    } | .NoMultiStageResumeReason
        _m059 uint32_t max_huff_ratio;                              //{ +0x01d4    +0x01e4    +0x01e4    +0x01e4    } | .MaxHuffRatio
        _m060 uint64_t adjusted_total_resume_time;                  //{ +0x01d8    +0x01e8    +0x01e8    +0x01e8    } | .AdjustedTotalResumeTime
        _m061 uint64_t resume_complete_timestamp;                   //{ +0x01e0    +0x01f0    +0x01f0    +0x01f0    } | .ResumeCompleteTimestamp
                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                           
        //                                                        
        _m062 uint64_t hal_tsc_offset;                              //{ +0x00f0    +0x00f8    +0x00f8    } | .HalTscOffset
        _m063 uint64_t hvl_tsc_offset;                              //{ +0x00f8    +0x0100    +0x0100    } | .HvlTscOffset
                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                        
        _m064 uint64_t cycles_per_ms;                               //{ +0x00d8    +0x00d8    +0x00d8    } | .CyclesPerMs
        _m065 uint64_t post_cmos_update_timestamp;                  //{ +0x0110    +0x0110    +0x0110    } | .PostCmosUpdateTimestamp
                                                                  
        // Windows 11                                             
        //                                                        
        _m066 uint64_t winresume_exit_timestamp;                    //{ +0x01f8    } | .WinresumeExitTimestamp
        _m067 uint64_t tcb_loader_start_timestamp;                  //{ +0x0200    } | .TcbLoaderStartTimestamp
        _m068 uint64_t tcb_loader_end_timestamp;                    //{ +0x0208    } | .TcbLoaderEndTimestamp
        _m069 uint64_t remapped_page_lookup_cycles;                 //{ +0x0210    } | .RemappedPageLookupCycles
        _m070 uint64_t tcb_launch_prepare_cycles;                   //{ +0x0218    } | .TcbLaunchPrepareCycles
        _m071 uint64_t tcb_launch_prepare_data_cycles;              //{ +0x0220    } | .TcbLaunchPrepareDataCycles
        _m072 uint64_t tcb_restore_state_cycles;                    //{ +0x0228    } | .TcbRestoreStateCycles
        _m073 uint64_t decrypt_vsm_pages_phase0_cycles;             //{ +0x0230    } | .DecryptVsmPagesPhase0Cycles
        _m074 uint64_t decrypt_vsm_pages_phase1_cycles;             //{ +0x0238    } | .DecryptVsmPagesPhase1Cycles
        _m075 uint64_t decrypt_vsm_pages_phase2_cycles;             //{ +0x0240    } | .DecryptVsmPagesPhase2Cycles
        _m076 uint64_t tcb_loader_authenticate_cycles;              //{ +0x0248    } | .TcbLoaderAuthenticateCycles
        _m077 uint64_t tcb_loader_decrypt_cycles;                   //{ +0x0250    } | .TcbLoaderDecryptCycles
        _m078 uint64_t tcb_loader_validate_cycles;                  //{ +0x0258    } | .TcbLoaderValidateCycles
                                                                  
        SDK_MAGIC_PROPERTIES( "_PO_HIBER_PERF.$", 0x1f8, true, 0xc6f8de27fef2e0ed );                                           
        SDK_DYNAMIC_SIZE( hiber_perf_t );                                           
    };                                                            
};
#include "magic/hiber_perf_t.end.hpp"
