#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/releasekeyedmutex2_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_RELEASEKEYEDMUTEX2]
    // => WDK 10 (NV)
    //
    struct releasekeyedmutex2_t                 
    {                                           
        // WDK 10                               
        //                                      
        _m00 uint32_t h_keyed_mutex;              //{ +0x0000    } | .hKeyedMutex
        _m01 uint64_t key;                        //{ +0x0008    } | .Key
        _m02 uint64_t fence_value;                //{ +0x0010    } | .FenceValue
        _m03 void*    p_private_runtime_data;     //{ +0x0018    } | .pPrivateRuntimeData
        _m04 uint32_t private_runtime_data_size;  //{ +0x0020    } | .PrivateRuntimeDataSize
                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_RELEASEKEYEDMUTEX2.$", 0x0, false, 0x4d082fd7702dfa3b );                          
        SDK_FIXED_SIZE( releasekeyedmutex2_t, 0x28 );                          
    };                                          
};
#include "magic/releasekeyedmutex2_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::releasekeyedmutex2_t, 0x28 );
