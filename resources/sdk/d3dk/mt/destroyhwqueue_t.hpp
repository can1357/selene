#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/destroyhwqueue_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DESTROYHWQUEUE]
    // => WDK 10 (NV)
    //
    struct destroyhwqueue_t      
    {                            
        // WDK 10                
        //                       
        _m00 uint32_t h_hw_queue;  //{ +0x0000    } | .hHwQueue
                                 
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DESTROYHWQUEUE.$", 0x0, false, 0xf82ada47d1e2e231 );           
        SDK_FIXED_SIZE( destroyhwqueue_t, 0x4 );           
    };                           
};
#include "magic/destroyhwqueue_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::destroyhwqueue_t, 0x4 );
