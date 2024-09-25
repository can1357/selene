#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/openkeyedmutex_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OPENKEYEDMUTEX]
    // => WDK 10 (NV)
    //
    struct openkeyedmutex_t           
    {                                 
        // WDK 10                     
        //                            
        _m00 uint32_t h_shared_handle;  //{ +0x0000    } | .hSharedHandle
        _m01 uint32_t h_keyed_mutex;    //{ +0x0004    } | .hKeyedMutex
                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OPENKEYEDMUTEX.$", 0x0, false, 0xb885679a46ef2e71 );                
        SDK_FIXED_SIZE( openkeyedmutex_t, 0x8 );                
    };                                
};
#include "magic/openkeyedmutex_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::openkeyedmutex_t, 0x8 );
