#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/openkeyedmutexfromnthandle_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OPENKEYEDMUTEXFROMNTHANDLE]
    // => WDK 10 (NV)
    //
    struct openkeyedmutexfromnthandle_t         
    {                                           
        // WDK 10                               
        //                                      
        _m00 void*    h_nt_handle;                //{ +0x0000    } | .hNtHandle
        _m01 uint32_t h_keyed_mutex;              //{ +0x0008    } | .hKeyedMutex
        _m02 void*    p_private_runtime_data;     //{ +0x0010    } | .pPrivateRuntimeData
        _m03 uint32_t private_runtime_data_size;  //{ +0x0018    } | .PrivateRuntimeDataSize
                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OPENKEYEDMUTEXFROMNTHANDLE.$", 0x0, false, 0xbddcbac39b07c9e4 );                          
        SDK_FIXED_SIZE( openkeyedmutexfromnthandle_t, 0x20 );                          
    };                                          
};
#include "magic/openkeyedmutexfromnthandle_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::openkeyedmutexfromnthandle_t, 0x20 );
