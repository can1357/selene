#pragma once
#include <sdkgen/support_library.hpp>
#include "segmentsizeinfo_t.hpp"

#include "magic/segmentgroupsizeinfo_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SEGMENTGROUPSIZEINFO]
    // => WDK 10 (NV)
    //
    struct segmentgroupsizeinfo_t                                      
    {                                                                  
        // WDK 10                                                      
        //                                                             
        _m00 uint32_t                           physical_adapter_index;  //{ +0x0000    } | .PhysicalAdapterIndex
        _m01 struct d3dk::mt::segmentsizeinfo_t legacy_info;             //{ +0x0008    } | .LegacyInfo
        _m02 uint64_t                           local_memory;            //{ +0x0020    } | .LocalMemory
        _m03 uint64_t                           non_local_memory;        //{ +0x0028    } | .NonLocalMemory
        _m04 uint64_t                           non_budget_memory;       //{ +0x0030    } | .NonBudgetMemory
                                                                       
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SEGMENTGROUPSIZEINFO.$", 0x0, false, 0x95062b31965bd62f );                       
        SDK_FIXED_SIZE( segmentgroupsizeinfo_t, 0x38 );                       
    };                                                                 
};
#include "magic/segmentgroupsizeinfo_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::segmentgroupsizeinfo_t, 0x38 );
