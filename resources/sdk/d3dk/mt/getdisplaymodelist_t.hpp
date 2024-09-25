#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getdisplaymodelist_t.start.hpp"
namespace d3dk::mt
{
    struct displaymode_t;

    // [struct _D3DKMT_GETDISPLAYMODELIST]
    // => WDK 10 (NV)
    //
    struct getdisplaymodelist_t                               
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 uint32_t                        h_adapter;         //{ +0x0000    } | .hAdapter
        _m01 uint32_t                        vid_pn_source_id;  //{ +0x0004    } | .VidPnSourceId
        _m02 struct d3dk::mt::displaymode_t* p_mode_list;       //{ +0x0008    } | .pModeList
        _m03 uint32_t                        mode_count;        //{ +0x0010    } | .ModeCount
                                                              
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GETDISPLAYMODELIST.$", 0x0, false, 0xb6da6e831da4bd71 );                 
        SDK_FIXED_SIZE( getdisplaymodelist_t, 0x18 );                 
    };                                                        
};
#include "magic/getdisplaymodelist_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::getdisplaymodelist_t, 0x18 );
