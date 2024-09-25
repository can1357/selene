#pragma once
#include <sdkgen/support_library.hpp>
#include "page_colors_t.hpp"
#include "../rtl/bitmap_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "../nt/mmpfnlist_t.hpp"
#include "../rtl/bitmap_ex_t.hpp"
#include "free_large_pages_t.hpp"
#include "standby_lookaside_t.hpp"
#include "write_calibration_t.hpp"
#include "../nt/group_affinity_t.hpp"
#include "../nt/mmpfnlist_short_t.hpp"
#include "slab_allocator_context_t.hpp"
#include "../nt/cached_kstack_list_t.hpp"
#include "rebuild_large_page_timer_t.hpp"

namespace nt { struct physical_memory_descriptor_t; }

#include "magic/node_information_t.start.hpp"
namespace mi
{
    struct partition_t;
    struct large_page_lists_changing_t;

    // [struct _MI_NODE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct node_information_t                                                                       
    {                                                                                               
        struct u0_flags_t                                                                           
        {                                                                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                        
            //                                                                                      
            _m08 uint1_t channels_hot_cold;                                                           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ChannelsHotCold
                                                                                                    
            SDK_MAGIC_PROPERTIES( "_MI_NODE_INFORMATION.Flags.$", 0x4, true, 0x51a8d75b5228dc90 );                                                        
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                                        
        };                                                                                          
                                                                                                    
        using standby_page_list_t =                  sdk::variant<sdk::array<sdk::array<struct nt::mmpfnlist_short_t, 8>, 4>, sdk::array<sdk::array<struct nt::mmpfnlist_t, 8>, 4>>;                                      
        using node_lock_t =                          sdk::variant<struct ex::push_lock_t, volatile int32_t>;                                      
        using free_page_list_heads_bitmap_t =        sdk::variant<sdk::array<struct rtl::bitmap_t, 2>, sdk::array<sdk::array<struct rtl::bitmap_ex_t, 2>, 3>>;                                      
        using free_page_list_heads_bitmap_buffer_t = sdk::variant<sdk::array<uint32_t, 16>, sdk::array<uint64_t, 24>>;                                      
        using huge_io_range_free_count_t =           sdk::variant<sdk::array<uint64_t, 2>, sdk::array<sdk::array<uint64_t, 4>, 2>>;                                      
        using large_pages_t =                        sdk::array<sdk::array<sdk::array<sdk::array<nt::list_entry_t, 4>, 2>, 2>, 3>;                                      
        using large_pages_count_t =                  sdk::array<sdk::array<sdk::array<sdk::array<uint64_t, 4>, 2>, 2>, 3>;                                      
        using standby_page_cache_per_channel_t =     sdk::array<sdk::array<struct mi::standby_lookaside_t, 8>, 4>;                                      
        using slab_contexts_t =                      sdk::array<struct mi::slab_allocator_context_t, 7>;                                      
                                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                          
        _m000 struct mi::rebuild_large_page_timer_t           large_page_rebuild_timer;               //{ +0x04b0    +0x0c90    +0x0c90    +0x0c90    } | .LargePageRebuildTimer
        _m001 standby_page_list_t                             standby_page_list;                      //{ +0x04d8    +0x0cb8    +0x0cb8    +0x0cb8    } | .StandbyPageList
        _m002 sdk::array<volatile uint64_t, 2>                free_count;                             //{ +0x07d8    +0x1020    +0x58e0    +0x1020    } | .FreeCount
        _m003 sdk::array<uint64_t, 4>                         total_pages;                            //{ +0x07e8    +0x1030    +0x5910    +0x1030    } | .TotalPages
        _m004 uint64_t                                        total_pages_entire_node;                //{ +0x0808    +0x1050    +0x5930    +0x1050    } | .TotalPagesEntireNode
        _m005 uint32_t                                        mm_shifted_color;                       //{ +0x0810    +0x1070    +0x5990    +0x1070    } | .MmShiftedColor
        _m006 uint32_t                                        color;                                  //{ +0x0814    +0x1074    +0x5994    +0x1074    } | .Color
        _m007 sdk::array<sdk::array<volatile uint64_t, 2>, 4> channel_free_count;                     //{ +0x0818    +0x1078    +0x5998    +0x1078    } | .ChannelFreeCount
        _m009 u0_flags_t                                      flags;                                  //{ +0x0858    +0x10b8    +0x59d8    +0x10b8    } | .Flags
        _m010 node_lock_t                                     node_lock;                              //{ +0x0860    +0x10c8    +0x59e8    +0x10c8    } | .NodeLock
        _m011 uint64_t                                        zero_thread_huge_map_lock;              //{ +0x0868    +0x10d0    +0x59f0    +0x10d0    } | .ZeroThreadHugeMapLock
        _m012 uint8_t                                         channel_status;                         //{ +0x0870    +0x10d8    +0x59f8    +0x10d8    } | .ChannelStatus
        _m013 sdk::array<uint8_t, 4>                          channel_ordering;                       //{ +0x0871    +0x10d9    +0x59f9    +0x10d9    } | .ChannelOrdering
        _m014 sdk::array<uint8_t, 4>                          locked_channel_ordering;                //{ +0x0875    +0x10dd    +0x59fd    +0x10dd    } | .LockedChannelOrdering
        _m015 sdk::array<uint8_t, 4>                          power_attribute;                        //{ +0x0879    +0x10e1    +0x5a01    +0x10e1    } | .PowerAttribute
        _m016 varint_t                                        large_page_lock;                        //{ +0x0880    +0x10e8    +0x5a40    +0x10e8    } | .LargePageLock
                                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                                          
        _m017 sdk::array<struct mi::free_large_pages_t, 3>    free_large_pages;                       //{ +0x0000    +0x0000    +0x0000    } | .FreeLargePages
        _m018 free_page_list_heads_bitmap_t                   free_page_list_heads_bitmap;            //{ +0x0fc0    +0x57c0    +0x0fc0    } | .FreePageListHeadsBitmap
        _m019 free_page_list_heads_bitmap_buffer_t            free_page_list_heads_bitmap_buffer;     //{ +0x0fe0    +0x5820    +0x0fe0    } | .FreePageListHeadsBitmapBuffer
        _m020 uint32_t                                        current_huge_range_color;               //{ +0x1058    +0x5940    +0x1058    } | .CurrentHugeRangeColor
        _m021 huge_io_range_free_count_t                      huge_io_range_free_count;               //{ +0x1060    +0x5950    +0x1060    } | .HugeIoRangeFreeCount
        _m022 uint32_t                                        large_list_move_in_progress;            //{ +0x10bc    +0x59dc    +0x10bc    } | .LargeListMoveInProgress
        _m023 struct mi::large_page_lists_changing_t*         large_list_waiters;                     //{ +0x10c0    +0x59e0    +0x10c0    } | .LargeListWaiters
        _m024 struct mi::page_colors_t                        page_color_table;                       //{ +0x10f0    +0x5a50    +0x10f0    } | .PageColorTable
        _m025 uint64_t                                        number_of_pages_going_bad;              //{ +0x1100    +0x5a60    +0x1100    } | .NumberOfPagesGoingBad
        _m026 void*                                           boot_zero_context;                      //{ +0x1128    +0x5a68    +0x1128    } | .BootZeroContext
        _m027 void*                                           zeroing_context;                        //{ +0x1150    +0x5a70    +0x1150    } | .ZeroingContext
        _m028 uint8_t                                         background_zeroing_active;              //{ +0x118a    +0x5a88    +0x118a    } | .BackgroundZeroingActive
        _m029 struct nt::physical_memory_descriptor_t*        zeroing_physical_memory_block;          //{ +0x1190    +0x5a90    +0x1190    } | .ZeroingPhysicalMemoryBlock
                                                                                                    
        // Windows 10 v2004, Windows 10 v20H2                                                       
        //                                                                                          
        _m030 struct mi::write_calibration_t                  write_calibration;                      //{ +0x1108    +0x1108    } | .WriteCalibration
        _m031 void*                                           boot_zero_page_times_per_processor;     //{ +0x1130    +0x1130    } | .BootZeroPageTimesPerProcessor
        _m032 void*                                           zeroing_va_base;                        //{ +0x1138    +0x1138    } | .ZeroingVaBase
        _m033 uint64_t                                        total_bytes_to_zero;                    //{ +0x1140    +0x1140    } | .TotalBytesToZero
        _m034 uint64_t                                        per_processor_number_of_bytes_to_zero;  //{ +0x1148    +0x1148    } | .PerProcessorNumberOfBytesToZero
        _m035 volatile uint32_t                               zeroing_processor_count;                //{ +0x1158    +0x1158    } | .ZeroingProcessorCount
        _m036 volatile int32_t                                zero_hand;                              //{ +0x115c    +0x115c    } | .ZeroHand
        _m037 volatile int32_t                                finished_processors;                    //{ +0x1160    +0x1160    } | .FinishedProcessors
        _m038 uint64_t                                        cycles_to_zero_one_large_page;          //{ +0x1168    +0x1168    } | .CyclesToZeroOneLargePage
        _m039 uint64_t*                                       scaled_cycles_to_zero_one_large_page;   //{ +0x1170    +0x1170    } | .ScaledCyclesToZeroOneLargePage
        _m040 struct nt::group_affinity_t                     group_affinity;                         //{ +0x1178    +0x1178    } | .GroupAffinity
        _m041 uint16_t                                        processor_count;                        //{ +0x1188    +0x1188    } | .ProcessorCount
                                                                                                    
        // Windows 10 v1607                                                                         
        //                                                                                          
        _m042 sdk::array<sdk::array<uint64_t, 2>, 3>          large_page_free_count;                  //{ +0x0000    } | .LargePageFreeCount
        _m043 large_pages_t                                   large_pages;                            //{ +0x0030    } | .LargePages
        _m044 large_pages_count_t                             large_pages_count;                      //{ +0x0330    } | .LargePagesCount
                                                                                                    
        // Windows 11                                                                               
        //                                                                                          
        _m045 standby_page_cache_per_channel_t                standby_page_cache_per_channel;         //{ +0x17c0    } | .StandbyPageCachePerChannel
        _m046 sdk::array<volatile uint64_t, 4>                free_zero_count_by_attribute;           //{ +0x58f0    } | .FreeZeroCountByAttribute
        _m047 struct mi::partition_t*                         partition;                              //{ +0x5938    } | .Partition
        _m048 uint64_t                                        total_huge_io_pages;                    //{ +0x5948    } | .TotalHugeIoPages
        _m049 uint64_t                                        scrub_resume_page;                      //{ +0x5a48    } | .ScrubResumePage
        _m050 volatile int32_t                                zero_context_lock;                      //{ +0x5a78    } | .ZeroContextLock
        _m051 void*                                           zero_thread_conductor;                  //{ +0x5a80    } | .ZeroThreadConductor
        _m052 sdk::array<struct nt::cached_kstack_list_t, 3>  cached_kernel_stacks;                   //{ +0x5aa0    } | .CachedKernelStacks
        _m053 sdk::array<struct nt::cached_kstack_list_t, 3>  cached_kernel_shadow_stack_lists;       //{ +0x5b00    } | .CachedKernelShadowStackLists
        _m054 slab_contexts_t                                 slab_contexts;                          //{ +0x5b60    } | .SlabContexts
        _m055 struct mi::slab_allocator_context_t volatile*   free_page_slab_context_hint;            //{ +0x6298    } | .FreePageSlabContextHint
        _m056 uint64_t                                        mdl_slab_fragmention_last_demote_time;  //{ +0x62a0    } | .MdlSlabFragmentionLastDemoteTime
        _m057 struct nt::mmpfnlist_t                          enclave_page_list_head;                 //{ +0x62c0    } | .EnclavePageListHead
                                                                                                    
        SDK_MAGIC_PROPERTIES( "_MI_NODE_INFORMATION.$", 0x11c0, true, 0x716991c6c8cc44d3 );                                      
        SDK_DYNAMIC_SIZE( node_information_t );                                                     
    };                                                                                              
};
#include "magic/node_information_t.end.hpp"
SDK_VERIFY( struct mi::node_information_t::u0_flags_t, 0x4 );
