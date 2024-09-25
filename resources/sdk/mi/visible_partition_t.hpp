#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/mmpfnlist_t.hpp"
#include "pagefile_traces_t.hpp"
#include "../nt/mmwsl_instance_t.hpp"
#include "../nt/mmsupport_instance_t.hpp"

namespace nt { struct mmpaging_file_t; }

#include "magic/visible_partition_t.start.hpp"
namespace mi
{
    // [struct _MI_VISIBLE_PARTITION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct visible_partition_t                                                                          
    {                                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                                              
        _m000 uint64_t                                       lowest_physical_page;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LowestPhysicalPage
        _m001 uint64_t                                       highest_physical_page;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HighestPhysicalPage
        _m002 uint64_t                                       number_of_physical_pages;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberOfPhysicalPages
        _m003 volatile uint32_t                              number_of_paging_files;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NumberOfPagingFiles
        _m004 uint8_t                                        system_cache_initialized;                    //{ +0x03a0    +0x001c    +0x001c    +0x001c    } | .SystemCacheInitialized
        _m005 sdk::array<struct nt::mmpaging_file_t*, 16>    paging_file;                                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PagingFile
        _m006 volatile uint64_t                              available_pages;                             //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .AvailablePages
        _m007 volatile uint64_t                              resident_available_pages;                    //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .ResidentAvailablePages
        _m008 sdk::array<struct nt::mmsupport_instance_t, 1> partition_ws;                                //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .PartitionWs
        _m009 sdk::array<struct nt::mmwsl_instance_t, 1>     partition_working_set_lists;                 //{ +0x0200    +0x0200    +0x0200    +0x0200    } | .PartitionWorkingSetLists
        _m010 volatile uint64_t                              total_committed_pages;                       //{ +0x03a8    +0x0228    +0x0228    +0x0228    } | .TotalCommittedPages
        _m011 struct nt::mmpfnlist_t                         modified_page_list_head;                     //{ +0x03c0    +0x0240    +0x0240    +0x0240    } | .ModifiedPageListHead
        _m012 struct nt::mmpfnlist_t                         modified_no_write_page_list_head;            //{ +0x0400    +0x0280    +0x02c0    +0x0280    } | .ModifiedNoWritePageListHead
        _m013 uint64_t                                       total_commit_limit;                          //{ +0x0428    +0x02a8    +0x0318    +0x02a8    } | .TotalCommitLimit
        _m014 uint64_t                                       total_pages_for_paging_file;                 //{ +0x0430    +0x02b0    +0x0320    +0x02b0    } | .TotalPagesForPagingFile
        _m015 uint64_t                                       vad_physical_pages;                          //{ +0x0438    +0x02b8    +0x0328    +0x02b8    } | .VadPhysicalPages
        _m016 uint64_t                                       process_locked_file_pages;                   //{ +0x0440    +0x02c0    +0x0330    +0x02c0    } | .ProcessLockedFilePages
        _m017 sdk::array<uint32_t, 4>                        charge_commitment_failures;                  //{ +0x0448    +0x02d8    +0x0368    +0x02d8    } | .ChargeCommitmentFailures
        _m018 volatile int32_t                               page_file_trace_index;                       //{ +0x0460    +0x02e8    +0x0378    +0x02e8    } | .PageFileTraceIndex
        _m019 sdk::array<struct mi::pagefile_traces_t, 32>   page_file_traces;                            //{ +0x0468    +0x02f0    +0x0380    +0x02f0    } | .PageFileTraces
                                                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                                                              
        _m020 volatile uint64_t                              shared_commit;                               //{ +0x02c8    +0x0338    +0x02c8    } | .SharedCommit
        _m021 uint64_t                                       slab_allocator_pages;                        //{ +0x02d0    +0x0340    +0x02d0    } | .SlabAllocatorPages
                                                                                                        
        // Windows 10 v1607                                                                             
        //                                                                                              
        _m022 volatile uint64_t                              page_table_bitmap_pages;                     //{ +0x0458    } | .PageTableBitmapPages
                                                                                                        
        // Windows 11                                                                                   
        //                                                                                              
        _m023 uint64_t                                       slab_allocator_pages_uncharged;              //{ +0x0348    } | .SlabAllocatorPagesUncharged
        _m024 uint64_t                                       boot_slab_pages;                             //{ +0x0350    } | .BootSlabPages
        _m025 uint64_t                                       secure_kernel_pages_from_non_charged_slabs;  //{ +0x0358    } | .SecureKernelPagesFromNonChargedSlabs
        _m026 uint64_t                                       kernel_shadow_stack_pages;                   //{ +0x0360    } | .KernelShadowStackPages
                                                                                                        
        SDK_MAGIC_PROPERTIES( "_MI_VISIBLE_PARTITION.$", 0x1200, true, 0x9d6a7e9791a1996 );                                           
        SDK_DYNAMIC_SIZE( visible_partition_t );                                                        
    };                                                                                                  
};
#include "magic/visible_partition_t.end.hpp"
