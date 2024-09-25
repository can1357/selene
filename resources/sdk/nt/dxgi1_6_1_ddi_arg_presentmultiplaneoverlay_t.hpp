#pragma once
#include <sdkgen/support_library.hpp>
#include "../dxgi/ddi_mode_rotation_t.hpp"
#include "../dxgi/ddi_present_flags_t.hpp"
#include "../dxgi/ddi_flip_interval_type_t.hpp"

namespace dxgi { struct ddi_present_multiplane_overlay1_t; }

#include "magic/dxgi1_6_1_ddi_arg_presentmultiplaneoverlay_t.start.hpp"
namespace nt
{
    // [struct DXGI1_6_1_DDI_ARG_PRESENTMULTIPLANEOVERLAY]
    // => WDK 10 (NV)
    //
    struct dxgi1_6_1_ddi_arg_presentmultiplaneoverlay_t                          
    {                                                                            
        // WDK 10                                                                
        //                                                                       
        _m00 uint64_t                                        h_device;             //{ +0x0000    } | .hDevice
        _m01 void*                                           p_dxgi_context;       //{ +0x0008    } | .pDXGIContext
        _m02 uint32_t                                        vid_pn_source_id;     //{ +0x0010    } | .VidPnSourceId
        _m03 struct dxgi::ddi_present_flags_t                flags;                //{ +0x0014    } | .Flags
        _m04 enum dxgi::ddi_flip_interval_type_t             flip_interval;        //{ +0x0018    } | .FlipInterval
        _m05 uint32_t                                        present_plane_count;  //{ +0x001c    } | .PresentPlaneCount
        _m06 struct dxgi::ddi_present_multiplane_overlay1_t* p_present_planes;     //{ +0x0020    } | .pPresentPlanes
        _m07 enum dxgi::ddi_mode_rotation_t*                 p_rotation_hints;     //{ +0x0028    } | .pRotationHints
                                                                                 
        SDK_NONVOL_PROPERTIES( "DXGI1_6_1_DDI_ARG_PRESENTMULTIPLANEOVERLAY.$", 0x0, false, 0xf3e04c07cc46a680 );                    
        SDK_FIXED_SIZE( dxgi1_6_1_ddi_arg_presentmultiplaneoverlay_t, 0x30 );                    
    };                                                                           
};
#include "magic/dxgi1_6_1_ddi_arg_presentmultiplaneoverlay_t.end.hpp"
SDK_VERIFY( struct nt::dxgi1_6_1_ddi_arg_presentmultiplaneoverlay_t, 0x30 );
