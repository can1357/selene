#pragma once
#include <sdkgen/support_library.hpp>
#include "memory_segment_group_t.hpp"

#include "magic/changevideommemoryreservation_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION]
    // => WDK 10 (NV)
    //
    struct changevideommemoryreservation_t                                
    {                                                                     
        // WDK 10                                                         
        //                                                                
        _m00 void*                                 h_process;               //{ +0x0000    } | .hProcess
        _m01 uint32_t                              h_adapter;               //{ +0x0008    } | .hAdapter
        _m02 enum d3dk::mt::memory_segment_group_t memory_segment_group;    //{ +0x000c    } | .MemorySegmentGroup
        _m03 uint64_t                              reservation;             //{ +0x0010    } | .Reservation
        _m04 uint32_t                              physical_adapter_index;  //{ +0x0018    } | .PhysicalAdapterIndex
                                                                          
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION.$", 0x0, false, 0x45a25d7503bfbefc );                       
        SDK_FIXED_SIZE( changevideommemoryreservation_t, 0x20 );                       
    };                                                                    
};
#include "magic/changevideommemoryreservation_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::changevideommemoryreservation_t, 0x20 );
