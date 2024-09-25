#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/kerneloverlayinfo_t.hpp"

#include "magic/createoverlay_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CREATEOVERLAY]
    // => WDK 10 (NV)
    //
    struct createoverlay_t                                         
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 uint32_t                             vid_pn_source_id;  //{ +0x0000    } | .VidPnSourceId
        _m01 uint32_t                             h_device;          //{ +0x0004    } | .hDevice
        _m02 struct d3d::ddi::kerneloverlayinfo_t overlay_info;      //{ +0x0008    } | .OverlayInfo
        _m03 uint32_t                             h_overlay;         //{ +0x0040    } | .hOverlay
                                                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CREATEOVERLAY.$", 0x0, false, 0x33dd323ce5cfe13b );                 
        SDK_FIXED_SIZE( createoverlay_t, 0x48 );                   
    };                                                             
};
#include "magic/createoverlay_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::createoverlay_t, 0x48 );
