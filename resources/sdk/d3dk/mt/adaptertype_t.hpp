#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/adaptertype_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_ADAPTERTYPE]
    // => WDK 10 (NV)
    //
    struct adaptertype_t                              
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 uint1_t  render_supported;                 //{ +0x0000@0  } | .RenderSupported
        _m01 uint1_t  display_supported;                //{ +0x0000@1  } | .DisplaySupported
        _m02 uint1_t  software_device;                  //{ +0x0000@2  } | .SoftwareDevice
        _m03 uint1_t  post_device;                      //{ +0x0000@3  } | .PostDevice
        _m04 uint1_t  hybrid_discrete;                  //{ +0x0000@4  } | .HybridDiscrete
        _m05 uint1_t  hybrid_integrated;                //{ +0x0000@5  } | .HybridIntegrated
        _m06 uint1_t  indirect_display_device;          //{ +0x0000@6  } | .IndirectDisplayDevice
        _m07 uint1_t  paravirtualized;                  //{ +0x0000@7  } | .Paravirtualized
        _m08 uint1_t  acg_supported;                    //{ +0x0000@8  } | .ACGSupported
        _m09 uint1_t  support_set_timings_from_vid_pn;  //{ +0x0000@9  } | .SupportSetTimingsFromVidPn
        _m10 uint1_t  detachable;                       //{ +0x0000@10 } | .Detachable
        _m11 uint1_t  compute_only;                     //{ +0x0000@11 } | .ComputeOnly
        _m12 uint1_t  prototype;                        //{ +0x0000@12 } | .Prototype
        _m13 uint32_t value;                            //{ +0x0000    } | .Value
                                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_ADAPTERTYPE.$", 0x0, false, 0x667522c834d92eb7 );                                
        SDK_FIXED_SIZE( adaptertype_t, 0x4 );                                
    };                                                
};
#include "magic/adaptertype_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::adaptertype_t, 0x4 );
