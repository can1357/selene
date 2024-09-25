#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/destroyhwcontext_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DESTROYHWCONTEXT]
    // => WDK 10 (NV)
    //
    struct destroyhwcontext_t      
    {                              
        // WDK 10                  
        //                         
        _m00 uint32_t h_hw_context;  //{ +0x0000    } | .hHwContext
                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DESTROYHWCONTEXT.$", 0x0, false, 0x8a8ca457d765d7e2 );             
        SDK_FIXED_SIZE( destroyhwcontext_t, 0x4 );             
    };                             
};
#include "magic/destroyhwcontext_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::destroyhwcontext_t, 0x4 );
