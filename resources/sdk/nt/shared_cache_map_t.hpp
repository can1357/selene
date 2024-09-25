#pragma once
#include <sdkgen/support_library.hpp>
#include "kevent_t.hpp"
#include "fast_mutex_t.hpp"
#include "../ex/fast_ref_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "private_cache_map_t.hpp"
#include "logged_stream_callback_v1_t.hpp"
#include "logged_stream_callback_v2_t.hpp"

namespace cc { struct partition_t; }

#include "magic/shared_cache_map_t.start.hpp"
namespace nt
{
    struct mbcb_t;
    struct vacb_t;
    struct volume_cache_map_t;
    struct cache_manager_callbacks_t;
    struct private_volume_cachemap_t;
    struct cache_uninitialize_event_t;
    struct cache_manager_callbacks_ex_t;

    // [struct _SHARED_CACHE_MAP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct shared_cache_map_t                                                        
    {                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                           
        _m000 int16_t                                  node_type_code;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NodeTypeCode
        _m001 int16_t                                  node_byte_size;                 //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .NodeByteSize
        _m002 uint32_t                                 open_count;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .OpenCount
        _m003 int64_t                                  file_size;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileSize
        _m004 nt::list_entry_t                         bcb_list;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BcbList
        _m005 int64_t                                  section_size;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SectionSize
        _m006 int64_t                                  valid_data_length;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ValidDataLength
        _m007 int64_t                                  valid_data_goal;                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ValidDataGoal
        _m008 sdk::array<struct nt::vacb_t*, 4>        initial_vacbs;                  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .InitialVacbs
        _m009 struct nt::vacb_t**                      vacbs;                          //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Vacbs
        _m010 struct ex::fast_ref_t                    file_object_fast_ref;           //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .FileObjectFastRef
        _m011 struct ex::push_lock_t                   vacb_lock;                      //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .VacbLock
        _m012 uint32_t                                 dirty_pages;                    //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .DirtyPages
        _m013 nt::list_entry_t                         logged_stream_links;            //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .LoggedStreamLinks
        _m014 nt::list_entry_t                         shared_cache_map_links;         //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .SharedCacheMapLinks
        _m015 uint32_t                                 flags;                          //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .Flags
        _m016 int32_t                                  status;                         //{ +0x009c    +0x009c    +0x00a0    +0x009c    } | .Status
        _m017 struct nt::mbcb_t*                       mbcb;                           //{ +0x00a0    +0x00a0    +0x00a8    +0x00a0    } | .Mbcb
        _m018 void*                                    section;                        //{ +0x00a8    +0x00a8    +0x00b0    +0x00a8    } | .Section
        _m019 struct nt::kevent_t*                     create_event;                   //{ +0x00b0    +0x00b0    +0x00b8    +0x00b0    } | .CreateEvent
        _m020 struct nt::kevent_t*                     wait_on_active_count;           //{ +0x00b8    +0x00b8    +0x00c0    +0x00b8    } | .WaitOnActiveCount
        _m021 uint32_t                                 pages_to_write;                 //{ +0x00c0    +0x00c0    +0x00c8    +0x00c0    } | .PagesToWrite
        _m022 int64_t                                  beyond_last_flush;              //{ +0x00c8    +0x00c8    +0x00d0    +0x00c8    } | .BeyondLastFlush
        _m023 struct nt::cache_manager_callbacks_t*    callbacks;                      //{ +0x00d0    +0x00d0    +0x00d8    +0x00d0    } | .Callbacks
        _m024 void*                                    lazy_write_context;             //{ +0x00d8    +0x00d8    +0x00e0    +0x00d8    } | .LazyWriteContext
        _m025 nt::list_entry_t                         private_list;                   //{ +0x00e0    +0x00e0    +0x00e8    +0x00e0    } | .PrivateList
        _m026 struct nt::logged_stream_callback_v1_t   v1;                             //{ +0x00f0    +0x00f0    +0x00f8    +0x00f0    } | .V1
        _m027 struct nt::logged_stream_callback_v2_t   v2;                             //{ +0x00f0    +0x00f0    +0x00f8    +0x00f0    } | .V2
        _m028 int64_t                                  largest_lsn;                    //{ +0x0100    +0x0100    +0x0108    +0x0100    } | .LargestLSN
        _m029 uint32_t                                 dirty_page_threshold;           //{ +0x0108    +0x0108    +0x0110    +0x0108    } | .DirtyPageThreshold
        _m030 uint32_t                                 lazy_write_pass_count;          //{ +0x010c    +0x010c    +0x0114    +0x010c    } | .LazyWritePassCount
        _m031 struct nt::cache_uninitialize_event_t*   uninitialize_event;             //{ +0x0110    +0x0110    +0x0118    +0x0110    } | .UninitializeEvent
        _m032 struct nt::fast_mutex_t                  bcb_lock;                       //{ +0x0118    +0x0118    +0x0120    +0x0118    } | .BcbLock
        _m033 int64_t                                  last_unmap_behind_offset;       //{ +0x0150    +0x0150    +0x0158    +0x0150    } | .LastUnmapBehindOffset
        _m034 struct nt::kevent_t                      event;                          //{ +0x0158    +0x0158    +0x0160    +0x0158    } | .Event
        _m035 int64_t                                  high_water_mapping_offset;      //{ +0x0170    +0x0170    +0x0178    +0x0170    } | .HighWaterMappingOffset
        _m036 struct nt::private_cache_map_t           private_cache_map;              //{ +0x0178    +0x0178    +0x0180    +0x0178    } | .PrivateCacheMap
        _m037 void*                                    write_behind_work_queue_entry;  //{ +0x01f0    +0x01f0    +0x01f8    +0x01f0    } | .WriteBehindWorkQueueEntry
        _m038 struct nt::volume_cache_map_t*           volume_cache_map;               //{ +0x01f8    +0x01f8    +0x0200    +0x01f8    } | .VolumeCacheMap
        _m039 uint32_t                                 proc_image_path_hash;           //{ +0x0200    +0x0200    +0x0208    +0x0200    } | .ProcImagePathHash
        _m040 uint32_t                                 writes_in_progress;             //{ +0x0204    +0x0204    +0x020c    +0x0204    } | .WritesInProgress
        _m041 uint32_t                                 async_read_request_count;       //{ +0x0208    +0x0208    +0x0210    +0x0208    } | .AsyncReadRequestCount
                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                           
        _m042 struct cc::partition_t*                  partition;                      //{ +0x0210    +0x0218    +0x0210    } | .Partition
        _m043 uint32_t                                 internal_ref_count;             //{ +0x0218    +0x0220    +0x0218    } | .InternalRefCount
        _m044 uint32_t                                 num_mapped_vacb;                //{ +0x021c    +0x0224    +0x021c    } | .NumMappedVacb
        _m045 uint32_t                                 num_active_vacb;                //{ +0x0220    +0x0228    +0x0220    } | .NumActiveVacb
                                                                                     
        // Windows 11                                                                
        //                                                                           
        _m046 uint32_t                                 flags2;                         //{ +0x009c    } | .Flags2
        _m047 struct nt::cache_manager_callbacks_ex_t* callbacks_ex;                   //{ +0x00d8    } | .CallbacksEx
        _m048 uint32_t                                 ideal_node_for_write_behind;    //{ +0x022c    } | .IdealNodeForWriteBehind
        _m049 uint32_t                                 ideal_node_number;              //{ +0x0230    } | .IdealNodeNumber
        _m050 nt::list_entry_t                         vol_shared_cache_map_links;     //{ +0x0238    } | .VolSharedCacheMapLinks
        _m051 nt::list_entry_t                         vol_logged_stream_links;        //{ +0x0248    } | .VolLoggedStreamLinks
        _m052 struct nt::private_volume_cachemap_t*    private_volume_cache_map;       //{ +0x0258    } | .PrivateVolumeCacheMap
                                                                                     
        SDK_MAGIC_PROPERTIES( "_SHARED_CACHE_MAP.$", 0x228, true, 0xb7083b8a16132e2c );                              
        SDK_DYNAMIC_SIZE( shared_cache_map_t );                                      
    };                                                                               
};
#include "magic/shared_cache_map_t.end.hpp"
