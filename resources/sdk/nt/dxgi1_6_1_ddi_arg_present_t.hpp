#pragma once
#include <sdkgen/support_library.hpp>
#include "../dxgi/ddi_mode_rotation_t.hpp"
#include "../dxgi/ddi_present_flags_t.hpp"
#include "../dxgi/ddi_flip_interval_type_t.hpp"

namespace dxgi { struct ddi_arg_presentsurface_t; }
namespace tag  { struct rect_t;                   }

#include "magic/dxgi1_6_1_ddi_arg_present_t.start.hpp"
namespace nt
{
    // [struct DXGI1_6_1_DDI_ARG_PRESENT]
    // => WDK 10 (NV)
    //
    struct dxgi1_6_1_ddi_arg_present_t                                             
    {                                                                              
        // WDK 10                                                                  
        //                                                                         
        _m00 uint64_t                                     h_device;                  //{ +0x0000    } | .hDevice
        _m01 const struct dxgi::ddi_arg_presentsurface_t* ph_surfaces_to_present;    //{ +0x0008    } | .phSurfacesToPresent
        _m02 uint32_t                                     surfaces_to_present;       //{ +0x0010    } | .SurfacesToPresent
        _m03 uint64_t                                     h_dst_resource;            //{ +0x0018    } | .hDstResource
        _m04 uint32_t                                     dst_sub_resource_index;    //{ +0x0020    } | .DstSubResourceIndex
        _m05 void*                                        p_dxgi_context;            //{ +0x0028    } | .pDXGIContext
        _m06 struct dxgi::ddi_present_flags_t             flags;                     //{ +0x0030    } | .Flags
        _m07 enum dxgi::ddi_flip_interval_type_t          flip_interval;             //{ +0x0034    } | .FlipInterval
        _m08 enum dxgi::ddi_mode_rotation_t               rotation_hint;             //{ +0x0038    } | .RotationHint
        _m09 const struct tag::rect_t*                    p_dirty_rects;             //{ +0x0040    } | .pDirtyRects
        _m10 uint32_t                                     dirty_rects;               //{ +0x0048    } | .DirtyRects
        _m11 uint32_t                                     back_buffer_multiplicity;  //{ +0x004c    } | .BackBufferMultiplicity
                                                                                   
        SDK_NONVOL_PROPERTIES( "DXGI1_6_1_DDI_ARG_PRESENT.$", 0x0, false, 0x9b68364e0e1cf0ac );                         
        SDK_FIXED_SIZE( dxgi1_6_1_ddi_arg_present_t, 0x50 );                         
    };                                                                             
};
#include "magic/dxgi1_6_1_ddi_arg_present_t.end.hpp"
SDK_VERIFY( struct nt::dxgi1_6_1_ddi_arg_present_t, 0x50 );
