#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "../nt/mmpfnlist_t.hpp"
#include "../rtl/avl_tree_t.hpp"
#include "../rtl/bitmap_ex_t.hpp"
#include "decay_timer_link_t.hpp"
#include "ldw_work_context_t.hpp"
#include "standby_lookaside_t.hpp"
#include "slab_allocator_context_t.hpp"
#include "available_page_wait_states_t.hpp"

namespace nt { union slist_header_t; }

#include "magic/partition_page_lists_t.start.hpp"
namespace mi
{
    struct free_large_page_list_t;

    // [struct _MI_PARTITION_PAGE_LISTS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct partition_page_lists_t                                                                      
    {                                                                                                  
        using available_page_wait_states_t = sdk::array<struct mi::available_page_wait_states_t, 3>;                                           
        using slab_pfn_bit_map_t =           sdk::variant<struct rtl::bitmap_ex_t, sdk::array<struct rtl::bitmap_ex_t, 2>>;                                           
        using slab_contexts_t =              sdk::array<sdk::array<struct mi::slab_allocator_context_t, 4>, 2>;                                           
                                                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                                             
        _m000 sdk::array<struct nt::mmpfnlist_t*, 2>        free_pages_by_color;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FreePagesByColor
        _m001 struct nt::mmpfnlist_t                        zeroed_page_list_head;                       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ZeroedPageListHead
        _m002 struct nt::mmpfnlist_t                        free_page_list_head;                         //{ +0x0080    +0x0080    +0x00c0    +0x0080    } | .FreePageListHead
        _m003 struct nt::mmpfnlist_t                        standby_page_list_head;                      //{ +0x00c0    +0x00c0    +0x0140    +0x00c0    } | .StandbyPageListHead
        _m004 sdk::array<struct nt::mmpfnlist_t, 8>         standby_page_list_by_priority;               //{ +0x0100    +0x0100    +0x01c0    +0x0100    } | .StandbyPageListByPriority
        _m005 struct nt::mmpfnlist_t                        modified_page_list_no_reservation;           //{ +0x0240    +0x0240    +0x0480    +0x0240    } | .ModifiedPageListNoReservation
        _m006 sdk::array<struct nt::mmpfnlist_t, 16>        modified_page_list_by_reservation;           //{ +0x0280    +0x0280    +0x0580    +0x0280    } | .ModifiedPageListByReservation
        _m007 sdk::array<struct nt::mmpfnlist_t, 16>        mapped_page_list_head;                       //{ +0x0500    +0x0500    +0x0b00    +0x0500    } | .MappedPageListHead
        _m008 struct nt::mmpfnlist_t                        bad_page_list_head;                          //{ +0x0780    +0x0780    +0x1080    +0x0780    } | .BadPageListHead
        _m009 sdk::array<union nt::slist_header_t*, 2>      free_page_slist;                             //{ +0x0010    +0x07e8    +0x10d8    +0x07e8    } | .FreePageSlist
        _m010 sdk::array<struct nt::mmpfnlist_t*, 8>        page_location_list;                          //{ +0x07e8    +0x07f8    +0x10e8    +0x07f8    } | .PageLocationList
        _m011 sdk::array<volatile uint32_t, 8>              standby_repurposed_by_priority;              //{ +0x0828    +0x0838    +0x1128    +0x0838    } | .StandbyRepurposedByPriority
        _m012 sdk::array<struct nt::kevent_t, 16>           mapped_page_list_head_event;                 //{ +0x0848    +0x08b8    +0x11b8    +0x08b8    } | .MappedPageListHeadEvent
        _m013 sdk::array<struct mi::decay_timer_link_t, 4>  decay_cluster_timer_heads;                   //{ +0x09c8    +0x0a38    +0x33c0    +0x0a38    } | .DecayClusterTimerHeads
        _m014 uint32_t                                      decay_hand;                                  //{ +0x09e8    +0x0a58    +0x33e0    +0x0a58    } | .DecayHand
        _m015 varuint_t                                     standby_list_discard;                        //{ +0x0ac8    +0x0a5c    +0x33e4    +0x0a5c    } | .StandbyListDiscard
        _m016 uint8_t                                       free_list_discard;                           //{ +0x0acc    +0x0a5d    +0x33e5    +0x0a5d    } | .FreeListDiscard
        _m017 uint64_t                                      last_decay_hand_update_time;                 //{ +0x09f0    +0x0a60    +0x33e8    +0x0a60    } | .LastDecayHandUpdateTime
        _m018 struct mi::ldw_work_context_t                 last_chance_ldw_context;                     //{ +0x09f8    +0x0a68    +0x33f0    +0x0a68    } | .LastChanceLdwContext
        _m019 uint64_t                                      available_events_lock;                       //{ +0x0a40    +0x0ac0    +0x3440    +0x0ac0    } | .AvailableEventsLock
        _m020 available_page_wait_states_t                  available_page_wait_states;                  //{ +0x0a48    +0x0ac8    +0x3448    +0x0ac8    } | .AvailablePageWaitStates
        _m021 volatile uint64_t                             transition_private_pages;                    //{ +0x0ac0    +0x0b40    +0x34c0    +0x0b40    } | .TransitionPrivatePages
        _m022 sdk::array<struct rtl::bitmap_ex_t, 2>        large_pfn_bit_map;                           //{ +0x0ae0    +0x0b48    +0x34c8    +0x0b48    } | .LargePfnBitMap
        _m023 uint64_t                                      low_memory_threshold;                        //{ +0x0aa8    +0x0bb0    +0x3558    +0x0bb0    } | .LowMemoryThreshold
        _m024 uint64_t                                      high_memory_threshold;                       //{ +0x0ab0    +0x0bb8    +0x3560    +0x0bb8    } | .HighMemoryThreshold
                                                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
        //                                                                                             
        _m025 volatile uint64_t                             transition_shared_pages;                     //{ +0x0880    +0x1180    +0x0880    } | .TransitionSharedPages
        _m026 sdk::array<uint64_t, 6>                       transition_shared_pages_peak;                //{ +0x0888    +0x1188    +0x0888    } | .TransitionSharedPagesPeak
        _m027 uint8_t                                       pfn_bit_maps_ready;                          //{ +0x0a5e    +0x33e6    +0x0a5e    } | .PfnBitMapsReady
        _m028 struct mi::free_large_page_list_t*            large_page_list_heads;                       //{ +0x0b68    +0x34e8    +0x0b68    } | .LargePageListHeads
        _m029 sdk::variant<uint8_t*, volatile char*>        medium_pages_on_free_zero_list;              //{ +0x0b70    +0x34f0    +0x0b70    } | .MediumPagesOnFreeZeroList
        _m030 struct rtl::bitmap_ex_t                       large_page_rebuild_candidates;               //{ +0x0b78    +0x34f8    +0x0b78    } | .LargePageRebuildCandidates
        _m031 sdk::variant<wchar_t*, volatile int16_t*>     large_pages_on_free_zero_list;               //{ +0x0b88    +0x3508    +0x0b88    } | .LargePagesOnFreeZeroList
        _m032 volatile int32_t                              huge_page_rebuild_candidates_exist;          //{ +0x0b90    +0x3510    +0x0b90    } | .HugePageRebuildCandidatesExist
        _m033 struct nt::kevent_t                           large_page_candidates_exist_event;           //{ +0x0b98    +0x3530    +0x0b98    } | .LargePageCandidatesExistEvent
        _m034 slab_pfn_bit_map_t                            slab_pfn_bit_map;                            //{ +0x0f80    +0x3568    +0x0f80    } | .SlabPfnBitMap
        _m035 void*                                         huge_pfn_lists;                              //{ +0x0f90    +0x3590    +0x0f90    } | .HugePfnLists
        _m036 uint64_t                                      available_huge_io_ranges;                    //{ +0x0f98    +0x3598    +0x0f98    } | .AvailableHugeIoRanges
                                                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                           
        //                                                                                             
        _m037 struct nt::mmpfnlist_t                        enclave_page_list_head;                      //{ +0x07c0    +0x07c0    +0x07c0    } | .EnclavePageListHead
        _m038 void*                                         mirror_list_locks;                           //{ +0x0ad0    +0x0b28    +0x0b28    } | .MirrorListLocks
                                                                                                       
        // Windows 10 v2004, Windows 10 v20H2                                                          
        //                                                                                             
        _m039 struct rtl::avl_tree_t                        huge_pfn_bad_pages;                          //{ +0x0aa0    +0x0aa0    } | .HugePfnBadPages
        _m040 slab_contexts_t                               slab_contexts;                               //{ +0x0bc0    +0x0bc0    } | .SlabContexts
                                                                                                       
        // Windows 10 v1607                                                                            
        //                                                                                             
        _m041 uint8_t                                       large_pfn_bit_maps_ready;                    //{ +0x0ad8    } | .LargePfnBitMapsReady
        _m042 uint64_t                                      large_pfn_bit_map_lock;                      //{ +0x0b00    } | .LargePfnBitMapLock
                                                                                                       
        // Windows 11                                                                                  
        //                                                                                             
        _m043 struct nt::mmpfnlist_t                        modified_page_list_no_reservation_compress;  //{ +0x0500    } | .ModifiedPageListNoReservationCompress
        _m044 sdk::array<struct mi::standby_lookaside_t, 8> oldest_standby_page_cache;                   //{ +0x1340    } | .OldestStandbyPageCache
        _m045 sdk::array<struct mi::standby_lookaside_t, 8> newest_standby_page_cache;                   //{ +0x2340    } | .NewestStandbyPageCache
        _m046 sdk::array<sdk::array<uint64_t, 8>, 2>        newest_standby_page_cache_inserts;           //{ +0x3340    } | .NewestStandbyPageCacheInserts
        _m047 volatile int32_t                              process_large_page_cache_lock;               //{ +0x3514    } | .ProcessLargePageCacheLock
        _m048 nt::list_entry_t                              process_large_page_cache_links;              //{ +0x3518    } | .ProcessLargePageCacheLinks
        _m049 uint32_t                                      process_large_page_cache_periodic_count;     //{ +0x3528    } | .ProcessLargePageCachePeriodicCount
        _m050 uint64_t                                      low_memory_configured_threshold;             //{ +0x3548    } | .LowMemoryConfiguredThreshold
        _m051 uint64_t                                      high_memory_configured_threshold;            //{ +0x3550    } | .HighMemoryConfiguredThreshold
        _m052 sdk::array<uint8_t, 7>                        slab_pages_not_available;                    //{ +0x3588    } | .SlabPagesNotAvailable
        _m053 uint64_t                                      slab_entries_demoted;                        //{ +0x35a0    } | .SlabEntriesDemoted
        _m054 volatile int32_t                              slab_demote_in_progress;                     //{ +0x35a8    } | .SlabDemoteInProgress
        _m055 uint32_t                                      slab_type_acquires_charges;                  //{ +0x35ac    } | .SlabTypeAcquiresCharges
        _m056 uint64_t                                      driver_page_count;                           //{ +0x35b0    } | .DriverPageCount
        _m057 uint64_t                                      driver_last_page;                            //{ +0x35b8    } | .DriverLastPage
        _m058 uint64_t                                      driver_non_slab_attempted;                   //{ +0x35c0    } | .DriverNonSlabAttempted
        _m059 uint64_t                                      driver_slab_last_fail_time;                  //{ +0x35c8    } | .DriverSlabLastFailTime
        _m060 uint64_t                                      mdl_pages_by_lists_total;                    //{ +0x35d0    } | .MdlPagesByListsTotal
        _m061 uint64_t                                      mdl_pages_by_lists_from_slab;                //{ +0x35d8    } | .MdlPagesByListsFromSlab
        _m062 uint64_t                                      mdl_pages_by_lists_slab_not_eligible;        //{ +0x35e0    } | .MdlPagesByListsSlabNotEligible
        _m063 uint64_t                                      mdl_pages_prefer_contiguous_slab_eligible;   //{ +0x35e8    } | .MdlPagesPreferContiguousSlabEligible
        _m064 uint64_t                                      mdl_pages_prefer_contiguous_from_slab;       //{ +0x35f0    } | .MdlPagesPreferContiguousFromSlab
        _m065 uint64_t                                      mdl_slab_pages_free_zeroed_total;            //{ +0x35f8    } | .MdlSlabPagesFreeZeroedTotal
        _m066 sdk::array<uint32_t, 4>                       mdl_slab_pages_free_zeroed_buckets;          //{ +0x3600    } | .MdlSlabPagesFreeZeroedBuckets
        _m067 uint64_t                                      system_page_table_pages_no_slab;             //{ +0x3610    } | .SystemPageTablePagesNoSlab
                                                                                                       
        SDK_MAGIC_PROPERTIES( "_MI_PARTITION_PAGE_LISTS.$", 0xfc0, true, 0xc2a370d0be092987 );                                           
        SDK_DYNAMIC_SIZE( partition_page_lists_t );                                                    
    };                                                                                                 
};
#include "magic/partition_page_lists_t.end.hpp"
