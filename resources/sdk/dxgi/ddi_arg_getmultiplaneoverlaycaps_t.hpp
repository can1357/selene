#pragma once
#include <sdkgen/support_library.hpp>
#include "ddi_multiplane_overlay_caps_t.hpp"

#include "magic/ddi_arg_getmultiplaneoverlaycaps_t.start.hpp"
namespace dxgi
{
    // [struct _DXGI_DDI_ARG_GETMULTIPLANEOVERLAYCAPS]
    // => WDK 10 (NV)
    //
    struct ddi_arg_getmultiplaneoverlaycaps_t                                   
    {                                                                           
        // WDK 10                                                               
        //                                                                      
        _m00 uint64_t                                   h_device;                 //{ +0x0000    } | .hDevice
        _m01 uint32_t                                   vid_pn_source_id;         //{ +0x0008    } | .VidPnSourceId
        _m02 struct dxgi::ddi_multiplane_overlay_caps_t multiplane_overlay_caps;  //{ +0x000c    } | .MultiplaneOverlayCaps
                                                                                
        SDK_NONVOL_PROPERTIES( "_DXGI_DDI_ARG_GETMULTIPLANEOVERLAYCAPS.$", 0x0, false, 0x1670b0fe47ae5960 );                        
        SDK_FIXED_SIZE( ddi_arg_getmultiplaneoverlaycaps_t, 0x18 );                        
    };                                                                          
};
#include "magic/ddi_arg_getmultiplaneoverlaycaps_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_getmultiplaneoverlaycaps_t, 0x18 );
