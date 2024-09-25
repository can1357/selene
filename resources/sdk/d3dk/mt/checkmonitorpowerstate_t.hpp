#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/checkmonitorpowerstate_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CHECKMONITORPOWERSTATE]
    // => WDK 10 (NV)
    //
    struct checkmonitorpowerstate_t    
    {                                  
        // WDK 10                      
        //                             
        _m00 uint32_t h_adapter;         //{ +0x0000    } | .hAdapter
        _m01 uint32_t vid_pn_source_id;  //{ +0x0004    } | .VidPnSourceId
                                       
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CHECKMONITORPOWERSTATE.$", 0x0, false, 0x5f3a917589fc9b51 );                 
        SDK_FIXED_SIZE( checkmonitorpowerstate_t, 0x8 );                 
    };                                 
};
#include "magic/checkmonitorpowerstate_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::checkmonitorpowerstate_t, 0x8 );
