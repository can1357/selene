#pragma once
#include <sdkgen/support_library.hpp>
#include "../../interrupt_type_t.hpp"
#include "../../fault_error_code_t.hpp"
#include "../../page_fault_flags_t.hpp"
#include "../../miracast_chunk_info_t.hpp"
#include "../../render_pipeline_stage_t.hpp"
#include "present_displayonly_progress_t.hpp"
#include "../../cb/notify_interrupt_data_flags_t.hpp"

namespace dxgk { struct multiplane_overlay_vsync_info2_t; }
namespace dxgk { struct multiplane_overlay_vsync_info_t;  }

#include "magic/notify_interrupt_data_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA]
    // => WDK 10 (NV)
    //
    struct notify_interrupt_data_t                                                                                                        
    {                                                                                                                                     
        struct u0_dma_completed_t                                                                                                         
        {                                                                                                                                 
            // WDK 10                                                                                                                     
            //                                                                                                                            
            _m01 uint32_t submission_fence_id;                                                                                              //{ +0x0000    } | .SubmissionFenceId
            _m02 uint32_t node_ordinal;                                                                                                     //{ +0x0004    } | .NodeOrdinal
            _m03 uint32_t engine_ordinal;                                                                                                   //{ +0x0008    } | .EngineOrdinal
                                                                                                                                          
            SDK_NONVOL_PROPERTIES( "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaCompleted.$", 0x0, false, 0x18679a01daab9e5f );                                                         
            SDK_FIXED_SIZE( u0_dma_completed_t, 0xc );                                                                                    
        };                                                                                                                                
                                                                                                                                          
        struct u1_dma_preempted_t                                                                                                         
        {                                                                                                                                 
            // WDK 10                                                                                                                     
            //                                                                                                                            
            _m05 uint32_t preemption_fence_id;                                                                                              //{ +0x0000    } | .PreemptionFenceId
            _m06 uint32_t last_completed_fence_id;                                                                                          //{ +0x0004    } | .LastCompletedFenceId
            _m07 uint32_t node_ordinal;                                                                                                     //{ +0x0008    } | .NodeOrdinal
            _m08 uint32_t engine_ordinal;                                                                                                   //{ +0x000c    } | .EngineOrdinal
                                                                                                                                          
            SDK_NONVOL_PROPERTIES( "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaPreempted.$", 0x0, false, 0x6c26075fba98d838 );                                                             
            SDK_FIXED_SIZE( u1_dma_preempted_t, 0x10 );                                                                                   
        };                                                                                                                                
                                                                                                                                          
        struct u2_dma_faulted_t                                                                                                           
        {                                                                                                                                 
            // WDK 10                                                                                                                     
            //                                                                                                                            
            _m10 uint32_t faulted_fence_id;                                                                                                 //{ +0x0000    } | .FaultedFenceId
            _m11 int32_t  status;                                                                                                           //{ +0x0004    } | .Status
            _m12 uint32_t node_ordinal;                                                                                                     //{ +0x0008    } | .NodeOrdinal
            _m13 uint32_t engine_ordinal;                                                                                                   //{ +0x000c    } | .EngineOrdinal
                                                                                                                                          
            SDK_NONVOL_PROPERTIES( "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaFaulted.$", 0x0, false, 0xdbde79873f9b52e8 );                                                      
            SDK_FIXED_SIZE( u2_dma_faulted_t, 0x10 );                                                                                     
        };                                                                                                                                
                                                                                                                                          
        struct u3_crtc_vsync_t                                                                                                            
        {                                                                                                                                 
            // WDK 10                                                                                                                     
            //                                                                                                                            
            _m15 uint32_t vid_pn_target_id;                                                                                                 //{ +0x0000    } | .VidPnTargetId
            _m16 int64_t  physical_address;                                                                                                 //{ +0x0008    } | .PhysicalAddress
            _m17 uint32_t physical_adapter_mask;                                                                                            //{ +0x0010    } | .PhysicalAdapterMask
                                                                                                                                          
            SDK_NONVOL_PROPERTIES( "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.CrtcVsync.$", 0x0, false, 0x7a362bf6ae5dcbda );                                                           
            SDK_FIXED_SIZE( u3_crtc_vsync_t, 0x18 );                                                                                      
        };                                                                                                                                
                                                                                                                                          
        struct u4_display_only_vsync_t                                                                                                    
        {                                                                                                                                 
            // WDK 10                                                                                                                     
            //                                                                                                                            
            _m19 uint32_t vid_pn_target_id;                                                                                                 //{ +0x0000    } | .VidPnTargetId
                                                                                                                                          
            SDK_NONVOL_PROPERTIES( "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DisplayOnlyVsync.$", 0x0, false, 0x5a8762881fa974c4 );                                                      
            SDK_FIXED_SIZE( u4_display_only_vsync_t, 0x4 );                                                                               
        };                                                                                                                                
                                                                                                                                          
        struct u5_crtc_vsync_with_multi_plane_overlay_t                                                                                   
        {                                                                                                                                 
            // WDK 10                                                                                                                     
            //                                                                                                                            
            _m21 uint32_t                                      vid_pn_target_id;                                                            //{ +0x0000    } | .VidPnTargetId
            _m22 uint32_t                                      physical_adapter_mask;                                                       //{ +0x0004    } | .PhysicalAdapterMask
            _m23 uint32_t                                      multi_plane_overlay_vsync_info_count;                                        //{ +0x0008    } | .MultiPlaneOverlayVsyncInfoCount
            _m24 struct dxgk::multiplane_overlay_vsync_info_t* p_multi_plane_overlay_vsync_info;                                            //{ +0x0010    } | .pMultiPlaneOverlayVsyncInfo
                                                                                                                                          
            SDK_NONVOL_PROPERTIES( "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.CrtcVsyncWithMultiPlaneOverlay.$", 0x0, false, 0x194e9083eb7a1ddc );                                                                          
            SDK_FIXED_SIZE( u5_crtc_vsync_with_multi_plane_overlay_t, 0x18 );                                                                          
        };                                                                                                                                
                                                                                                                                          
        struct u6_miracast_encode_chunk_completed_t                                                                                       
        {                                                                                                                                 
            // WDK 10                                                                                                                     
            //                                                                                                                            
            _m27 uint32_t                           vid_pn_target_id;                                                                       //{ +0x0000    } | .VidPnTargetId
            _m28 struct dxgk::miracast_chunk_info_t chunk_info;                                                                             //{ +0x0008    } | .ChunkInfo
            _m29 void*                              p_private_driver_data;                                                                  //{ +0x0020    } | .pPrivateDriverData
            _m30 uint32_t                           private_data_driver_size;                                                               //{ +0x0028    } | .PrivateDataDriverSize
            _m31 int32_t                            status;                                                                                 //{ +0x002c    } | .Status
                                                                                                                                          
            SDK_NONVOL_PROPERTIES( "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.MiracastEncodeChunkCompleted.$", 0x0, false, 0x7d1fb610c837f9d );                                                              
            SDK_FIXED_SIZE( u6_miracast_encode_chunk_completed_t, 0x30 );                                                                 
        };                                                                                                                                
                                                                                                                                          
        struct u7_dma_page_faulted_t                                                                                                      
        {                                                                                                                                 
            // WDK 10                                                                                                                     
            //                                                                                                                            
            _m33 uint32_t                           faulted_fence_id;                                                                       //{ +0x0000    } | .FaultedFenceId
            _m34 uint64_t                           faulted_primitive_api_sequence_number;                                                  //{ +0x0008    } | .FaultedPrimitiveAPISequenceNumber
            _m35 enum dxgk::render_pipeline_stage_t faulted_pipeline_stage;                                                                 //{ +0x0010    } | .FaultedPipelineStage
            _m36 uint32_t                           faulted_bind_table_entry;                                                               //{ +0x0014    } | .FaultedBindTableEntry
            _m37 enum dxgk::page_fault_flags_t      page_fault_flags;                                                                       //{ +0x0018    } | .PageFaultFlags
            _m38 uint64_t                           faulted_virtual_address;                                                                //{ +0x0020    } | .FaultedVirtualAddress
            _m39 uint32_t                           node_ordinal;                                                                           //{ +0x0028    } | .NodeOrdinal
            _m40 uint32_t                           engine_ordinal;                                                                         //{ +0x002c    } | .EngineOrdinal
            _m41 uint32_t                           page_table_level;                                                                       //{ +0x0030    } | .PageTableLevel
            _m42 struct dxgk::fault_error_code_t    fault_error_code;                                                                       //{ +0x0034    } | .FaultErrorCode
            _m43 void*                              faulted_process_handle;                                                                 //{ +0x0038    } | .FaultedProcessHandle
                                                                                                                                          
            SDK_NONVOL_PROPERTIES( "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.DmaPageFaulted.$", 0x0, false, 0xd41ce66c9508f02d );                                                                           
            SDK_FIXED_SIZE( u7_dma_page_faulted_t, 0x40 );                                                                                
        };                                                                                                                                
                                                                                                                                          
        struct u8_crtc_vsync_with_multi_plane_overlay2_t                                                                                  
        {                                                                                                                                 
            // WDK 10                                                                                                                     
            //                                                                                                                            
            _m45 uint32_t                                       vid_pn_target_id;                                                           //{ +0x0000    } | .VidPnTargetId
            _m46 uint32_t                                       physical_adapter_mask;                                                      //{ +0x0004    } | .PhysicalAdapterMask
            _m47 uint32_t                                       multi_plane_overlay_vsync_info_count;                                       //{ +0x0008    } | .MultiPlaneOverlayVsyncInfoCount
            _m48 struct dxgk::multiplane_overlay_vsync_info2_t* p_multi_plane_overlay_vsync_info;                                           //{ +0x0010    } | .pMultiPlaneOverlayVsyncInfo
            _m49 uint64_t                                       gpu_frequency;                                                              //{ +0x0018    } | .GpuFrequency
            _m50 uint64_t                                       gpu_clock_counter;                                                          //{ +0x0020    } | .GpuClockCounter
                                                                                                                                          
            SDK_NONVOL_PROPERTIES( "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.CrtcVsyncWithMultiPlaneOverlay2.$", 0x0, false, 0xac78732c5ef47d02 );                                                                          
            SDK_FIXED_SIZE( u8_crtc_vsync_with_multi_plane_overlay2_t, 0x28 );                                                                          
        };                                                                                                                                
                                                                                                                                          
        struct u9_monitored_fence_signaled_t                                                                                              
        {                                                                                                                                 
            // WDK 10                                                                                                                     
            //                                                                                                                            
            _m52 uint32_t node_ordinal;                                                                                                     //{ +0x0000    } | .NodeOrdinal
            _m53 uint32_t engine_ordinal;                                                                                                   //{ +0x0004    } | .EngineOrdinal
                                                                                                                                          
            SDK_NONVOL_PROPERTIES( "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.MonitoredFenceSignaled.$", 0x0, false, 0x96e4fd1bd1d051b6 );                                                    
            SDK_FIXED_SIZE( u9_monitored_fence_signaled_t, 0x8 );                                                                         
        };                                                                                                                                
                                                                                                                                          
        struct u10_hw_context_list_switch_completed_t                                                                                     
        {                                                                                                                                 
            // WDK 10                                                                                                                     
            //                                                                                                                            
            _m55 uint32_t node_ordinal;                                                                                                     //{ +0x0000    } | .NodeOrdinal
            _m56 uint32_t engine_ordinal;                                                                                                   //{ +0x0004    } | .EngineOrdinal
            _m57 uint64_t context_switch_fence;                                                                                             //{ +0x0008    } | .ContextSwitchFence
                                                                                                                                          
            SDK_NONVOL_PROPERTIES( "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.HwContextListSwitchCompleted.$", 0x0, false, 0xdcaf35a31fdfe36c );                                                          
            SDK_FIXED_SIZE( u10_hw_context_list_switch_completed_t, 0x10 );                                                               
        };                                                                                                                                
                                                                                                                                          
        struct u11_hw_queue_page_faulted_t                                                                                                
        {                                                                                                                                 
            // WDK 10                                                                                                                     
            //                                                                                                                            
            _m59 uint64_t                           faulted_fence_id;                                                                       //{ +0x0000    } | .FaultedFenceId
            _m60 uint64_t                           faulted_virtual_address;                                                                //{ +0x0008    } | .FaultedVirtualAddress
            _m61 uint64_t                           faulted_primitive_api_sequence_number;                                                  //{ +0x0010    } | .FaultedPrimitiveAPISequenceNumber
            _m62 void*                              faulted_hw_queue;                                                                       //{ +0x0018    } | .FaultedHwQueue
            _m63 void*                              faulted_hw_context;                                                                     //{ +0x0018    } | .FaultedHwContext
            _m64 void*                              faulted_process_handle;                                                                 //{ +0x0018    } | .FaultedProcessHandle
            _m65 uint32_t                           node_ordinal;                                                                           //{ +0x0020    } | .NodeOrdinal
            _m66 uint32_t                           engine_ordinal;                                                                         //{ +0x0024    } | .EngineOrdinal
            _m67 enum dxgk::render_pipeline_stage_t faulted_pipeline_stage;                                                                 //{ +0x0028    } | .FaultedPipelineStage
            _m68 uint32_t                           faulted_bind_table_entry;                                                               //{ +0x002c    } | .FaultedBindTableEntry
            _m69 enum dxgk::page_fault_flags_t      page_fault_flags;                                                                       //{ +0x0030    } | .PageFaultFlags
            _m70 uint32_t                           page_table_level;                                                                       //{ +0x0034    } | .PageTableLevel
            _m71 struct dxgk::fault_error_code_t    fault_error_code;                                                                       //{ +0x0038    } | .FaultErrorCode
                                                                                                                                          
            SDK_NONVOL_PROPERTIES( "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.HwQueuePageFaulted.$", 0x0, false, 0xc76290bc3494bbb3 );                                                                           
            SDK_FIXED_SIZE( u11_hw_queue_page_faulted_t, 0x40 );                                                                           
        };                                                                                                                                
                                                                                                                                          
        struct u12_periodic_monitored_fence_signaled_t                                                                                    
        {                                                                                                                                 
            // WDK 10                                                                                                                     
            //                                                                                                                            
            _m73 uint32_t vid_pn_target_id;                                                                                                 //{ +0x0000    } | .VidPnTargetId
            _m74 uint32_t notification_id;                                                                                                  //{ +0x0004    } | .NotificationID
                                                                                                                                          
            SDK_NONVOL_PROPERTIES( "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.PeriodicMonitoredFenceSignaled.$", 0x0, false, 0x384cb4c402c4f94 );                                                      
            SDK_FIXED_SIZE( u12_periodic_monitored_fence_signaled_t, 0x8 );                                                               
        };                                                                                                                                
                                                                                                                                          
        struct u13_scheduling_log_interrupt_t                                                                                             
        {                                                                                                                                 
            // WDK 10                                                                                                                     
            //                                                                                                                            
            _m76 uint32_t node_ordinal;                                                                                                     //{ +0x0000    } | .NodeOrdinal
            _m77 uint32_t engine_ordinal;                                                                                                   //{ +0x0004    } | .EngineOrdinal
                                                                                                                                          
            SDK_NONVOL_PROPERTIES( "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.SchedulingLogInterrupt.$", 0x0, false, 0x866a530d7c5e6f6b );                                                    
            SDK_FIXED_SIZE( u13_scheduling_log_interrupt_t, 0x8 );                                                                        
        };                                                                                                                                
                                                                                                                                          
        struct u13_gpu_engine_timeout_t                                                                                                   
        {                                                                                                                                 
            // WDK 10                                                                                                                     
            //                                                                                                                            
            _m79 uint32_t node_ordinal;                                                                                                     //{ +0x0000    } | .NodeOrdinal
            _m80 uint32_t engine_ordinal;                                                                                                   //{ +0x0004    } | .EngineOrdinal
                                                                                                                                          
            SDK_NONVOL_PROPERTIES( "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.GpuEngineTimeout.$", 0x0, false, 0x6c885b76d22a44a4 );                                                    
            SDK_FIXED_SIZE( u13_gpu_engine_timeout_t, 0x8 );                                                                              
        };                                                                                                                                
                                                                                                                                          
        struct u13_suspend_context_completed_t                                                                                            
        {                                                                                                                                 
            // WDK 10                                                                                                                     
            //                                                                                                                            
            _m82 void*    h_context;                                                                                                        //{ +0x0000    } | .hContext
            _m83 uint64_t context_suspend_fence;                                                                                            //{ +0x0008    } | .ContextSuspendFence
                                                                                                                                          
            SDK_NONVOL_PROPERTIES( "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.SuspendContextCompleted.$", 0x0, false, 0x9dd4fbf43cd45e0b );                                                           
            SDK_FIXED_SIZE( u13_suspend_context_completed_t, 0x10 );                                                                      
        };                                                                                                                                
                                                                                                                                          
        using display_only_present_progress_t = struct dxgk::arg::cb::present_displayonly_progress_t;                                     
                                                                                                                                          
        // WDK 10                                                                                                                         
        //                                                                                                                                
        _m00 enum dxgk::interrupt_type_t                                                             interrupt_type;                        //{ +0x0000    } | .InterruptType
        _m04 u0_dma_completed_t                                                                      dma_completed;                         //{ +0x0008    } | .DmaCompleted
        _m09 u1_dma_preempted_t                                                                      dma_preempted;                         //{ +0x0008    } | .DmaPreempted
        _m14 u2_dma_faulted_t                                                                        dma_faulted;                           //{ +0x0008    } | .DmaFaulted
        _m18 u3_crtc_vsync_t                                                                         crtc_vsync;                            //{ +0x0008    } | .CrtcVsync
        _m20 u4_display_only_vsync_t                                                                 display_only_vsync;                    //{ +0x0008    } | .DisplayOnlyVsync
        _m25 u5_crtc_vsync_with_multi_plane_overlay_t                                                crtc_vsync_with_multi_plane_overlay;   //{ +0x0008    } | .CrtcVsyncWithMultiPlaneOverlay
        _m26 display_only_present_progress_t                                                         display_only_present_progress;         //{ +0x0008    } | .DisplayOnlyPresentProgress
        _m32 u6_miracast_encode_chunk_completed_t                                                    miracast_encode_chunk_completed;       //{ +0x0008    } | .MiracastEncodeChunkCompleted
        _m44 u7_dma_page_faulted_t                                                                   dma_page_faulted;                      //{ +0x0008    } | .DmaPageFaulted
        _m51 u8_crtc_vsync_with_multi_plane_overlay2_t                                               crtc_vsync_with_multi_plane_overlay2;  //{ +0x0008    } | .CrtcVsyncWithMultiPlaneOverlay2
        _m54 u9_monitored_fence_signaled_t                                                           monitored_fence_signaled;              //{ +0x0008    } | .MonitoredFenceSignaled
        _m58 u10_hw_context_list_switch_completed_t                                                  hw_context_list_switch_completed;      //{ +0x0008    } | .HwContextListSwitchCompleted
        _m72 u11_hw_queue_page_faulted_t                                                             hw_queue_page_faulted;                 //{ +0x0008    } | .HwQueuePageFaulted
        _m75 u12_periodic_monitored_fence_signaled_t                                                 periodic_monitored_fence_signaled;     //{ +0x0008    } | .PeriodicMonitoredFenceSignaled
        _m78 u9_monitored_fence_signaled_t                                                           scheduling_log_interrupt;              //{ +0x0008    } | .SchedulingLogInterrupt
        _m81 u9_monitored_fence_signaled_t                                                           gpu_engine_timeout;                    //{ +0x0008    } | .GpuEngineTimeout
        _m84 u13_suspend_context_completed_t                                                         suspend_context_completed;             //{ +0x0008    } | .SuspendContextCompleted
        _m85 struct dxgk::cb::notify_interrupt_data_flags_t                                          flags;                                 //{ +0x0048    } | .Flags
                                                                                                                                          
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_NOTIFY_INTERRUPT_DATA.$", 0x0, false, 0x7406ccfa8100ffcb );                                     
        SDK_FIXED_SIZE( notify_interrupt_data_t, 0x50 );                                                                                  
    };                                                                                                                                    
};
#include "magic/notify_interrupt_data_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::notify_interrupt_data_t::u0_dma_completed_t, 0xc );
SDK_VERIFY( struct dxgk::arg::cb::notify_interrupt_data_t::u1_dma_preempted_t, 0x10 );
SDK_VERIFY( struct dxgk::arg::cb::notify_interrupt_data_t::u2_dma_faulted_t, 0x10 );
SDK_VERIFY( struct dxgk::arg::cb::notify_interrupt_data_t::u3_crtc_vsync_t, 0x18 );
SDK_VERIFY( struct dxgk::arg::cb::notify_interrupt_data_t::u4_display_only_vsync_t, 0x4 );
SDK_VERIFY( struct dxgk::arg::cb::notify_interrupt_data_t::u5_crtc_vsync_with_multi_plane_overlay_t, 0x18 );
SDK_VERIFY( struct dxgk::arg::cb::notify_interrupt_data_t::u6_miracast_encode_chunk_completed_t, 0x30 );
SDK_VERIFY( struct dxgk::arg::cb::notify_interrupt_data_t::u7_dma_page_faulted_t, 0x40 );
SDK_VERIFY( struct dxgk::arg::cb::notify_interrupt_data_t::u8_crtc_vsync_with_multi_plane_overlay2_t, 0x28 );
SDK_VERIFY( struct dxgk::arg::cb::notify_interrupt_data_t::u9_monitored_fence_signaled_t, 0x8 );
SDK_VERIFY( struct dxgk::arg::cb::notify_interrupt_data_t::u10_hw_context_list_switch_completed_t, 0x10 );
SDK_VERIFY( struct dxgk::arg::cb::notify_interrupt_data_t::u11_hw_queue_page_faulted_t, 0x40 );
SDK_VERIFY( struct dxgk::arg::cb::notify_interrupt_data_t::u12_periodic_monitored_fence_signaled_t, 0x8 );
SDK_VERIFY( struct dxgk::arg::cb::notify_interrupt_data_t::u13_scheduling_log_interrupt_t, 0x8 );
SDK_VERIFY( struct dxgk::arg::cb::notify_interrupt_data_t::u13_gpu_engine_timeout_t, 0x8 );
SDK_VERIFY( struct dxgk::arg::cb::notify_interrupt_data_t::u13_suspend_context_completed_t, 0x10 );
SDK_VERIFY( struct dxgk::arg::cb::notify_interrupt_data_t, 0x50 );
