#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/outputdupl_keyedmutex_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OUTPUTDUPL_KEYEDMUTEX]
    // => WDK 10 (NV)
    //
    struct outputdupl_keyedmutex_t     
    {                                  
        // WDK 10                      
        //                             
        _m00 void* h_shared_surface_nt;  //{ +0x0000    } | .hSharedSurfaceNt
                                       
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OUTPUTDUPL_KEYEDMUTEX.$", 0x0, false, 0x4f6e87ae638be66c );                    
        SDK_FIXED_SIZE( outputdupl_keyedmutex_t, 0x8 );                    
    };                                 
};
#include "magic/outputdupl_keyedmutex_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::outputdupl_keyedmutex_t, 0x8 );
