#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/surfacecomplete_presenthistorytoken_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN]
    // => WDK 10 (NV)
    //
    struct surfacecomplete_presenthistorytoken_t
    {                                           
        // WDK 10                       
        //                              
        _m00 uint64_t h_logical_surface;          //{ +0x0000    } | .hLogicalSurface
                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN.$", 0x0, false, 0x82d4480806182d59 );                  
        SDK_FIXED_SIZE( surfacecomplete_presenthistorytoken_t, 0x8 );                  
    };                                          
};
#include "magic/surfacecomplete_presenthistorytoken_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::surfacecomplete_presenthistorytoken_t, 0x8 );
