#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/acquirekeyedmutex_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_ACQUIREKEYEDMUTEX]
    // => WDK 10 (NV)
    //
    struct acquirekeyedmutex_t      
    {                               
        // WDK 10                   
        //                          
        _m00 uint32_t h_keyed_mutex;  //{ +0x0000    } | .hKeyedMutex
        _m01 uint64_t key;            //{ +0x0008    } | .Key
        _m02 int64_t* p_timeout;      //{ +0x0010    } | .pTimeout
        _m03 uint64_t fence_value;    //{ +0x0018    } | .FenceValue
                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_ACQUIREKEYEDMUTEX.$", 0x0, false, 0xf98e26eaa26b587b );              
        SDK_FIXED_SIZE( acquirekeyedmutex_t, 0x20 );              
    };                              
};
#include "magic/acquirekeyedmutex_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::acquirekeyedmutex_t, 0x20 );
