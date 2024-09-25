#pragma once
#include <sdkgen/support_library.hpp>
#include "flags_t.hpp"
#include "group_affinity_t.hpp"
#include "kqos_grouping_sets_t.hpp"
#include "khetero_processor_set_t.hpp"

#include "magic/knode_t.start.hpp"
namespace nt
{
    struct kscheduler_subnode_t;

    // [struct _KNODE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct knode_t                                                                        
    {                                                                                     
        struct u0_flags_t                                                                 
        {                                                                                 
            // Windows 11                                                                 
            //                                                                            
            _m04 uint1_t processor_only;                                                    //{ +0x0000@0  } | .ProcessorOnly
            _m05 uint1_t groups_assigned;                                                   //{ +0x0000@1  } | .GroupsAssigned
            _m06 uint1_t measurable_distance;                                               //{ +0x0000@2  } | .MeasurableDistance
                                                                                          
            SDK_MAGIC_PROPERTIES( "_KNODE.Flags.$", 0x0, false, 0xdfb3443bb5e42632 );                                               
            SDK_FIXED_SIZE( u0_flags_t, 0x1 );                                               
        };                                                                                
                                                                                          
        using hetero_sets_t = sdk::array<struct nt::khetero_processor_set_t, 5>;                           
                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                                
        _m000 uint16_t                                         node_number;                 //{ +0x0092    +0x0092    +0x0000    +0x0092    } | .NodeNumber
        _m001 uint16_t                                         primary_node_number;         //{ +0x0094    +0x0094    +0x0002    +0x0094    } | .PrimaryNodeNumber
        _m002 uint32_t                                         proximity_id;                //{ +0x00a0    +0x00a8    +0x0004    +0x00a8    } | .ProximityId
        _m003 varuint_t                                        maximum_processors;          //{ +0x00ac    +0x00b4    +0x0008    +0x00b4    } | .MaximumProcessors
        _m007 sdk::variant<struct nt::flags_t, u0_flags_t>     flags;                       //{ +0x00ad    +0x00b5    +0x000a    +0x00b5    } | .Flags
                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                           
        //                                                                                
        _m008 uint64_t                                         idle_non_parked_cpu_set;     //{ +0x0000    +0x0000    +0x0000    } | .IdleNonParkedCpuSet
        _m009 uint64_t                                         idle_smt_set;                //{ +0x0008    +0x0008    +0x0008    } | .IdleSmtSet
        _m010 uint64_t                                         idle_cpu_set;                //{ +0x0010    +0x0018    +0x0018    } | .IdleCpuSet
        _m011 uint64_t                                         deep_idle_set;               //{ +0x0040    +0x0040    +0x0040    } | .DeepIdleSet
        _m012 uint64_t                                         idle_constrained_set;        //{ +0x0048    +0x0048    +0x0048    } | .IdleConstrainedSet
        _m013 uint64_t                                         non_parked_set;              //{ +0x0050    +0x0050    +0x0050    } | .NonParkedSet
        _m014 int32_t                                          park_lock;                   //{ +0x0058    +0x0068    +0x0068    } | .ParkLock
        _m015 uint32_t                                         sibling_mask;                //{ +0x0080    +0x0080    +0x0080    } | .SiblingMask
        _m016 struct nt::group_affinity_t                      affinity;                    //{ +0x0088    +0x0088    +0x0088    } | .Affinity
        _m017 sdk::array<uint8_t, 10>                          affinity_fill;               //{ +0x0088    +0x0088    +0x0088    } | .AffinityFill
        _m018 uint32_t                                         lowest;                      //{ +0x00a4    +0x00ac    +0x00ac    } | .Lowest
        _m019 uint32_t                                         highest;                     //{ +0x00a8    +0x00b0    +0x00b0    } | .Highest
        _m020 hetero_sets_t                                    hetero_sets;                 //{ +0x00b0    +0x00b8    +0x00b8    } | .HeteroSets
                                                                                          
        // Windows 10 v2004, Windows 10 v20H2                                             
        //                                                                                
        _m021 uint64_t                                         non_paired_smt_set;          //{ +0x0010    +0x0010    } | .NonPairedSmtSet
        _m022 uint64_t                                         soft_parked_set;             //{ +0x0058    +0x0058    } | .SoftParkedSet
        _m023 uint64_t                                         non_isr_targeted_set;        //{ +0x0060    +0x0060    } | .NonIsrTargetedSet
        _m024 uint16_t                                         thread_seed;                 //{ +0x006c    +0x006c    } | .ThreadSeed
        _m025 uint16_t                                         process_seed;                //{ +0x006e    +0x006e    } | .ProcessSeed
        _m026 uint64_t                                         shared_ready_queue_mask;     //{ +0x0098    +0x0098    } | .SharedReadyQueueMask
        _m027 uint64_t                                         stride_mask;                 //{ +0x00a0    +0x00a0    } | .StrideMask
        _m028 sdk::array<uint64_t, 5>                          ppm_configured_qos_sets;     //{ +0x0130    +0x0130    } | .PpmConfiguredQosSets
        _m029 union nt::kqos_grouping_sets_t                   qos_grouping_sets;           //{ +0x0160    +0x0160    } | .QosGroupingSets
        _m030 uint64_t                                         qos_preemptible_set;         //{ +0x0170    +0x0170    } | .QosPreemptibleSet
        _m031 uint64_t                                         llc_leaders;                 //{ +0x0178    +0x0178    } | .LLCLeaders
                                                                                          
        // Windows 10 v1607                                                               
        //                                                                                
        _m032 uint32_t                                         seed;                        //{ +0x005c    } | .Seed
        _m033 uint8_t                                          stride;                      //{ +0x0096    } | .Stride
        _m034 uint64_t                                         shared_ready_queue_leaders;  //{ +0x0098    } | .SharedReadyQueueLeaders
                                                                                          
        // Windows 11                                                                     
        //                                                                                
        _m035 uint8_t                                          group_seed;                  //{ +0x000b    } | .GroupSeed
        _m036 uint8_t                                          primary_group;               //{ +0x000c    } | .PrimaryGroup
        _m037 uint32_t                                         active_groups;               //{ +0x0010    } | .ActiveGroups
        _m038 sdk::array<struct nt::kscheduler_subnode_t*, 32> scheduler_sub_nodes;         //{ +0x0018    } | .SchedulerSubNodes
        _m039 sdk::array<uint32_t, 5>                          active_topology_elements;    //{ +0x0118    } | .ActiveTopologyElements
                                                                                          
        SDK_MAGIC_PROPERTIES( "_KNODE.$", 0x180, true, 0x5643b97c9ff8600 );                           
        SDK_DYNAMIC_SIZE( knode_t );                                                      
    };                                                                                    
};
#include "magic/knode_t.end.hpp"
SDK_VERIFY( struct nt::knode_t::u0_flags_t, 0x1 );
