#pragma once
#include <sdkgen/support_library.hpp>
#include "ddi_multiplane_overlay_attributes_t.hpp"

#include "magic/ddi_present_multiplane_overlay_t.start.hpp"
namespace dxgi
{
    // [struct _DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY]
    // => WDK 10 (NV)
    //
    struct ddi_present_multiplane_overlay_t                                      
    {                                                                            
        // WDK 10                                                                
        //                                                                       
        _m00 uint32_t                                         layer_index;         //{ +0x0000    } | .LayerIndex
        _m01 int32_t                                          enabled;             //{ +0x0004    } | .Enabled
        _m02 uint64_t                                         h_resource;          //{ +0x0008    } | .hResource
        _m03 uint32_t                                         sub_resource_index;  //{ +0x0010    } | .SubResourceIndex
        _m04 struct dxgi::ddi_multiplane_overlay_attributes_t plane_attributes;    //{ +0x0018    } | .PlaneAttributes
                                                                                 
        SDK_NONVOL_PROPERTIES( "_DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY.$", 0x0, false, 0x578ee440762a3b9c );                   
        SDK_FIXED_SIZE( ddi_present_multiplane_overlay_t, 0x80 );                   
    };                                                                           
};
#include "magic/ddi_present_multiplane_overlay_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_present_multiplane_overlay_t, 0x80 );
