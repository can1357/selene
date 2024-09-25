#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/acquirekeyedmutex2_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_ACQUIREKEYEDMUTEX2]
    // => WDK 10 (NV)
    //
    struct acquirekeyedmutex2_t                 
    {                                           
        // WDK 10                               
        //                                      
        _m00 uint32_t h_keyed_mutex;              //{ +0x0000    } | .hKeyedMutex
        _m01 uint64_t key;                        //{ +0x0008    } | .Key
        _m02 int64_t* p_timeout;                  //{ +0x0010    } | .pTimeout
        _m03 uint64_t fence_value;                //{ +0x0018    } | .FenceValue
        _m04 void*    p_private_runtime_data;     //{ +0x0020    } | .pPrivateRuntimeData
        _m05 uint32_t private_runtime_data_size;  //{ +0x0028    } | .PrivateRuntimeDataSize
                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_ACQUIREKEYEDMUTEX2.$", 0x0, false, 0xdf93674c4375028c );                          
        SDK_FIXED_SIZE( acquirekeyedmutex2_t, 0x30 );                          
    };                                          
};
#include "magic/acquirekeyedmutex2_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::acquirekeyedmutex2_t, 0x30 );
