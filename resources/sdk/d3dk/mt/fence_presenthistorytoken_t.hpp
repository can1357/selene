#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fence_presenthistorytoken_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_FENCE_PRESENTHISTORYTOKEN]
    // => WDK 10 (NV)
    //
    struct fence_presenthistorytoken_t
    {                                 
        // WDK 10         
        //                
        _m00 uint64_t key;              //{ +0x0000    } | .Key
                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_FENCE_PRESENTHISTORYTOKEN.$", 0x0, false, 0xd3039ab4ccae012b );    
        SDK_FIXED_SIZE( fence_presenthistorytoken_t, 0x8 );    
    };                                
};
#include "magic/fence_presenthistorytoken_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::fence_presenthistorytoken_t, 0x8 );
