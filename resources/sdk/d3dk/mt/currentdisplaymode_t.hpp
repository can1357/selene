#pragma once
#include <sdkgen/support_library.hpp>
#include "displaymode_t.hpp"

#include "magic/currentdisplaymode_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CURRENTDISPLAYMODE]
    // => WDK 10 (NV)
    //
    struct currentdisplaymode_t                              
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 uint32_t                       vid_pn_source_id;  //{ +0x0000    } | .VidPnSourceId
        _m01 struct d3dk::mt::displaymode_t display_mode;      //{ +0x0004    } | .DisplayMode
                                                             
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CURRENTDISPLAYMODE.$", 0x0, false, 0xebeba37185cb050d );                 
        SDK_FIXED_SIZE( currentdisplaymode_t, 0x30 );                 
    };                                                       
};
#include "magic/currentdisplaymode_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::currentdisplaymode_t, 0x30 );
