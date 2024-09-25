#pragma once
#include <sdkgen/support_library.hpp>
#include "../../tag/rect_t.hpp"

#include "magic/dirtyregions_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DIRTYREGIONS]
    // => WDK 10 (NV)
    //
    struct dirtyregions_t                                 
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 uint32_t                           num_rects;  //{ +0x0000    } | .NumRects
        _m01 sdk::array<struct tag::rect_t, 16> rects;      //{ +0x0004    } | .Rects
                                                          
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DIRTYREGIONS.$", 0x0, false, 0xd6f3627f4256e190 );          
        SDK_FIXED_SIZE( dirtyregions_t, 0x104 );          
    };                                                    
};
#include "magic/dirtyregions_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::dirtyregions_t, 0x104 );
