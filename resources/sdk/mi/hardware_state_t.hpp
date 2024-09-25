#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/avl_tree_t.hpp"
#include "zero_cost_counts_t.hpp"
#include "../hal/node_range_t.hpp"
#include "pfn_cache_attribute_t.hpp"

namespace hal { struct channel_memory_ranges_t; }

#include "magic/hardware_state_t.start.hpp"
namespace mi
{
    struct node_number_zero_based_t;
    struct system_node_information_t;
    struct system_node_nonpaged_pool_t;

    // [struct _MI_HARDWARE_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hardware_state_t                                                                              
    {                                                                                                    
        using node_graph_t =                sdk::variant<uint16_t*, struct mi::node_number_zero_based_t*>;                                              
        using optimal_zeroing_attribute_t = sdk::array<sdk::array<enum mi::pfn_cache_attribute_t, 4>, 4>;                                              
                                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
        //                                                                                               
        _m000 uint32_t                                     node_mask;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NodeMask
        _m001 uint8_t                                      node_shift;                                     //{ +0x0029    +0x000c    +0x000d    +0x000c    } | .NodeShift
        _m002 uint8_t                                      channel_shift;                                  //{ +0x0038    +0x000d    +0x000e    +0x000d    } | .ChannelShift
        _m003 node_graph_t                                 node_graph;                                     //{ +0x0008    +0x0018    +0x0018    +0x0018    } | .NodeGraph
        _m004 struct hal::node_range_t*                    numa_memory_ranges;                             //{ +0x0020    +0x0048    +0x0048    +0x0048    } | .NumaMemoryRanges
        _m005 struct hal::channel_memory_ranges_t*         channel_memory_ranges;                          //{ +0x0030    +0x0050    +0x0050    +0x0050    } | .ChannelMemoryRanges
        _m006 uint32_t                                     second_level_cache_size;                        //{ +0x003c    +0x0058    +0x0058    +0x0058    } | .SecondLevelCacheSize
        _m007 uint32_t                                     first_level_cache_size;                         //{ +0x0040    +0x005c    +0x005c    +0x005c    } | .FirstLevelCacheSize
        _m008 uint32_t                                     physical_address_bits;                          //{ +0x0044    +0x0060    +0x0060    +0x0060    } | .PhysicalAddressBits
        _m009 uint64_t                                     total_pages_allowed;                            //{ +0x0050    +0x0070    +0x0070    +0x0070    } | .TotalPagesAllowed
        _m010 uint32_t                                     secondary_color_mask;                           //{ +0x0058    +0x0078    +0x0078    +0x0078    } | .SecondaryColorMask
        _m011 uint32_t                                     secondary_colors;                               //{ +0x005c    +0x007c    +0x007c    +0x007c    } | .SecondaryColors
        _m012 uint32_t                                     flush_tb_for_attribute_change;                  //{ +0x0060    +0x0080    +0x0080    +0x0080    } | .FlushTbForAttributeChange
        _m013 uint32_t                                     flush_cache_for_attribute_change;               //{ +0x0064    +0x0084    +0x0084    +0x0084    } | .FlushCacheForAttributeChange
        _m014 uint32_t                                     flush_cache_for_page_attribute_change;          //{ +0x0068    +0x0088    +0x0088    +0x0088    } | .FlushCacheForPageAttributeChange
        _m015 uint32_t                                     cache_flush_promote_threshold;                  //{ +0x006c    +0x008c    +0x008c    +0x008c    } | .CacheFlushPromoteThreshold
        _m016 uint64_t                                     flush_tb_threshold;                             //{ +0x0070    +0x0110    +0x0110    +0x0110    } | .FlushTbThreshold
        _m017 uint8_t                                      attribute_change_requires_re_zero;              //{ +0x00b8    +0x0158    +0x0118    +0x0158    } | .AttributeChangeRequiresReZero
        _m018 uint64_t                                     vsm_kernel_page_count;                          //{ +0x00f8    +0x0180    +0x0128    +0x0180    } | .VsmKernelPageCount
                                                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
        //                                                                                               
        _m019 volatile uint32_t                            numa_hint_index;                                //{ +0x0004    +0x0004    +0x0004    } | .NumaHintIndex
        _m020 uint32_t                                     numa_last_range_index_inclusive;                //{ +0x0008    +0x0008    +0x0008    } | .NumaLastRangeIndexInclusive
        _m021 uint32_t                                     channel_hint_index;                             //{ +0x0010    +0x0010    +0x0010    } | .ChannelHintIndex
        _m022 uint32_t                                     channel_last_range_index_inclusive;             //{ +0x0014    +0x0014    +0x0014    } | .ChannelLastRangeIndexInclusive
        _m023 sdk::array<struct hal::node_range_t, 2>      temporary_numa_ranges;                          //{ +0x0028    +0x0028    +0x0028    } | .TemporaryNumaRanges
        _m024 uint8_t                                      processor_caches_flushed_on_power_loss;         //{ +0x0068    +0x0068    +0x0068    } | .ProcessorCachesFlushedOnPowerLoss
        _m025 uint64_t                                     invalid_pte_mask;                               //{ +0x00c0    +0x00c0    +0x00c0    } | .InvalidPteMask
        _m026 sdk::array<uint32_t, 3>                      large_page_colors;                              //{ +0x0100    +0x0100    +0x0100    } | .LargePageColors
                                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                              
        //                                                                                               
        _m027 struct mi::system_node_information_t*        system_node_information;                        //{ +0x0010    +0x0020    +0x0020    } | .SystemNodeInformation
        _m028 optimal_zeroing_attribute_t                  optimal_zeroing_attribute;                      //{ +0x0078    +0x0118    +0x0118    } | .OptimalZeroingAttribute
        _m029 sdk::array<struct mi::zero_cost_counts_t, 2> zero_cost_counts;                               //{ +0x00c0    +0x0160    +0x0160    } | .ZeroCostCounts
                                                                                                         
        // Windows 10 v1607, Windows 11                                                                  
        //                                                                                               
        _m030 uint64_t                                     highest_possible_physical_page;                 //{ +0x00e8    +0x0120    } | .HighestPossiblePhysicalPage
                                                                                                         
        // Windows 10 v2004, Windows 10 v20H2                                                            
        //                                                                                               
        _m031 uint32_t                                     logical_processors_per_core;                    //{ +0x0064    +0x0064    } | .LogicalProcessorsPerCore
        _m032 int64_t                                      performance_counter_frequency;                  //{ +0x0090    +0x0090    } | .PerformanceCounterFrequency
                                                                                                         
        // Windows 11                                                                                    
        //                                                                                               
        _m033 uint8_t                                      memory_node_with_no_processors_found;           //{ +0x000c    } | .MemoryNodeWithNoProcessorsFound
        _m034 uint8_t                                      access_bit_replacement_honored;                 //{ +0x000f    } | .AccessBitReplacementHonored
        _m035 struct mi::system_node_nonpaged_pool_t*      system_node_non_paged_pool;                     //{ +0x0020    } | .SystemNodeNonPagedPool
        _m036 uint32_t                                     pfn_database_page_bits;                         //{ +0x0064    } | .PfnDatabasePageBits
        _m037 uint8_t                                      page_table_reuse_requires_flush;                //{ +0x0069    } | .PageTableReuseRequiresFlush
        _m038 sdk::array<uint64_t, 512>                    huge_page_remove_tracker;                       //{ +0x0130    } | .HugePageRemoveTracker
        _m039 volatile uint64_t                            hot_add_sequence_number;                        //{ +0x1130    } | .HotAddSequenceNumber
        _m040 volatile uint64_t                            special_purpose_memory_type_id;                 //{ +0x1138    } | .SpecialPurposeMemoryTypeId
        _m041 uint32_t                                     special_purpose_memory_query_type_extra_space;  //{ +0x1140    } | .SpecialPurposeMemoryQueryTypeExtraSpace
                                                                                                         
        // Windows 10 v1607                                                                              
        //                                                                                               
        _m042 uint32_t                                     numa_last_range_index;                          //{ +0x0018    } | .NumaLastRangeIndex
        _m043 uint8_t                                      numa_table_captured;                            //{ +0x0028    } | .NumaTableCaptured
        _m044 uint8_t                                      all_main_memory_must_be_cached;                 //{ +0x0048    } | .AllMainMemoryMustBeCached
        _m045 uint64_t                                     primary_pfns;                                   //{ +0x00e0    } | .PrimaryPfns
        _m046 struct rtl::avl_tree_t                       enclave_regions;                                //{ +0x00f0    } | .EnclaveRegions
        _m047 sdk::array<uint8_t, 2>                       global_bit_polarity;                            //{ +0x0100    } | .GlobalBitPolarity
                                                                                                         
        SDK_MAGIC_PROPERTIES( "_MI_HARDWARE_STATE.$", 0x1c0, true, 0x6aeba0fde18a58dd );                                              
        SDK_DYNAMIC_SIZE( hardware_state_t );                                                            
    };                                                                                                   
};
#include "magic/hardware_state_t.end.hpp"
