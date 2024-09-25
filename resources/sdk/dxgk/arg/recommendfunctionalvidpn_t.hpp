#pragma once
#include <sdkgen/support_library.hpp>
#include "../recommendfunctionalvidpn_reason_t.hpp"

namespace d3dk::mdt { struct hvidpn_t; }

#include "magic/recommendfunctionalvidpn_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_RECOMMENDFUNCTIONALVIDPN]
    // => WDK 10 (NV)
    //
    struct recommendfunctionalvidpn_t                                                           
    {                                                                                           
        // WDK 10                                                                               
        //                                                                                      
        _m00 uint32_t                                     number_of_vid_pn_targets;               //{ +0x0000    } | .NumberOfVidPnTargets
        _m01 const uint32_t*                              p_vid_pn_target_prioritization_vector;  //{ +0x0008    } | .pVidPnTargetPrioritizationVector
        _m02 struct d3dk::mdt::hvidpn_t*                  h_recommended_functional_vid_pn;        //{ +0x0010    } | .hRecommendedFunctionalVidPn
        _m03 enum dxgk::recommendfunctionalvidpn_reason_t request_reason;                         //{ +0x0018    } | .RequestReason
        _m04 void*                                        p_private_driver_data;                  //{ +0x0020    } | .pPrivateDriverData
        _m05 uint32_t                                     private_driver_data_size;               //{ +0x0028    } | .PrivateDriverDataSize
                                                                                                
        SDK_NONVOL_PROPERTIES( "_DXGKARG_RECOMMENDFUNCTIONALVIDPN.$", 0x0, false, 0xc54b52009281a32 );                                      
        SDK_FIXED_SIZE( recommendfunctionalvidpn_t, 0x30 );                                      
    };                                                                                          
};
#include "magic/recommendfunctionalvidpn_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::recommendfunctionalvidpn_t, 0x30 );
