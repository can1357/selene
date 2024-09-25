#pragma once
#include <sdkgen/support_library.hpp>
#include "displaymode_t.hpp"

#include "magic/displaymodelist_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DISPLAYMODELIST]
    // => WDK 10 (NV)
    //
    struct displaymodelist_t                                             
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 uint32_t                                   vid_pn_source_id;  //{ +0x0000    } | .VidPnSourceId
        _m01 uint32_t                                   mode_count;        //{ +0x0004    } | .ModeCount
        _m02 sdk::array<struct d3dk::mt::displaymode_t> p_mode_list;       //{ +0x0008    } | .pModeList
                                                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DISPLAYMODELIST.$", 0x0, false, 0xdcc789c0bc68846b );                 
        SDK_FIXED_SIZE( displaymodelist_t, 0x8 );                        
    };                                                                   
};
#include "magic/displaymodelist_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::displaymodelist_t, 0x8 );
