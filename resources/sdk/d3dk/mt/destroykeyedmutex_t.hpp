#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/destroykeyedmutex_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DESTROYKEYEDMUTEX]
    // => WDK 10 (NV)
    //
    struct destroykeyedmutex_t      
    {                               
        // WDK 10                   
        //                          
        _m00 uint32_t h_keyed_mutex;  //{ +0x0000    } | .hKeyedMutex
                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DESTROYKEYEDMUTEX.$", 0x0, false, 0xfb853225a5dc7670 );              
        SDK_FIXED_SIZE( destroykeyedmutex_t, 0x4 );              
    };                              
};
#include "magic/destroykeyedmutex_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::destroykeyedmutex_t, 0x4 );
