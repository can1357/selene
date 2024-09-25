#pragma once
#include <sdkgen/support_library.hpp>
#include "ddi_present_flags_t.hpp"
#include "ddi_flip_interval_type_t.hpp"

#include "magic/ddi_arg_presentmultiplaneoverlay_t.start.hpp"
namespace dxgi
{
    struct ddi_present_multiplane_overlay_t;

    // [struct _DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY]
    // => WDK 10 (NV)
    //
    struct ddi_arg_presentmultiplaneoverlay_t                                   
    {                                                                           
        // WDK 10                                                               
        //                                                                      
        _m00 uint64_t                                       h_device;             //{ +0x0000    } | .hDevice
        _m01 void*                                          p_dxgi_context;       //{ +0x0008    } | .pDXGIContext
        _m02 uint32_t                                       vid_pn_source_id;     //{ +0x0010    } | .VidPnSourceId
        _m03 struct dxgi::ddi_present_flags_t               flags;                //{ +0x0014    } | .Flags
        _m04 enum dxgi::ddi_flip_interval_type_t            flip_interval;        //{ +0x0018    } | .FlipInterval
        _m05 uint32_t                                       present_plane_count;  //{ +0x001c    } | .PresentPlaneCount
        _m06 struct dxgi::ddi_present_multiplane_overlay_t* p_present_planes;     //{ +0x0020    } | .pPresentPlanes
                                                                                
        SDK_NONVOL_PROPERTIES( "_DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY.$", 0x0, false, 0xd69b96780def49ec );                    
        SDK_FIXED_SIZE( ddi_arg_presentmultiplaneoverlay_t, 0x30 );                    
    };                                                                          
};
#include "magic/ddi_arg_presentmultiplaneoverlay_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_presentmultiplaneoverlay_t, 0x30 );
