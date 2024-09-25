#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "../nt/slist_header_t.hpp"

namespace nt  { struct eprocess_t; }
namespace nt  { struct ethread_t;  }
namespace rtl { struct bitmap_t;   }

#include "magic/partition_stores_t.start.hpp"
namespace mi
{
    // [struct _MI_PARTITION_STORES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct partition_stores_t                                                    
    {                                                                            
        union u0_write_all_store_hinted_pages_t                                  
        {                                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                               
            //                                                                   
            _m13 volatile int1_t  flush_completing;                                //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .FlushCompleting
            _m14 volatile int31_t flush_in_progress;                               //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .FlushInProgress
            _m15 volatile int32_t _long;                                           //{ +0x0000    +0x0000    +0x0000    } | .Long
                                                                                 
            SDK_MAGIC_PROPERTIES( "_MI_PARTITION_STORES.WriteAllStoreHintedPages.$", 0x4, true, 0xb3660e2a62bbddfd );                                               
            SDK_FIXED_SIZE( u0_write_all_store_hinted_pages_t, 0x4 );                                               
        };                                                                       
                                                                                 
        union u3_write_all_store_swap_pages_t                                    
        {                                                                        
            // Windows 11                                                        
            //                                                                   
            _m19 volatile int1_t  flush_completing;                                //{ +0x0000@0  } | .FlushCompleting
            _m20 volatile int31_t flush_in_progress;                               //{ +0x0000@1  } | .FlushInProgress
            _m21 volatile int32_t _long;                                           //{ +0x0000    } | .Long
                                                                                 
            SDK_MAGIC_PROPERTIES( "_MI_PARTITION_STORES.WriteAllStoreSwapPages.$", 0x0, false, 0x506412682e91f91e );                                               
            SDK_FIXED_SIZE( u3_write_all_store_swap_pages_t, 0x4 );                                               
        };                                                                       
                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                       
        _m00 uint32_t                               virtual_page_file_number;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .VirtualPageFileNumber
        _m01 uint32_t                               registered;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Registered
        _m02 uint32_t                               read_cluster_size_max;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ReadClusterSizeMax
        _m03 uint32_t                               evict_flush_request_count;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .EvictFlushRequestCount
        _m04 uint32_t                               modified_write_disable_count;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ModifiedWriteDisableCount
        _m05 uint32_t                               write_issue_failures;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .WriteIssueFailures
        _m06 volatile int32_t                       evict_flush_lock;              //{ +0x0070    +0x0020    +0x0028    +0x0020    } | .EvictFlushLock
        _m07 struct nt::ethread_t*                  eviction_thread;               //{ +0x0020    +0x0028    +0x0030    +0x0028    } | .EvictionThread
        _m08 struct nt::kevent_t                    evict_event;                   //{ +0x0028    +0x0030    +0x0038    +0x0030    } | .EvictEvent
        _m09 union nt::slist_header_t               write_support_s_list_head;     //{ +0x0060    +0x0050    +0x0070    +0x0050    } | .WriteSupportSListHead
        _m10 struct nt::kevent_t                    evict_flush_complete_event;    //{ +0x0040    +0x0060    +0x0080    +0x0060    } | .EvictFlushCompleteEvent
        _m11 struct rtl::bitmap_t*                  modified_write_failed_bitmap;  //{ +0x0078    +0x0078    +0x0098    +0x0078    } | .ModifiedWriteFailedBitmap
        _m12 struct nt::eprocess_t*                 store_process;                 //{ +0x0080    +0x0080    +0x00a0    +0x0080    } | .StoreProcess
                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                             
        //                                                                       
        _m16 u0_write_all_store_hinted_pages_t      write_all_store_hinted_pages;  //{ +0x0000    +0x0000    +0x0000    } | .WriteAllStoreHintedPages
                                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                       
        _m17 uint32_t                               writes_outstanding;            //{ +0x001c    +0x001c    +0x001c    } | .WritesOutstanding
        _m18 uint32_t                               delete_stored_pages;           //{ +0x0088    +0x00ac    +0x0088    } | .DeleteStoredPages
                                                                                 
        // Windows 11                                                            
        //                                                                       
        _m22 u3_write_all_store_swap_pages_t        write_all_store_swap_pages;    //{ +0x0000    } | .WriteAllStoreSwapPages
        _m23 struct nt::kevent_t*                   rundown_writes;                //{ +0x0020    } | .RundownWrites
        _m24 struct nt::kevent_t                    evict_thread_exit_event;       //{ +0x0050    } | .EvictThreadExitEvent
        _m25 volatile int32_t                       memory_conditions_lock;        //{ +0x00a8    } | .MemoryConditionsLock
                                                                                 
        SDK_MAGIC_PROPERTIES( "_MI_PARTITION_STORES.$", 0x90, true, 0x151178d5c59a4054 );                             
        SDK_DYNAMIC_SIZE( partition_stores_t );                                  
    };                                                                           
};
#include "magic/partition_stores_t.end.hpp"
SDK_VERIFY( union mi::partition_stores_t::u0_write_all_store_hinted_pages_t, 0x4 );
SDK_VERIFY( union mi::partition_stores_t::u3_write_all_store_swap_pages_t, 0x4 );
