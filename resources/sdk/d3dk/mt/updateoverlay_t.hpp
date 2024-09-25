#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/kerneloverlayinfo_t.hpp"

#include "magic/updateoverlay_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_UPDATEOVERLAY]
    // => WDK 10 (NV)
    //
    struct updateoverlay_t                                     
    {                                                          
        // WDK 10                                              
        //                                                     
        _m00 uint32_t                             h_device;      //{ +0x0000    } | .hDevice
        _m01 uint32_t                             h_overlay;     //{ +0x0004    } | .hOverlay
        _m02 struct d3d::ddi::kerneloverlayinfo_t overlay_info;  //{ +0x0008    } | .OverlayInfo
                                                               
        SDK_NONVOL_PROPERTIES( "_D3DKMT_UPDATEOVERLAY.$", 0x0, false, 0xcf0be2163ea308cd );             
        SDK_FIXED_SIZE( updateoverlay_t, 0x40 );               
    };                                                         
};
#include "magic/updateoverlay_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::updateoverlay_t, 0x40 );
