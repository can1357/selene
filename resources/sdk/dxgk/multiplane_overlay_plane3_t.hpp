#pragma once
#include <sdkgen/support_library.hpp>
#include "plane_specific_input_flags_t.hpp"
#include "plane_specific_output_flags_t.hpp"
#include "multiplane_overlay_attributes3_t.hpp"

#include "magic/multiplane_overlay_plane3_t.start.hpp"
namespace dxgk
{
    struct primarycontextdata_t;

    // [struct _DXGK_MULTIPLANE_OVERLAY_PLANE3]
    // => WDK 10 (NV)
    //
    struct multiplane_overlay_plane3_t                                              
    {                                                                               
        // WDK 10                                                                   
        //                                                                          
        _m00 uint32_t                                      layer_index;               //{ +0x0000    } | .LayerIndex
        _m01 uint64_t                                      present_id;                //{ +0x0008    } | .PresentId
        _m02 struct dxgk::plane_specific_input_flags_t     input_flags;               //{ +0x0010    } | .InputFlags
        _m03 struct dxgk::plane_specific_output_flags_t    output_flags;              //{ +0x0014    } | .OutputFlags
        _m04 uint32_t                                      max_immediate_flip_line;   //{ +0x0018    } | .MaxImmediateFlipLine
        _m05 uint32_t                                      context_count;             //{ +0x001c    } | .ContextCount
        _m06 struct dxgk::primarycontextdata_t**           pp_context_data;           //{ +0x0020    } | .ppContextData
        _m07 uint32_t                                      driver_private_data_size;  //{ +0x0028    } | .DriverPrivateDataSize
        _m08 void*                                         p_driver_private_data;     //{ +0x0030    } | .pDriverPrivateData
        _m09 struct dxgk::multiplane_overlay_attributes3_t plane_attributes;          //{ +0x0038    } | .PlaneAttributes
                                                                                    
        SDK_NONVOL_PROPERTIES( "_DXGK_MULTIPLANE_OVERLAY_PLANE3.$", 0x0, false, 0xd77a223f812dd340 );                         
        SDK_FIXED_SIZE( multiplane_overlay_plane3_t, 0x90 );                         
    };                                                                              
};
#include "magic/multiplane_overlay_plane3_t.end.hpp"
SDK_VERIFY( struct dxgk::multiplane_overlay_plane3_t, 0x90 );
