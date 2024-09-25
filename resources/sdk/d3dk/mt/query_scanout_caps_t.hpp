#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_scanout_caps_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_QUERY_SCANOUT_CAPS]
    // => WDK 10 (NV)
    //
    struct query_scanout_caps_t        
    {                                  
        // WDK 10                      
        //                             
        _m00 uint32_t vid_pn_source_id;  //{ +0x0000    } | .VidPnSourceId
        _m01 uint32_t caps;              //{ +0x0004    } | .Caps
                                       
        SDK_NONVOL_PROPERTIES( "_D3DKMT_QUERY_SCANOUT_CAPS.$", 0x0, false, 0xecf535d0c78a85e3 );                 
        SDK_FIXED_SIZE( query_scanout_caps_t, 0x8 );                 
    };                                 
};
#include "magic/query_scanout_caps_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::query_scanout_caps_t, 0x8 );
