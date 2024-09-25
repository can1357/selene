#pragma once
#include <sdkgen/support_library.hpp>
#include "memory_segment_group_t.hpp"

#include "magic/queryvideomemoryinfo_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_QUERYVIDEOMEMORYINFO]
    // => WDK 10 (NV)
    //
    struct queryvideomemoryinfo_t                                            
    {                                                                        
        // WDK 10                                                            
        //                                                                   
        _m00 void*                                 process_handle;             //{ +0x0000    } | .ProcessHandle
        _m01 uint32_t                              adapter_handle;             //{ +0x0008    } | .AdapterHandle
        _m02 enum d3dk::mt::memory_segment_group_t memory_segment_group;       //{ +0x000c    } | .MemorySegmentGroup
        _m03 uint64_t                              budget;                     //{ +0x0010    } | .Budget
        _m04 uint64_t                              current_usage;              //{ +0x0018    } | .CurrentUsage
        _m05 uint64_t                              current_reservation;        //{ +0x0020    } | .CurrentReservation
        _m06 uint64_t                              available_for_reservation;  //{ +0x0028    } | .AvailableForReservation
        _m07 uint32_t                              physical_adapter_index;     //{ +0x0030    } | .PhysicalAdapterIndex
                                                                             
        SDK_NONVOL_PROPERTIES( "_D3DKMT_QUERYVIDEOMEMORYINFO.$", 0x0, false, 0xe203f01014c1dfd2 );                          
        SDK_FIXED_SIZE( queryvideomemoryinfo_t, 0x38 );                          
    };                                                                       
};
#include "magic/queryvideomemoryinfo_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::queryvideomemoryinfo_t, 0x38 );
