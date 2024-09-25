#pragma once
#include <sdkgen/support_library.hpp>
#include "memory_segment_group_t.hpp"

#include "magic/segment_caps_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SEGMENT_CAPS]
    // => WDK 10 (NV)
    //
    struct segment_caps_t                                             
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 uint64_t                              size;                //{ +0x0000    } | .Size
        _m01 uint32_t                              page_size;           //{ +0x0008    } | .PageSize
        _m02 uint32_t                              segment_id;          //{ +0x000c    } | .SegmentId
        _m03 uint8_t                               b_aperture;          //{ +0x0010    } | .bAperture
        _m04 uint8_t                               b_reserved_sys_mem;  //{ +0x0011    } | .bReservedSysMem
        _m05 enum d3dk::mt::memory_segment_group_t budget_group;        //{ +0x0014    } | .BudgetGroup
                                                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SEGMENT_CAPS.$", 0x0, false, 0xd9092f3712e39b30 );                   
        SDK_FIXED_SIZE( segment_caps_t, 0x18 );                       
    };                                                                
};
#include "magic/segment_caps_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::segment_caps_t, 0x18 );
