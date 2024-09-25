#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/openkeyedmutex2_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OPENKEYEDMUTEX2]
    // => WDK 10 (NV)
    //
    struct openkeyedmutex2_t                    
    {                                           
        // WDK 10                               
        //                                      
        _m00 uint32_t h_shared_handle;            //{ +0x0000    } | .hSharedHandle
        _m01 uint32_t h_keyed_mutex;              //{ +0x0004    } | .hKeyedMutex
        _m02 void*    p_private_runtime_data;     //{ +0x0008    } | .pPrivateRuntimeData
        _m03 uint32_t private_runtime_data_size;  //{ +0x0010    } | .PrivateRuntimeDataSize
                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OPENKEYEDMUTEX2.$", 0x0, false, 0xea5c80c2e256ce2c );                          
        SDK_FIXED_SIZE( openkeyedmutex2_t, 0x18 );                          
    };                                          
};
#include "magic/openkeyedmutex2_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::openkeyedmutex2_t, 0x18 );
