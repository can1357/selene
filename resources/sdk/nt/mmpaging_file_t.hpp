#pragma once
#include <sdkgen/support_library.hpp>
#include "slist_header_t.hpp"
#include "../rtl/rb_tree_t.hpp"
#include "../rtl/avl_tree_t.hpp"
#include "../rtl/balanced_node_t.hpp"

namespace mi { struct page_hash_t;                    }
namespace mi { struct pagefile_bitmaps_cache_entry_t; }
namespace mi { struct paging_file_space_bitmaps_t;    }
namespace mi { struct partition_t;                    }

#include "magic/mmpaging_file_t.start.hpp"
namespace nt
{
    struct ethread_t;
    struct file_object_t;
    struct mmmod_writer_mdl_entry_t;

    // [struct _MMPAGING_FILE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmpaging_file_t                                                                     
    {                                                                                          
        using entry_t = sdk::variant<sdk::array<struct nt::mmmod_writer_mdl_entry_t*, 2>, struct nt::mmmod_writer_mdl_entry_t**>;                                
                                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                                     
        _m000 uint64_t                                         size;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m001 uint64_t                                         maximum_size;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MaximumSize
        _m002 uint64_t                                         minimum_size;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MinimumSize
        _m003 uint64_t                                         free_space;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FreeSpace
        _m004 uint64_t                                         peak_usage;                       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PeakUsage
        _m005 uint64_t                                         highest_page;                     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .HighestPage
        _m006 uint64_t                                         free_reservation_space;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FreeReservationSpace
        _m007 struct nt::file_object_t*                        file;                             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .File
        _m008 entry_t                                          entry;                            //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Entry
        _m009 union nt::slist_header_t                         pfns_to_free;                     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .PfnsToFree
        _m010 nt::unicode_view                                 page_file_name;                   //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .PageFileName
        _m011 struct mi::paging_file_space_bitmaps_t*          bitmaps;                          //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .Bitmaps
        _m012 uint32_t                                         allocation_bitmap_hint;           //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .AllocationBitmapHint
        _m013 uint32_t                                         largest_allocation_cluster;       //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .LargestAllocationCluster
        _m014 uint32_t                                         refresh_allocation_cluster;       //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .RefreshAllocationCluster
        _m015 uint32_t                                         last_refresh_allocation_cluster;  //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .LastRefreshAllocationCluster
        _m016 uint32_t                                         reserved_cluster_size_aggregate;  //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .ReservedClusterSizeAggregate
        _m017 uint32_t                                         maximum_run_length_in_bitmaps;    //{ +0x008c    +0x008c    +0x008c    +0x008c    } | .MaximumRunLengthInBitmaps
        _m018 struct rtl::rb_tree_t                            bitmaps_cache_length_tree;        //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .BitmapsCacheLengthTree
        _m019 struct rtl::rb_tree_t                            bitmaps_cache_location_tree;      //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .BitmapsCacheLocationTree
        _m020 nt::list_entry_t                                 bitmaps_cache_free_list;          //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .BitmapsCacheFreeList
        _m021 struct mi::pagefile_bitmaps_cache_entry_t*       bitmaps_cache_entries;            //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .BitmapsCacheEntries
        _m022 uint32_t                                         to_be_evicted_count;              //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .ToBeEvictedCount
        _m023 uint32_t                                         hybrid_priority;                  //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .HybridPriority
        _m024 uint4_t                                          page_file_number;                 //{ +0x00cc@0  +0x00cc@0  +0x00cc@0  +0x00cc@0  } | .PageFileNumber
        _m025 uint1_t                                          ws_swap_pagefile;                 //{ +0x00cc@4  +0x00cc@4  +0x00cc@4  +0x00cc@4  } | .WsSwapPagefile
        _m026 uint1_t                                          no_reservations;                  //{ +0x00cc@5  +0x00cc@5  +0x00cc@5  +0x00cc@5  } | .NoReservations
        _m027 uint1_t                                          virtual_store_pagefile;           //{ +0x00cc@6  +0x00cc@6  +0x00cc@6  +0x00cc@6  } | .VirtualStorePagefile
        _m028 uint1_t                                          swap_supported;                   //{ +0x00cc@7  +0x00cc@7  +0x00cc@7  +0x00cc@7  } | .SwapSupported
        _m029 uint1_t                                          node_inserted;                    //{ +0x00cc@8  +0x00cc@8  +0x00cc@8  +0x00cc@8  } | .NodeInserted
        _m030 uint1_t                                          stack_notified;                   //{ +0x00cc@9  +0x00cc@9  +0x00cc@9  +0x00cc@9  } | .StackNotified
        _m031 uint1_t                                          adrift_mdls;                      //{ +0x00ce@0  +0x00ce@0  +0x00ce@0  +0x00ce@0  } | .AdriftMdls
        _m032 uint1_t                                          ignore_reservations;              //{ +0x00cf@0  +0x00cf@0  +0x00cf@0  +0x00cf@0  } | .IgnoreReservations
        _m033 uint32_t                                         page_hash_pages;                  //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .PageHashPages
        _m034 uint32_t                                         page_hash_pages_peak;             //{ +0x00d4    +0x00d4    +0x00d4    +0x00d4    } | .PageHashPagesPeak
        _m035 sdk::variant<uint32_t*, struct mi::page_hash_t*> page_hash;                        //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .PageHash
        _m036 void*                                            file_handle;                      //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .FileHandle
        _m037 struct rtl::avl_tree_t                           flow_through_read_root;           //{ +0x00f8    +0x00f0    +0x00f0    +0x00f0    } | .FlowThroughReadRoot
        _m038 struct mi::partition_t*                          partition;                        //{ +0x0100    +0x00f8    +0x00f8    +0x00f8    } | .Partition
        _m039 struct rtl::balanced_node_t                      file_object_node;                 //{ +0x0108    +0x0100    +0x0100    +0x0100    } | .FileObjectNode
                                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                     
        _m040 uint32_t                                         number_of_mod_writer_entries;     //{ +0x0048    +0x0048    +0x0048    } | .NumberOfModWriterEntries
        _m041 uint1_t                                          backed_by_scm;                    //{ +0x00cc@10 +0x00cc@10 +0x00cc@10 } | .BackedBySCM
        _m042 uint1_t                                          special_purpose_memory;           //{ +0x00cc@11 +0x00cc@11 +0x00cc@11 } | .SpecialPurposeMemory
        _m043 volatile int32_t                                 spin_lock;                        //{ +0x00e8    +0x00e8    +0x00e8    } | .SpinLock
                                                                                               
        // Windows 11                                                                          
        //                                                                                     
        _m044 struct rtl::rb_tree_t                            extents_tree;                     //{ +0x0100    } | .ExtentsTree
                                                                                               
        // Windows 10 v1607                                                                    
        //                                                                                     
        _m045 uint64_t                                         lock;                             //{ +0x00e8    } | .Lock
        _m046 struct nt::ethread_t*                            lock_owner;                       //{ +0x00f0    } | .LockOwner
                                                                                               
        SDK_MAGIC_PROPERTIES( "_MMPAGING_FILE.$", 0x120, true, 0x828788ec59bc624b );                                
        SDK_FIXED_SIZE( mmpaging_file_t, 0x120 );                                              
    };                                                                                         
};
#include "magic/mmpaging_file_t.end.hpp"
SDK_VERIFY( struct nt::mmpaging_file_t, 0x120 );
