#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/destroycontext_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DESTROYCONTEXT]
    // => WDK 10 (NV)
    //
    struct destroycontext_t     
    {                           
        // WDK 10               
        //                      
        _m00 uint32_t h_context;  //{ +0x0000    } | .hContext
                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DESTROYCONTEXT.$", 0x0, false, 0xab2345d84910bec );          
        SDK_FIXED_SIZE( destroycontext_t, 0x4 );          
    };                          
};
#include "magic/destroycontext_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::destroycontext_t, 0x4 );
