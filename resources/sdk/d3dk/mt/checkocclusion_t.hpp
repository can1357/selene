#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hwnd_t; }

#include "magic/checkocclusion_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CHECKOCCLUSION]
    // => WDK 10 (NV)
    //
    struct checkocclusion_t               
    {                                     
        // WDK 10                         
        //                                
        _m00 struct win::hwnd_t* h_window;  //{ +0x0000    } | .hWindow
                                          
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CHECKOCCLUSION.$", 0x0, false, 0x2a500c37594bc102 );         
        SDK_FIXED_SIZE( checkocclusion_t, 0x8 );         
    };                                    
};
#include "magic/checkocclusion_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::checkocclusion_t, 0x8 );
