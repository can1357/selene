#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/work_queue_type_t.hpp"

namespace nt { struct kdpc_t;            }
namespace nt { struct work_queue_item_t; }

#include "magic/kseventdata_t.start.hpp"
namespace ndis
{
    // [struct KSEVENTDATA]
    // => Windows 10 v1607
    //
    struct kseventdata_t                                                          
    {                                                                             
        struct u0_event_handle_t                                                  
        {                                                                         
            // Windows 10 v1607                                                   
            //                                                                    
            _m01 void* event;                                                       //{ +0x0000    } | .Event
                                                                                  
            SDK_MAGIC_PROPERTIES( "KSEVENTDATA.EventHandle.$", 0x0, false, 0x8a6ff182261c02bf );                        
            SDK_FIXED_SIZE( u0_event_handle_t, 0x18 );                            
        };                                                                        
                                                                                  
        struct u1_semaphore_handle_t                                              
        {                                                                         
            // Windows 10 v1607                                                   
            //                                                                    
            _m03 void*   semaphore;                                                 //{ +0x0000    } | .Semaphore
            _m04 int32_t adjustment;                                                //{ +0x000c    } | .Adjustment
                                                                                  
            SDK_MAGIC_PROPERTIES( "KSEVENTDATA.SemaphoreHandle.$", 0x0, false, 0x65c0f2e4c43fb0fc );                             
            SDK_FIXED_SIZE( u1_semaphore_handle_t, 0x10 );                             
        };                                                                        
                                                                                  
        struct u2_event_object_t                                                  
        {                                                                         
            // Windows 10 v1607                                                   
            //                                                                    
            _m06 void*   event;                                                     //{ +0x0000    } | .Event
            _m07 int32_t increment;                                                 //{ +0x0008    } | .Increment
                                                                                  
            SDK_MAGIC_PROPERTIES( "KSEVENTDATA.EventObject.$", 0x0, false, 0x199af3007a65fc76 );                            
            SDK_FIXED_SIZE( u2_event_object_t, 0x18 );                            
        };                                                                        
                                                                                  
        struct u3_semaphore_object_t                                              
        {                                                                         
            // Windows 10 v1607                                                   
            //                                                                    
            _m09 void*   semaphore;                                                 //{ +0x0000    } | .Semaphore
            _m10 int32_t increment;                                                 //{ +0x0008    } | .Increment
            _m11 int32_t adjustment;                                                //{ +0x000c    } | .Adjustment
                                                                                  
            SDK_MAGIC_PROPERTIES( "KSEVENTDATA.SemaphoreObject.$", 0x0, false, 0xf312992fde69e1a7 );                             
            SDK_FIXED_SIZE( u3_semaphore_object_t, 0x10 );                             
        };                                                                        
                                                                                  
        struct u4_dpc_t                                                           
        {                                                                         
            // Windows 10 v1607                                                   
            //                                                                    
            _m13 struct nt::kdpc_t* dpc;                                            //{ +0x0000    } | .Dpc
            _m14 uint32_t           reference_count;                                //{ +0x0008    } | .ReferenceCount
                                                                                  
            SDK_MAGIC_PROPERTIES( "KSEVENTDATA.Dpc.$", 0x0, false, 0xdfaf0a61aeae06af );                                  
            SDK_FIXED_SIZE( u4_dpc_t, 0x18 );                                     
        };                                                                        
                                                                                  
        struct u5_work_item_t                                                     
        {                                                                         
            // Windows 10 v1607                                                   
            //                                                                    
            _m16 struct nt::work_queue_item_t* work_queue_item;                     //{ +0x0000    } | .WorkQueueItem
            _m17 enum nt::work_queue_type_t    work_queue_type;                     //{ +0x0008    } | .WorkQueueType
                                                                                  
            SDK_MAGIC_PROPERTIES( "KSEVENTDATA.WorkItem.$", 0x0, false, 0x133e249d2bea3c8b );                                  
            SDK_FIXED_SIZE( u5_work_item_t, 0x18 );                                  
        };                                                                        
                                                                                  
        struct u6_ks_work_item_t                                                  
        {                                                                         
            // Windows 10 v1607                                                   
            //                                                                    
            _m19 struct nt::work_queue_item_t* work_queue_item;                     //{ +0x0000    } | .WorkQueueItem
            _m20 void*                         ks_worker_object;                    //{ +0x0008    } | .KsWorkerObject
                                                                                  
            SDK_MAGIC_PROPERTIES( "KSEVENTDATA.KsWorkItem.$", 0x0, false, 0x4af656497746a9bd );                                   
            SDK_FIXED_SIZE( u6_ks_work_item_t, 0x18 );                                   
        };                                                                        
                                                                                  
        struct u7_alignment_t                                                     
        {                                                                         
            // Windows 10 v1607                                                   
            //                                                                    
            _m22 sdk::array<int64_t, 2> alignment;                                  //{ +0x0008    } | .Alignment
                                                                                  
            SDK_MAGIC_PROPERTIES( "KSEVENTDATA.Alignment.$", 0x0, false, 0x1b995019ebc459d4 );                            
            SDK_FIXED_SIZE( u7_alignment_t, 0x18 );                               
        };                                                                        
                                                                                  
        // Windows 10 v1607                                                       
        //                                                                        
        _m00 uint32_t                                           notification_type;  //{ +0x0000    } | .NotificationType
        _m02 u0_event_handle_t                                  event_handle;       //{ +0x0008    } | .EventHandle
        _m05 u1_semaphore_handle_t                              semaphore_handle;   //{ +0x0008    } | .SemaphoreHandle
        _m08 u2_event_object_t                                  event_object;       //{ +0x0008    } | .EventObject
        _m12 u3_semaphore_object_t                              semaphore_object;   //{ +0x0008    } | .SemaphoreObject
        _m15 u4_dpc_t                                           dpc;                //{ +0x0008    } | .Dpc
        _m18 u5_work_item_t                                     work_item;          //{ +0x0008    } | .WorkItem
        _m21 u6_ks_work_item_t                                  ks_work_item;       //{ +0x0008    } | .KsWorkItem
        _m23 u7_alignment_t                                     alignment;          //{ +0x0008    } | .Alignment
                                                                                  
        SDK_MAGIC_PROPERTIES( "KSEVENTDATA.$", 0x0, false, 0x9a209d62b6b42fd );                  
        SDK_FIXED_SIZE( kseventdata_t, 0x20 );                                    
    };                                                                            
};
#include "magic/kseventdata_t.end.hpp"
SDK_VERIFY( struct ndis::kseventdata_t::u0_event_handle_t, 0x18 );
SDK_VERIFY( struct ndis::kseventdata_t::u1_semaphore_handle_t, 0x10 );
SDK_VERIFY( struct ndis::kseventdata_t::u2_event_object_t, 0x18 );
SDK_VERIFY( struct ndis::kseventdata_t::u3_semaphore_object_t, 0x10 );
SDK_VERIFY( struct ndis::kseventdata_t::u4_dpc_t, 0x18 );
SDK_VERIFY( struct ndis::kseventdata_t::u5_work_item_t, 0x18 );
SDK_VERIFY( struct ndis::kseventdata_t::u6_ks_work_item_t, 0x18 );
SDK_VERIFY( struct ndis::kseventdata_t::u7_alignment_t, 0x18 );
SDK_VERIFY( struct ndis::kseventdata_t, 0x20 );
