#pragma once
#include <sdkgen/support_library.hpp>
#include "commitvidpn_flags_t.hpp"
#include "../../d3dk/mdt/monitor_connectivity_checks_t.hpp"

namespace d3dk::mdt { struct hvidpn_t; }

#include "magic/commitvidpn_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_COMMITVIDPN]
    // => WDK 10 (NV)
    //
    struct commitvidpn_t                                                               
    {                                                                                  
        // WDK 10                                                                      
        //                                                                             
        _m00 struct d3dk::mdt::hvidpn_t*                   h_functional_vid_pn;          //{ +0x0000    } | .hFunctionalVidPn
        _m01 uint32_t                                      affected_vid_pn_source_id;    //{ +0x0008    } | .AffectedVidPnSourceId
        _m02 enum d3dk::mdt::monitor_connectivity_checks_t monitor_connectivity_checks;  //{ +0x000c    } | .MonitorConnectivityChecks
        _m03 void*                                         h_primary_allocation;         //{ +0x0010    } | .hPrimaryAllocation
        _m04 struct dxgk::arg::commitvidpn_flags_t         flags;                        //{ +0x0018    } | .Flags
                                                                                       
        SDK_NONVOL_PROPERTIES( "_DXGKARG_COMMITVIDPN.$", 0x0, false, 0x76f642b46df41932 );                            
        SDK_FIXED_SIZE( commitvidpn_t, 0x20 );                                         
    };                                                                                 
};
#include "magic/commitvidpn_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::commitvidpn_t, 0x20 );
