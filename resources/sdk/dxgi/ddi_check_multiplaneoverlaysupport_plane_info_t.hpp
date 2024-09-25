#pragma once
#include <sdkgen/support_library.hpp>
#include "ddi_multiplane_overlay_attributes_t.hpp"

#include "magic/ddi_check_multiplaneoverlaysupport_plane_info_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_DDI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO]
    // => WDK 10 (NV)
    //
    struct ddi_check_multiplaneoverlaysupport_plane_info_t                       
    {                                                                            
        // WDK 10                                                                
        //                                                                       
        _m00 uint64_t                                         h_resource;          //{ +0x0000    } | .hResource
        _m01 uint32_t                                         sub_resource_index;  //{ +0x0008    } | .SubResourceIndex
        _m02 struct dxgi::ddi_multiplane_overlay_attributes_t plane_attributes;    //{ +0x0010    } | .PlaneAttributes
                                                                                 
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO.$", 0x0, false, 0x513306c933ec5434 );                   
        SDK_FIXED_SIZE( ddi_check_multiplaneoverlaysupport_plane_info_t, 0x78 );                   
    };                                                                           
};
#include "magic/ddi_check_multiplaneoverlaysupport_plane_info_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_check_multiplaneoverlaysupport_plane_info_t, 0x78 );
