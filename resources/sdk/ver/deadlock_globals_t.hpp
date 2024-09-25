#pragma once
#include <sdkgen/support_library.hpp>
#include "../verf/address_range_t.hpp"
#include "../nt/kernel_stack_limits_t.hpp"

#include "magic/deadlock_globals_t.start.hpp"
namespace ver
{
    struct deadlock_node_t;

    // [struct _VI_DEADLOCK_GLOBALS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct deadlock_globals_t                                                             
    {                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                                
        _m000 int64_t                                        time_acquire;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TimeAcquire
        _m001 int64_t                                        time_release;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TimeRelease
        _m002 nt::list_entry_t*                              resource_database;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ResourceDatabase
        _m003 uint64_t                                       resource_database_count;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ResourceDatabaseCount
        _m004 sdk::array<struct verf::address_range_t, 1023> resource_address_range;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ResourceAddressRange
        _m005 nt::list_entry_t*                              thread_database;               //{ +0x4010    +0x4010    +0x4010    +0x4010    } | .ThreadDatabase
        _m006 uint64_t                                       thread_database_count;         //{ +0x4018    +0x4018    +0x4018    +0x4018    } | .ThreadDatabaseCount
        _m007 sdk::array<struct verf::address_range_t, 1023> thread_address_range;          //{ +0x4020    +0x4020    +0x4020    +0x4020    } | .ThreadAddressRange
        _m008 volatile uint32_t                              allocation_failures;           //{ +0x8010    +0x8010    +0x8010    +0x8010    } | .AllocationFailures
        _m009 uint32_t                                       nodes_trimmed_based_on_age;    //{ +0x8014    +0x8014    +0x8014    +0x8014    } | .NodesTrimmedBasedOnAge
        _m010 uint32_t                                       nodes_trimmed_based_on_count;  //{ +0x8018    +0x8018    +0x8018    +0x8018    } | .NodesTrimmedBasedOnCount
        _m011 uint32_t                                       nodes_searched;                //{ +0x801c    +0x801c    +0x801c    +0x801c    } | .NodesSearched
        _m012 uint32_t                                       max_nodes_searched;            //{ +0x8020    +0x8020    +0x8020    +0x8020    } | .MaxNodesSearched
        _m013 uint32_t                                       sequence_number;               //{ +0x8024    +0x8024    +0x8024    +0x8024    } | .SequenceNumber
        _m014 uint32_t                                       recursion_depth_limit;         //{ +0x8028    +0x8028    +0x8028    +0x8028    } | .RecursionDepthLimit
        _m015 uint32_t                                       searched_nodes_limit;          //{ +0x802c    +0x802c    +0x802c    +0x802c    } | .SearchedNodesLimit
        _m016 uint32_t                                       depth_limit_hits;              //{ +0x8030    +0x8030    +0x8030    +0x8030    } | .DepthLimitHits
        _m017 uint32_t                                       search_limit_hits;             //{ +0x8034    +0x8034    +0x8034    +0x8034    } | .SearchLimitHits
        _m018 uint32_t                                       stack_limit_hits;              //{ +0x8038    +0x8038    +0x8038    +0x8038    } | .StackLimitHits
        _m019 uint32_t                                       abc_acb_skipped;               //{ +0x803c    +0x803c    +0x803c    +0x803c    } | .ABC_ACB_Skipped
        _m020 uint32_t                                       out_of_order_releases;         //{ +0x8040    +0x8040    +0x8040    +0x8040    } | .OutOfOrderReleases
        _m021 uint32_t                                       nodes_released_out_of_order;   //{ +0x8044    +0x8044    +0x8044    +0x8044    } | .NodesReleasedOutOfOrder
        _m022 uint32_t                                       total_releases;                //{ +0x8048    +0x8048    +0x8048    +0x8048    } | .TotalReleases
        _m023 uint32_t                                       root_nodes_deleted;            //{ +0x804c    +0x804c    +0x804c    +0x804c    } | .RootNodesDeleted
        _m024 uint32_t                                       forget_history_counter;        //{ +0x8050    +0x8050    +0x8050    +0x8050    } | .ForgetHistoryCounter
        _m025 void*                                          instigator;                    //{ +0x8058    +0x8058    +0x8058    +0x8058    } | .Instigator
        _m026 uint32_t                                       number_of_participants;        //{ +0x8060    +0x8060    +0x8060    +0x8060    } | .NumberOfParticipants
        _m027 sdk::array<struct ver::deadlock_node_t*, 32>   participant;                   //{ +0x8068    +0x8068    +0x8068    +0x8068    } | .Participant
        _m028 int32_t                                        children_count_watermark;      //{ +0x8168    +0x8168    +0x8168    +0x8168    } | .ChildrenCountWatermark
        _m029 enum nt::kernel_stack_limits_t                 stack_type;                    //{ +0x816c    +0x816c    +0x816c    +0x816c    } | .StackType
        _m030 uint64_t                                       stack_low_limit;               //{ +0x8170    +0x8170    +0x8170    +0x8170    } | .StackLowLimit
        _m031 uint64_t                                       stack_high_limit;              //{ +0x8178    +0x8178    +0x8178    +0x8178    } | .StackHighLimit
                                                                                          
        SDK_MAGIC_PROPERTIES( "_VI_DEADLOCK_GLOBALS.$", 0x8180, true, 0x61c3ed2f3149ab94 );                             
        SDK_FIXED_SIZE( deadlock_globals_t, 0x8180 );                                     
    };                                                                                    
};
#include "magic/deadlock_globals_t.end.hpp"
SDK_VERIFY( struct ver::deadlock_globals_t, 0x8180 );
