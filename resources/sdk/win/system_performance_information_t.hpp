#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_performance_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PERFORMANCE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_performance_information_t           
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                            
        _m000 int64_t  idle_process_time;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IdleProcessTime
        _m001 int64_t  io_read_transfer_count;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IoReadTransferCount
        _m002 int64_t  io_write_transfer_count;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IoWriteTransferCount
        _m003 int64_t  io_other_transfer_count;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IoOtherTransferCount
        _m004 uint32_t io_read_operation_count;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .IoReadOperationCount
        _m005 uint32_t io_write_operation_count;        //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .IoWriteOperationCount
        _m006 uint32_t io_other_operation_count;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .IoOtherOperationCount
        _m007 uint32_t available_pages;                 //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .AvailablePages
        _m008 uint32_t committed_pages;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CommittedPages
        _m009 uint32_t commit_limit;                    //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .CommitLimit
        _m010 uint32_t peak_commitment;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .PeakCommitment
        _m011 uint32_t page_fault_count;                //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .PageFaultCount
        _m012 uint32_t copy_on_write_count;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CopyOnWriteCount
        _m013 uint32_t transition_count;                //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .TransitionCount
        _m014 uint32_t cache_transition_count;          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .CacheTransitionCount
        _m015 uint32_t demand_zero_count;               //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .DemandZeroCount
        _m016 uint32_t page_read_count;                 //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .PageReadCount
        _m017 uint32_t page_read_io_count;              //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .PageReadIoCount
        _m018 uint32_t cache_read_count;                //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .CacheReadCount
        _m019 uint32_t cache_io_count;                  //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .CacheIoCount
        _m020 uint32_t dirty_pages_write_count;         //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .DirtyPagesWriteCount
        _m021 uint32_t dirty_write_io_count;            //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .DirtyWriteIoCount
        _m022 uint32_t mapped_pages_write_count;        //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .MappedPagesWriteCount
        _m023 uint32_t mapped_write_io_count;           //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .MappedWriteIoCount
        _m024 uint32_t paged_pool_pages;                //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .PagedPoolPages
        _m025 uint32_t non_paged_pool_pages;            //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .NonPagedPoolPages
        _m026 uint32_t paged_pool_allocs;               //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .PagedPoolAllocs
        _m027 uint32_t paged_pool_frees;                //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .PagedPoolFrees
        _m028 uint32_t non_paged_pool_allocs;           //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .NonPagedPoolAllocs
        _m029 uint32_t non_paged_pool_frees;            //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .NonPagedPoolFrees
        _m030 uint32_t free_system_ptes;                //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .FreeSystemPtes
        _m031 uint32_t resident_system_code_page;       //{ +0x008c    +0x008c    +0x008c    +0x008c    } | .ResidentSystemCodePage
        _m032 uint32_t total_system_driver_pages;       //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .TotalSystemDriverPages
        _m033 uint32_t total_system_code_pages;         //{ +0x0094    +0x0094    +0x0094    +0x0094    } | .TotalSystemCodePages
        _m034 uint32_t non_paged_pool_lookaside_hits;   //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .NonPagedPoolLookasideHits
        _m035 uint32_t paged_pool_lookaside_hits;       //{ +0x009c    +0x009c    +0x009c    +0x009c    } | .PagedPoolLookasideHits
        _m036 uint32_t available_paged_pool_pages;      //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .AvailablePagedPoolPages
        _m037 uint32_t resident_system_cache_page;      //{ +0x00a4    +0x00a4    +0x00a4    +0x00a4    } | .ResidentSystemCachePage
        _m038 uint32_t resident_paged_pool_page;        //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .ResidentPagedPoolPage
        _m039 uint32_t resident_system_driver_page;     //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .ResidentSystemDriverPage
        _m040 uint32_t cc_fast_read_no_wait;            //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .CcFastReadNoWait
        _m041 uint32_t cc_fast_read_wait;               //{ +0x00b4    +0x00b4    +0x00b4    +0x00b4    } | .CcFastReadWait
        _m042 uint32_t cc_fast_read_resource_miss;      //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .CcFastReadResourceMiss
        _m043 uint32_t cc_fast_read_not_possible;       //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .CcFastReadNotPossible
        _m044 uint32_t cc_fast_mdl_read_no_wait;        //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .CcFastMdlReadNoWait
        _m045 uint32_t cc_fast_mdl_read_wait;           //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .CcFastMdlReadWait
        _m046 uint32_t cc_fast_mdl_read_resource_miss;  //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .CcFastMdlReadResourceMiss
        _m047 uint32_t cc_fast_mdl_read_not_possible;   //{ +0x00cc    +0x00cc    +0x00cc    +0x00cc    } | .CcFastMdlReadNotPossible
        _m048 uint32_t cc_map_data_no_wait;             //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .CcMapDataNoWait
        _m049 uint32_t cc_map_data_wait;                //{ +0x00d4    +0x00d4    +0x00d4    +0x00d4    } | .CcMapDataWait
        _m050 uint32_t cc_map_data_no_wait_miss;        //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .CcMapDataNoWaitMiss
        _m051 uint32_t cc_map_data_wait_miss;           //{ +0x00dc    +0x00dc    +0x00dc    +0x00dc    } | .CcMapDataWaitMiss
        _m052 uint32_t cc_pin_mapped_data_count;        //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .CcPinMappedDataCount
        _m053 uint32_t cc_pin_read_no_wait;             //{ +0x00e4    +0x00e4    +0x00e4    +0x00e4    } | .CcPinReadNoWait
        _m054 uint32_t cc_pin_read_wait;                //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .CcPinReadWait
        _m055 uint32_t cc_pin_read_no_wait_miss;        //{ +0x00ec    +0x00ec    +0x00ec    +0x00ec    } | .CcPinReadNoWaitMiss
        _m056 uint32_t cc_pin_read_wait_miss;           //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .CcPinReadWaitMiss
        _m057 uint32_t cc_copy_read_no_wait;            //{ +0x00f4    +0x00f4    +0x00f4    +0x00f4    } | .CcCopyReadNoWait
        _m058 uint32_t cc_copy_read_wait;               //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .CcCopyReadWait
        _m059 uint32_t cc_copy_read_no_wait_miss;       //{ +0x00fc    +0x00fc    +0x00fc    +0x00fc    } | .CcCopyReadNoWaitMiss
        _m060 uint32_t cc_copy_read_wait_miss;          //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .CcCopyReadWaitMiss
        _m061 uint32_t cc_mdl_read_no_wait;             //{ +0x0104    +0x0104    +0x0104    +0x0104    } | .CcMdlReadNoWait
        _m062 uint32_t cc_mdl_read_wait;                //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .CcMdlReadWait
        _m063 uint32_t cc_mdl_read_no_wait_miss;        //{ +0x010c    +0x010c    +0x010c    +0x010c    } | .CcMdlReadNoWaitMiss
        _m064 uint32_t cc_mdl_read_wait_miss;           //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .CcMdlReadWaitMiss
        _m065 uint32_t cc_read_ahead_ios;               //{ +0x0114    +0x0114    +0x0114    +0x0114    } | .CcReadAheadIos
        _m066 uint32_t cc_lazy_write_ios;               //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .CcLazyWriteIos
        _m067 uint32_t cc_lazy_write_pages;             //{ +0x011c    +0x011c    +0x011c    +0x011c    } | .CcLazyWritePages
        _m068 uint32_t cc_data_flushes;                 //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .CcDataFlushes
        _m069 uint32_t cc_data_pages;                   //{ +0x0124    +0x0124    +0x0124    +0x0124    } | .CcDataPages
        _m070 uint32_t context_switches;                //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .ContextSwitches
        _m071 uint32_t first_level_tb_fills;            //{ +0x012c    +0x012c    +0x012c    +0x012c    } | .FirstLevelTbFills
        _m072 uint32_t second_level_tb_fills;           //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .SecondLevelTbFills
        _m073 uint32_t system_calls;                    //{ +0x0134    +0x0134    +0x0134    +0x0134    } | .SystemCalls
        _m074 uint64_t cc_total_dirty_pages;            //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .CcTotalDirtyPages
        _m075 uint64_t cc_dirty_page_threshold;         //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .CcDirtyPageThreshold
        _m076 int64_t  resident_available_pages;        //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .ResidentAvailablePages
        _m077 uint64_t shared_committed_pages;          //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .SharedCommittedPages
                                                      
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PERFORMANCE_INFORMATION.$", 0x158, true, 0x8d9e5fa51d5099db );                               
        SDK_FIXED_SIZE( system_performance_information_t, 0x158 );                               
    };                                                
};
#include "magic/system_performance_information_t.end.hpp"
SDK_VERIFY( struct win::system_performance_information_t, 0x158 );
