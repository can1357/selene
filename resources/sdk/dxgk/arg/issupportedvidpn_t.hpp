#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt { struct hvidpn_t; }

#include "magic/issupportedvidpn_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_ISSUPPORTEDVIDPN]
    // => WDK 10 (NV)
    //
    struct issupportedvidpn_t                                
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 struct d3dk::mdt::hvidpn_t* h_desired_vid_pn;     //{ +0x0000    } | .hDesiredVidPn
        _m01 uint8_t                     is_vid_pn_supported;  //{ +0x0008    } | .IsVidPnSupported
                                                             
        SDK_NONVOL_PROPERTIES( "_DXGKARG_ISSUPPORTEDVIDPN.$", 0x0, false, 0x6f7a1f2849dfe1af );                    
        SDK_FIXED_SIZE( issupportedvidpn_t, 0x10 );                    
    };                                                       
};
#include "magic/issupportedvidpn_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::issupportedvidpn_t, 0x10 );
