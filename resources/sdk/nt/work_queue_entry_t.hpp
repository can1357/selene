#pragma once
#include <sdkgen/support_library.hpp>
#include "kevent_t.hpp"
#include "worker_function_t.hpp"
#include "../io/status_block_t.hpp"

namespace cc { struct async_read_context_t; }
namespace cc { struct flush_packet_t;       }
namespace cc { struct numa_node_t;          }
namespace cc { struct partition_t;          }

#include "magic/work_queue_entry_t.start.hpp"
namespace nt
{
    struct mdl_t;
    struct ethread_t;
    struct eprocess_t;
    struct file_object_t;
    struct shared_cache_map_t;
    struct single_list_entry_t;
    struct private_volume_cachemap_t;

    // [struct _WORK_QUEUE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct work_queue_entry_t                                                                                                   
    {                                                                                                                           
        union u0_parameters_t                                                                                                   
        {                                                                                                                       
            struct u4_read_t                                                                                                    
            {                                                                                                                   
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                
                //                                                                                                              
                _m01 struct nt::file_object_t* file_object;                                                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileObject
                _m02 void*                     disk_io_attribution;                                                               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DiskIoAttribution
                                                                                                                                
                SDK_MAGIC_PROPERTIES( "_WORK_QUEUE_ENTRY.Parameters.Read.$", 0x10, true, 0x96257d626763c47d );                                                                
                SDK_FIXED_SIZE( u4_read_t, 0x10 );                                                                              
            };                                                                                                                  
                                                                                                                                
            struct u8_write_t                                                                                                   
            {                                                                                                                   
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                             
                //                                                                                                              
                _m04 struct nt::shared_cache_map_t* shared_cache_map;                                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SharedCacheMap
                                                                                                                                
                SDK_MAGIC_PROPERTIES( "_WORK_QUEUE_ENTRY.Parameters.Write.$", 0x8, true, 0x7784f03484e30902 );                                                             
                SDK_FIXED_SIZE( u8_write_t, 0x8 );                                                                              
            };                                                                                                                  
                                                                                                                                
            struct u12_event_t                                                                                                  
            {                                                                                                                   
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                  
                //                                                                                                              
                _m06 struct nt::kevent_t* event;                                                                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Event
                                                                                                                                
                SDK_MAGIC_PROPERTIES( "_WORK_QUEUE_ENTRY.Parameters.Event.$", 0x8, true, 0xe15b7ef5a8339865 );                                                  
                SDK_FIXED_SIZE( u12_event_t, 0x8 );                                                                             
            };                                                                                                                  
                                                                                                                                
            struct u16_notification_t                                                                                           
            {                                                                                                                   
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                   
                //                                                                                                              
                _m08 uint32_t reason;                                                                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Reason
                                                                                                                                
                SDK_MAGIC_PROPERTIES( "_WORK_QUEUE_ENTRY.Parameters.Notification.$", 0x4, true, 0xc1bf48b24122c196 );                                                   
                SDK_FIXED_SIZE( u16_notification_t, 0x4 );                                                                      
            };                                                                                                                  
                                                                                                                                
            struct u20_low_pri_write_t                                                                                          
            {                                                                                                                   
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                    
                //                                                                                                              
                _m10 struct nt::shared_cache_map_t* shared_cache_map;                                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SharedCacheMap
                _m11 struct io::status_block_t*     io_status;                                                                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IoStatus
                _m12 struct nt::kevent_t            caller_wait_event;                                                            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CallerWaitEvent
                _m13 uint8_t                        is_low_pri_write_behind;                                                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .IsLowPriWriteBehind
                                                                                                                                
                SDK_MAGIC_PROPERTIES( "_WORK_QUEUE_ENTRY.Parameters.LowPriWrite.$", 0x30, true, 0xd42a8466e448f139 );                                                                    
                SDK_FIXED_SIZE( u20_low_pri_write_t, 0x30 );                                                                    
            };                                                                                                                  
                                                                                                                                
            struct u24_async_read_t                                                                                             
            {                                                                                                                   
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                   
                //                                                                                                              
                _m15 struct nt::shared_cache_map_t*   shared_cache_map;                                                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SharedCacheMap
                _m16 int64_t                          file_offset;                                                                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileOffset
                _m17 struct nt::file_object_t*        file_object;                                                                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FileObject
                _m18 uint32_t                         length;                                                                     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Length
                _m19 struct nt::single_list_entry_t*  prefetch_list;                                                              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PrefetchList
                _m20 uint32_t                         prefetch_page_priority;                                                     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PrefetchPagePriority
                _m21 struct nt::mdl_t*                mdl;                                                                        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Mdl
                _m22 struct io::status_block_t*       io_status_block;                                                            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .IoStatusBlock
                _m23 struct cc::async_read_context_t* callback_context;                                                           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CallbackContext
                _m24 struct nt::eprocess_t*           originating_process;                                                        //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .OriginatingProcess
                _m25 struct nt::ethread_t*            io_issuer_thread;                                                           //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .IoIssuerThread
                _m26 void*                            disk_io_attribution;                                                        //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .DiskIoAttribution
                _m27 char                             requestor_mode;                                                             //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .RequestorMode
                _m28 uint32_t                         nesting_level;                                                              //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .NestingLevel
                                                                                                                                
                // Windows 11                                                                                                   
                //                                                                                                              
                _m29 int64_t                          start_time;                                                                 //{ +0x0068    } | .StartTime
                                                                                                                                
                SDK_MAGIC_PROPERTIES( "_WORK_QUEUE_ENTRY.Parameters.AsyncRead.$", 0x68, true, 0x7c6b96302d18125a );                                                                   
                SDK_DYNAMIC_SIZE( u24_async_read_t );                                                                           
            };                                                                                                                  
                                                                                                                                
            struct u28_async_write_behind_t                                                                                     
            {                                                                                                                   
                // Windows 11                                                                                                   
                //                                                                                                              
                _m31 struct cc::flush_packet_t*     flush_packet;                                                                 //{ +0x0000    } | .FlushPacket
                _m32 struct nt::shared_cache_map_t* shared_cache_map;                                                             //{ +0x0008    } | .SharedCacheMap
                _m33 struct nt::kevent_t            flush_event;                                                                  //{ +0x0010    } | .FlushEvent
                _m34 struct io::status_block_t      io_status;                                                                    //{ +0x0028    } | .IoStatus
                _m35 uint8_t                        do_write_behind_post_processing;                                              //{ +0x0038    } | .DoWriteBehindPostProcessing
                                                                                                                                
                SDK_MAGIC_PROPERTIES( "_WORK_QUEUE_ENTRY.Parameters.AsyncWriteBehind.$", 0x0, false, 0x7a4ea7c814d084ee );                                                                            
                SDK_FIXED_SIZE( u28_async_write_behind_t, 0x40 );                                                                            
            };                                                                                                                  
                                                                                                                                
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
            //                                                                                                                  
            _m03 u4_read_t                                                          read;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Read
            _m05 u8_write_t                                                         write;                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Write
            _m07 u12_event_t                                                        event;                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Event
            _m09 u16_notification_t                                                 notification;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Notification
            _m14 u20_low_pri_write_t                                                low_pri_write;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LowPriWrite
            _m30 u24_async_read_t                                                   async_read;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsyncRead
                                                                                                                                
            // Windows 11                                                                                                       
            //                                                                                                                  
            _m36 u28_async_write_behind_t                                           async_write_behind;                           //{ +0x0000    } | .AsyncWriteBehind
                                                                                                                                
            SDK_MAGIC_PROPERTIES( "_WORK_QUEUE_ENTRY.Parameters.$", 0x68, true, 0x2488899a638b5058 );                                            
            SDK_DYNAMIC_SIZE( u0_parameters_t );                                                                                
        };                                                                                                                      
                                                                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                     
        //                                                                                                                      
        _m00 nt::list_entry_t                                                                          work_queue_links;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WorkQueueLinks
        _m37 u0_parameters_t                                                                           parameters;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Parameters
        _m38 varint_t                                                                                  function;                  //{ +0x0078    +0x0078    +0x0080    +0x0078    } | .Function
                                                                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                       
        //                                                                                                                      
        _m39 struct cc::partition_t*                                                                   partition;                 //{ +0x0080    +0x0088    +0x0080    } | .Partition
                                                                                                                                
        // Windows 11                                                                                                           
        //                                                                                                                      
        _m40 struct nt::private_volume_cachemap_t*                                                     private_volume_cache_map;  //{ +0x0090    } | .PrivateVolumeCacheMap
        _m41 struct cc::numa_node_t*                                                                   numa_node;                 //{ +0x0098    } | .NumaNode
                                                                                                                                
        SDK_MAGIC_PROPERTIES( "_WORK_QUEUE_ENTRY.$", 0x88, true, 0xafd45bc968def1 );                                            
        SDK_DYNAMIC_SIZE( work_queue_entry_t );                                                                                 
    };                                                                                                                          
};
#include "magic/work_queue_entry_t.end.hpp"
SDK_VERIFY( struct nt::work_queue_entry_t::u0_parameters_t::u4_read_t, 0x10 );
SDK_VERIFY( struct nt::work_queue_entry_t::u0_parameters_t::u8_write_t, 0x8 );
SDK_VERIFY( struct nt::work_queue_entry_t::u0_parameters_t::u12_event_t, 0x8 );
SDK_VERIFY( struct nt::work_queue_entry_t::u0_parameters_t::u16_notification_t, 0x4 );
SDK_VERIFY( struct nt::work_queue_entry_t::u0_parameters_t::u20_low_pri_write_t, 0x30 );
SDK_VERIFY( struct nt::work_queue_entry_t::u0_parameters_t::u28_async_write_behind_t, 0x40 );
