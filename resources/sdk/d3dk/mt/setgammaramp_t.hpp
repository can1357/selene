#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/gammaramp_type_t.hpp"

namespace d3d::ddi { struct gamma_ramp_dxgi_1_t;      }
namespace d3d::ddi { struct gamma_ramp_rgb256x3x16_t; }

#include "magic/setgammaramp_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SETGAMMARAMP]
    // => WDK 10 (NV)
    //
    struct setgammaramp_t                                                        
    {                                                                            
        // WDK 10                                                                
        //                                                                       
        _m00 uint32_t                                   h_device;                  //{ +0x0000    } | .hDevice
        _m01 uint32_t                                   vid_pn_source_id;          //{ +0x0004    } | .VidPnSourceId
        _m02 enum d3d::ddi::gammaramp_type_t            type;                      //{ +0x0008    } | .Type
        _m03 struct d3d::ddi::gamma_ramp_rgb256x3x16_t* p_gamma_ramp_rgb256x3x16;  //{ +0x0010    } | .pGammaRampRgb256x3x16
        _m04 struct d3d::ddi::gamma_ramp_dxgi_1_t*      p_gamma_ramp_dxgi1;        //{ +0x0010    } | .pGammaRampDXGI1
        _m05 uint32_t                                   size;                      //{ +0x0018    } | .Size
                                                                                 
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SETGAMMARAMP.$", 0x0, false, 0x3f5e52619c036e93 );                         
        SDK_FIXED_SIZE( setgammaramp_t, 0x20 );                                  
    };                                                                           
};
#include "magic/setgammaramp_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::setgammaramp_t, 0x20 );
