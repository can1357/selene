#pragma once
#include <sdkgen/support_library.hpp>
#include "../recommendvidpntopology_reason_t.hpp"

namespace d3dk::mdt { struct hvidpn_t;         }
namespace d3dk::mdt { struct hvidpntopology_t; }

#include "magic/recommendvidpntopology_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_RECOMMENDVIDPNTOPOLOGY]
    // => WDK 10 (NV)
    //
    struct recommendvidpntopology_t                                         
    {                                                                       
        // WDK 10                                                           
        //                                                                  
        _m00 struct d3dk::mdt::hvidpn_t*                h_vid_pn;             //{ +0x0000    } | .hVidPn
        _m01 uint32_t                                   vid_pn_source_id;     //{ +0x0008    } | .VidPnSourceId
        _m02 enum dxgk::recommendvidpntopology_reason_t request_reason;       //{ +0x000c    } | .RequestReason
        _m03 struct d3dk::mdt::hvidpntopology_t*        h_fallback_topology;  //{ +0x0010    } | .hFallbackTopology
                                                                            
        SDK_NONVOL_PROPERTIES( "_DXGKARG_RECOMMENDVIDPNTOPOLOGY.$", 0x0, false, 0x12bae5d38cb5fd7 );                    
        SDK_FIXED_SIZE( recommendvidpntopology_t, 0x18 );                    
    };                                                                      
};
#include "magic/recommendvidpntopology_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::recommendvidpntopology_t, 0x18 );
