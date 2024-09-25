#pragma once
#include <sdkgen/support_library.hpp>
#include "get_pte_t.hpp"
#include "vad_desc_t.hpp"
#include "va_range_desc_t.hpp"
#include "get_gpummu_caps_t.hpp"
#include "vidmmescapetype_t.hpp"
#include "get_segment_caps_t.hpp"
#include "eviction_criteria_t.hpp"
#include "vad_escape_command_t.hpp"
#include "defrag_escape_operation_t.hpp"

#include "magic/vidmm_escape_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_VIDMM_ESCAPE]
    // => WDK 10 (NV)
    //
    struct vidmm_escape_t                                                                       
    {                                                                                           
        struct u0_set_fault_t                                                                   
        {                                                                                       
            // WDK 10                                                                           
            //                                                                                  
            _m01 uint1_t  probe_and_lock;                                                         //{ +0x0000@0  } | .ProbeAndLock
            _m02 uint1_t  split_point;                                                            //{ +0x0000@1  } | .SplitPoint
            _m03 uint1_t  no_demotion;                                                            //{ +0x0000@2  } | .NoDemotion
            _m04 uint1_t  swizzling_aperture;                                                     //{ +0x0000@3  } | .SwizzlingAperture
            _m05 uint1_t  paging_path_lock_sub_range;                                             //{ +0x0000@4  } | .PagingPathLockSubRange
            _m06 uint1_t  paging_path_lock_min_range;                                             //{ +0x0000@5  } | .PagingPathLockMinRange
            _m07 uint1_t  complex_lock;                                                           //{ +0x0000@6  } | .ComplexLock
            _m08 uint1_t  fail_va_rotation;                                                       //{ +0x0000@7  } | .FailVARotation
            _m09 uint1_t  no_write_combined;                                                      //{ +0x0000@8  } | .NoWriteCombined
            _m10 uint1_t  no_pre_patching;                                                        //{ +0x0000@9  } | .NoPrePatching
            _m11 uint1_t  always_repatch;                                                         //{ +0x0000@10 } | .AlwaysRepatch
            _m12 uint1_t  expect_preparation_failure;                                             //{ +0x0000@11 } | .ExpectPreparationFailure
            _m13 uint1_t  fail_user_mode_va_mapping;                                              //{ +0x0000@12 } | .FailUserModeVAMapping
            _m14 uint1_t  never_discard_offered_allocation;                                       //{ +0x0000@13 } | .NeverDiscardOfferedAllocation
            _m15 uint1_t  always_discard_offered_allocation;                                      //{ +0x0000@14 } | .AlwaysDiscardOfferedAllocation
            _m16 uint32_t value;                                                                  //{ +0x0000    } | .Value
                                                                                                
            SDK_NONVOL_PROPERTIES( "_D3DKMT_VIDMM_ESCAPE.SetFault.$", 0x0, false, 0x3718d41c8550027f );                                                     
            SDK_FIXED_SIZE( u0_set_fault_t, 0x4 );                                                     
        };                                                                                      
                                                                                                
        struct u1_evict_t                                                                       
        {                                                                                       
            // WDK 10                                                                           
            //                                                                                  
            _m18 uint32_t resource_handle;                                                        //{ +0x0000    } | .ResourceHandle
            _m19 uint32_t allocation_handle;                                                      //{ +0x0004    } | .AllocationHandle
            _m20 void*    h_process;                                                              //{ +0x0008    } | .hProcess
                                                                                                
            SDK_NONVOL_PROPERTIES( "_D3DKMT_VIDMM_ESCAPE.Evict.$", 0x0, false, 0x1327e1960f0935d4 );                                     
            SDK_FIXED_SIZE( u1_evict_t, 0x10 );                                                 
        };                                                                                      
                                                                                                
        struct u2_evict_by_nt_handle_t                                                          
        {                                                                                       
            // WDK 10                                                                           
            //                                                                                  
            _m22 uint64_t nt_handle;                                                              //{ +0x0000    } | .NtHandle
                                                                                                
            SDK_NONVOL_PROPERTIES( "_D3DKMT_VIDMM_ESCAPE.EvictByNtHandle.$", 0x0, false, 0x4fa50c091bd415f7 );                             
            SDK_FIXED_SIZE( u2_evict_by_nt_handle_t, 0x8 );                                     
        };                                                                                      
                                                                                                
        struct u3_get_vads_t                                                                    
        {                                                                                       
            struct u4_get_num_vads_t                                                            
            {                                                                                   
                // WDK 10                                                                       
                //                                                                              
                _m24 uint32_t num_vads;                                                           //{ +0x0000    } | .NumVads
                                                                                                
                SDK_NONVOL_PROPERTIES( "_D3DKMT_VIDMM_ESCAPE.GetVads.GetNumVads.$", 0x0, false, 0x97b22eedbd6f5e12 );                                             
                SDK_FIXED_SIZE( u4_get_num_vads_t, 0x4 );                                             
            };                                                                                  
                                                                                                
            // WDK 10                                                                           
            //                                                                                  
            _m25 u4_get_num_vads_t                   get_num_vads;                                //{ +0x0000    } | .GetNumVads
            _m26 struct d3dk::mt::vad_desc_t         get_vad;                                     //{ +0x0000    } | .GetVad
            _m27 struct d3dk::mt::va_range_desc_t    get_vad_range;                               //{ +0x0000    } | .GetVadRange
            _m28 struct d3dk::mt::get_gpummu_caps_t  get_gpu_mmu_caps;                            //{ +0x0000    } | .GetGpuMmuCaps
            _m29 struct d3dk::mt::get_pte_t          get_pte;                                     //{ +0x0000    } | .GetPte
            _m30 struct d3dk::mt::get_segment_caps_t get_segment_caps;                            //{ +0x0000    } | .GetSegmentCaps
            _m31 enum d3dk::mt::vad_escape_command_t command;                                     //{ +0x0430    } | .Command
            _m32 int32_t                             status;                                      //{ +0x0434    } | .Status
                                                                                                
            SDK_NONVOL_PROPERTIES( "_D3DKMT_VIDMM_ESCAPE.GetVads.$", 0x0, false, 0xd50f99f2103942fd );                                    
            SDK_FIXED_SIZE( u3_get_vads_t, 0x438 );                                             
        };                                                                                      
                                                                                                
        struct u5_set_budget_t                                                                  
        {                                                                                       
            // WDK 10                                                                           
            //                                                                                  
            _m34 uint64_t local_memory_budget;                                                    //{ +0x0000    } | .LocalMemoryBudget
            _m35 uint64_t system_memory_budget;                                                   //{ +0x0008    } | .SystemMemoryBudget
                                                                                                
            SDK_NONVOL_PROPERTIES( "_D3DKMT_VIDMM_ESCAPE.SetBudget.$", 0x0, false, 0xe247e63d2d5d47af );                                        
            SDK_FIXED_SIZE( u5_set_budget_t, 0x10 );                                            
        };                                                                                      
                                                                                                
        struct u6_suspend_process_t                                                             
        {                                                                                       
            // WDK 10                                                                           
            //                                                                                  
            _m37 void*   h_process;                                                               //{ +0x0000    } | .hProcess
            _m38 int32_t b_allow_wake_on_submission;                                              //{ +0x0008    } | .bAllowWakeOnSubmission
                                                                                                
            SDK_NONVOL_PROPERTIES( "_D3DKMT_VIDMM_ESCAPE.SuspendProcess.$", 0x0, false, 0x2badaf620de6b60c );                                              
            SDK_FIXED_SIZE( u6_suspend_process_t, 0x10 );                                              
        };                                                                                      
                                                                                                
        struct u7_resume_process_t                                                              
        {                                                                                       
            // WDK 10                                                                           
            //                                                                                  
            _m40 void* h_process;                                                                 //{ +0x0000    } | .hProcess
                                                                                                
            SDK_NONVOL_PROPERTIES( "_D3DKMT_VIDMM_ESCAPE.ResumeProcess.$", 0x0, false, 0x2cdf56df307515d2 );                             
            SDK_FIXED_SIZE( u7_resume_process_t, 0x8 );                                         
        };                                                                                      
                                                                                                
        struct u8_get_budget_t                                                                  
        {                                                                                       
            // WDK 10                                                                           
            //                                                                                  
            _m42 uint64_t num_bytes_to_trim;                                                      //{ +0x0000    } | .NumBytesToTrim
                                                                                                
            SDK_NONVOL_PROPERTIES( "_D3DKMT_VIDMM_ESCAPE.GetBudget.$", 0x0, false, 0xe749d63df37ffc9c );                                     
            SDK_FIXED_SIZE( u8_get_budget_t, 0x8 );                                             
        };                                                                                      
                                                                                                
        struct u9_set_trim_intervals_t                                                          
        {                                                                                       
            // WDK 10                                                                           
            //                                                                                  
            _m44 uint32_t min_trim_interval;                                                      //{ +0x0000    } | .MinTrimInterval
            _m45 uint32_t max_trim_interval;                                                      //{ +0x0004    } | .MaxTrimInterval
            _m46 uint32_t idle_trim_interval;                                                     //{ +0x0008    } | .IdleTrimInterval
                                                                                                
            SDK_NONVOL_PROPERTIES( "_D3DKMT_VIDMM_ESCAPE.SetTrimIntervals.$", 0x0, false, 0x9936a7ceba02627e );                                      
            SDK_FIXED_SIZE( u9_set_trim_intervals_t, 0xc );                                      
        };                                                                                      
                                                                                                
        struct u10_wake_t                                                                       
        {                                                                                       
            // WDK 10                                                                           
            //                                                                                  
            _m49 int32_t b_flush;                                                                 //{ +0x0000    } | .bFlush
                                                                                                
            SDK_NONVOL_PROPERTIES( "_D3DKMT_VIDMM_ESCAPE.Wake.$", 0x0, false, 0x17d48d3249145c6b );                           
            SDK_FIXED_SIZE( u10_wake_t, 0x4 );                                                  
        };                                                                                      
                                                                                                
        struct u11_defrag_t                                                                     
        {                                                                                       
            // WDK 10                                                                           
            //                                                                                  
            _m51 enum d3dk::mt::defrag_escape_operation_t operation;                              //{ +0x0000    } | .Operation
            _m52 uint32_t                                 segment_id;                             //{ +0x0004    } | .SegmentId
            _m53 uint64_t                                 total_committed;                        //{ +0x0008    } | .TotalCommitted
            _m54 uint64_t                                 total_free;                             //{ +0x0010    } | .TotalFree
            _m55 uint64_t                                 largest_gap_before;                     //{ +0x0018    } | .LargestGapBefore
            _m56 uint64_t                                 largest_gap_after;                      //{ +0x0020    } | .LargestGapAfter
                                                                                                
            SDK_NONVOL_PROPERTIES( "_D3DKMT_VIDMM_ESCAPE.Defrag.$", 0x0, false, 0xfbaa2da396b42cb );                                      
            SDK_FIXED_SIZE( u11_defrag_t, 0x28 );                                               
        };                                                                                      
                                                                                                
        struct u12_delay_execution_t                                                            
        {                                                                                       
            // WDK 10                                                                           
            //                                                                                  
            _m58 uint32_t h_paging_queue;                                                         //{ +0x0000    } | .hPagingQueue
            _m59 uint32_t physical_adapter_index;                                                 //{ +0x0004    } | .PhysicalAdapterIndex
            _m60 uint32_t milliseconds;                                                           //{ +0x0008    } | .Milliseconds
            _m61 uint64_t paging_fence_value;                                                     //{ +0x0010    } | .PagingFenceValue
                                                                                                
            SDK_NONVOL_PROPERTIES( "_D3DKMT_VIDMM_ESCAPE.DelayExecution.$", 0x0, false, 0x2c6cf09b51967318 );                                          
            SDK_FIXED_SIZE( u12_delay_execution_t, 0x18 );                                          
        };                                                                                      
                                                                                                
        struct u13_verify_integrity_t                                                           
        {                                                                                       
            // WDK 10                                                                           
            //                                                                                  
            _m63 uint32_t segment_id;                                                             //{ +0x0000    } | .SegmentId
                                                                                                
            SDK_NONVOL_PROPERTIES( "_D3DKMT_VIDMM_ESCAPE.VerifyIntegrity.$", 0x0, false, 0x3faa4caae100a366 );                              
            SDK_FIXED_SIZE( u13_verify_integrity_t, 0x4 );                                      
        };                                                                                      
                                                                                                
        // WDK 10                                                                               
        //                                                                                      
        _m00 enum d3dk::mt::vidmmescapetype_t                                type;                //{ +0x0000    } | .Type
        _m17 u0_set_fault_t                                                  set_fault;           //{ +0x0008    } | .SetFault
        _m21 u1_evict_t                                                      evict;               //{ +0x0008    } | .Evict
        _m23 u2_evict_by_nt_handle_t                                         evict_by_nt_handle;  //{ +0x0008    } | .EvictByNtHandle
        _m33 u3_get_vads_t                                                   get_vads;            //{ +0x0008    } | .GetVads
        _m36 u5_set_budget_t                                                 set_budget;          //{ +0x0008    } | .SetBudget
        _m39 u6_suspend_process_t                                            suspend_process;     //{ +0x0008    } | .SuspendProcess
        _m41 u7_resume_process_t                                             resume_process;      //{ +0x0008    } | .ResumeProcess
        _m43 u8_get_budget_t                                                 get_budget;          //{ +0x0008    } | .GetBudget
        _m47 u9_set_trim_intervals_t                                         set_trim_intervals;  //{ +0x0008    } | .SetTrimIntervals
        _m48 struct d3dk::mt::eviction_criteria_t                            evict_by_criteria;   //{ +0x0008    } | .EvictByCriteria
        _m50 u10_wake_t                                                      wake;                //{ +0x0008    } | .Wake
        _m57 u11_defrag_t                                                    defrag;              //{ +0x0008    } | .Defrag
        _m62 u12_delay_execution_t                                           delay_execution;     //{ +0x0008    } | .DelayExecution
        _m64 u13_verify_integrity_t                                          verify_integrity;    //{ +0x0008    } | .VerifyIntegrity
                                                                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_VIDMM_ESCAPE.$", 0x0, false, 0x16bf3817aa48a675 );                   
        SDK_FIXED_SIZE( vidmm_escape_t, 0x440 );                                                
    };                                                                                          
};
#include "magic/vidmm_escape_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::vidmm_escape_t::u0_set_fault_t, 0x4 );
SDK_VERIFY( struct d3dk::mt::vidmm_escape_t::u1_evict_t, 0x10 );
SDK_VERIFY( struct d3dk::mt::vidmm_escape_t::u2_evict_by_nt_handle_t, 0x8 );
SDK_VERIFY( struct d3dk::mt::vidmm_escape_t::u3_get_vads_t::u4_get_num_vads_t, 0x4 );
SDK_VERIFY( struct d3dk::mt::vidmm_escape_t::u3_get_vads_t, 0x438 );
SDK_VERIFY( struct d3dk::mt::vidmm_escape_t::u5_set_budget_t, 0x10 );
SDK_VERIFY( struct d3dk::mt::vidmm_escape_t::u6_suspend_process_t, 0x10 );
SDK_VERIFY( struct d3dk::mt::vidmm_escape_t::u7_resume_process_t, 0x8 );
SDK_VERIFY( struct d3dk::mt::vidmm_escape_t::u8_get_budget_t, 0x8 );
SDK_VERIFY( struct d3dk::mt::vidmm_escape_t::u9_set_trim_intervals_t, 0xc );
SDK_VERIFY( struct d3dk::mt::vidmm_escape_t::u10_wake_t, 0x4 );
SDK_VERIFY( struct d3dk::mt::vidmm_escape_t::u11_defrag_t, 0x28 );
SDK_VERIFY( struct d3dk::mt::vidmm_escape_t::u12_delay_execution_t, 0x18 );
SDK_VERIFY( struct d3dk::mt::vidmm_escape_t::u13_verify_integrity_t, 0x4 );
SDK_VERIFY( struct d3dk::mt::vidmm_escape_t, 0x440 );
