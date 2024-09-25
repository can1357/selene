#pragma once
#include <sdkgen/support_library.hpp>
#include "plane_specific_input_flags_t.hpp"
#include "../../d3d/ddi/flipinterval_type_t.hpp"

#include "magic/multiplane_overlay3_t.start.hpp"
namespace d3dk::mt
{
    struct multiplane_overlay_attributes3_t;

    // [struct _D3DKMT_MULTIPLANE_OVERLAY3]
    // => WDK 10 (NV)
    //
    struct multiplane_overlay3_t                                                    
    {                                                                               
        using p_plane_attributes_t = const struct d3dk::mt::multiplane_overlay_attributes3_t*;                         
                                                                                    
        // WDK 10                                                                   
        //                                                                          
        _m00 uint32_t                                      layer_index;               //{ +0x0000    } | .LayerIndex
        _m01 struct d3dk::mt::plane_specific_input_flags_t input_flags;               //{ +0x0004    } | .InputFlags
        _m02 enum d3d::ddi::flipinterval_type_t            flip_interval;             //{ +0x0008    } | .FlipInterval
        _m03 uint32_t                                      max_immediate_flip_line;   //{ +0x000c    } | .MaxImmediateFlipLine
        _m04 uint32_t                                      allocation_count;          //{ +0x0010    } | .AllocationCount
        _m05 uint32_t*                                     p_allocation_list;         //{ +0x0018    } | .pAllocationList
        _m06 uint32_t                                      driver_private_data_size;  //{ +0x0020    } | .DriverPrivateDataSize
        _m07 void*                                         p_driver_private_data;     //{ +0x0028    } | .pDriverPrivateData
        _m08 p_plane_attributes_t                          p_plane_attributes;        //{ +0x0030    } | .pPlaneAttributes
                                                                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_MULTIPLANE_OVERLAY3.$", 0x0, false, 0xca7bcd3e17d8e923 );                         
        SDK_FIXED_SIZE( multiplane_overlay3_t, 0x38 );                              
    };                                                                              
};
#include "magic/multiplane_overlay3_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::multiplane_overlay3_t, 0x38 );
