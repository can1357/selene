#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/releasekeyedmutex_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_RELEASEKEYEDMUTEX]
    // => WDK 10 (NV)
    //
    struct releasekeyedmutex_t      
    {                               
        // WDK 10                   
        //                          
        _m00 uint32_t h_keyed_mutex;  //{ +0x0000    } | .hKeyedMutex
        _m01 uint64_t key;            //{ +0x0008    } | .Key
        _m02 uint64_t fence_value;    //{ +0x0010    } | .FenceValue
                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_RELEASEKEYEDMUTEX.$", 0x0, false, 0x13c5025a8469e42b );              
        SDK_FIXED_SIZE( releasekeyedmutex_t, 0x18 );              
    };                              
};
#include "magic/releasekeyedmutex_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::releasekeyedmutex_t, 0x18 );
