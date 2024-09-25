#pragma once
#include <sdkgen/support_library.hpp>
#include "diag_display_mode_set_t.hpp"
#include "diag_display_lid_state_t.hpp"
#include "diag_display_link_state_t.hpp"
#include "diag_display_connectivity_t.hpp"
#include "diag_basic_display_topology_t.hpp"

#include "magic/displaystate_nonintrusive_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DISPLAYSTATE_NONINTRUSIVE]
    // => WDK 10 (NV)
    //
    struct displaystate_nonintrusive_t                                     
    {                                                                      
        // WDK 10                                                          
        //                                                                 
        _m00 uint32_t                                 vid_pn_target_id;      //{ +0x0000    } | .VidPnTargetId
        _m01 enum dxgk::diag_display_connectivity_t   display_connectivity;  //{ +0x0004    } | .DisplayConnectivity
        _m02 enum dxgk::diag_display_lid_state_t      display_lid_state;     //{ +0x0008    } | .DisplayLidState
        _m03 enum dxgk::diag_basic_display_topology_t display_topology;      //{ +0x000c    } | .DisplayTopology
        _m04 enum dxgk::diag_display_link_state_t     display_link_state;    //{ +0x0010    } | .DisplayLinkState
        _m05 enum dxgk::diag_display_mode_set_t       display_mode_set;      //{ +0x0014    } | .DisplayModeSet
        _m06 uint32_t                                 return_sub_status;     //{ +0x0018    } | .ReturnSubStatus
                                                                           
        SDK_NONVOL_PROPERTIES( "_DXGK_DISPLAYSTATE_NONINTRUSIVE.$", 0x0, false, 0x4345eb84cd9b8473 );                     
        SDK_FIXED_SIZE( displaystate_nonintrusive_t, 0x1c );                     
    };                                                                     
};
#include "magic/displaystate_nonintrusive_t.end.hpp"
SDK_VERIFY( struct dxgk::displaystate_nonintrusive_t, 0x1c );
