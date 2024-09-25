#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kgate_t.hpp"
#include "../nt/mmpte_t.hpp"
#include "../nt/kevent_t.hpp"
#include "../rtl/bitmap_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "../nt/mmsession_t.hpp"
#include "../rtl/avl_tree_t.hpp"
#include "paged_pool_info_t.hpp"
#include "../rtl/bitmap_ex_t.hpp"
#include "../mi/special_pool_t.hpp"
#include "../io/session_state_t.hpp"
#include "session_space_flags_t.hpp"
#include "../nt/mmsupport_full_t.hpp"
#include "../nt/mmwsl_instance_t.hpp"
#include "../rtl/balanced_node_t.hpp"
#include "../mi/system_pte_type_t.hpp"
#include "../nt/pool_descriptor_t.hpp"
#include "../nt/general_lookaside_t.hpp"
#include "../mi/session_driver_unload_t.hpp"
#include "../nt/mmsupport_aggregation_t.hpp"

namespace nt { struct ejob_t;     }
namespace nt { struct eprocess_t; }

#include "magic/session_space_t.start.hpp"
namespace mm
{
    // [struct _MM_SESSION_SPACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct session_space_t                                                                    
    {                                                                                         
        using dynamic_va_bit_map_t = sdk::variant<struct rtl::bitmap_t, struct rtl::bitmap_ex_t>;                                 
                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                                    
        _m000 volatile int32_t                               reference_count;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReferenceCount
        _m001 uint32_t                                       long_flags;                        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LongFlags
        _m002 struct mm::session_space_flags_t               flags;                             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m003 uint32_t                                       session_id;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SessionId
        _m004 volatile int32_t                               process_reference_to_session;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ProcessReferenceToSession
        _m005 nt::list_entry_t                               process_list;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessList
        _m006 volatile uint64_t                              non_pagable_pages;                 //{ +0x0028    +0x0028    +0x0020    +0x0028    } | .NonPagablePages
        _m007 volatile uint64_t                              committed_pages;                   //{ +0x0030    +0x0030    +0x0028    +0x0030    } | .CommittedPages
        _m008 void*                                          session_object;                    //{ +0x0048    +0x0048    +0x0030    +0x0048    } | .SessionObject
        _m009 void*                                          session_object_handle;             //{ +0x0050    +0x0050    +0x0038    +0x0050    } | .SessionObjectHandle
        _m010 struct rtl::avl_tree_t                         image_tree;                        //{ +0x0068    +0x0058    +0x0040    +0x0058    } | .ImageTree
        _m011 uint32_t                                       locale_id;                         //{ +0x0070    +0x0060    +0x0048    +0x0060    } | .LocaleId
        _m012 uint32_t                                       attach_count;                      //{ +0x0074    +0x0064    +0x004c    +0x0064    } | .AttachCount
        _m013 struct nt::kgate_t                             attach_gate;                       //{ +0x0078    +0x0068    +0x0050    +0x0068    } | .AttachGate
        _m014 nt::list_entry_t                               ws_list_entry;                     //{ +0x0090    +0x0080    +0x0078    +0x0080    } | .WsListEntry
        _m015 struct nt::mmsupport_full_t                    vm;                                //{ +0x0bc0    +0x0100    +0x00c0    +0x0100    } | .Vm
        _m016 struct nt::mmsupport_aggregation_t             aggregate_session_ws;              //{ +0x0d00    +0x0280    +0x0240    +0x0280    } | .AggregateSessionWs
        _m017 struct mi::session_driver_unload_t             driver_unload;                     //{ +0x0d20    +0x02a8    +0x0260    +0x02a8    } | .DriverUnload
        _m018 enum io::session_state_t                       io_state;                          //{ +0x1f98    +0x03f8    +0x02f0    +0x03f8    } | .IoState
        _m019 uint32_t                                       io_state_sequence;                 //{ +0x1f9c    +0x03fc    +0x02f4    +0x03fc    } | .IoStateSequence
        _m020 struct nt::kevent_t                            io_notification_event;             //{ +0x1fa0    +0x0400    +0x02f8    +0x0400    } | .IoNotificationEvent
        _m021 struct nt::ejob_t*                             server_silo;                       //{ +0x1fb8    +0x0418    +0x0310    +0x0418    } | .ServerSilo
        _m022 uint64_t                                       create_time;                       //{ +0x1fc0    +0x0420    +0x0318    +0x0420    } | .CreateTime
                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                 
        //                                                                                    
        _m023 uint64_t                                       session_page_directory_index;      //{ +0x0020    +0x0020    +0x0020    } | .SessionPageDirectoryIndex
        _m024 void*                                          paged_pool_start;                  //{ +0x0038    +0x0038    +0x0038    } | .PagedPoolStart
        _m025 void*                                          paged_pool_end;                    //{ +0x0040    +0x0040    +0x0040    } | .PagedPoolEnd
        _m026 struct mm::paged_pool_info_t                   paged_pool_info;                   //{ +0x0b60    +0x00a8    +0x00a8    } | .PagedPoolInfo
        _m027 struct nt::mmsession_t                         session;                           //{ +0x0b40    +0x00c0    +0x00c0    } | .Session
        _m028 struct nt::mmpte_t                             page_directory;                    //{ +0x1e80    +0x0330    +0x0330    } | .PageDirectory
        _m029 struct ex::push_lock_t                         session_va_lock;                   //{ +0x1e88    +0x0338    +0x0338    } | .SessionVaLock
        _m030 dynamic_va_bit_map_t                           dynamic_va_bit_map;                //{ +0x1e90    +0x0340    +0x0340    } | .DynamicVaBitMap
        _m031 varuint_t                                      dynamic_va_hint;                   //{ +0x1ea0    +0x0350    +0x0350    } | .DynamicVaHint
        _m032 struct ex::push_lock_t                         session_pte_lock;                  //{ +0x1ef8    +0x0358    +0x0358    } | .SessionPteLock
        _m033 int32_t                                        pool_big_entries_in_use;           //{ +0x1f00    +0x0360    +0x0360    } | .PoolBigEntriesInUse
        _m034 volatile int32_t                               paged_pool_pde_count;              //{ +0x1f04    +0x0364    +0x0364    } | .PagedPoolPdeCount
        _m035 uint32_t                                       dynamic_session_pde_count;         //{ +0x1f0c    +0x0368    +0x0368    } | .DynamicSessionPdeCount
        _m036 struct mi::system_pte_type_t                   system_pte_info;                   //{ +0x1f10    +0x0370    +0x0370    } | .SystemPteInfo
        _m037 void*                                          pool_track_table_expansion;        //{ +0x1f78    +0x03d0    +0x03d0    } | .PoolTrackTableExpansion
        _m038 uint64_t                                       pool_track_table_expansion_size;   //{ +0x1f80    +0x03d8    +0x03d8    } | .PoolTrackTableExpansionSize
        _m039 void*                                          pool_track_big_pages;              //{ +0x1f88    +0x03e0    +0x03e0    } | .PoolTrackBigPages
        _m040 uint64_t                                       pool_track_big_pages_size;         //{ +0x1f90    +0x03e8    +0x03e8    } | .PoolTrackBigPagesSize
        _m041 sdk::array<uint8_t, 8192>                      pool_tags;                         //{ +0x2000    +0x1000    +0x1000    } | .PoolTags
                                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                    
        _m042 struct rtl::balanced_node_t                    ws_tree_entry;                     //{ +0x0090    +0x0088    +0x0090    } | .WsTreeEntry
        _m043 uint64_t                                       combine_domain;                    //{ +0x00e0    +0x00a0    +0x00e0    } | .CombineDomain
        _m044 struct nt::mmwsl_instance_t                    working_set_list;                  //{ +0x0240    +0x0200    +0x0240    } | .WorkingSetList
        _m045 sdk::array<uint32_t, 32>                       top_level_pte_lock_bits;           //{ +0x02b0    +0x0268    +0x02b0    } | .TopLevelPteLockBits
                                                                                              
        // Windows 10 v2004, Windows 10 v20H2                                                 
        //                                                                                    
        _m046 void*                                          heap_state;                        //{ +0x02a0    +0x02a0    } | .HeapState
        _m047 struct rtl::avl_tree_t                         permitted_faults_tree;             //{ +0x03f0    +0x03f0    } | .PermittedFaultsTree
                                                                                              
        // Windows 10 v1607                                                                   
        //                                                                                    
        _m048 sdk::array<uint32_t, 4>                        session_pool_allocation_failures;  //{ +0x0058    } | .SessionPoolAllocationFailures
        _m049 sdk::array<struct nt::general_lookaside_t, 21> lookaside;                         //{ +0x00c0    } | .Lookaside
        _m050 struct nt::pool_descriptor_t                   paged_pool;                        //{ +0x0d40    } | .PagedPool
        _m051 struct mi::special_pool_t                      special_pool;                      //{ +0x1ea8    } | .SpecialPool
        _m052 uint32_t                                       special_pool_pde_count;            //{ +0x1f08    } | .SpecialPoolPdeCount
                                                                                              
        // Windows 11                                                                         
        //                                                                                    
        _m053 sdk::array<struct nt::eprocess_t*, 2>          attachers_using_pxe_copies;        //{ +0x0068    } | .AttachersUsingPxeCopies
        _m054 sdk::array<struct nt::mmpte_t, 1>              page_tables;                       //{ +0x02e8    } | .PageTables
                                                                                              
        SDK_MAGIC_PROPERTIES( "_MM_SESSION_SPACE.$", 0x5000, true, 0x2f953a1bd59b6eff );                                 
        SDK_DYNAMIC_SIZE( session_space_t );                                                  
    };                                                                                        
};
#include "magic/session_space_t.end.hpp"
