#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/createkeyedmutex_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CREATEKEYEDMUTEX]
    // => WDK 10 (NV)
    //
    struct createkeyedmutex_t         
    {                                 
        // WDK 10                     
        //                            
        _m00 uint64_t initial_value;    //{ +0x0000    } | .InitialValue
        _m01 uint32_t h_shared_handle;  //{ +0x0008    } | .hSharedHandle
        _m02 uint32_t h_keyed_mutex;    //{ +0x000c    } | .hKeyedMutex
                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CREATEKEYEDMUTEX.$", 0x0, false, 0x2aa4171729450431 );                
        SDK_FIXED_SIZE( createkeyedmutex_t, 0x10 );                
    };                                
};
#include "magic/createkeyedmutex_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::createkeyedmutex_t, 0x10 );
