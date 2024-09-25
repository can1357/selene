#pragma once
#include <sdkgen/support_library.hpp>
#include "mmsupport_flags_t.hpp"

#include "magic/mmsupport_instance_t.start.hpp"
namespace nt
{
    struct kgate_t;
    struct mmwsl_instance_t;

    // [struct _MMSUPPORT_INSTANCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmsupport_instance_t                                         
    {                                                                   
        using age_distribution_t = sdk::variant<sdk::array<uint64_t, 7>, sdk::array<volatile uint64_t, 8>>;                              
                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                              
        _m00 varuint_t                    next_page_color;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextPageColor
        _m01 volatile uint32_t            page_fault_count;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PageFaultCount
        _m02 uint64_t                     trimmed_page_count;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TrimmedPageCount
        _m03 struct nt::mmwsl_instance_t* vm_working_set_list;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .VmWorkingSetList
        _m04 nt::list_entry_t             working_set_expansion_links;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .WorkingSetExpansionLinks
        _m05 age_distribution_t           age_distribution;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .AgeDistribution
        _m06 struct nt::kgate_t*          exit_outswap_gate;              //{ +0x0060    +0x0068    +0x0068    +0x0068    } | .ExitOutswapGate
        _m07 uint64_t                     minimum_working_set_size;       //{ +0x0068    +0x0070    +0x0070    +0x0070    } | .MinimumWorkingSetSize
        _m08 volatile uint64_t            working_set_leaf_size;          //{ +0x0070    +0x0078    +0x0080    +0x0078    } | .WorkingSetLeafSize
        _m09 volatile uint64_t            working_set_leaf_private_size;  //{ +0x0078    +0x0080    +0x0088    +0x0080    } | .WorkingSetLeafPrivateSize
        _m10 volatile uint64_t            working_set_size;               //{ +0x0080    +0x0088    +0x0090    +0x0088    } | .WorkingSetSize
        _m11 volatile uint64_t            working_set_private_size;       //{ +0x0088    +0x0090    +0x0098    +0x0090    } | .WorkingSetPrivateSize
        _m12 uint64_t                     maximum_working_set_size;       //{ +0x0090    +0x0098    +0x0078    +0x0098    } | .MaximumWorkingSetSize
        _m13 uint64_t                     peak_working_set_size;          //{ +0x0098    +0x00a0    +0x00a0    +0x00a0    } | .PeakWorkingSetSize
        _m14 uint32_t                     hard_fault_count;               //{ +0x00a0    +0x00a8    +0x00a8    +0x00a8    } | .HardFaultCount
        _m15 uint16_t                     last_trim_stamp;                //{ +0x0002    +0x00ac    +0x00ac    +0x00ac    } | .LastTrimStamp
        _m16 uint16_t                     partition_id;                   //{ +0x00a4    +0x00ae    +0x00ae    +0x00ae    } | .PartitionId
        _m17 struct nt::mmsupport_flags_t flags;                          //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .Flags
                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                              
        _m18 uint64_t                     selfmap_lock;                   //{ +0x00b0    +0x00b0    +0x00b0    } | .SelfmapLock
                                                                        
        // Windows 10 v1607                                             
        //                                                              
        _m19 void*                        instanced_working_set;          //{ +0x00a8    } | .InstancedWorkingSet
                                                                        
        // Windows 11                                                   
        //                                                              
        _m20 int32_t                      interlocked_flags;              //{ +0x00bc    } | .InterlockedFlags
                                                                        
        SDK_MAGIC_PROPERTIES( "_MMSUPPORT_INSTANCE.$", 0xc0, true, 0xb7dea74d69c8b4d3 );                              
        SDK_FIXED_SIZE( mmsupport_instance_t, 0xc0 );                              
    };                                                                  
};
#include "magic/mmsupport_instance_t.end.hpp"
SDK_VERIFY( struct nt::mmsupport_instance_t, 0xc0 );
