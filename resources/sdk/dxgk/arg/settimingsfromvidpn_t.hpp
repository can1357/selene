#pragma once
#include <sdkgen/support_library.hpp>
#include "../set_timing_flags_t.hpp"

namespace d3dk::mdt { struct hvidpn_t;               }
namespace dxgk      { struct set_timing_path_info_t; }
namespace dxgk      { struct set_timing_results_t;   }

#include "magic/settimingsfromvidpn_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETTIMINGSFROMVIDPN]
    // => WDK 10 (NV)
    //
    struct settimingsfromvidpn_t                                         
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 struct d3dk::mdt::hvidpn_t*          h_functional_vid_pn;     //{ +0x0000    } | .hFunctionalVidPn
        _m01 struct dxgk::set_timing_flags_t      set_flags;               //{ +0x0008    } | .SetFlags
        _m02 struct dxgk::set_timing_results_t*   p_results_flags;         //{ +0x0010    } | .pResultsFlags
        _m03 uint32_t                             path_count;              //{ +0x0018    } | .PathCount
        _m04 struct dxgk::set_timing_path_info_t* p_set_timing_path_info;  //{ +0x0020    } | .pSetTimingPathInfo
                                                                         
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETTIMINGSFROMVIDPN.$", 0x0, false, 0xc76ffe05b0d7c215 );                       
        SDK_FIXED_SIZE( settimingsfromvidpn_t, 0x28 );                       
    };                                                                   
};
#include "magic/settimingsfromvidpn_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::settimingsfromvidpn_t, 0x28 );
