#pragma once
#include <sdkgen/support_library.hpp>
#include "ddi_present_flags_t.hpp"
#include "ddi_flip_interval_type_t.hpp"

namespace tag { struct rect_t; }

#include "magic/ddi_arg_present1_t.start.hpp"
namespace dxgi
{
    struct ddi_arg_presentsurface_t;

    // [struct DXGI_DDI_ARG_PRESENT1]
    // => WDK 10 (NV)
    //
    struct ddi_arg_present1_t                                                      
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
        _m08 const struct tag::rect_t*                    p_dirty_rects;             //{ +0x0040    } | .pDirtyRects
        _m09 uint32_t                                     dirty_rects;               //{ +0x0048    } | .DirtyRects
        _m10 uint32_t                                     back_buffer_multiplicity;  //{ +0x004c    } | .BackBufferMultiplicity
                                                                                   
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_ARG_PRESENT1.$", 0x0, false, 0xc61418718691058d );                         
        SDK_FIXED_SIZE( ddi_arg_present1_t, 0x50 );                                
    };                                                                             
};
#include "magic/ddi_arg_present1_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_present1_t, 0x50 );
