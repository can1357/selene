#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "../nt/ktimer_t.hpp"
#include "pte_chain_head_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "../nt/slist_header_t.hpp"
#include "deferred_pfns_to_free_t.hpp"
#include "../nt/single_list_entry_t.hpp"
#include "cross_partition_charges_t.hpp"
#include "../nt/mmpage_file_expansion_t.hpp"
#include "../nt/mmdereference_segment_header_t.hpp"

namespace ex { struct rundown_ref_cache_aware_t; }

#include "magic/partition_segments_t.start.hpp"
namespace mi
{
    // [struct _MI_PARTITION_SEGMENTS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct partition_segments_t                                                                 
    {                                                                                           
        using shared_charges_t =           sdk::array<struct mi::cross_partition_charges_t, 7>;                                        
        using freed_system_cache_views_t = sdk::array<struct mi::deferred_pfns_to_free_t, 4>;                                        
                                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                      
        _m000 volatile int32_t                          segment_list_lock;                        //{ +0x0140    +0x0000    +0x0000    +0x0000    } | .SegmentListLock
        _m001 uint32_t                                  delete_on_close_count;                    //{ +0x00bc    +0x0004    +0x0004    +0x0004    } | .DeleteOnCloseCount
        _m002 struct nt::kevent_t                       delete_subsection_cleanup;                //{ +0x0000    +0x0020    +0x0020    +0x0020    } | .DeleteSubsectionCleanup
        _m003 struct nt::kevent_t                       unused_segment_cleanup;                   //{ +0x0018    +0x0038    +0x0038    +0x0038    } | .UnusedSegmentCleanup
        _m004 uint64_t                                  subsection_delete_ptes;                   //{ +0x0030    +0x0050    +0x0050    +0x0050    } | .SubsectionDeletePtes
        _m005 struct nt::mmdereference_segment_header_t dereference_segment_header;               //{ +0x0038    +0x00b0    +0x00b0    +0x00b0    } | .DereferenceSegmentHeader
        _m006 nt::list_entry_t                          delete_on_close_list;                     //{ +0x0068    +0x0100    +0x0100    +0x0100    } | .DeleteOnCloseList
        _m007 struct nt::ktimer_t                       delete_on_close_timer;                    //{ +0x0078    +0x0110    +0x0110    +0x0110    } | .DeleteOnCloseTimer
        _m008 uint8_t                                   delete_on_close_timer_active;             //{ +0x00b8    +0x0150    +0x0150    +0x0150    } | .DeleteOnCloseTimerActive
        _m009 nt::list_entry_t                          unused_segment_list;                      //{ +0x00c0    +0x0168    +0x0168    +0x0168    } | .UnusedSegmentList
        _m010 nt::list_entry_t                          unused_subsection_list;                   //{ +0x00d0    +0x0178    +0x0178    +0x0178    } | .UnusedSubsectionList
        _m011 nt::list_entry_t                          delete_subsection_list;                   //{ +0x00e0    +0x0188    +0x0188    +0x0188    } | .DeleteSubsectionList
        _m012 struct nt::kevent_t                       control_area_delete_event;                //{ +0x00f0    +0x0198    +0x0198    +0x0198    } | .ControlAreaDeleteEvent
        _m013 struct nt::single_list_entry_t            control_area_delete_list;                 //{ +0x0108    +0x01b0    +0x01b0    +0x01b0    } | .ControlAreaDeleteList
                                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                      
        _m014 volatile int64_t                          fs_control_area_count;                    //{ +0x0008    +0x0008    +0x0008    } | .FsControlAreaCount
        _m015 volatile int64_t                          pf_control_area_count;                    //{ +0x0010    +0x0010    +0x0010    } | .PfControlAreaCount
        _m016 volatile int64_t                          clone_header_count;                       //{ +0x0018    +0x0018    +0x0018    } | .CloneHeaderCount
        _m017 struct nt::mmpage_file_expansion_t        attempt_for_cant_extend;                  //{ +0x0058    +0x0058    +0x0058    } | .AttemptForCantExtend
        _m018 uint8_t                                   segment_dereference_thread_exists;        //{ +0x0151    +0x0151    +0x0151    } | .SegmentDereferenceThreadExists
        _m019 void*                                     segment_dereference_active_control_area;  //{ +0x0158    +0x0158    +0x0158    } | .SegmentDereferenceActiveControlArea
        _m020 uint64_t                                  unused_segment_paged_pool;                //{ +0x0160    +0x0160    +0x0160    } | .UnusedSegmentPagedPool
        _m021 struct nt::kevent_t                       clone_dereference_event;                  //{ +0x01d0    +0x0278    +0x01d0    } | .CloneDereferenceEvent
        _m022 union nt::slist_header_t                  clone_protos_s_list_head;                 //{ +0x01f0    +0x0290    +0x01f0    } | .CloneProtosSListHead
        _m023 struct ex::push_lock_t                    system_cache_init_lock;                   //{ +0x0200    +0x02a0    +0x0200    } | .SystemCacheInitLock
        _m024 uint32_t                                  pagefile_extension_waiters;               //{ +0x0208    +0x02a8    +0x0208    } | .PagefileExtensionWaiters
        _m025 uint32_t                                  pagefile_extension_requests;              //{ +0x020c    +0x02ac    +0x020c    } | .PagefileExtensionRequests
        _m026 struct nt::kevent_t                       pagefile_extension_wait_event;            //{ +0x0210    +0x02b0    +0x0210    } | .PagefileExtensionWaitEvent
        _m027 shared_charges_t                          shared_charges;                           //{ +0x0228    +0x02c8    +0x0228    } | .SharedCharges
        _m028 struct nt::kevent_t*                      shared_charges_drain_event;               //{ +0x0308    +0x03e8    +0x0308    } | .SharedChargesDrainEvent
        _m029 struct nt::kevent_t*                      control_areas_drain_event;                //{ +0x0310    +0x03f0    +0x0310    } | .ControlAreasDrainEvent
        _m030 struct nt::kevent_t*                      clone_header_drain_event;                 //{ +0x0318    +0x03f8    +0x0318    } | .CloneHeaderDrainEvent
        _m031 struct ex::rundown_ref_cache_aware_t*     probe_rundown_reference;                  //{ +0x0320    +0x0400    +0x0320    } | .ProbeRundownReference
                                                                                                
        // Windows 10 v2004, Windows 10 v20H2                                                   
        //                                                                                      
        _m032 struct mi::pte_chain_head_t               free_system_cache;                        //{ +0x01b8    +0x01b8    } | .FreeSystemCache
                                                                                                
        // Windows 11                                                                           
        //                                                                                      
        _m033 freed_system_cache_views_t                freed_system_cache_views;                 //{ +0x01b8    } | .FreedSystemCacheViews
        _m034 struct mi::deferred_pfns_to_free_t        freed_system_cache_views_ready;           //{ +0x0238    } | .FreedSystemCacheViewsReady
        _m035 struct mi::deferred_pfns_to_free_t        freed_system_cache_pdes_ready;            //{ +0x0258    } | .FreedSystemCachePdesReady
                                                                                                
        // Windows 10 v1607                                                                     
        //                                                                                      
        _m036 volatile int64_t                          control_area_count;                       //{ +0x0148    } | .ControlAreaCount
                                                                                                
        SDK_MAGIC_PROPERTIES( "_MI_PARTITION_SEGMENTS.$", 0x340, true, 0xe9217ae950544235 );                                        
        SDK_DYNAMIC_SIZE( partition_segments_t );                                               
    };                                                                                          
};
#include "magic/partition_segments_t.end.hpp"
