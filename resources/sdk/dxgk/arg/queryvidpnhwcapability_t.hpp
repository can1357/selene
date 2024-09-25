#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3dk/mdt/vidpn_hw_capability_t.hpp"

namespace d3dk::mdt { struct hvidpn_t; }

#include "magic/queryvidpnhwcapability_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_QUERYVIDPNHWCAPABILITY]
    // => WDK 10 (NV)
    //
    struct queryvidpnhwcapability_t                                      
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 struct d3dk::mdt::hvidpn_t*             h_functional_vid_pn;  //{ +0x0000    } | .hFunctionalVidPn
        _m01 uint32_t                                source_id;            //{ +0x0008    } | .SourceId
        _m02 uint32_t                                target_id;            //{ +0x000c    } | .TargetId
        _m03 struct d3dk::mdt::vidpn_hw_capability_t vid_pn_hw_caps;       //{ +0x0010    } | .VidPnHWCaps
                                                                         
        SDK_NONVOL_PROPERTIES( "_DXGKARG_QUERYVIDPNHWCAPABILITY.$", 0x0, false, 0x16aca8ebff44a57c );                    
        SDK_FIXED_SIZE( queryvidpnhwcapability_t, 0x18 );                    
    };                                                                   
};
#include "magic/queryvidpnhwcapability_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::queryvidpnhwcapability_t, 0x18 );
