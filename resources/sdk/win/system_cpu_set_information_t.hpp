#pragma once
#include <sdkgen/support_library.hpp>
#include "cpu_set_information_type_t.hpp"

#include "magic/system_cpu_set_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_CPU_SET_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct system_cpu_set_information_t                       
    {                                                         
        struct u0_cpu_set_t                                   
        {                                                     
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
            //                                                
            _m02 uint32_t id;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Id
            _m03 uint16_t group;                                //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Group
            _m04 uint8_t  logical_processor_index;              //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .LogicalProcessorIndex
            _m05 uint8_t  core_index;                           //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .CoreIndex
            _m06 uint8_t  last_level_cache_index;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .LastLevelCacheIndex
            _m07 uint8_t  numa_node_index;                      //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .NumaNodeIndex
            _m08 uint8_t  efficiency_class;                     //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .EfficiencyClass
            _m09 uint8_t  all_flags;                            //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .AllFlags
            _m10 uint1_t  parked;                               //{ +0x000b@0  +0x000b@0  +0x000b@0  +0x000b@0  +0x000b@0  } | .Parked
            _m11 uint1_t  allocated;                            //{ +0x000b@1  +0x000b@1  +0x000b@1  +0x000b@1  +0x000b@1  } | .Allocated
            _m12 uint1_t  allocated_to_target_process;          //{ +0x000b@2  +0x000b@2  +0x000b@2  +0x000b@2  +0x000b@2  } | .AllocatedToTargetProcess
            _m13 uint1_t  real_time;                            //{ +0x000b@3  +0x000b@3  +0x000b@3  +0x000b@3  +0x000b@3  } | .RealTime
            _m14 uint64_t allocation_tag;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .AllocationTag
                                                              
            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
            //                                                
            _m15 uint8_t  scheduling_class;                     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SchedulingClass
                                                              
            SDK_NONVOL_PROPERTIES( "_SYSTEM_CPU_SET_INFORMATION.CpuSet.$", 0x18, true, 0xa25d895e9c84dab9 );                                    
            SDK_FIXED_SIZE( u0_cpu_set_t, 0x18 );                                    
        };                                                    
                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                                    
        _m00 uint32_t                                 size;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 enum win::cpu_set_information_type_t     type;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m16 u0_cpu_set_t                             cpu_set;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CpuSet
                                                              
        SDK_NONVOL_PROPERTIES( "_SYSTEM_CPU_SET_INFORMATION.$", 0x20, true, 0x227d8b5667e75129 );        
        SDK_FIXED_SIZE( system_cpu_set_information_t, 0x20 );        
    };                                                        
};
#include "magic/system_cpu_set_information_t.end.hpp"
SDK_VERIFY( struct win::system_cpu_set_information_t::u0_cpu_set_t, 0x18 );
SDK_VERIFY( struct win::system_cpu_set_information_t, 0x20 );
