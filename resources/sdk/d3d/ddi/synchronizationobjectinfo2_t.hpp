#pragma once
#include <sdkgen/support_library.hpp>
#include "synchronizationobject_type_t.hpp"
#include "synchronizationobject_flags_t.hpp"

#include "magic/synchronizationobjectinfo2_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2]
    // => WDK 10 (NV)
    //
    struct synchronizationobjectinfo2_t                                              
    {                                                                                
        struct u0_synchronization_mutex_t                                            
        {                                                                            
            // WDK 10                                                                
            //                                                                       
            _m02 int32_t initial_state;                                                //{ +0x0000    } | .InitialState
                                                                                     
            SDK_NONVOL_PROPERTIES( "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.SynchronizationMutex.$", 0x0, false, 0xe67cc1a43ab53cda );                                       
            SDK_FIXED_SIZE( u0_synchronization_mutex_t, 0x4 );                                       
        };                                                                           
                                                                                     
        struct u1_semaphore_t                                                        
        {                                                                            
            // WDK 10                                                                
            //                                                                       
            _m04 uint32_t max_count;                                                   //{ +0x0000    } | .MaxCount
            _m05 uint32_t initial_count;                                               //{ +0x0004    } | .InitialCount
                                                                                     
            SDK_NONVOL_PROPERTIES( "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.Semaphore.$", 0x0, false, 0x7c37a6b2aca43e02 );                                       
            SDK_FIXED_SIZE( u1_semaphore_t, 0x8 );                                       
        };                                                                           
                                                                                     
        struct u2_fence_t                                                            
        {                                                                            
            // WDK 10                                                                
            //                                                                       
            _m07 uint64_t fence_value;                                                 //{ +0x0000    } | .FenceValue
                                                                                     
            SDK_NONVOL_PROPERTIES( "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.Fence.$", 0x0, false, 0x491f0ee3cdf15a27 );                                     
            SDK_FIXED_SIZE( u2_fence_t, 0x8 );                                       
        };                                                                           
                                                                                     
        struct u3_cpu_notification_t                                                 
        {                                                                            
            // WDK 10                                                                
            //                                                                       
            _m09 void* event;                                                          //{ +0x0000    } | .Event
                                                                                     
            SDK_NONVOL_PROPERTIES( "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.CPUNotification.$", 0x0, false, 0x234db80dcdedc392 );                               
            SDK_FIXED_SIZE( u3_cpu_notification_t, 0x8 );                               
        };                                                                           
                                                                                     
        struct u4_monitored_fence_t                                                  
        {                                                                            
            // WDK 10                                                                
            //                                                                       
            _m11 uint64_t initial_fence_value;                                         //{ +0x0000    } | .InitialFenceValue
            _m12 void*    fence_value_cpu_virtual_address;                             //{ +0x0008    } | .FenceValueCPUVirtualAddress
            _m13 uint64_t fence_value_gpu_virtual_address;                             //{ +0x0010    } | .FenceValueGPUVirtualAddress
            _m14 uint32_t engine_affinity;                                             //{ +0x0018    } | .EngineAffinity
                                                                                     
            SDK_NONVOL_PROPERTIES( "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.MonitoredFence.$", 0x0, false, 0x9a54679f726f0063 );                                                         
            SDK_FIXED_SIZE( u4_monitored_fence_t, 0x20 );                                                         
        };                                                                           
                                                                                     
        struct u5_periodic_monitored_fence_t                                         
        {                                                                            
            // WDK 10                                                                
            //                                                                       
            _m16 uint32_t h_adapter;                                                   //{ +0x0000    } | .hAdapter
            _m17 uint32_t vid_pn_target_id;                                            //{ +0x0004    } | .VidPnTargetId
            _m18 uint64_t time;                                                        //{ +0x0008    } | .Time
            _m19 void*    fence_value_cpu_virtual_address;                             //{ +0x0010    } | .FenceValueCPUVirtualAddress
            _m20 uint64_t fence_value_gpu_virtual_address;                             //{ +0x0018    } | .FenceValueGPUVirtualAddress
            _m21 uint32_t engine_affinity;                                             //{ +0x0020    } | .EngineAffinity
                                                                                     
            SDK_NONVOL_PROPERTIES( "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.PeriodicMonitoredFence.$", 0x0, false, 0x1009b2de9066e86a );                                                         
            SDK_FIXED_SIZE( u5_periodic_monitored_fence_t, 0x28 );                                                         
        };                                                                           
                                                                                     
        // WDK 10                                                                    
        //                                                                           
        _m00 enum d3d::ddi::synchronizationobject_type_t    type;                      //{ +0x0000    } | .Type
        _m01 struct d3d::ddi::synchronizationobject_flags_t flags;                     //{ +0x0004    } | .Flags
        _m03 u0_synchronization_mutex_t                     synchronization_mutex;     //{ +0x0008    } | .SynchronizationMutex
        _m06 u1_semaphore_t                                 semaphore;                 //{ +0x0008    } | .Semaphore
        _m08 u2_fence_t                                     fence;                     //{ +0x0008    } | .Fence
        _m10 u3_cpu_notification_t                          cpu_notification;          //{ +0x0008    } | .CPUNotification
        _m15 u4_monitored_fence_t                           monitored_fence;           //{ +0x0008    } | .MonitoredFence
        _m22 u5_periodic_monitored_fence_t                  periodic_monitored_fence;  //{ +0x0008    } | .PeriodicMonitoredFence
        _m23 uint32_t                                       shared_handle;             //{ +0x0048    } | .SharedHandle
                                                                                     
        SDK_NONVOL_PROPERTIES( "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.$", 0x0, false, 0x3f82b4498fcb0ce );                         
        SDK_FIXED_SIZE( synchronizationobjectinfo2_t, 0x50 );                         
    };                                                                               
};
#include "magic/synchronizationobjectinfo2_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::synchronizationobjectinfo2_t::u0_synchronization_mutex_t, 0x4 );
SDK_VERIFY( struct d3d::ddi::synchronizationobjectinfo2_t::u1_semaphore_t, 0x8 );
SDK_VERIFY( struct d3d::ddi::synchronizationobjectinfo2_t::u2_fence_t, 0x8 );
SDK_VERIFY( struct d3d::ddi::synchronizationobjectinfo2_t::u3_cpu_notification_t, 0x8 );
SDK_VERIFY( struct d3d::ddi::synchronizationobjectinfo2_t::u4_monitored_fence_t, 0x20 );
SDK_VERIFY( struct d3d::ddi::synchronizationobjectinfo2_t::u5_periodic_monitored_fence_t, 0x28 );
SDK_VERIFY( struct d3d::ddi::synchronizationobjectinfo2_t, 0x50 );
