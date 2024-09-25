#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "../rtl/avl_tree_t.hpp"
#include "partition_flags_t.hpp"
#include "../nt/slist_header_t.hpp"
#include "../nt/work_queue_item_t.hpp"

namespace nt { struct epartition_t;                 }
namespace nt { struct physical_memory_descriptor_t; }

#include "magic/partition_core_t.start.hpp"
namespace mi
{
    struct partition_t;
    struct node_information_t;

    // [struct _MI_PARTITION_CORE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct partition_core_t                                                                        
    {                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                                         
        _m000 uint16_t                                      partition_id;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PartitionId
        _m001 uint32_t                                      long_flags;                              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LongFlags
        _m002 struct mi::partition_flags_t                  flags;                                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m003 uint32_t                                      signature;                               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Signature
        _m004 struct mi::node_information_t*                node_information;                        //{ +0x0030    +0x0010    +0x0010    +0x0010    } | .NodeInformation
        _m005 struct rtl::avl_tree_t                        page_root;                               //{ +0x0038    +0x0018    +0x0018    +0x0018    } | .PageRoot
        _m006 struct nt::physical_memory_descriptor_t*      memory_node_runs;                        //{ +0x0040    +0x0020    +0x0020    +0x0020    } | .MemoryNodeRuns
        _m007 uint64_t                                      memory_block_references;                 //{ +0x0048    +0x0028    +0x0028    +0x0028    } | .MemoryBlockReferences
        _m008 struct nt::work_queue_item_t                  pfn_unmap_work_item;                     //{ +0x0050    +0x0030    +0x0030    +0x0030    } | .PfnUnmapWorkItem
        _m009 uint64_t                                      pfn_unmap_count;                         //{ +0x0078    +0x0050    +0x0050    +0x0050    } | .PfnUnmapCount
        _m010 void*                                         pfn_unmap_wait_list;                     //{ +0x0080    +0x0058    +0x0058    +0x0058    } | .PfnUnmapWaitList
        _m011 struct nt::physical_memory_descriptor_t*      memory_runs;                             //{ +0x0088    +0x0060    +0x0060    +0x0060    } | .MemoryRuns
        _m012 struct nt::kevent_t                           exit_event;                              //{ +0x0090    +0x0068    +0x0068    +0x0068    } | .ExitEvent
        _m013 sdk::array<void*, 5>                          system_thread_handles;                   //{ +0x00a8    +0x0080    +0x0098    +0x0080    } | .SystemThreadHandles
        _m014 sdk::variant<void*, struct nt::epartition_t*> partition_object;                        //{ +0x00d0    +0x00b0    +0x00c8    +0x00b0    } | .PartitionObject
        _m015 struct ex::push_lock_t                        dynamic_memory_push_lock;                //{ +0x00e0    +0x00c0    +0x00d8    +0x00c0    } | .DynamicMemoryPushLock
        _m016 volatile int32_t                              dynamic_memory_lock;                     //{ +0x00e8    +0x00c8    +0x00e0    +0x00c8    } | .DynamicMemoryLock
        _m017 uint8_t                                       pfn_unmap_active;                        //{ +0x0070    +0x00cc    +0x00e4    +0x00cc    } | .PfnUnmapActive
        _m018 struct nt::kevent_t                           temporary_memory_event;                  //{ +0x00f0    +0x00d0    +0x00e8    +0x00d0    } | .TemporaryMemoryEvent
        _m019 sdk::array<struct nt::kevent_t*, 11>          memory_events;                           //{ +0x0108    +0x00f8    +0x0110    +0x00f8    } | .MemoryEvents
                                                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
        //                                                                                         
        _m020 uint8_t                                       memory_configuration_changed;            //{ +0x000c    +0x000c    +0x000c    } | .MemoryConfigurationChanged
        _m021 struct ex::push_lock_t                        partition_system_threads_lock;           //{ +0x00b8    +0x00d0    +0x00b8    } | .PartitionSystemThreadsLock
        _m022 void*                                         root_directory;                          //{ +0x00e8    +0x0100    +0x00e8    } | .RootDirectory
        _m023 void*                                         kernel_objects_directory;                //{ +0x00f0    +0x0108    +0x00f0    } | .KernelObjectsDirectory
        _m024 sdk::array<void*, 11>                         memory_event_handles;                    //{ +0x0150    +0x0168    +0x0150    } | .MemoryEventHandles
        _m025 uint64_t                                      total_huge_io_ranges;                    //{ +0x01a8    +0x01c0    +0x01a8    } | .TotalHugeIoRanges
        _m026 uint64_t                                      non_charged_secure_pages;                //{ +0x01b0    +0x01c8    +0x01b0    } | .NonChargedSecurePages
                                                                                                   
        // Windows 10 v1607                                                                        
        //                                                                                         
        _m027 uint64_t                                      reference_count;                         //{ +0x0010    } | .ReferenceCount
        _m028 struct mi::partition_t*                       parent_partition;                        //{ +0x0018    } | .ParentPartition
        _m029 nt::list_entry_t                              list_entry;                              //{ +0x0020    } | .ListEntry
        _m030 void*                                         partition_object_handle;                 //{ +0x00d8    } | .PartitionObjectHandle
                                                                                                   
        // Windows 11                                                                              
        //                                                                                         
        _m031 struct nt::kevent_t                           conductor_needed_event;                  //{ +0x0080    } | .ConductorNeededEvent
        _m032 union nt::slist_header_t                      free_kernel_shadow_stack_cache_entries;  //{ +0x01d0    } | .FreeKernelShadowStackCacheEntries
                                                                                                   
        SDK_MAGIC_PROPERTIES( "_MI_PARTITION_CORE.$", 0x1b8, true, 0x5d066781c3274bf5 );                                       
        SDK_DYNAMIC_SIZE( partition_core_t );                                                      
    };                                                                                             
};
#include "magic/partition_core_t.end.hpp"
