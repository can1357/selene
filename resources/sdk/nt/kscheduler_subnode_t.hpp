#pragma once
#include <sdkgen/support_library.hpp>
#include "flags_t.hpp"
#include "group_affinity_t.hpp"
#include "kqos_grouping_sets_t.hpp"

#include "magic/kscheduler_subnode_t.start.hpp"
namespace nt
{
    struct khetero_processor_set_t;

    // [struct _KSCHEDULER_SUBNODE]
    // => Windows 11
    //
    struct kscheduler_subnode_t                                           
    {                                                                     
        // Windows 11                                                     
        //                                                                
        _m000 uint64_t                            sub_node_lock;            //{ +0x0000    } | .SubNodeLock
        _m001 uint64_t                            idle_non_parked_cpu_set;  //{ +0x0008    } | .IdleNonParkedCpuSet
        _m002 uint64_t                            idle_cpu_set;             //{ +0x0010    } | .IdleCpuSet
        _m003 uint64_t                            idle_smt_set;             //{ +0x0018    } | .IdleSmtSet
        _m004 uint64_t                            idle_module_set;          //{ +0x0020    } | .IdleModuleSet
        _m005 sdk::array<uint64_t, 2>             idle_isolation_unit_set;  //{ +0x0010    } | .IdleIsolationUnitSet
        _m006 uint64_t                            non_paired_smt_set;       //{ +0x0028    } | .NonPairedSmtSet
        _m007 uint64_t                            deep_idle_set;            //{ +0x0040    } | .DeepIdleSet
        _m008 uint64_t                            idle_constrained_set;     //{ +0x0048    } | .IdleConstrainedSet
        _m009 uint64_t                            non_parked_set;           //{ +0x0050    } | .NonParkedSet
        _m010 uint64_t                            park_request_set;         //{ +0x0058    } | .ParkRequestSet
        _m011 uint64_t                            soft_park_request_set;    //{ +0x0060    } | .SoftParkRequestSet
        _m012 uint64_t                            non_isr_targeted_set;     //{ +0x0068    } | .NonIsrTargetedSet
        _m013 int32_t                             park_lock;                //{ +0x0070    } | .ParkLock
        _m014 uint8_t                             process_seed;             //{ +0x0074    } | .ProcessSeed
        _m015 struct nt::group_affinity_t         affinity;                 //{ +0x0080    } | .Affinity
        _m016 sdk::array<uint8_t, 10>             affinity_fill;            //{ +0x0080    } | .AffinityFill
        _m017 uint16_t                            parent_node_number;       //{ +0x008a    } | .ParentNodeNumber
        _m018 uint16_t                            sub_node_number;          //{ +0x008c    } | .SubNodeNumber
        _m019 uint64_t                            sibling_mask;             //{ +0x0090    } | .SiblingMask
        _m020 uint64_t                            shared_ready_queue_mask;  //{ +0x0098    } | .SharedReadyQueueMask
        _m021 uint64_t                            stride_mask;              //{ +0x00a0    } | .StrideMask
        _m022 uint64_t                            llc_leaders;              //{ +0x00a8    } | .LLCLeaders
        _m023 uint32_t                            lowest;                   //{ +0x00b0    } | .Lowest
        _m024 uint32_t                            highest;                  //{ +0x00b4    } | .Highest
        _m025 struct nt::flags_t                  flags;                    //{ +0x00b8    } | .Flags
        _m026 uint8_t                             workload_classes;         //{ +0x00b9    } | .WorkloadClasses
        _m027 struct nt::khetero_processor_set_t* hetero_sets;              //{ +0x00c0    } | .HeteroSets
        _m028 sdk::array<uint64_t, 7>             ppm_configured_qos_sets;  //{ +0x00c8    } | .PpmConfiguredQosSets
        _m029 union nt::kqos_grouping_sets_t      qos_grouping_sets;        //{ +0x0100    } | .QosGroupingSets
        _m030 sdk::array<uint8_t, 64>             soft_park_ranks;          //{ +0x0140    } | .SoftParkRanks
                                                                          
        SDK_MAGIC_PROPERTIES( "_KSCHEDULER_SUBNODE.$", 0x0, false, 0xe7159fca66987684 );                        
        SDK_FIXED_SIZE( kscheduler_subnode_t, 0x180 );                        
    };                                                                    
};
#include "magic/kscheduler_subnode_t.end.hpp"
SDK_VERIFY( struct nt::kscheduler_subnode_t, 0x180 );
